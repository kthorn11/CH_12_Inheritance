// School People.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
};

class Student : public Person
{
public:
    int roll_number;

};

class Teacher : public Person
{
public :
    string subject_name;
};


int main()
{
    Student student_object;
    Teacher teacher_object;

    cout << "Enter Student Name: ";
    getline(cin, student_object.name);
    cout << "Enter student roll number: ";
    cin >> student_object.roll_number;
    cin.ignore();
    cout << "Enter Teacher Name: ";
    getline(cin, teacher_object.name);
    cout << "Enter Subject Name: ";
    getline(cin, teacher_object.subject_name);


    cout << "Student name: " << student_object.name << endl;
    cout << "Roll Number : " << student_object.roll_number << endl;
    cout << "Teacher Name: " << teacher_object.name << endl;
    cout << "Subject: " << teacher_object.subject_name << endl;


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
