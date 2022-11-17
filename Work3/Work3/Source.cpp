#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{


	int a, b, c, x;

	cout << "Enter any number" << endl;
	cin >> a;
	cout << "Enter any number" << endl;
	cin >> b;
	cout << "Select the solution method" << endl;
tryAgain:
	cout << "Press 1 a + b" << endl;
	cout << "Press 2 a - b" << endl;
	cout << "Press 3 a * b" << endl;
	cout << "Press 4 a / b" << endl;
	cout << "Press 5 a % b" << endl;

	cin >> x;
	while (x > 5) {
		cout << "EROR" << endl;
		cin >> x;
	}
	if (x == 1) {
		c = a + b;
		cout << "a + b = " << c << endl;
	}
	else
		if (x == 2) {
			c = a - b;
			cout << "a - b = " << c << endl;
		}
		else
			if (x == 3) {
				c = a * b;
				cout << "a * b = " << c << endl;
			}

			else if (x == 4, 5 and b != 0)
			{

				if (x == 4) {
					c = a / b;
					cout << "a / b = " << c << endl;
				}
				if (x == 5) {
					c = a % b;
					cout << "a % b = " << c << endl;
				}


			}
			else
				goto tryAgain;






	_getch();
}