// Smart University Management System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

class Person
{

public:
    string person_name;
    int age;
};
class AcademicInfo
{
public:
    string department_name;
};

class SportsInfo
{
public:
    string sport_name;

};

class Student : public Person
{
public:
    int roll_number;
};

class GradStudent : public Student
{
public: 
    string degree_name;
};
class StudentLeader : public GradStudent, public SportsInfo, public AcademicInfo
{
public:
    string leadership_role;
};
class Teacher : public Person, public AcademicInfo
{
public:
    string subject_name;
};

int main()
{

    StudentLeader student_leader_object;
    Teacher teacher_object;

    cout << "Enter Person Name: ";
    getline(cin, student_leader_object.person_name);
    cout << "Enter Age: ";
    cin >> student_leader_object.age;
    cin.ignore();

    cout << "Enter Department Name: ";
    getline(cin, student_leader_object.department_name);
    cout << "Enter Roll Number: ";
    cin >> student_leader_object.roll_number;
    cin.ignore();

    cout << "Enter Degree Name: ";
    getline(cin, student_leader_object.degree_name);
    cout << "Enter Sport: ";
    getline(cin, student_leader_object.sport_name);
    cout << "Enter Leadership Role: ";
    getline(cin, student_leader_object.leadership_role);

    cout << "Enter Name: ";
    getline(cin, teacher_object.person_name);
    cout << "Enter Age: ";
    cin >> teacher_object.age;
    cin.ignore();

    cout << "Enter Department Name: ";
    getline(cin, teacher_object.department_name);
    cout << "Enter Subject Name: ";
    getline(cin, teacher_object.subject_name);



    cout << "----- Student Leader Details -----" << endl;
    cout << "Name: " << student_leader_object.person_name << endl;
    cout << "Age: " << student_leader_object.age << endl;
    cout << "Department: " << student_leader_object.department_name << endl;
    cout << "Roll Number: " << student_leader_object.roll_number << endl;
    cout << "Degree: " << student_leader_object.degree_name << endl;
    cout << "Sport: " << student_leader_object.sport_name << endl;
    cout << "Leadership Role: " << student_leader_object.leadership_role << endl;

    cout << endl;


    cout << "----- Teacher Details -----" << endl;
    cout << "Name: " << teacher_object.person_name << endl;
    cout << "Age: " << teacher_object.age << endl;
    cout << "Department: " << teacher_object.department_name << endl;
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
