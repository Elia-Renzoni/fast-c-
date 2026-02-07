
#include <iostream>
#include <string>


void add(std::string& strToPrint, const std::string segment) {
    strToPrint += segment;
}

int main() {
    std::string originStr = "hello world";
    add(originStr, "that's the new part!");
    std::cout << originStr << '\n';
}
