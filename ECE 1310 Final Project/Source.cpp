#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstring>
using namespace std;



int main()
{
	srand(time(0));
	string answer;
	int value;
	do
	{
		int x = rand() % 99 + 1;
		cout << "Guess a number between 1 and 100." << endl;
		cin >> value;
		while (value != x)
		{
			if (value <= 100 && value >= 1)
			{
				if (value > x)
				{
					cout << "You guessed too high. Please try again: " << endl;;
					cin >> value;
				}
				else if (value < x)
				{
					cout << "You guessed too low. Please try again: " << endl;
					cin >> value;
				}
			}
			else
			{
				cout << "Error: Invalid input. Please provide a positive value between 1 and 100 inclusive." << endl;
				cin >> value;
			}
		}
		cout << "Congradulations! You have guessed correctly!" << endl << "Would you like to play again? (Type yes or no)" << endl;
		cin >> answer;
	} while (answer == "yes" || answer == "Yes" || answer == "YES");
	cout << "Thank you for playing. Have a wonderful day." << endl;
	system("pause");
	return 0;
}