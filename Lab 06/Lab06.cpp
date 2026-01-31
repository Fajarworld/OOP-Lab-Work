Hierarchical Inheritance:
Task 1: Book, EBook, AudioBook, PaperBook				
See the following class diagram of Book, ElectronicBook, AudioBook, & PaperBook, and implement the inheritance relationship of classes in C++. 
You need to implement the following items for each class;
1.	Constructors
2.	Setters
3.	Getters 
4.	Member Methods 


#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    float price;
    string ISBN;
    int numberofpages;
public:
    //deft cons
    Book() {
        title = "empty";
        author = "empty";
        price = 0.0;
        ISBN = "empty";
        numberofpages = 0;
    }

    //para cons
    Book(string t, string a, float p, string I, int nfp) {
        title = t;
        author = a;
        price = p;
        ISBN = I;
        numberofpages = nfp;
    }
};

//set
void setTitle(string t) {
    title = t;
}

void setAuthor(string a) {
    author = a;
}

void setPrice(float p) {
    price = p;
}

void setISBN(string I) {
    ISBN = I;
}

void setNumberOfPages(int nfp) {
    numberofpages = nfp;
}

//get
string getTitle() {
    return title;
}

string getAuthor() {
    return author;
}

float getPrice() {
    return price;
}

string getISBN() {
    return ISBN;
}


int getNumberOfPages() {
    return numberofpages;
}

void displayBookInfo() {
    cout << "Title" << title << endl;
    cout << "Author" << author << endl;
    cout << "Price" << price << endl;
    cout << "ISBN" << ISBN << endl;
    cout << "numberofpages" << numberofpages << endl;
}

class ebook : public Book {
private:
    float fileSize;
    string url;
public:
    ebook() {
        fileSize = 0.0;
        url = "";
    }

    ebook(string t, string a, float p, string I, int nfp, float fs, string f) :
        Book(t, a, p, I, nfp) {
        fileSize = fs;
        url = f;
    }

    //set
    void setFileSize(float fs) {
        fileSize = fs;
    }

