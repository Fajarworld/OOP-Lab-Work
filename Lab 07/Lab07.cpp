Task 1			      							(20 mark)
 Scenario: A university wants to manage different types of staff members (e.g., Teacher, Clerk, and Librarian).
•	Create an abstract class Staff with a pure virtual function calculateSalary().
•	Derive classes Teacher, Clerk, and Librarian that implement the function differently (e.g., teacher based on lectures, clerk on hours worked, librarian on number of books managed).
•	Demonstrate how abstraction allows defining a common interface but different implementations.


#include <iostream>
using namespace std;
class Staff {
public:
    virtual void calculatesalary() = 0;
};
//derv
class Teacher : public Staff {
public:
    void calculatesalary() {
        int lectures = 10;
        int rate = 50;
        double salary = lectures * rate;
        cout << "Teacher salary " << salary << endl;
    }
};
//der
class Clerk : public Staff {
public:
    void calculatesalary() {
        int hoursworked = 160;
        int payperhour = 150;
        double salary = hoursworked * payperhour;
        cout << "Clerk salary " << salary << endl;
    }
};

// Derived class
class Librarian : public Staff {
public:
    void calculatesalary() {
        int booksmanage = 300;
        int payperBook = 100;
        double salary = booksmanage * payperBook;
        cout << "Librarian salary " << salary << endl;
    }
};
int main() {
    Teacher t;
    Clerk c;
    Librarian l;
    cout << "Uni Staff salary" << endl;
    t.calculatesalary();
    c.calculatesalary();
    l.calculatesalary();
    return 0;
}

Task 2 										 (20 mark)
Scenario: A transport company has different vehicles (Car, Bike, and Bus).
•	Create an abstract class Vehicle with a pure virtual function getFuelEfficiency().
•	Each derived class should provide its own logic (e.g., Car = km/l, Bike = km/l, Bus = liters/100km).
•	Write a program where the user enters details and the program outputs the fuel efficiency of each vehicle.


#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void getfuelefficiency() = 0;
};
// der class
class Car : public Vehicle {
public:
    void getfuelefficiency() {
        double distance = 200, fuel = 20;
        cout << "car eff " << distance / fuel << " km/l" << endl;
    }
};
// deriv class
class Bike : public Vehicle {
public:
    void getfuelefficiency() {
        double distance = 150, fuel = 5;
        cout << "bike eff " << distance / fuel << " km/l" << endl;
    }
};
// deriv class
class Bus : public Vehicle {
public:
    void getfuelefficiency() {
        double distance = 100, fuel = 6;
        cout << "bus eff " << distance / fuel << " km/l" << endl;
    }
};

int main() {
    Car c;
    Bike b;
    Bus bs;
    cout << " fuel efficiency" << endl;
    c.getfuelefficiency();
    b.getfuelefficiency();
    bs.getfuelefficiency();
    return 0;
}

Task 3 										 (20 mark)
Scenario: An online shopping system has different types of payment methods (CreditCard, PayPal, CashOnDelivery).
•	Create an abstract class Payment with a pure virtual function processPayment(float amount).
•	Each derived class should override the function to display how the payment is processed.
•	In main(), simulate a shopping cart checkout using different payment methods to show abstraction in action.


#include <iostream>
using namespace std;
class Payment {
public:
    virtual void processpayment(float amount) = 0;
};
// der class
class CreditCard : public Payment {
public:
    void processpayment(float amount) {
        cout << "credit card pay done of " << amount << " rs" << endl;
    }
};
// der class
class PayPal : public Payment {
public:
    void processpayment(float amount) {
        cout << "paypal pay done of " << amount << " rs" << endl;
    }
};
// der class
class CashOnDelivery : public Payment {
public:
    void processpayment(float amount) {
        cout << "cash delivery pay of " << amount << " parcel arives" << endl;
    }
};
int main() {
    CreditCard c;
    PayPal p;
    CashOnDelivery cod;
    cout << " shopping cart" << endl;
    c.processpayment(2500);
    p.processpayment(1800);
    cod.processpayment(3200);

    return 0;
}