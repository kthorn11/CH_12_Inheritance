// Smart Hospital and Wellness Monitoring System.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

class Medicalinfo
{
public:
    string disease_name;
};

class FitnessInfo
{
public:
    int daily_step_count;
};
class Patient : public Person
{
public:
    int patient_id;
};
class InPatient : public Patient
{
public:
    int room_number;

};

class WellnessPatient : public InPatient, public FitnessInfo
{
public:
    string diet_plan;
};

class Doctor : public Person
{
public: 
    string specialization;
};
class VisitingDoctor : public Doctor
{
public:
    string visiting_hours;
};

class HealthAdvisor : public VisitingDoctor, public Medicalinfo
{
public:
    string advice_note;
};


int main()
{
   
    WellnessPatient wellness_patient_object;
    HealthAdvisor health_advisor_object;

    cout << "Enter Name: ";
    getline(cin, wellness_patient_object.person_name);
    cout << "Enter Age: ";
    cin >> wellness_patient_object.age;
    cin.ignore();


    
    cout << "Enter Patient ID: ";
    cin >> wellness_patient_object.patient_id;
    cout << "Enter Room Number: ";
    cin >> wellness_patient_object.room_number;
    cout << "Enter Steps: ";
    cin >> wellness_patient_object.daily_step_count;
    cin.ignore();

    cout << "Enter Diet Plan: ";
    getline(cin, wellness_patient_object.diet_plan);

    cout << "Enter Advisor Name: ";
    getline(cin, health_advisor_object.person_name);
    cout << "Enter Adisor Age: ";
    cin >> health_advisor_object.age;
    cin.ignore();

    cout << "Enter Specialization: ";
    getline(cin, health_advisor_object.specialization);
    cout << "Enter visiting hours: ";
    getline(cin, health_advisor_object.visiting_hours);
    cout << "Enter disease name: ";
    getline(cin, health_advisor_object.disease_name);
    cout << "Enter advice note: ";
    getline(cin, health_advisor_object.advice_note);





    cout << "---- Wellness Patient Details ----" << endl;
    cout << "Name: " << wellness_patient_object.person_name << endl;
    cout << "Age: " << wellness_patient_object.age << endl;
    cout << "Pateient ID: " << wellness_patient_object.patient_id << endl;
    cout << "Room Number: " << wellness_patient_object.room_number << endl;
    cout << "Daily Step Count: " << wellness_patient_object.daily_step_count << endl;
    cout << "Diet Plan: " << wellness_patient_object.diet_plan << endl;

    if (wellness_patient_object.daily_step_count >= 7000)
    {
        cout << "Activity Status : Active" << endl;
    }

    else
    {
        cout << "Activity Status: Needs Improvement" << endl;
    }
    cout << endl;

    cout << "---- Health Advisor Details ----" << endl;
    cout << "Name: " << health_advisor_object.person_name << endl;
    cout << "Age: " << health_advisor_object.age << endl;
    cout << "Specialization: " << health_advisor_object.specialization << endl;
    cout << "Visiting Hours: " << health_advisor_object.visiting_hours << endl;
    cout << "Disease Focus: " << health_advisor_object.disease_name << endl;
    cout << "Advice Note: " << health_advisor_object.advice_note << endl;

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
