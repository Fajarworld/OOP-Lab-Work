Create a class Person with private data members name and socialID.

•	Write setter and getter functions to update and display the values.
•	Demonstrate data hiding by trying to access private members directly (should give an error).

#include <iostream>
using namespace std;
class Person {
private:
    string name;
    int socialID;
public:
    Person(int n, int ID) :name(n), socialID(ID){}

    void setName(string n) {
        name = n;
    }

    bool setsocialID(int id) {
        socialID = id;
    }

    string getName() {
        return name;
    }

    bool getsocialId() {
        return socialID >= 0 && socialID <= 1001;
    }

    void displayInfo() {
        cout << "name" << name << endl;
        cout << "Id" << ID << endl;
    }
};
bool setsocialID(int id) {
    socialID = id;
}

string getName() {
    return name;
}

bool getsocialId() {
    return socialID >= 0 && socialID <= 1001;
}

void displayInfo() {
    cout << "name" << name << endl;
    cout << "Id" << ID << endl;
}

int main() {
    Person p1("sajal", 1000);
    p1.name;
    p1.id;
    return 0;
}

2. Create a class called MotorVehicle that represents a motor vehicle using data members:              make (type string), fuelType (type string), yearOfManufacture (type int), color (type string), and engineCapacity (type int). Your class should have three constructors (default, argument & copy) that initialize all data members. Provide setter and getter methods for each data member. Add a member function called displayCardDetails( ) that displays the five data members in five separate lines in the form “member name: member value”.
Write a program to demonstrate MotorVehicle’s capabilities


#include <iostream>
using namespace std;

class MotorVehicle {
private:
    string make;
    string fuelType;
    int yearOfManufacture;
    string color;
    int engineCapacity;

public:
    MotorVehicle() {
        make = "empty";
        fuelType = "empty";
        yearOfManufacture = 0000;
        color = "empty";
        engineCapacity = 0000;
    }

    MotorVehicle(string me, string ft, int ym, string c, int capacity) {
        make = me;
        fuelType = ft;
        yearOfManufacture = ym;
        color = c;
        engineCapacity = capacity;
    }
};

MotorVehicle(const MotorVehicle& mvh) {
    make = mvh.make;
    fuelType = mvh.fuelType;
    yearOfManufacture = mvh.yearOfManufacture;
    color = mvh.color;
    engineCapacity = mvh.engineCapacity;
}

void setMake(string me) {
    make = me;
}

void setFuelType(string ft) {
    fuelType = ft;
}

void setYearOfManufacture(int ym) {
    yearOfManufacture = ym;
}

void setColor(string c) {
    color = c;
}

void setEngineCapacity(int capacity) {
    engineCapacity = capacity;
}

string getMake() const {
    return make;
}

string getFuelType() const {
    return fuelType;
}

int getYearOfManufacture() const {
    return yearOfManufacture;
}

string getColor() const {
    return color;
}

int getEngineCapacity() const {
    return engineCapacity;
}

void displayCarDetails() const {
    cout << "Make: " << make << endl;
    cout << "Fuel Type: " << fuelType << endl;
    cout << "Year of Manufacture: " << yearOfManufacture << endl;
    cout << "Color: " << color << endl;
    cout << "Engine Capacity: " << engineCapacity << " CC" << endl;
}

int main() {
    MotorVehicle mv1;
    cout << "vechile 1 is " << endl;
    mv1.displayCardDetails();
    cout << endl;

    MotorVehicle mv2("BMW", "Deasil", 2050, "Pink", 1800);
    cout << "vechile 2 is ." << endl;
    mv2.displayCardDetails();
    cout << endl;

    MotorVehicle mv3(mv2);
    cout << "vechile 3 is " << endl;
    mv3.displayCardDetails();
    cout << endl;

    mv1.setMake("Suzuki");
    mv1.setFuelType("Petrol");
    mv1.setYearOfManufacture(2024);
    mv1.setColor("silver");
    mv1.setEngineCapacity(1500);
    cout << " details " << endl;
    mv1.displayCardDetails();

    return 0;
}

3. Create a class called Date that includes three pieces of information as data members; a month (type int), a day (type int), and a year (type int). Your class should have three constructors that initialize the three data members. For the purpose of this exercise, assume that the values provided for the year and day are correct, but ensure that the month value in the range 1-12; if it isn’t, set the month to 1.
Provide setter and getter methods for each data member. Provide a member function displayDate() that displays the month, day and year in the provided format, i.e., day–month–year.
Write a test program that demonstrates class Date’s capabilities.


#include <iostream>
using namespace std;
class Date {
private:
    int day;
    int month;
    int year;
public:
    Date() {
        day = 10;
        month = 7;
        year = 2006;
    }
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
        if (m >= 1 && m <= 12)
            month = m;
        else month = 1;
    }
    Date(const Date& ov) {
        day = ov.day;
        month = ov.month;
        year = ov.year;
    }
};

class Date {
    int day, month, year;

public:
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }

    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    Date(const Date &ov) {
        day = ov.day;
        month = ov.month;
        year = ov.year;
    }

    void displayDate() {
        cout << day << " " << month << " " << year << endl;
    }
};

int main() {
    Date d1;
    cout << "day" << endl;
    d1.displayDate();

    Date d2(12, 8, 2022);
    cout << "day" << endl;
    d2.displayDate();

    Date d3(30, 15, 2024);
    cout << "month" << endl;
    d3.displayDate();

    Date d4(d2);
    cout << "copy" << endl;
    d4.displayDate();

    return 0;
}