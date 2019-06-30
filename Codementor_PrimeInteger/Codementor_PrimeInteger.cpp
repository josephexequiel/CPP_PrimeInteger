// Codementor_PrimeInteger.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int isPrimeNumber(int n)
{
	bool isPrime = true;
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			isPrime = false;
			break;
		}
	}
	return isPrime;
}

int main()
{
	int session = 0;
	while (session == 0)
	{
		int value;
		std::cout << "Enter a number: ";
		std::cin >> value;
		while (std::cin.fail())
		{
			std::cout << "Invalid Entry." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Enter a number : ";
			std::cin >> value;
		}
		if (value == 1)
		{
			std::cout << value << " is a prime number. ";
		}
		else if (value <= 0)
		{
			std::cout << "Please enter a number that is higher than " << value << ".";
		}
		else
		{
			std::cout << "You have entered " << value << ". Prime numbers between 1 and " << value << " are as follows:" << std::endl;
			bool isPrime;
			for (int n = 1; n < value; n++) {
				isPrime = isPrimeNumber(n);
				if (isPrime == true)
					std::cout << n << " ";
			}

		}

		char choice;
		int confirmvar = 0;		
		while (confirmvar == 0)
		{
			std::cout << std::endl;
			std::cout << "Would you like to enter another value? (y/n): ";
			std::cin >> choice;
			switch (choice) {
			case 'Y':
			case 'y':
				confirmvar = 1;
				std::cout << std::endl;
				break;
			case 'N':
			case 'n':
				session = 1;
				confirmvar = 1;
				std::cout << "Program will not exit.";
				return 0;
			default:
				std::cout << "Invalid response. Try again.";
			}
		}
	}
	return 0;
}