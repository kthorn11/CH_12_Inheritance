// Online Order Bill.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Product
{
public: 
	string product_name;
	double product_price;

};

class DiscountedProduct : public Product
{
public: 
	double discount_percentage;

};

int main()
{
	DiscountedProduct product_object;
	double discount_amount;
	double final_price;


	cout << "Enter product name: ";
	getline(cin, product_object.product_name);
	cout << "Enter product price: ";
	cin >> product_object.product_price;
	cout << "Enter discounted price: ";
	cin >> product_object.discount_percentage;

	discount_amount = product_object.product_price * product_object.discount_percentage / 100.0;
	final_price = product_object.product_price - discount_amount;

	
	cout << "Product Name: " << product_object.product_name << endl;
	cout << "Original Price: " << product_object.product_price << endl;
	cout << "Discounted Price: " << product_object.discount_percentage << endl;
	cout << "Final Price: " << final_price << endl;



	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
