#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    double grade;
};

int main() {
    vector<Student> students;
    string name;
    double grade;
    double sum = 0;
    double highestGrade = 0;
    double lowestGrade = 100;
    int numStudents;

    cout << "Welcome to the Student Grade Management Program!" << endl;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin.ignore(); // To ignore the newline character left by previous cin
        getline(cin, name);

        cout << "Enter the grade of student " << i + 1 << ": ";
        cin >> grade;

        if (grade < 0 || grade > 100) {
            cout << "Invalid grade! Grades should be between 0 and 100. Please try again." << endl;
            i--;
            continue;
        }

        sum += grade;
        highestGrade = max(highestGrade, grade);
        lowestGrade = min(lowestGrade, grade);

        students.push_back({name, grade});
    }

    double average = sum / numStudents;

    cout << "\nGrade Report:" << endl;
    cout << "--------------------------------" << endl;
    for (const Student& student : students) {
        cout << "Name: " << student.name << "\tGrade: " << student.grade << endl;
    }
    cout << "--------------------------------" << endl;
    cout << "Average Grade: " << average << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    return 0;
}
