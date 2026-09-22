#include <iostream>
#include <string>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;
    float bonus;
    float total;

public:
    Employee() {
        id = 0;
        name = "Unknown";
        salary = 0;
        bonus = 0;
        total = 0;

        cout << "Default constructor called" << endl;
    }

    Employee(int i, string n, float s, float b) {
        id = i;
        name = n;
        salary = s;
        bonus = b;
        total = salary + bonus;

        cout << "Parameterized constructor called" << endl;
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << salary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << total << endl;
    }
};

int main() {
    Employee e1;
    e1.display();

    Employee e2(101, "John Doe", 50000, 10000);
    e2.display();

    return 0;
}