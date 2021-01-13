#include <iostream>
#include <utility>

using namespace std;

class A {
    public:
        A() { cout << "Normal Constructor" << endl; }
        A(const A& a) { cout << "Copy Constructor" << endl; }
        A(A&& a) { cout << "Move Constructor" << endl; }  
};

int main(){
    A a;
    cout << "----------" << endl;
    A b(a);
    
    cout << "----------" << endl;
    A c(move(a));
}