    void setUrl(string f) {
url = f;

//get
float getFileSize() {
    return fileSize;
}

string getUrl() {
    return url;
}

void displayBookInfo() {
    cout << "eBook Details" << endl;
    displayBookInfo();
    cout << "File Size = " << fileSize << " MB" << endl;
    cout << "url = " << url << endl;
}

class Paperback : public Book {
private:
    float weight;
    int numberofcopies;

public:
    //def ccons
    Paperback() {
        weight = 0.0;
        numberofcopies = 0;
    }

    //para
    Paperback(string t, string a, float p, string I, int nfp, float w, int c)
        : Book(t, a, p, I, nfp) {
        weight = w;
    numberofcopies = c;
};

//set
void setweight(float w) {
    weight = w;
}

void setnumberofcopies(int c) {
    numberofcopies = c;
}

//get
float getweight() {
    return weight;
}

int getnumberofcopies() {
    return numberofcopies;
}

void displayPaperbookInfo() {
    cout << "Paperbook Details" << endl;
    displayBookInfo();
    cout << "Weight" << weight << " gram" << endl;
    cout << "Copies" << numberofcopies << endl;
}
};

class AudioBook : public Book {
private:
    int duration;

public:
    //def cons
AudioBook() {
    duration = 0;
}

//para cons
AudioBook(string t, string a, float p, string I, int nfp, int d, string s) :
    Book(t, a, p, I, nfp) {
    duration = d;
}

//set
void setduration(int d) {
    duration = d;
}

int getduration() {
    return duration;
}

void displayAudioBookInfo() {
    cout << "AudioBook Details" << endl;
    displayBookInfo();
    cout << "Duration: " << duration << " mins" << endl;
}

int main() {
    ebook e;
    e = ebook("The Art of Being Alone", "Sajal Fajar", 9.99, "ISBN100", 356, 2.5, "PDF");
    e.displayebookInfo();
    cout << " " << endl;

    Paperbook p;
    p = Paperbook("Waves of Silence", "Sajal Fajar", 14.99, "ISBN200", 420, 0.8, 50);
    p.displayPaperbookInfo();
    cout << " " << endl;
}

AudioBook a;
a = AudioBook("Echoes of the Mind", "Sajal Fajar", 19.99, "ISBN300", 300, 480, "Narrated by Sajal Fajar");
a.displayAudioBookInfo();
return 0;
}

Task 2: Multiple Inheritance 						

See the following class diagram and implement the multi-level inheritance relationship of classes in C++. 
You need to implement the following items for each class;
1.	Constructors
2.	Setters
3.	Getters 
4.	Member Methods 
Demonstrate the working of your classes. 


#include <iostream>
using namespace std;

class BankAccount {
private:
    string bankName;
    float balance;

public:
    //def cons
    BankAccount() {
        bankName = "empty";
        balance = 0.0;
    }

    //para cons
    BankAccount(string name, float b) {
        bankName = name;
        balance = b;
    }

    //set
    void setBankAccount(string name, float b) {
        bankName = name;
        balance = b;
    }

    //get
    string getBankName() {
        return bankName;
    }

    float getBalance() {
        return balance;
    }
};

void displayBankAccount() {
    cout << "Bank Name: " << bankName << endl;
    cout << "Balance: " << balance << endl;
}

class SavingAccount: public BankAccount {
private:
    float interestRate;
public:
    SavingAccount() {
        interestRate = 0.0;
    }

    SavingAccount(string name, float b, float rate) : BankAccount(name, b) {
        interestRate = rate;
    }

    void setSavingAccount(string name, float b, float rate) {
        setBankAccount(name, b);
        interestRate = rate;
    }

    float getInterestRate() {
        return interestRate;
    }

    void displaySavingAccount() {
        cout << "Saving Account Details" << endl;
        displayBankAccount();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};


class CheckingAccount: public BankAccount {
private:
    float overdraftLimit;
public:
    CheckingAccount() {
        overdraftLimit = 0.0;
    }

    CheckingAccount(string name, float b, float limit) : BankAccount(name, b) {
        overdraftLimit = limit;
    }

    void setCheckingAccount(string name, float b, float limit) {
        setBankAccount(name, b);
        overdraftLimit = limit;
    }

    float getOverdraftLimit() {
        return overdraftLimit;
    }

    void displayCheckingAccount() {
        cout << "Checking Account Details" << endl;
        displayBankAccount();
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};


int main() {
    SavingAccount s;
    s.setSavingAccount("HBL Bank", 504500, 8.5);
    s.displaySavingAccount();
    cout << endl;
    CheckingAccount c;
    c.setCheckingAccount("UBL Bank", 365000, 100000);
    c.displayCheckingAccount();
    return 0;
}

Task 3: Hybrid Inheritance							(20 mark)
See the following class diagram and implement the multiple inheritance relationship of classes in C++. 
You need to implement the following items for each class;
1.	Constructors
2.	Setters
3.	Getters 
4.	Member Methods 
Demonstrate the working of your classes. 


#include <iostream>
using namespace std;

class person {
private:
    string name;
    int age;
public:
    //def cons
    person() {
        name = "nempty";
        age = 0;
    }

    //para
    person(string n, int a) {
        name = n;
        age = a;
    }

    //set
    void setname(string n) {
        name = n;
    }

    void setage(int a) {
        age = a;
    }

    //get
    string getname() {
        return name;
    }

    int getage() {
        return age;
    }
};
void displayperson() {
        cout << "name " << name << endl;
        cout << "age " << age << endl;
    }
};

class student: virtual public person {
private:
    string id;
public:
    //def cons
    student() {
        id = "emptyy";
    }

    //para
    student(string n, int a, string i) : person(n, a) {
        id = i;
    }

    //set
    void setid(string i) {
        id = i;
    }

    //get
    string getid() {
        return id;
    }

    void displaystudent() {
        displayperson();
        cout << "student id " << id << endl;
    }
};
void displayperson() {
        cout << "name " << name << endl;
        cout << "age " << age << endl;
    }
};

class student : virtual public person {
private:
    string id;
public:
    //def cons
    student() {
        id = "emptyy";
    }

    //para
    student(string n, int a, string i) : person(n, a) {
        id = i;
    }

    //set
    void setid(string i) {
        id = i;
    }

    //get
    string getid() {
        return id;
    }

    void displaystudent() {
        displayperson();
        cout << "student id " << id << endl;
    }
};

class faculty: virtual public person {
private:
    string department;
public:
    //def cons
    faculty() {
        department = "empty";
    }

    //para
    faculty(string n, int a, string d) : person(n, a) {
        department = d;
    }

    //set
    void setdepartment(string d) {
        department = d;
    }

    //get
    string getdepartment() {
        return department;
    }

    void displayfaculty() {
        displayperson();
        cout << "department " << department << endl;
    }
};

class ta: public student, public faculty {
private:
    string subject;
public:
    //Def cons
    ta() {
        subject = "none";
    }
//para
    ta(string n, int a, string i, string d, string s)
    : person(n, a), student(n, a, i), faculty(n, a, d) {
        subject = s;
    }
    //set
    void setsubject(string s) {
        subject = s;
    }
    //get
    string getsubject() {
        return subject;
    }
    void displayta() {
        displayperson();
        cout << "student id " << getid() << endl;
        cout << "department " << getdepartment() << endl;
        cout << "subject " << subject << endl;
    }
};

int main() {
    ta t("Sajal Fajar", 19, " 10011", "Computer Science", "OOP");
    t.displayta();
    return 0;
}
