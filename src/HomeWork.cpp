//============================================================================
// Name        : HomeWork.cpp
// Author      : Rajdeep Thakare 19Q91A0548
// Description : Program to accept name of an item along with rate and quantity
//============================================================================

#include <iostream>

using std::cout;
using std::cin;

char name[10];
int rate = 10;
float discount = 0.20;
int total;
int quantity;
double discountedPrice;

int main() {

	cout << "==========================\n";
	cout << "Welcome to Stationary Shop\n";
	cout << "==========================\n\n";


	cout << "Type the name of an item you'd like to buy : ";
	cin >> name;
	cout << "How many " << name << "'s" << " would you like to buy : ";
	cin >> quantity;

	total = quantity * rate;

	cout << "Item : " << name << "\n";
	cout << "Quantity : " << quantity << "\n";
	cout << "Total : " << total << "\n";


	discountedPrice = total - discount * total;

	cout << "Discounted price is : " << discountedPrice;

	return 0;
}
