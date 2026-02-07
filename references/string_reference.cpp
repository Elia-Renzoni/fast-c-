
#include <iostream>
#include <string>



int main() {
    std::string simpleString = "this is my first C++ string";
    std::string& ref = simpleString;

    ref += " new characters";

    std::cout << ref << '\n';
}
