#include <iostream>
using namespace std;

int main()
{
    float hardness, Carbon, Tensile_strength, grade;

    cout << "Enter the hardness of steel : ";
    cin >> hardness;
    cout << "Enter the carbon content of steel : ";
    cin >> Carbon;
    cout << "Enter the Tensile strength : ";
    cin >> Tensile_strength;
    if (hardness > 50 || Carbon < 0.7 || Tensile_strength > 5600)
    {
        if (hardness > 50)
        {
            if (Carbon < 0.7)
            {
                if (Tensile_strength > 5600)
                {
                    grade = 10;
                }
                else
                {
                    grade = 9;
                }
            }
            else if (Tensile_strength > 5600)
            {
                grade = 7;
            }
            else
            { 
                grade = 6;
            }
        }
        else if (Tensile_strength > 5600)
        {
            if (Carbon < 0.7)
            {
                grade = 8;
            }
            else
            {
                grade = 6;
            }
        }

        else
        {
            grade = 6;
        }
    }
    else
    {
        grade = 5;
    }

    cout << "Your Certain grade is : " << grade;

    return 0;
}
