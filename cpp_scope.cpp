#include <iostream>
#include <string>

void scopeDemo() {
    int x = 10;
    {
        // New block scope - can shadow outer x
        int x = 20;
        std::cout << "Inner block x: " << x << std::endl;
    }
    std::cout << "Outer block x: " << x << std::endl;

    // Attempting to change x from int to string is illegal in C++:
    // x = "Not allowed"; // This would be a compile-time error
}

int main() {
    scopeDemo();
    return 0;
}
