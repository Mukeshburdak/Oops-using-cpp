#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string password;
    char c;
    int i = 0, upper = 0, lower = 0, num = 0, special_char = 0, length = 0, j = -1;
    cout << "Enter the password : ";
    getline(cin, password);

    for (i = 0; password[i] != '\0'; i++)
    {
        c = password[i];
        if (isupper(c))
        {
            upper++;
        }
        else if (islower(c))
        {
            lower++;
        }
        else if (isdigit(c))
        {
            num++;
        }
        else
        {
            special_char++;
        }
    }
    length = upper + lower + num + special_char;

    if (length >= 8 && (num > 0 && upper > 0 && lower > 0 && special_char > 0))
    {
        j = 2;
    }
    else if ((length >= 6) && ((upper != 0 && lower != 0) || (upper != 0 && num != 0) || (upper != 0 && special_char != 0) || (lower != 0 && num != 0) || (lower != 0 && special_char != 0) || (num != 0 && special_char != 0)))
    {
        j = 1;
    }
    else
    {
        j = 0;
    }

    cout << "Uppercase Letters: " << upper << endl;
    cout << "Lowercase Letters: " << lower << endl;
    cout << "Digits: " << num << endl;
    cout << "Special Characters: " << special_char << endl;
    switch (j)
    {
    case 0:
    {
        cout << "Password Strength: Weak" << endl;
        break;
    }
    case 1:
    {
        cout << "Password Strength: Moderate" << endl;
        break;
    }
    case 2:
    {
        cout << "Password Strength: Strong" << endl;
        break;
    }
    default:
    {
        cout << "Password Invaild" << endl;
        break;
    }
    }
}
