#include <iostream>
using namespace std;

int main()
{
    char input[100];
    int i = 0;

    cout << "Enter expression: ";
    cin >> input;

    while (input[i] != '\0')
    {
        if (input[i] == '+' ||
            input[i] == '-' ||
            input[i] == '*' ||
            input[i] == '/' ||
            input[i] == '%' ||
            input[i] == '=')
        {
            cout << "Operator: " << input[i] << endl;
        }

        i++;
    }

    return 0;
}
