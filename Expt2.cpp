#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two floating-point numbers
float add(float a, float b) {
    return a + b;
}

int main() {
    int choice;
    cout << "Choose type of addition:\n";
    cout << "1. Add two integers\n";
    cout << "2. Add three integers\n";
    cout << "3. Add two floats\n";
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int x, y;
            cout << "Enter two integers: ";
            cin >> x >> y;
            cout << "Sum = " << add(x, y) << endl;
            break;
        }
        case 2: {
            int x, y, z;
            cout << "Enter three integers: ";
            cin >> x >> y >> z;
            cout << "Sum = " << add(x, y, z) << endl;
            break;
        }
        case 3: {
            float p, q;
            cout << "Enter two float numbers: ";
            cin >> p >> q;
            cout << "Sum = " << add(p, q) << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
