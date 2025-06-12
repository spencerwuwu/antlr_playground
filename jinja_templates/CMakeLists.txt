cmake_minimum_required(VERSION 3.25)
project(ANTLR4-{{target}})

set(G_TARGET {{target}})
set(LEXER    {{target_lexer}})
set(PARSER   {{target_parser}})
set(BASE     {{target_base}})

set(ANTLR_DIR
    ${PROJECT_SOURCE_DIR}/../../deps/antlr4/runtime/Cpp/
)

find_library(RUNTIME antlr4-runtime ${ANTLR_DIR}/build/usr/local/lib/)

set(antlr4-GENERATED_SRC
   ${PROJECT_SOURCE_DIR}/generated/${LEXER}.cpp 
   ${PROJECT_SOURCE_DIR}/generated/${PARSER}.cpp
   ${PROJECT_SOURCE_DIR}/generated/${BASE}BaseListener.cpp
   ${PROJECT_SOURCE_DIR}/generated/${BASE}BaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/generated/${BASE}Listener.cpp
   ${PROJECT_SOURCE_DIR}/generated/${BASE}Visitor.cpp
 )

foreach(src_file ${antlr4-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-GENERATED_SRC})

add_custom_target(GenerateParser DEPENDS ${antlr4-GENERATED_SRC})


include_directories(
  ${ANTLR_DIR}/runtime/src
  ${ANTLR_DIR}/runtime/src/misc
  ${ANTLR_DIR}/runtime/src/atn
  ${ANTLR_DIR}/runtime/src/dfa
  ${ANTLR_DIR}/runtime/src/tree
  ${ANTLR_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/generated
  ${PROJECT_SOURCE_DIR}/../../deps/
  )

set(antlr4_SRC 
  ${PROJECT_SOURCE_DIR}/main.cpp
  ${antlr4-GENERATED_SRC}
  )

foreach(src_file ${antlr4_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4_SRC})

add_executable(antlr4-${G_TARGET}
  ${antlr4_SRC}
  )

add_dependencies(antlr4-${G_TARGET} GenerateParser)

target_link_libraries(antlr4-${G_TARGET} ${RUNTIME})



