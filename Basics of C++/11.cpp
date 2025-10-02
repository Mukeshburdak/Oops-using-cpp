#include <iostream>
using namespace std;

int main()
{
    int x, i = 1, voters, cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, cand5 = 0, spoilt_ballot = 0;
    string winner;

    cout << "Enter the total no. of voters: ";
    cin >> voters;

    while (i <= voters)
    {
        cout << "Which candidate do you vote: ";
        cin >> x;
        switch (x)
        {
        case 1:
        {
            cand1++;
            break;
        }
        case 2:
        {
            cand2++;
            break;
        }
        case 3:
        {
            cand3++;
            break;
        }
        case 4:
        {
            cand4++;
            break;
        }
        case 5:
        {
            cand5++;
            break;
        }
        default:
            cout << "Cast vote to valid candidate." << endl;
        }
        if (x > 5)
        {
            spoilt_ballot++;
        }
        i++;
    }

    cout << "Total votes to cand1=" << cand1 << endl;
    cout << "Total votes to cand2=" << cand2 << endl;
    cout << "Total votes to cand3=" << cand3 << endl;
    cout << "Total votes to cand4=" << cand4 << endl;
    cout << "Total votes to cand5=" << cand5 << endl;

    int largest = cand1;
    winner = "cand1";

    if (cand2 > largest)
    {
        largest = cand2;
        winner = "cand2";
    }
    if (cand3 > largest)
    {
        largest = cand3;
        winner = "cand3";
    }
    if (cand4 > largest)
    {
        largest = cand4;
        winner = "cand4";
    }
    if (cand5 > largest)
    {
        largest = cand5;
        winner = "cand5";
    }

    cout<<"Tie-break rule applied(if required): Candidate with lowest number wins."<<endl;

    cout << "The winner candidate is: " << winner<<" , Total votes = "<<largest << endl;
    cout << "Total number of spoilt ballot: " << spoilt_ballot << endl;

    return 0;
}
