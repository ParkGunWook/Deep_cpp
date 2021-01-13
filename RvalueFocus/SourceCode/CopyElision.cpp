#include <iostream>

class A {
  int data_;

 public:
  A(int data) : data_(data) { std::cout << "Call Normal Consturctor!" << std::endl; }

  A(const A& a) : data_(a.data_) {
    std::cout << "Call Copy Constructor!" << std::endl;
  }
};

int main() {
  //Case 1.
  A a(1);  // Call constructor
  //Case 2.
  A b(a);  // Call copy consturctor

  //Case 3. How this statement work?
  A c(A(2));
}
