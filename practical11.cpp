#include <iostream>
using namespace std;

class StudentBase {
protected:
    int rollNo;
public:
    void getRoll() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }
};

class InternalAssessment : virtual public StudentBase {
protected:
    double internalMarks;
public:
    void getInternal() {
        cout << "Enter Internal Marks: ";
        cin >> internalMarks;
    }
};

class ExternalExam : virtual public StudentBase {
protected:
    double externalMarks;
public:
    void getExternal() {
        cout << "Enter External Exam Marks: ";
        cin >> externalMarks;
    }
};

class FinalResult : public InternalAssessment, public ExternalExam {
    double totalMarks;
public:
    void calculate() {
        getRoll();
        getInternal();
        getExternal();
        totalMarks = internalMarks + externalMarks;
    }
    void display() {
        cout << "\n--- Final Student Record (Virtual Base Class) ---" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Internal Assessment: " << internalMarks << endl;
        cout << "External Examination: " << externalMarks << endl;
        cout << "Total Marks: " << totalMarks << " / 100" << endl;
    }
};

int main() {
    FinalResult studentRecord;
    studentRecord.calculate();
    studentRecord.display();
    return 0;
}
