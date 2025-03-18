add_mlir_dialect_library(MLIRVCalc
        VCalcDialect.cpp
        VCalcOps.cpp

        ADDITIONAL_HEADER_DIRS
        ${PROJECT_SOURCE_DIR}/include/VCalc

        DEPENDS
        MLIRVCalcOpsIncGen

	LINK_LIBS PUBLIC
	MLIRIR
        MLIRInferTypeOpInterface
	)
