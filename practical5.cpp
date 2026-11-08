#include <iostream>
#include <cstring>
using namespace std;

class Person {
public:
    char name[64];
    int age;
    char address[64];
    double basicSalary;
    double allowance;
    double totalSalary;

    Person() {
        strcpy(name, "");
        age = 0;
        strcpy(address, "");
        basicSalary = 0;
        allowance = 0;
        totalSalary = 0;
    }

    Person(const char* n, int a, const char* addr, double basic, double allow) {
        strcpy(name, n);
        age = a;
        strcpy(address, addr);
        basicSalary = basic;
        allowance = allow;
        totalSalary = basicSalary + allowance;
    }

    void displaySalarySlip() {
        cout << "Name: " << name << "\nAddress: " << address << "\nAge: " << age 
             << "\nBasic Salary: " << basicSalary << "\nAllowance: " << allowance 
             << "\nTotal Salary: " << totalSalary << "\n-------------------" << endl;
    }
};

inline void findExtremes(Person p[], int size) {
    int minAge = p[0].age, maxAge = p[0].age;
    int minIdx = 0, maxIdx = 0;
    for (int i = 1; i < size; i++) {
        if (p[i].age < minAge) {
            minAge = p[i].age;
            minIdx = i;
        }
        if (p[i].age > maxAge) {
            maxAge = p[i].age;
            maxIdx = i;
        }
    }
    cout << "Youngest Person: " << p[minIdx].name << " (Age: " << minAge << ")\n";
    cout << "Eldest Person: " << p[maxIdx].name << " (Age: " << maxAge << ")\n";
}

int main() {
    Person group[10] = {
        Person("Alice", 25, "123 St", 50000, 10000),
        Person("Bob", 45, "456 Rd", 60000, 12000),
        Person("Charlie", 19, "789 Av", 30000, 5000),
        Person("David", 35, "101 Pl", 55000, 11000),
        Person("Eve", 28, "202 Ln", 52000, 10500),
        Person("Frank", 50, "303 Dr", 70000, 15000),
        Person("Grace", 31, "404 Ct", 53000, 10800),
        Person("Hank", 22, "505 Wy", 40000, 8000),
        Person("Ivy", 40, "606 Ter", 65000, 13000),
        Person("Jack", 29, "707 Pkwy", 51000, 10200)
    };

    cout << "=== Salary Slips ===" << endl;
    for(int i = 0; i < 10; i++) {
        group[i].displaySalarySlip();
    }
    
    cout << "\n=== Age Analysis ===" << endl;
    findExtremes(group, 10);
    return 0;
}
