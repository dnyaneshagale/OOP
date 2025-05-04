#include<iostream>
using namespace std; 
class Complex { 
     private: float real, imag; 
     public: 
         Complex(float r = 0, float i = 0) { 
             real = r; imag = i;
        } 
        Complex operator + (const Complex& obj) { 
             return Complex(real + obj.real, imag + obj.imag); 
       } 
       Complex operator - (const Complex& obj) {
            return Complex(real - obj.real, imag - obj.imag);
        }
        Complex operator * (const Complex& obj) {
            float r = (real * obj.real) - (imag * obj.imag); 
            float i = (real * obj.imag) + (imag * obj.real); 
            return Complex(r, i); 
        } 
        Complex operator / (const Complex& obj) { 
              float denominator = obj.real * obj.real + obj.imag * obj.imag; 
              float r = ((real * obj.real) + (imag * obj.imag)) / denominator; 
           float i = ((imag * obj.real) - (real * obj.imag)) / denominator; 
           return Complex(r, i);
      } 
      void display() { 
           cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i" << endl; 
       } 
};
int main() { 
       Complex c1(4, 5), c2(2, 3); 
       cout << "First Complex Number: "; 
       c1.display(); 
       cout << "Second Complex Number: "; 
       c2.display(); 
      Complex sum = c1 + c2; 
      cout << "\nAddition: ";
      sum.display(); Complex diff = c1 - c2; 
      cout << "Subtraction: "; 
      diff.display(); 
      Complex prod = c1 * c2; 
      cout << "Multiplication: ";
      prod.display(); 
      Complex div = c1 / c2; 
      cout << "Division: "; 
     div.display(); 
     return 0;
}
