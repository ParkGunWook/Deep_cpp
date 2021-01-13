#include <iostream>

using namespace std;

int& func1(int& a) { return a; }
int func2(int b) { return b; }

int main(){
    int a = 3;
    func1(a) = 4;
    cout << &func1(a) << endl;

    int b = 2;
    a = func2(b);
    const int& func2(b); // Error 1

    //cout << func2(b) << endl; // Error 2
}