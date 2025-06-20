import os

from openai import OpenAI

class LLMEvaluation:
    def __init__(self):
        """
        Constructor that just initializes the model name.
        """
        self.deepseek_client = OpenAI(
            api_key=os.getenv("TOGETHER_API_KEY"),
            base_url="https://api.together.xyz/v1",
        )
        self.llama_client = OpenAI(
            api_key=os.getenv("TOGETHER_API_KEY"),
            base_url="https://api.together.xyz/v1",
        )
        self.gemini_client = OpenAI(
            api_key=os.getenv("GOOGLE_API_KEY"),
            base_url="https://generativelanguage.googleapis.com/v1beta/openai",
        )
        self.clients = {
            "deepseek": self.deepseek_client,
            "llama": self.llama_client,
            "gemini": self.gemini_client
        }
        self.models = {
            "deepseek": "deepseek-ai/DeepSeek-R1",
            "llama": "meta-llama/Llama-3.3-70B-Instruct-Turbo-Free",
            "gemini": "gemini-2.5-flash"
        }

    
    def __send_prompt(self, model: str, code_range: list[str], instruction_range: list[str], list_of_labels: list[str]) -> str | None:
        """

        """
        c_code = "\n".join(code_range)
        assembly_code = "\n".join(instruction_range)

        prompt = f"""
I have a snippet of C code, the corresponding assembly code, and a list of labels that describe what each line might represent. Please analyze the sixth line of the C code and assign it the most appropriate label from the list. Justify your choice briefly.

C Code:
\"\"\"
{c_code}
\"\"\"

Assembly Code:
\"\"\"
{assembly_code}
\"\"\"

Labels:
{list_of_labels}

Task:
Assign the most appropriate label to line 6 of the C code and explain your reasoning based on the C and assembly correspondence.
"""
        # TODO: perhaps give a JSON syntax to use to allow for easier parsing.

        client = self.clients[model]
        response = client.chat.completions.create(
            model=self.models[model],
            messages=[
            {"role": "system", "content": "You are a helpful assistant for code evaluation."},
            {"role": "user", "content": prompt}
            ],
            max_tokens=1000,
            temperature=0
        )
        return response.choices[0].message.content

    def send_prompt(self, code_range: list[str], instruction_range: list[str], list_of_labels: list[str]):
        """
        Send a prompt with code and instructions and a set of labels. The LLM needs to say which label it assigns to the code.
        The code and instruction ranges correspond to the parsing logic of the target tool.
        
        Constraints:
        - code_range and instruction_range must be of size 11, with the 6th element being the line to evaluate.
        - list_of_labels must be greater than 2.
        """
        if len(code_range) != 11 or len(instruction_range) != 11:
            raise ValueError("code_range and instruction_range must be of size 11.")
        if len(list_of_labels) <= 2:
            raise ValueError("list_of_labels must be greater than 2.")
        
        # TODO: as of now we are just printing the response. We need to figure out how to compare them.
        for model in self.models.keys():
            try:
                response = self.__send_prompt(model, code_range, instruction_range, list_of_labels)
                print(model, response)
            except Exception as e:
                print(f"Error with model {model}: {e}")

# Example usage:
# llm = LLMEvaluation()
# llm.send_prompt(["a"]*11, ["a"]*11, ["label1", "label2", "label3"])