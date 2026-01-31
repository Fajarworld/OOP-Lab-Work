 1. Scenario: A Library needs to store details of books. Some books are newly added without full info, while others are entered with complete details.

•	Create a class Book with members:
o	string title
o	string author
o	int year

Define:
 
•	A default constructor that sets title = "Unknown", author = "Not Assigned", year
= 0.
•	A parameterized constructor that initializes all members.
•	A display() function to print book info.

Main:

•	Create one object with the default constructor (new book, no info yet).
•	Create another with the parameterized constructor (complete book info).
•	Display both.


#include <iostream>
using namespace std;

class Book {
    string title;
    string author;
    int year;

public:
    Book() {
        title = "Unknown";
        author = "Not Assigned";
        year = 0;
    }

    Book(string t, string a, int y) {
        title = t;
        author = a;
        year = y;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Book book1;
    Book book2("Cinderella", "Charles Perrault", 1697);
    cout << "Book 1: " << endl;
    book1.display();
    cout << "Book 2: " << endl;
    book2.display();
    return 0;
}

 2. Scenario: An Online Shopping System sometimes needs to copy details of an existing product into another object (e.g., when creating a duplicate listing).

•	Create a class Product with members:
o	string name
o	double price
o	string category

Define:

•	A parameterized constructor to set product details.
 
•	A copy constructor that copies details from another object.
•	A display() function.

Main:

•	Create a product using the parameterized constructor.
•	Create another product using the copy constructor.
•	Display both and show that the copy worked.



#include <iostream>
using namespace std;

class Product {
    string name;
    double price;
    string category;

public:
    Product(string n, double p, string c) {
        name = n;
        price = p;
        category = c;
    }

    Product(const Product& p) {
        name = p.name;
        price = p.price;
        category = p.category;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Category: " << category << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Product p1("Chocolate", 250, "Food");
    Product p2(p1);
    cout << "Product 1:" << endl;
    p1.display();
    cout << "Product 2:" << endl;
    p2.display();
    return 0;
}

3. Scenario: A Bank System automatically closes accounts when the program ends.

•	Create a class BankAccount with members:
o	string accountHolder
o	double balance

Define:

•	A parameterized constructor that initializes account details.
•	A destructor that prints:
"Account of <accountHolder> with balance <balance> is now closed."
 
Main:

•	Create two bank account objects.
•	When the program ends, observe how destructors are called automatically.


#include <iostream>
using namespace std;

class BankAccount {
    string accountHolder;
    double balance;
public:
    BankAccount(string h, double b) {
        accountHolder = h;
        balance = b;
    }

    ~BankAccount() {
        cout << "Account of " << accountHolder
             << " with balance " << balance
             << " is now closed." << endl;
    }
};

int main() {
    BankAccount a1("Sajal Fajar", 50000);
    BankAccount a2("Mairah Kanwal", 12000);
    cout << "Bank account created." << endl;
    return 0;
}



