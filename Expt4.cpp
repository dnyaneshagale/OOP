#include <iostream>
using namespace std;

class Stack {
    int *arr, top, size;

public:
    Stack(int s) : size(s), top(-1) {
        arr = new int[size];
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int val) {
        if (top == size - 1)
            cout << "Overflow\n"; // Fixed quotes
        else {
            arr[++top] = val;
            cout << "Element " << val << " is pushed\n"; // Fixed quotes
        }
    }

    void pop() {
        if (top == -1)
            cout << "Underflow\n"; // Fixed quotes
        else {
            cout << "Element " << arr[top] << " is popped\n"; // Fixed quotes
            top--;
        }
    }

    void display() {
        cout << "Stack: "; // Fixed quotes
        for (int i = 0; i <= top; i++) { // Fixed 'I' to 'i' and typo
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s(3);
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    return 0;
}
