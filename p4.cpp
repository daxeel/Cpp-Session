// Program 4
// Calculator Program with user choice

// Operation codes
// Addition - 0
// Subtraction - 1
// Multiplication - 2
// Division - 3

#include <iostream>
using namespace std;

int a, b, op;

class demo
{
public:
	void calculate(int a, int b, int op) {
		if (op == 0) {
			cout<<"Addition is : "<<a+b<<"\n";
		} else if (op == 1) {
			cout<<"Subtract is : "<<a-b<<"\n";
		} else if (op == 2) {
			cout<<"Multiply is : "<<a*b<<"\n";
		} else if (op == 3) {
			cout<<"Division is : "<<a/b<<"\n";
		} else {
			cout<<"Please enter valid operator code \n";
		}
	}
};

int main() {  

	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	cout<<"Enter operator code : ";
	cin>>op;

	demo obj1;
	obj1.calculate(a, b, op);

    return 0;
}
