#include <iostream>
using namespace std;

class calculator {
private:
	int firstNumber, secondNumber;
	int operation;

	void input() {
		cout << "Enter First Number: ";
		cin >> firstNumber;
		cout << "Enter Second Number: ";
		cin >> secondNumber;
		cout << "Which Operation you want to perform? (Please Enter the respective number of your choice):\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. EXIT\n";
		cin >> operation;
	}
public:
	calculator(){}


	void dooperation() {
		input();
		cout << "-----------------------\n";
		cout << "RESULT \n";
		cout << "-----------------------\n";
		if (operation == 1)
			cout << firstNumber + secondNumber << endl;
		else if (operation == 2)
			cout << firstNumber - secondNumber << endl;
		else if (operation == 3)
			cout << firstNumber * secondNumber << endl;
		else if (operation == 4)
			cout << firstNumber / secondNumber << endl;
		else if (operation == 5) {
			cout << "Exiting Program ! ";
			exit(0);
		}
		else {
			char option;
			cout << "Invalid Operation !!! Please Try Again\n";
			dooperation();
			exit(0);
		}
		char option;
		cout << "Do you want to perform any other operation (Yes/No)? Enter 'Y' or 'y' for Yes and 'N' or 'n' for No\n";
		cin >> option;
		if (option == 'y' || option == 'Y') {
			dooperation();
		}
		else exit(0);
	}
};
int main()
{
	calculator c1;
	cout << "\t\t\t\t\t ******CALCULATOR*****\n\n";
	c1.dooperation();

	return 0;
}