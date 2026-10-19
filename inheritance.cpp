#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void showInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Employee inherits from Person
class Employee : public Person {
protected:
    string employeeID;
    string department;

public:
    Employee(string n, int a, string id, string dept)
        : Person(n, a) {
        employeeID = id;
        department = dept;
    }

    void workDetails() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
    }
};

// Staff inherits from Employee
class Staff : public Employee {
private:
    double salary;

public:
    Staff(string n, int a, string id, string dept, double sal)
        : Employee(n, a, id, dept) {
        salary = sal;
    }

    void giveSalary() {
        cout << "Salary: " << salary << endl;
    }

    void display() {
        showInfo();       // Inherited from Person
        workDetails();    // Inherited from Employee
        giveSalary();     // Defined in Staff
    }
};

int main() {
    Staff s("Desire", 20, "E001", "Engineering", 250000);

    cout << "--- Staff Member Details ---" << endl;
    s.display();

    return 0;
}