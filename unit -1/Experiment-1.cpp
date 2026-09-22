#include <iostream>
#include <string>
using namespace std;

class StudentRecord {
private:
    int id;
    string studentName;
    float subjectMarks[3];
    float totalMarks;
    float percentage;
    string grade;

    void findGrade() {
        if (percentage >= 60)
            grade = "First Class";
        else if (percentage >= 50)
            grade = "Second Class";
        else if (percentage >= 40)
            grade = "Pass";
        else
            grade = "Fail";
    }

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> id;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, studentName);

        cout << "Enter marks for 3 subjects: ";
        for (float &mark : subjectMarks) {
            cin >> mark;
        }
    }

    void process() {
        totalMarks = 0;

        for (float mark : subjectMarks) {
            totalMarks += mark;
        }

        percentage = totalMarks / 3.0f;
        findGrade();
    }

    void show() {
        cout << "\n----- Student Details -----" << endl;
        cout << "Roll Number: " << id << endl;
        cout << "Name: " << studentName << endl;

        cout << "Marks: ";
        for (float mark : subjectMarks) {
            cout << mark << " ";
        }

        cout << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Result: " << grade << endl;
    }
};

int main() {
    StudentRecord student;

    student.input();
    student.process();
    student.show();

    return 0;
}
