1. Task 1: Cylinder Inherits Circle						
See the following class diagram of circle & cylinder, and implement the inheritance relationship of classes in C++. 
You need to implement the following items for each class;
1.	Constructors
2.	Setters
3.	Getters 
4.	Member Methods 



#include <iostream>
using namespace std;
const double PI = 3.14;
class Circle {
private:
    double radius;

public:
    //constr
    Circle() {
        radius = 5;
    }

    //set
    void setRadius(double r) {
        radius = r;
    }

    //get
    double getRadius() {
        return radius;
    }

    void display() {
        double area = PI * radius * radius;
        double circum = 2 * PI * radius;
        cout << "Circle" << endl;
        cout << "Radius = " << radius << endl;
        cout << "Area = " << area << endl;
        cout << "Circumference = " << circum << endl;
    }
};
class Cylinder : public Circle {
private:
    double height;
public:
    //constructor
    Cylinder() {
        height = 10;
    }

    //set
    void setHeight(double h) {
        height = h;
    }

    //get
    double getHeightValue() {
        return height;
    }

    void display() {
        double sa = 2 * PI * getRadius() * height + 2 * PI * getRadius() * getRadius();
        double v = PI * getRadius() * getRadius() * height;
        cout << "Cylinder" << endl;
        cout << "Radius = " << getRadius() << endl;
        cout << "Height = " << height << endl;
        cout << "Surface Area = " << sa << endl;
        cout << "Volume = " << v << endl;
    }
};

int main() {
    Circle c;
    c.display();
    Cylinder cy;
    cy.display();
    return 0;
}

2. Task 02:   Point & Point3D			                              		 
See the following class diagram of point & point3d and implement the inheritance relationship of classes in C++. 


#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point() {
        x = 0;
        y = 0;
    }

    //set
    void setPoint(int a, int b) {
        x = a;
        y = b;
    }

    //get
    int getX() {
        return x;
    }

    //get
    int getY() {
        return y;
    }

    void display() {
        cout << "Point" << endl;
        cout << "x " << x << endl;
        cout << "y " << y << endl;
    }
};

class Point3D : public Point {
private:
    int z;
public:
    Point3D() {
        z = 0;
    }

    void setPoint3D(int a, int b) {
        setPoint(a, b);
    }

    void display() {
        cout << "Point 3D" << endl;
        cout << " x " << getX() << endl;
        cout << " y " << getY() << endl;
        cout << " z " << z << endl;
    }
};

int main() {
    Point3D p2;
    p2.setPoint3D(5, 6);
    p2.display();
    return 0;
}

3.  Task 03: See the following class diagram and implement multi-level inheritance relationship of classes in C++. 
You need to implement following items for each class;
1.	Constructors
2.	Setters
3.	Getters 
4.	Member Methods 
Demonstrate working of your classes. 
 

#include <iostream>
using namespace std;

class Asset {
protected:
    string owner;
public:
    Asset() { owner = "Unknown"; }
    Asset(string o) { owner = o; }
    void setOwner(string o) { owner = o; }
    string getOwner() { return owner; }
    void showOwner() { cout << "Owner: " << owner << endl; }
};

class BankAccount : public Asset {
protected:
    int accountNo;
public:
    BankAccount() { accountNo = 0; }
    BankAccount(string o, int acc) : Asset(o) { accountNo = acc; }
    void setAccountNo(int acc) { accountNo = acc; }
    int getAccountNo() { return accountNo; }
    void showAccount() { showOwner(); cout << "Account No: " << accountNo << endl; }
};

class SavingAccount : public BankAccount {
protected:
    double rate;
public:
    SavingAccount() { rate = 0.0; }
    SavingAccount(string o, int acc, double r) : BankAccount(o, acc) { rate = r; }
    void setRate(double r) { rate = r; }
};

SavingAccount(string o, int acc, double r) : BankAccount(o, acc) { rate = r; }
void setRate(double r) { rate = r; }
double getRate() { return rate; }
void showSaving() { showAccount(); cout << "Interest Rate: " << rate << "%" << endl; }

class CheckingAccount : public SavingAccount {
private:
    double balance;
public:
    CheckingAccount() { balance = 0.0; }
    CheckingAccount(string o, int acc, double r, double b) : SavingAccount(o, acc, r) { balance = b; }
    void setBalance(double b) { balance = b; }
    double getBalance() { return balance; }
    void showChecking() { showSaving(); cout << "Balance: $" << balance << endl; }
};

int main() {
    CheckingAccount c1;
    c1.showChecking();

    CheckingAccount c2("Sajal", 12345, 3.5, 10000.5);
    c2.showChecking();
    c1.setOwner("Ali");
    c1.setAccountNo(67890);
    c1.setRate(5.0);
    c1.setBalance(2500.75);
    c1.showChecking();
}


