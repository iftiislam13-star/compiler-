#include <iostream>
using namespace std;

int main()
{
    char firstName[50];
    char lastName[50];
    char fullName[100];

    int i = 0;
    int j = 0;

    cout << "Enter first name: ";
    cin >> firstName;

    cout << "Enter last name: ";
    cin >> lastName;

    // Copy first name
    while (firstName[i] != '\0')
    {
        fullName[i] = firstName[i];
        i++;
    }

    // Add space
    fullName[i] = ' ';
    i++;

    // Copy last name
    while (lastName[j] != '\0')
    {
        fullName[i] = lastName[j];

        i++;
        j++;
    }

    // End the string
    fullName[i] = '\0';

    cout << "Full Name = " << fullName;

    return 0;
}
