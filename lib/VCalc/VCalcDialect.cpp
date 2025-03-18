//===- VCalcDialect.cpp - VCalc dialect ---------------*- C++ -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "VCalc/VCalcDialect.h"
#include "VCalc/VCalcOps.h"

using namespace mlir;
using namespace mlir::standalone;

//===----------------------------------------------------------------------===//
// VCalc dialect.
//===----------------------------------------------------------------------===//

void VCalcDialect::initialize() {
  addOperations<
#define GET_OP_LIST
#include "VCalc/VCalcOps.cpp.inc"
      >();
}
