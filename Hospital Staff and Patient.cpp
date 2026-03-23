// Hospital Staff and Patient.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string person_name;
    int age;
};

class Doctor : public Person
{
public:
    string specialization;

};

class Patient : public Person
{
public:
    string disease_name;
};





int main()
{
    Doctor doctor_object;
    Patient patient_object;


    cout << "Enter Doctor Name: ";
    getline(cin, doctor_object.person_name);
    cout << "Enter Doctor Age: ";
    cin >> doctor_object.age;
    cin.ignore();
    cout << "Enter Specialization: ";
    getline(cin, doctor_object.specialization);

    cout << "Enter Patient Name: ";
    getline(cin, patient_object.person_name);
    cout << "Enter Patient Age: ";
    cin >> patient_object.age;
    cin.ignore();
    cout << "Enter disease name: ";
    getline(cin, patient_object.disease_name);


    cout << "Doctor Name: " << doctor_object.person_name << endl;
    cout << "Age: " << doctor_object.age << endl;
    cout << "Specialization: " << doctor_object.specialization << endl;


    cout << "Patient Name: " << patient_object.person_name << endl;
    cout << "Age: " << patient_object.age << endl;
    cout << "Disease: " << patient_object.disease_name << endl;
    

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
