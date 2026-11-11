#include <iostream>
using namespace std;

int main()
{
    char input[200];

    cout << "Enter comment: ";
    cin.getline(input, 200);

    if (input[0] == '/' && input[1] == '/')
    {
        cout << "Single Line Comment";
    }
    else if (input[0] == '/' && input[1] == '*')
    {
        int i = 2;
        bool commentEnd = false;

        while (input[i] != '\0')
        {
            if (input[i] == '*' && input[i + 1] == '/')
            {
                commentEnd = true;
                break;
            }

            i++;
        }

        if (commentEnd)
            cout << "Multiple Line Comment";
        else
            cout << "Invalid Multiple Line Comment";
    }
    else
    {
        cout << "Not a Comment";
    }

    return 0;
}
