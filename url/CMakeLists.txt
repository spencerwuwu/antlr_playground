set(ANTLR_DIR
   "/home/weicheng/protocol/SURE25/antlr4/runtime/Cpp"
)

set(CMAKE_LIBRARY_PATH "/home/weicheng/protocol/SURE25/antlr4/runtime/Cpp/build/runtime" ${CMAKE_LIBRARY_PATH})
find_library(RUNTIME antlr4-runtime)

set(TARGET "url")

set(antlr4-GENERATED_SRC
   ${PROJECT_SOURCE_DIR}/generated/${TARGET}Lexer.cpp 
   ${PROJECT_SOURCE_DIR}/generated/${TARGET}Parser.cpp
   ${PROJECT_SOURCE_DIR}/generated/${TARGET}BaseListener.cpp
   ${PROJECT_SOURCE_DIR}/generated/${TARGET}BaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/generated/${TARGET}Listener.cpp
   ${PROJECT_SOURCE_DIR}/generated/${TARGET}Visitor.cpp
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

add_executable(antlr4-${TARGET}
  ${antlr4_SRC}
  )

add_dependencies(antlr4-${TARGET} GenerateParser)

target_link_libraries(antlr4-${TARGET} ${RUNTIME})


