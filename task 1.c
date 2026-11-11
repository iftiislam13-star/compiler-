#include <iostream>
using namespace std;

int main()
{
    char input[100];
    int i = 0;
    bool numeric = true;

    cout << "Enter input: ";
    cin >> input;

    while (input[i] != '\0')
    {
        if (input[i] < '0' || input[i] > '9')
        {
            numeric = false;
            break;
        }

        i++;
    }

    if (numeric)
        cout << "Numeric Constant";
    else
        cout << "Not Numeric";

    return 0;
}
