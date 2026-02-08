
#include <string>
#include <iostream>

using namespace std;

struct Vector {
    string vName;
    double value;
    double second;
};

void initVector(Vector &v, string name, double value, double second) {
    if (name.empty()) return;
    v.vName = name;
    v.value = value;
    v.second = second;
}

void performSum(Vector v, int* sum) {
    *sum = v.value + v.second;
}

int main() {
    Vector vec;
    initVector(vec, "vector", 3.0, 1.0);
    int sum;
    performSum(vec, &sum);
    cout << "computed sum: " << sum << "\n";
}
