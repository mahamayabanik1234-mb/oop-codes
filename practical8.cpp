#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;
public:
    void getStudentData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
    }
    void putStudentData() {
        cout << "Roll Number: " << rollNo << "\nName: " << name << endl;
    }
};

class Exam : public Student {
protected:
    double marks[6];
public:
    void getMarks() {
        getStudentData();
        cout << "Enter marks for 6 subjects: ";
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }
    void putMarks() {
        putStudentData();
        cout << "Marks: ";
        for (int i = 0; i < 6; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

class Result : public Exam {
    double totalMarks;
public:
    void calculateTotal() {
        getMarks();
        totalMarks = 0;
        for (int i = 0; i < 6; i++) {
            totalMarks += marks[i];
        }
    }
    void displayResult() {
        putMarks();
        cout << "Total Marks Scored: " << totalMarks << " out of 600" << endl;
    }
};

int main() {
    Result res;
    res.calculateTotal();
    cout << "\n--- Student Result Sheet ---" << endl;
    res.displayResult();
    cout << "\nInheritance Type: Multilevel Inheritance" << endl;
    return 0;
}
