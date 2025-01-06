#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cstring>
using namespace std;

struct Student {
    char ID[25], name[20], Grade;
};

// Constants
const int MAX_STUDENTS = 100;
Student students[MAX_STUDENTS];
int studentCount = 0;
char key[10];

void addStudent();
void searchStudent();
void displayStudent();
void removeStudent();
void sortStudent();
void reverseStudent();
void gradereport();

int main() {
    char ch = 'y';
    do {
        system("cls");
        int choice = 0;
        cout << "1) Add student data \n"
             << "2) Search and display student\n"
             << "3) Remove student \n"
             << "4) Sort students \n"
             << "5) Reverse students\n"
             << "6) Grade report\n"
             << "7) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: searchStudent(); break;
            case 3: removeStudent(); break;
            case 4: sortStudent(); break;
            case 5: reverseStudent(); break;
            case 6: gradereport(); break;
            case 7: ch = 'n'; cout << "Goodbye!\n"; break;
            default: cout << "Please enter a number between 1 and 7.\n"; break;
        }

        if (choice != 7) {
            cout << "Press any key to continue...\n";
            getch();
        }
    } while (ch == 'y');
    return 0;
}

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "Maximum student capacity reached.\n";
        return;
    }

    cout << "Enter student ID: ";
    cin >> students[studentCount].ID;
    cout << "Enter student name: ";
    cin >> students[studentCount].name;
    cout << "Enter student grade: ";
    cin >> students[studentCount].Grade;

    studentCount++;
    cout << "Student added successfully.\n";
}

void searchStudent() {
    if (studentCount == 0) {
        cout << "The list is empty.\n";
        return;
    }

    cout << "Enter the ID of the student to search: ";
    cin >> key;

    cout << "\tID\tName\tGrade\n";
    cout << "=============================\n";
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i].ID, key) == 0) {
            cout << "\t" << students[i].ID << "\t" << students[i].name << "\t" << students[i].Grade << "\n";
            return;
        }
    }
    cout << "No student found with ID " << key << ".\n";
}

void displayStudent() {
    if (studentCount == 0) {
        cout << "The list is empty.\n";
        return;
    }

    cout << "\tID\tName\tGrade\n";
    cout << "=============================\n";
    for (int i = 0; i < studentCount; i++) {
        cout << "\t" << students[i].ID << "\t" << students[i].name << "\t" << students[i].Grade << "\n";
    }
}

void removeStudent() {
    if (studentCount == 0) {
        cout << "The list is empty.\n";
        return;
    }

    cout << "Enter the ID of the student to remove: ";
    cin >> key;

    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i].ID, key) == 0) {
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1]; // Shift remaining students left
            }
            studentCount--;
            cout << "Student with ID " << key << " was deleted.\n";
            return;
        }
    }
    cout << "No student found with ID " << key << ".\n";
}

void sortStudent() {
    if (studentCount <= 1) {
        cout << "List is empty or has only one student.\n";
        return;
    }

    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = 0; j < studentCount - i - 1; j++) {
            if (strcmp(students[j].ID, students[j + 1].ID) > 0) {
                swap(students[j], students[j + 1]);
            }
        }
    }
    cout << "Students sorted by ID.\n";
}

void reverseStudent() {
    if (studentCount == 0) {
        cout << "The list is empty.\n";
        return;
    }

    for (int i = 0; i < studentCount / 2; i++) {
        swap(students[i], students[studentCount - i - 1]);
    }
    cout << "Students list reversed.\n";
}

void gradereport() {
    if (studentCount == 0) {
        cout << "The list is empty.\n";
        return;
    }

    int gradeCount[5] = {0}; // For A, B, C, D, F

    for (int i = 0; i < studentCount; i++) {
        switch (students[i].Grade) {
            case 'A': gradeCount[0]++; break;
            case 'B': gradeCount[1]++; break;
            case 'C': gradeCount[2]++; break;
            case 'D': gradeCount[3]++; break;
            case 'F': gradeCount[4]++; break;
            default: cout << "Invalid grade found for ID " << students[i].ID << "\n"; break;
        }
    }

    cout << "Grade Report:\n";
    cout << "A: " << gradeCount[0] << "\n";
    cout << "B: " << gradeCount[1] << "\n";
    cout << "C: " << gradeCount[2] << "\n";
    cout << "D: " << gradeCount[3] << "\n";
    cout << "F: " << gradeCount[4] << "\n";
}
