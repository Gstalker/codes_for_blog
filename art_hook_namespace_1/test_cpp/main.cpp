#include <iostream>
#include <foo.h>

namespace main_cpp{
    unsigned add(unsigned a, unsigned b) {
        return a + b;
    }
}

int main() {
    using std::cout;
    cout << "main: 1 + 2 = " << main_cpp::add(1,2) << '\n';
    foo_test();
    return 0; 
}