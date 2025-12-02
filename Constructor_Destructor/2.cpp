#include <iostream>
#include <string>

using namespace std;

class Ticket
{
private:
    string passengerName;
    string flightNumber;
    string seatNumber;

public:
    Ticket(string pName, string fNum, string sNum)
        : passengerName(pName), flightNumber(fNum), seatNumber(sNum)
    {
        cout << "--> Parameterized Constructor called for: " << passengerName << endl;
    }

    Ticket(const Ticket &other)
        : passengerName(other.passengerName), flightNumber(other.flightNumber), seatNumber(other.seatNumber)
    {
        cout << "--> Copy Constructor called to duplicate ticket for: " << passengerName << endl;
    }

    ~Ticket()
    {
        cout << "<-- Destructor called for ticket: " << passengerName << endl;
    }

    void displayTicket()
    {
        cout << "\n---------* Flight Ticket *---------" << endl;
        cout << "  Passenger Name: " << passengerName << endl;
        cout << "  Flight Number:  " << flightNumber << endl;
        cout << "  Seat Number:    " << seatNumber << endl;
        cout << "-----------------------------------" << endl;
    }

    void setPassengerName(string newName)
    {
        this->passengerName = newName;
    }

    void setSeatNumber(string newSeat)
    {
        this->seatNumber = newSeat;
    }
};

int main()
{

    cout << "--- Creating Primary Ticket ---" << endl;
    Ticket primaryTicket("Amit Patel", "AI-202", "14A");

    cout << "\n--- Duplicating Ticket for Family Member 1 ---" << endl;
    Ticket familyMember1 = primaryTicket;

    familyMember1.setPassengerName("Sunita Patel");
    familyMember1.setSeatNumber("14B");

    cout << "\n--- Duplicating Ticket for Family Member 2 ---" << endl;
    Ticket familyMember2 = primaryTicket;
    familyMember2.setPassengerName("Rahul Patel");
    familyMember2.setSeatNumber("14C");

    cout << "\n\n*** Displaying All Tickets for the Group ***" << endl;
    primaryTicket.displayTicket();
    familyMember1.displayTicket();
    familyMember2.displayTicket();

    cout << "\nProgram finished. Destructors will now be called in reverse order of creation." << endl;

    return 0;
}