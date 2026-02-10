
#include "Cache.h"
#include <stdexcept>
#include <iostream>


Cache::Cache(int size) noexcept {
    Cache::keys = new std::string[size];
    Cache::values = new std::string[size];
    Cache::indexPointer = 0;
    Cache::size = size;
}

// destroyer
Cache::~Cache() {
    delete []keys;
    delete []values;
}

void Cache::setPair(std::string key, std::string value) {
    if (indexPointer >= size) {
        throw std::out_of_range{""};
    }


    keys[indexPointer] = key;
    values[indexPointer] = value;
    indexPointer += 1;
}

std::string Cache::getValue(std::string key) {
    for (int i = 0; i < keys->length(); i++) {
        auto memKey = keys[i];
        if (memKey.compare(key)) return values[i];
    }

    throw std::runtime_error{"key not found"};
    return nullptr;
}

void Cache::deletePair(std::string key) {
    for (int i = 0; i < keys->length(); i++) {
        auto memKey = keys[i];
        if (memKey.compare(key)) {
            keys[i].clear();
            values[i].clear();
            return;
        }
    }

    throw std::runtime_error{"key not found"};
}



int main() {
    Cache c(10);

    try {
        c.setPair("foo", "bar");
        c.setPair("mock", "quck");

        auto value = c.getValue("foo");
        std::cout << "value: " << value;
        c.deletePair("foo");
    } catch (const std::exception e) {
        std::cerr << e.what();
    }
}
