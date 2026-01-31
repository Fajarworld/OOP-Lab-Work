Create a class Car with two public data members:
•	brand (string)
•	modelYear (int)
Add a function displayCar() to print the car details.
In main(), create two objects of Car and display their details.

#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int modelYear;

    void displayCar() {
        cout << "Brand: " << brand << endl;
        cout << "Model Year: " << modelYear << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "Civic";
    car1.modelYear = 2027;

    Car car2;
    car2.brand = "Honda";
    car2.modelYear = 2022;

    cout << "Car 1 details:" << endl;
    car1.displayCar();
    cout << "Car 2 details:" << endl;
    car2.displayCar();

    return 0;
}


 2. Create a class Student with the following:
•	name (string, private)
•	age (int, private)
Add:
•	Setters and getters for both variables.
•	A function displayInfo() to print student details.
In main(), create a Student object, set values using setters, and display info.


#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }

    void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.setName("SAJAL");
    s1.setAge(19);
    cout << "Student Details:" << endl;
    s1.displayInfo();
    return 0;
}

3. Create a class Room with private members:
•	length (double)
•	breadth (double)
•	height (double)
Add:
•	Parameterized constructor to initialize all values.
•	Function calculateArea() → returns area.
•	Function calculateVolume() → returns volume.
Write a program that creates two Room objects and displays their area and volume.

#include <iostream>
using namespace std;

class Room {
private:
    double length;
    double breadth;
    double height;

public:
    Room(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
Room room1(1.5, 8.2, 6.0);
    Room room2(12.0, 0.5, 7.5);

    cout << "Room 1 Area: " << room1.calculateArea() << endl;
    cout << "Room 1 Volume: " << room1.calculateVolume() << endl;

    cout << "Room 2 Area: " << room2.calculateArea() << endl;
    cout << "Room 2 Volume: " << room2.calculateVolume() << endl;

    return 0;
}

4. Create a class BankAccount with private members:
•	accountNumber (string)
•	balance (double)
Add:
•	Constructor to initialize values.
•	deposit(double amount) → add to balance.
•	withdraw(double amount) → subtract from balance if sufficient.
•	displayAccount() → show account details.
In main(), test deposit and withdraw operations.

#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit money: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdraw money: " << amount << endl;
        } else {
            cout << "no balance!" << endl;
        }
    }
void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc1("ACC434UI", 100000.0);
    acc1.displayAccount();
    acc1.deposit(1500.0);
    acc1.withdraw(2000.0);
    acc1.withdraw(60000.0);
    acc1.displayAccount();
    return 0;
}

5. Create a class called Invoice that a hardware store might use to represent an invoice for an item sold at the store. An Invoice should include six data members – a part number (type string), a part description (type string), a quantity of the item being purchased (type int), a price per item (type int) a value-added tax (VAT) rate as a decimal (type double), and a discount rate as a decimal (type double). 
Your class should have a default constructor as well as a parameterized constructor that initializes the six data members. The constructor should initialize the first four data members with values from parameters and the last two data members to default values of 0.20 percent and zero, respectively. 
Provide setter and getter methods for all data members. In addition, provide a member function named getInvoiceAmount( ) that calculates the invoice amount (i.e., multiplies the quantity by the price per item and applies the tax and discount amounts), then returns the amount. Perform validity checks on parameters of setters; if a parameter value is not positive, it should be left unchanged. 
Write a driver program to demonstrate Invoice’s capabilities.


#include <iostream>
using namespace std;

class Invoice {
private:
    string partNumber;
    string partDescription;
    int quantity;
    int pricePerItem;
    double vatRate;
    double discountRate;

public:
    Invoice() {
        partNumber = "";
        partDescription = "";
        quantity = 0;
        pricePerItem = 0;
        vatRate = 0.20;
        discountRate = 0.0;
    }

    Invoice(string pn, string pd, int q, int ppi) {
        partNumber = pn;
        partDescription = pd;
        quantity = (q > 0) ? q : 0;
        pricePerItem = (ppi > 0) ? ppi : 0;
        vatRate = 0.20;
        discountRate = 0.0;
    }

    void setPartNumber(string pn) { partNumber = pn; }
    void setPartDescription(string pd) { partDescription = pd; }
    void setQuantity(int q) { if (q > 0) quantity = q; }
    void setPricePerItem(int ppi) { if (ppi > 0) pricePerItem = ppi; }
    void setVatRate(double vat) { if (vat >= 0) vatRate = vat; }
    void setDiscountRate(double disc) { if (disc >= 0) discountRate = disc; }

    string getPartNumber() { return partNumber; }
    string getPartDescription() { return partDescription; }
    int getQuantity() { return quantity; }
    double getPricePerItem() { return pricePerItem; }
    double getVatRate() { return vatRate; }
    double getDiscountRate() { return discountRate; }

    double getInvoiceAmount() {
        double subtotal = quantity * pricePerItem;
        double vatAmount = subtotal * vatRate;
        double discountAmount = subtotal * discountRate;
        return subtotal + vatAmount - discountAmount;
    }
};
int main() {
    Invoice inv1;
    inv1.setPartNumber("P1001");
    inv1.setPartDescription("Hammer");
    inv1.setQuantity(10);
    inv1.setPricePerItem(150);
    inv1.setDiscountRate(0.22);

    cout << "Invoice 1:" << endl;
    cout << "Part Number: " << inv1.getPartNumber() << endl;
    cout << "Description: " << inv1.getPartDescription() << endl;
    cout << "Quantity: " << inv1.getQuantity() << endl;
    cout << "Price per Item: " << inv1.getPricePerItem() << endl;
    cout << "VAT Rate: " << inv1.getVatRate() << endl;
    cout << "Discount Rate: " << inv1.getDiscountRate() << endl;
    cout << "Invoice Amount: " << inv1.getInvoiceAmount() << endl;

    cout << endl;

    Invoice inv2("P2002", "Drill Machine", 5, 3000);
    inv2.setDiscountRate(0.05);

    cout << "Invoice 2:" << endl;
    cout << "Part Number: " << inv2.getPartNumber() << endl;
    cout << "Description: " << inv2.getPartDescription() << endl;
    cout << "Quantity: " << inv2.getQuantity() << endl;
    cout << "Price per Item: " << inv2.getPricePerItem() << endl;
    cout << "VAT Rate: " << inv2.getVatRate() << endl;
    cout << "Discount Rate: " << inv2.getDiscountRate() << endl;
    cout << "Invoice Amount: " << inv2.getInvoiceAmount() << endl;

    return 0;
}




