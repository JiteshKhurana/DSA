#include<iostream>
using namespace std;
void func1(int** q) {
    //Call by value - a copy of p is passed
    q = q+1;
}

void func2(int** q) {
    *q = *q+1;
}

void func3(int** q) {
    **q = **q+1;
}

int main(){
    int a = 5;

    int* p = &a;

    int** q = &p;

    cout << "before " << q << endl;   //address of p (Hexadecimal)
    cout << "before " << *q << endl;  //address of a (Hexadecimal)
    cout << "before " << **q << endl;  //5

    // func1(q);
    // func2(q);
    func3(q);

    cout << "after " << q << endl;  //address of p (Hexadecimal)
    cout << "after " << *q << endl;  //address of a (Hexadecimal)
    cout << "after " << **q << endl;  //6

    return 0;
}