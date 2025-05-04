#include <iostream>
using namespace std;

// Function Template
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

// Class Template
template <class T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }

    T multiply() {
        return num1 * num2;
    }

    T divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    // Using the function template
    cout << "Max of 3 and 7: " << getMax<int>(3, 7) << endl;
    cout << "Max of 4.5 and 2.3: " << getMax<double>(4.5, 2.3) << endl;

    // Using the class template
    Calculator<int> intCalc(10, 5);
    cout << "\nInteger Operations:" << endl;
    cout << "Add: " << intCalc.add() << endl;
    cout << "Subtract: " << intCalc.subtract() << endl;
    cout << "Multiply: " << intCalc.multiply() << endl;
    cout << "Divide: " << intCalc.divide() << endl;

    Calculator<float> floatCalc(7.5f, 2.5f);
    cout << "\nFloat Operations:" << endl;
    cout << "Add: " << floatCalc.add() << endl;
    cout << "Subtract: " << floatCalc.subtract() << endl;
    cout << "Multiply: " << floatCalc.multiply() << endl;
    cout << "Divide: " << floatCalc.divide() << endl;

    return 0;
}
