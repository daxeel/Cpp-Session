// Program 2
// Welcome user with name with oop

#include <iostream>
using namespace std;

char name[30];

class nameCls
{
public:
	void print_name(char* name) {
		cout<<"Welcome, "<<name<<"\n";
	}
	
};

int main() {  

	cout<<"Enter your name : ";
	cin>>name;

	nameCls obj;
	obj.print_name(name);

    return 0;
}
