#include <iostream>
#include <cmath> // for sqrt
using namespace std;

class Complex {
public:
    double real, imag;

    void input() {
        cin >> real >> imag;
    }

    Complex add(Complex b) {
        return {real + b.real, imag + b.imag};
    }

    Complex sub(Complex b) {
        return {real - b.real, imag - b.imag};
    }

    Complex mul(Complex b) {
        return {(real * b.real) - (imag * b.imag), (real * b.imag) + (imag * b.real)};
    }

    Complex div(Complex b) {
        double denominator = (b.real * b.real) + (b.imag * b.imag);
        double r = ((real * b.real) + (imag * b.imag)) / denominator;
        double i = ((imag * b.real) - (real * b.imag)) / denominator;
        return {r, i};
    }

    Complex conjugate() {
        return {real, -imag};
    }

    double modulus() {
        return sqrt(real * real + imag * imag);
    }

    void display() {
        cout << real << " + " << imag << "i\n";
    }
};

int main() {
    Complex num1, num2, sum, sub, mul, quotient, conj1, conj2;

    cout << "Enter first complex number: ";
    num1.input();

    cout << "Enter second complex number: ";
    num2.input();

    sum = num1.add(num2);
    sub = num1.sub(num2);
    mul = num1.mul(num2);
    quotient = num1.div(num2);
    conj1 = num1.conjugate();
    conj2 = num2.conjugate();

    cout << "\n--- Results ---\n";
    cout << "Addition: "; sum.display();
    cout << "Subtraction: "; sub.display();
    cout << "Multiplication: "; mul.display();
    cout << "Division: "; quotient.display();
    cout << "Conjugate of first: "; conj1.display();
    cout << "Conjugate of second: "; conj2.display();

    // modulus function is included but not used here

    return 0;
}
