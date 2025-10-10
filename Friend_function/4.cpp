#include <iostream>
#include <cctype>
using namespace std;

class Account
{
    friend void deposit(Account &a, float amount);
    friend void withdraw(Account &a, float amount);
    friend void checkBalance(Account &a);
    string accountHolderName;
    int accountNumber;
    float balance;

public:
    float InitializeData();
    float displayAccount();
};
class Transaction
{
    friend void deposit(Account &a, float amount);
    friend void withdraw(Account &a, float amount);
    friend void checkBalance(Account &a);
};

float Account ::InitializeData()
{
    cout << "Enter the Account Holder name : ";
    getline(cin, accountHolderName);
    cout << "Enter the account number : ";
    cin >> accountNumber;
    cout << "Enter the balance of your account : ";
    cin >> balance;
}
float Account ::displayAccount()
{
    cout << "Your account details are fetch : " << endl;
    cout << "Account Holder name : " << accountHolderName << endl;
    cout << "Account Number : " << accountNumber << endl;
    cout << "Balance : " << balance << endl;
}
void deposit(Account &a, float amount)
{
    cout << "Current balance : " << a.balance << endl;
    cout << "Enter amount you want to deposit : ";
    cin >> amount;
    if (amount < 0 && !isdigit(amount))
    {
        cout << "Enter positive amount : " << endl;
        deposit(a, amount);
    }
    else
    {
        a.balance = a.balance + amount;
    }
}
void withdraw(Account &a, float amount)
{
    cout << "Current balance : " << a.balance << endl;
    cout << "Enter the amount you want to withdraw : ";
    cin >> amount;
    if (a.balance < amount)
    {
        cout << "Insufficient balance." << endl;
        cout << "Retry with valid amount : " << endl;
        withdraw(a, amount);
    }
    else if (amount < 0)
    {
        cout << "Enter positive amount for withdrawl : " << endl;
        withdraw(a, amount);
    }
    else
    {
        a.balance = a.balance - amount;
    }
}
void checkBalance(Account &a)
{
    cout << "Account balance : " << a.balance << endl;
}

int main()
{
    Account a;
    Transaction b;
    float amount;
    cout << "Welcome to xyz bank" << endl;
    a.InitializeData();
    a.displayAccount();
    deposit(a, amount);
    withdraw(a, amount);
    checkBalance(a);
}
