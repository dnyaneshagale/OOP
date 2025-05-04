#include <iostream>
using namespace std; 
class MyString { 
       string str; 
       public: 
           MyString() { 
               cout << "Constructor called\n"; 
           } 
           ~MyString() { 
                cout << "Destructor called\n";
           } 
           void accept() { 
                  cout << "Enter a string: "; 
                  getline(cin, str); 
            } 
             void display() { 
                   cout << "You entered: " << str << endl; 
              }
 };
 
 int main() { 
      MyString s; 
      s.accept(); 
      s.display(); 
      return 0; 
}
