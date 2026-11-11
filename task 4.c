#include <iostream>
using namespace std;

int main()
{
    char input[100];
    int i = 0;
    bool valid = true;

    cout << "Enter identifier: ";
    cin >> input;

    // Check first character
    if (!((input[0] >= 'A' && input[0] <= 'Z') ||
          (input[0] >= 'a' && input[0] <= 'z') ||
          input[0] == '_'))
    {
        valid = false;
    }

    // Check remaining characters
    i = 1;

    while (input[i] != '\0')
    {
        if (!((input[i] >= 'A' && input[i] <= 'Z') ||
              (input[i] >= 'a' && input[i] <= 'z') ||
              (input[i] >= '0' && input[i] <= '9') ||
              input[i] == '_'))
        {
            valid = false;
            break;
        }

        i++;
    }

    if (valid)
        cout << "Valid Identifier";
    else
        cout << "Invalid Identifier";

    return 0;
}
