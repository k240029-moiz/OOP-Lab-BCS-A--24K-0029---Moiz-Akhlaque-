#include <iostream>
using namespace std;

class Calculator {
private:
    int num1, num2;   

public:
    void setNumbers(int a, int b); 
    int add();                     
};

void Calculator::setNumbers(int a, int b) {
    num1 = a;
    num2 = b;
}

int Calculator::add() {
    return num1 + num2;
}

int main() {
    Calculator cal;

    cal.setNumbers(15, 25);   
    cout << "Sum = " << cal.add() << endl;

    
}

