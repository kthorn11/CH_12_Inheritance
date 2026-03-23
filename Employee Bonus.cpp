// Employee Bonus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:

    string employee_name;
    double salary;

};
class Manager : public Employee
{
public:
    double bonus;
};

int main()
{
    Manager manager_object;
    double total_income;

    getline(cin, manager_object.employee_name);

    cin >> manager_object.salary;
    cin >> manager_object.bonus;

    total_income = manager_object.salary + manager_object.bonus;

    
    cout << "Manager Name: " << manager_object.employee_name << endl;
    cout << "Salary: " << manager_object.salary << endl;
    cout << "Bonus: " << manager_object.bonus << endl;
    cout << "Total Income: " << total_income << endl;





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
