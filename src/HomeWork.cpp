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
int savedAmount;

int main() {

	cout << "==========================\n";
	cout << "Welcome to Stationary Shop\n";
	cout << "==========================\n\n";




	cout << "Type the name of an item you'd like to buy : ";
	cin >> name;
	cout << "How many " << name << "'s" << " would you like to buy : ";
	cin >> quantity;
	cout << "\n\n";

	total = quantity * rate;


	discountedPrice = total - discount * total;

	savedAmount = total - discountedPrice;


		cout << "=========================================\n";
		cout << "|              YOUR BILL                 \n";
		cout << "|                                        \n";
		cout << "|  Item : "  << name <<                 "\n";
		cout << "|  Quantity : " << quantity <<          "\n";
		cout << "|  Total : " << total <<                "\n";
		cout << "|  Discounted Price : " << discountedPrice << "\n";
		cout << "|                                        \n";
		cout << "|  You saved " << savedAmount << " rupees by 20% discount\n";
		cout << "|                                        \n";
		cout << "=========================================\n\n";

	return 0;
}
