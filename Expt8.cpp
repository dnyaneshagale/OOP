#include <iostream>
using namespace std; 
class Shape { 
     public:
         virtual void area() { 
             cout << "Area of Shape" << endl; 
         } 
}; 

class Circle : public Shape { 
             private:
                   float radius; 
             public: 
                    Circle(float r) : radius(r) {} 
                    void area() override { 
                            cout << "Area of Circle: " << 3.14 * radius * radius << endl; 
                    }
 };

class Rectangle : public Shape { 
         private: 
              float length, width; 
        public: 
              Rectangle(float l, float w) : length(l), width(w) {} 
              void area() override { 
                     cout << "Area of Rectangle: " << length * width << endl; 
             } 
};

class Triangle : public Shape { 
         private: float base, height; 
         public: 
             Triangle(float b, float h) : base(b), height(h) {}
              void area() override { 
                    cout << "Area of Triangle: " << 0.5 * base * height << endl; 
             }
};

 int main() { 
     Circle c(5.0); 
     Rectangle r(4.0, 6.0); 
     Triangle t(4.0, 5.0); 
     Shape* shape; shape = &c; 
     shape->area();
     shape = &r; 
     shape->area(); 
     shape = &t; 
     shape->area();
     return 0; 
}
