
#include <iostream>

using namespace std;

class Vector {
    public:
        Vector(int sz) :values{new double[sz]}, size{sz}, reference{0}{}

        void addValue(double value) {
            if (reference == size) return;

            values[reference] = value;
            reference++;
        }

        double getValue(int index){
            if (index < 0 || index >= size) return 0.0;
            return values[index];
        }

        int getSize() {
            return size;
        }

    private:
        double* values;
        int size;
        int reference;
};


int main() {
    Vector v(4);

    v.addValue(1.2);
    v.addValue(3.4);
    v.addValue(5.7);
    v.addValue(5.6);

    auto value = v.getValue(3);
    cout << value << '\n';
}

