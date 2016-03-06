// Program 5
// Nesting of member function
// Prints of numbers

#include <iostream>
using namespace std;

class sumCls {
public:
	int number, sum;

	void getNumber() {
		cout << "Enter number : ";
		cin >> number;
	}

	int doSum() {
		int i = 1;
		while(i <= number) {
			sum += i;
			i++;
		}
		return sum;
	}
	
	void displaySum() {
		cout << "Addition of first " << number << " numbers is : " << doSum() << "\n";
	}
};

int main()
{
	sumCls obj;
	obj.sum = 0;
	obj.getNumber();
	obj.displaySum();
	return 0;
}

