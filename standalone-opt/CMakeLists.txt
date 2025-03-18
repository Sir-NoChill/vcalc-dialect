get_property(dialect_libs GLOBAL PROPERTY MLIR_DIALECT_LIBS)
get_property(conversion_libs GLOBAL PROPERTY MLIR_CONVERSION_LIBS)
set(LIBS
        ${dialect_libs}
        ${conversion_libs}
        MLIROptLib
	MLIRVCalc
        )
add_llvm_executable(vcalc-opt vcalc-opt.cpp)

llvm_update_compile_flags(vcalc-opt)
target_link_libraries(vcalc-opt PRIVATE ${LIBS})
