// Library Membership.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


class Person
{
public:
    string person_name;


};


class Member : public Person
{
public:
    int member_id;

};

class PremiumMember : public Member
{
public:

    int books_borrowed;
};



int main()
{
    
    PremiumMember premium_member_object;

    cout << "Enter name: ";
    getline(cin, premium_member_object.person_name);
    cout << "Enter member id: ";
    cin >> premium_member_object.member_id;
    cout << "Enter books borrowed: ";
    cin >> premium_member_object.books_borrowed;


    cout << "Member Name: " << premium_member_object.person_name << endl;
    cout << "Member ID: " << premium_member_object.member_id << endl;
    cout << "Books Borrowed: " << premium_member_object.books_borrowed << endl;


    if (premium_member_object.books_borrowed <= 10)
    {
        cout << "Status: Within Limit" << endl;
    }
    else
    {
        cout << "Status: Limit Exceeded" << endl;
    }

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
