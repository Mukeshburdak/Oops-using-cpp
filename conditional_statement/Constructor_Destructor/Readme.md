Problem Q1. 
-
Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent 
toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps track of 
the number of cars that have gone by, and of the total amount of money collected. Model this 
tollbooth with a class called tollBooth. The two data items are a type unsigned int to hold the 
total number of cars, and a type double to hold the total amount of money collected. A 
constructor initializes both of these to 0. A member function called payingCar() increments 
the car total and adds 0.50 to the cash total. Another function, called nopayCar(), increments 
the car total but adds nothing to the cash total. Finally, a member function called display() 
displays the two totals. Make appropriate member functions const. 

Include a program to test this class. This program should allow the user to push one key to 
count a paying car, and another to count a nonpaying car. Pushing the Esc key should cause the 
program to print out the total cars and total cash and then exit. 

---
Problem Q2.
-
In an airline reservation system, when a family or group books tickets together, many 
details (such as flight number and route) remain the same. Instead of re-entering all the details 
for each passenger, the system can duplicate an existing ticket object. 
You are required to design a class Ticket in C++ that demonstrates how a copy constructor 
can be used to duplicate ticket details for multiple passengers in a group booking. 

Class Design 

• Data Members 

o string passengerName 

o string flightNumber 

o string seatNumber 

• Constructors 

o Parameterized Constructor – initializes passenger details. 

o Copy Constructor – duplicates an existing Ticket object. 

• Member Function 

o void displayTicket() – prints ticket details. 

• Destructor 

o Displays a message when a ticket object is destroyed (to track lifecycle). 

Detailed Tasks 

1. Create a primary ticket for the first passenger using the parameterized constructor.

3. Use the copy constructor to generate duplicate tickets for family/group members.
  
5. Modify only passenger name and seat number for new passengers (since flight number 
remains the same).

7. Display all ticket details for the group.
  
9. Show how the destructor is called for each ticket object at the end of the program.

---
Problem Q3. 
-
In a company, it is essential to track how many employees are currently active in the 
system. Each time a new employee joins, the system should increase the employee count, and 
when an employee leaves (or the object is destroyed), the count should decrease 
automatically. You are required to design a class Employee in C++ that demonstrates how 
static data members can be used to track the number of live objects in a program. 

Class Design 

• Data Members 

o string name – Employee name 

o int id – Employee ID 

o static int employeeCount – Static counter for active employees 

• Constructors 

o Parameterized constructor – Initializes employee details and increments 
employeeCount. 

• Destructor 

o Decrements employeeCount and displays a message indicating which 
employee left. 

• Member Function 

o void displayEmployee() – Prints the employee’s name and ID. 

o static void displayCount() – Prints the current number of active employees. 

Detailed Tasks 

1. Create several employee objects using the parameterized constructor.
   
3. Display the total number of active employees after each creation. 

4. Destroy some employee objects (either manually or when they go out of scope). 

5. Display the total number of active employees after destruction. 

6. Demonstrate that the static counter is shared among all objects.

---
