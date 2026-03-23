// Result and Attendance System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Marks
{
public:
	int marks_recorded;

};

class Attendance
{
public:
	int attendance_percentage;
};

class StudentRecord : public Marks, public Attendance
{
public:
	string student_name;
};


int main()
{
	StudentRecord student_object;

	cout << "Enter name: ";
	getline(cin, student_object.student_name);
	cout << "Enter Marks: ";
	cin >> student_object.marks_recorded;
	cout << "Enter attendance percentage: ";
	cin >> student_object.attendance_percentage;

	cout << "Student Name: " << student_object.student_name << endl;
	cout << "Marks: " << student_object.marks_recorded << endl;
	cout << "Attendance: " << student_object.attendance_percentage << endl;

	if (student_object.attendance_percentage >= 75)

	{
		cout << "Eligible for Exam: Yes" << endl;
	}
	else
	{
		cout << "Eligible for Exam: No" << endl;
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
