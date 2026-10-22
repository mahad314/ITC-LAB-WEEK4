/*
//TASK 1
//Mahad Abubakar L1F26BSCS0314
#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "enter a number:";
	cin >> num;
	if (num > 0)
	{
		cout << "positive number";

	}
	return 0;
}
//it will not print any output as it will skip the if statement
*/


/*
//Task 2
//Mahad Abubakar L1F26BSCS0314
#include <iostream>
using namespace std;
int main()
{
	int bill_amount;
	cout << "enter bill amount:";
	cin >> bill_amount;
	cout << "Bill amout: Rs" << bill_amount << endl;
		if (bill_amount >= 5000)
		{
			cout << "You qualify for a discount";


		}
	return 0;
}
// >= is better cause it can give us clarity on if we weant to add 5000 or not
*/


/*
//Task 3
//Mahad Abubakar L1F26BSCS0314
#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "Enter a Number:";
	cin >> number;
	if (number % 2 == 0)
	{
		cout << "Even number";

	}
	else
	{
		cout << "odd number";
	}
	return 0;
}
// 0 shows as even number when we run the program
*/

/*
//Task 4
//Mahad Abubakar L1F26BSCS0314
#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter your age:";
	cin >> age;
	if (age >= 18)
	{
		cout << "you are elligible to vote";
	}
	else
	{
		"you are not elligible to vote";
	}
	return 0;
}
*/


/*
//Task 5
//Mahad Abubakar L1F26BSCS0314
#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "enter both numbers:";
	cin >> num1 >> num2;
	if (num1 > num2)
	{
		cout << "number 1 is greater";
	}
	else
	{
		cout << "number 1 is not greater";
	}
	return 0;
	//it says number 1 is not greater since it checks if its greater or not and if it isnt true then it runs the else statement
}*/


/*
//Task 6
//Mahad Abubakar L1F26BSCS0314
#include <iostream>
using namespace std;

int main() {
	int marks;
	cout << "Enter marks (0-100): ";
	cin >> marks;
	if (marks >= 90) {
		cout << "Grade: A" << endl;
	}
	else if (marks >= 80) {
		cout << "Grade: B" << endl;
	}
	else if (marks >= 70) {
		cout << "Grade: C" << endl;
	}
	else if (marks >= 60) {
		cout << "Grade: D" << endl;
	}
	else {
		cout << "Grade: F" << endl;
	}

	return 0;
	//The highest range should be checked first because the if - else - if chain stops when the first true condition is found true
}
*/

/*
// Task 7
// Mahad L1F26BSCS0314
#include <iostream>
using namespace std;

int main() {
	int temperature;

	cout << "Enter temperature in Celsius: ";
	cin >> temperature;

	if (temperature < 10) {
		cout << "Weather: Cold" << endl;
	}
	else if (temperature < 25) {
		cout << "Weather: Pleasant" << endl;
	}
	else if (temperature < 35) {
		cout << "Weather: Warm" << endl;
	}
	else {
		cout << "Weather: Hot" << endl;
	}

	return 0;
}
//the second condition is true for 18 so that runs and gives us pleasent
*/
