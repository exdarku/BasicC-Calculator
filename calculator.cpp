#include <iostream>

double addition(double first_number, double second_number)
{
	return first_number + second_number;
}

double subtraction(double first_number, double second_number)
{
	return first_number - second_number;
}

double multiply(double first_number, double second_number)
{
	return first_number * second_number;
}

double divide(double first_number, double second_number)
{
	return first_number / second_number;
}

int main()
{
	using namespace std;
	int choice;
	cout << "Calculator. 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division.\n";
	cin >> choice;
	if (choice == 1) {
		double first;
		double second;
		cout << "enter first digit:";
		cin >> first;
		cout << "enter second digit:";
		cin >> second;
		double answer = addition(first, second);
		cout << endl << answer << endl;
		main();
	}
	else if (choice == 2) {
		double first;
		double second;
		cout << "enter first digit:";
		cin >> first;
		cout << "enter second digit:";
		cin >> second;
		double answer = subtraction(first, second);
		cout << endl << answer << endl;
		main();
	}
	else if (choice == 3) {
		double first;
		double second;
		cout << "enter first digit:";
		cin >> first;
		cout << "enter second digit:";
		cin >> second;
		double answer = multiply(first, second);
		cout << endl << answer << endl;
		main();
	}
	else if (choice == 4) {
		double first;
		double second;
		cout << "enter first digit:";
		cin >> first;
		cout << "enter second digit:";
		cin >> second;
		double answer = divide(first, second);
		cout << endl << answer << endl;
		main();
	}
}
