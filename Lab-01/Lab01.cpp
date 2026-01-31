 1. A program that stores your name, age, and GPA in variables and prints them.

#include <iostream>
using namespace std;

int main()
{
    cout << "Name: Sajal Tariq" << endl;
    cout << "Age: 19" << endl;
    cout << "GPA: 3.8" << endl;

    return 0;
}

2. The user is to enter two integers and print their sum, difference, product, and division.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    cout << "Division: " << (float)a / b << endl;

    return 0;
}

 3. Declare variables of different data types (int, float, char, string, bool) and print their values

#include <iostream>
using namespace std;

int main() {
    int age = 19;
    float gpa = 3.8;
    char grade = 'A';
    string name = "Sajal Tariq";
    bool isStudent = true;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;

    return 0;
}

4. Print numbers from 1 to 10 using a loop.

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }

    return 0;
}

5. Print the multiplication table of 5 using a loop.

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "5 x " << i << " = " << 5 * i << endl;
    }

    return 0;
}

6. Find the sum of all even numbers from 1 to 100. 

#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 2; i <= 100; i += 2) {
        sum += i;
    }

    cout << "Sum of even numbers from 1 to 100: " << sum << endl;

    return 0;

7. Write a program to check whether a given number is prime or not (using loop).

#include <iostream>
using namespace std;

int main() {
    bool isPrime = true;

    cout << "Enter a number: ";
    int num;
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
    return 0;
}

8. Write a function add(int a, int b) that returns the sum of two numbers. 

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 10, y = 15;
    cout << "Sum: " << add(x, y) << endl;
    return 0;
}

9. Write a function factorial (int n) that returns the factorial of a number. 

#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}

10. Write a function isEven(int n) that returns true if the number is even, otherwise false. 

#include <iostream>
using namespace std;

bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isEven(num))
        cout << num << " is even." << endl;
    else
        cout << num << " is odd." << endl;

    return 0;
}

11.  Write a function power(int base, int exponent) that calculates base^exponent (without using built-in pow).

#include <iostream>
using namespace std;

int power(int base, int exponent) {
    int result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    cout << base << " ** " << exponent << " = " << power(base, exponent) << endl;

    return 0;
}



