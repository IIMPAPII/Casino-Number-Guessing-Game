// Casino Number Guessing Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime> 
using namespace std;
void rules();
int main()
{
	string playerName;
	int balance; // stores play's balance
	int bettingAmount;
	int guess;
	int dice; //sores the random number
	char choice;
	srand(time(0)); // "Seed" the random generator 
	std::cout << "\n\t\t===========Welcome To Casino World==========\n\n";
	std::cout << "\n\nWhat's your name : ";
	getline(cin, playerName); // User inputs name
	cout << "\n\nEnter the starting balance to play game : $";
	cin >> balance;
	do
	{
		system("cls");
		rules();
		cout << "\n\nYpur current balance is $ " << balance << "\n";
		// Get player's betting balance
		do
		{
			cout << "Hey, " << playerName << ", enter amount to bet : $";
			cin >> bettingAmount;
			if (bettingAmount > balance)
				cout << "Betting balance can't be more than current balance!\n"
				<< "\nRe-enter balance\n ";
		} while (bettingAmount > balance);
		// Get player's numbers
		do
		{
			cout << "Guess any betting number between 1 & 10 :";
			cin >> guess;
			if (guess <= 0 || guess > 10);
			cout << "\nNumber should be between 1 to 10\n"
				<< "Re-enter number: \n ";
		} while (guess <= 0 || guess > 10);
		dice = rand() % 10 + 1;
		if (dice == guess)
		{
			cout << "\n\nYour are in luck!! You have won Rs." << bettingAmount * 10;
			balance = balance + bettingAmount * 10;
		}
		else
		{
			cout << "Oops, better luck nect time !! You lost $ " << bettingAmount << "\n";
			balance = balance - bettingAmount;
		}
		cout << "\nThe winning number was : " << dice << "\n";
		cout << "\n" << playerName << ", You have balance of $ " << balance << "\n";
		if (balance == 0)
		{
			cout << "You have no money to play ";
			break;
		}
		cout << "\n\n - ->Do you want to play again (y/n)? ";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
	cout << "\n\n\n";
	cout << "\n\nThanks for playing the game. Your balance is $ " << balance << "\n\n";
	return 0;
}
void rules()
{
	system("cls");
	cout << "\t\t========== = CASINO NUMBER GUESSING RULES!========\N";
	cout << "\T1.Choose a number between 1 to 50\n";
	cout << "\t2. Winner gets 10 times of the money bet\n";
	cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";





}
