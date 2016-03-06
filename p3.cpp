// Program 3
// Calculator Program

#include <iostream>
using namespace std;

int a, b;

class demo
{
public:
	void additon(int a, int b) {
		cout<<"Addition is : "<<a+b<<"\n";
	}
	
	void subtract(int a, int b) {
		cout<<"Subtract is : "<<a-b<<"\n";
	}

	void multiply(int a, int b) {
		cout<<"Multiply is : "<<a*b<<"\n";
	}

	void division(int a, int b) {
		cout<<"Division is : "<<a/b<<"\n";
	}
};

int main() {  

	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;

	demo obj1;
	obj1.additon(a, b);
	obj1.subtract(a, b);
	obj1.multiply(a, b);
	obj1.division(a, b);

    return 0;
}
