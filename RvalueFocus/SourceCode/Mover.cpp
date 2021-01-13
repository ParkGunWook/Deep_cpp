#include <iostream>

class A {
 public:
  A() { std::cout << "ctor\n"; }
  A(const A& a) { std::cout << "copy ctor\n"; }
  A(A&& a) { std::cout << "move ctor\n"; }
};

class B {
 public:
  B(A&& a) : a_(std::move(a)) {}

  A a_;
};

int main() {
  A a;
  std::cout << "create B-- \n";
  B b(std::move(a));
}