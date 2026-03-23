// Smart Device.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


class Camera
{
public: 
    int camera_megapixels;

};

class MusicPlayer
{
public:
    int speaker_power;
};

class SmartPhone : public Camera , public MusicPlayer
{
public:
    string brand_name;
};

int main()
{


    SmartPhone phone_object;

    cout << "Enter Brand: ";
    getline(cin, phone_object.brand_name);
    cout << "Enter Camera pixels: ";
    cin >> phone_object.camera_megapixels;
    cout << "Enter Speaker power: ";
    cin >> phone_object.speaker_power;

    cout << "Brand: " << phone_object.brand_name << endl;
    cout << "Camera: " << phone_object.camera_megapixels << endl;
    cout << "Speaker power: " << phone_object.speaker_power << endl;








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
