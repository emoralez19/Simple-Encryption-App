// Elizabeth Moralez
// CS 2313
// Chapter 4 Problem 37
// August 28, 2022

#include <iostream>
using namespace std;

int main()
{
	int original;
	int num1, num2, num3, num4;
	int decrypt;

	cout << "Please enter in your 4 digit message: ";
	cin >> original;

	num1 = (original % 10);
	num2 = ((original - num1) % 100) / 10;
	num3 = ((original - num2) % 1000) / 100;
	num4 = ((original -num3) % 10000) / 1000;

	num1 = ((num1 + 7) % 10);
	num2 = ((num2 + 7) % 10);
	num3 = ((num3 + 7) % 10);
	num4 = ((num4 + 7) % 10);

	int temp=0;

	temp = num4;
	num4 = num2;
	num2 = temp;

	temp = num3;
	num3 = num1;
	num1 = temp;

	cout << "Your new message is: " << num4 << num3 << num2 << num1 << endl;

	char answer;
	cout << "\nWould you like to decrypt this message? (Y/N) ";
	cin >> answer;

	if ( answer == 'y' || answer == 'Y')
	{
		// swaps the values back
		temp = num4;
		num4 = num2;
		num2 = temp;

		temp = num3;
		num3 = num1;
		num1 = temp;

		num1 = ((num1 - 7)+10);
		num2 = ((num2 - 7)+10);
		num3 = ((num3 - 7)+10);
		num4 = ((num4 - 7) + 10);

		if (num1 > 10)
			num1 = num1 - 10;
		if (num2 > 10)
			num2 = num2 - 10;
		if (num3 > 10)
			num3 = num3 - 10;
		if (num4 > 10)
			num4 = num4 - 10;

		cout << "\nYour decrypted message is: " << num4 << num3 << num2 << num1 << endl;

	}
	else if (answer == 'n' || answer == 'N')
	{
		cout << "\nEnding program" << endl;
	}


}