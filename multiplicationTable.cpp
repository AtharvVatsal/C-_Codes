#include <iostream>
using namespace std;
class Complex {
    private:
        int* real, *img;
    public:
        Complex(int r = 0, int i = 0) : real(new int(r)), img(new int(i)) {}
        ~Complex() { delete real; delete img; }
        void print() const { cout << "Sum : "<<*real << " + " << *img << "i\n"; }
        Complex operator+(const Complex& other) const { return {*real + *other.real, *img + *other.img}; }

    
};

int main() {
    Complex c1(23, 478), c2(42, 4);
    Complex sum = c1 + c2;
    sum.print();
    return 0;
}