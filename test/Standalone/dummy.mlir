// RUN: vcalc-opt %s | vcalc-opt | FileCheck %s

module {
    // CHECK-LABEL: func @bar()
    func.func @bar() {
        %0 = arith.constant 1 : i32
        // CHECK: %{{.*}} = vcalc.foo %{{.*}} : i32
        %res = vcalc.foo %0 : i32
        return
    }
}
