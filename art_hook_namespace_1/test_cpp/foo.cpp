#include <iostream>

namespace foo {
    int add(int a, int b) {
        return a + b;
    }
}

void foo_test() {
    using std::cout;
    cout << "foo_test: 1 + 2 = " << foo::add(1,2) << '\n';
}