#include <iostream>
#include <cstdlib>
#include <cstring>
#include <conio.h>
using namespace std;

// Student Node
struct Student {
    char ID[25], name[20], Grade;
    Student* next;
};

// Course Node
struct Course {
    char courseID[25], courseName[50];
    Student* studentList;
    Course* next;
};

// Global course list
Course* courseList = NULL;

// Function Prototypes
void addCourse();
void addStudentToCourse();
void displayCourses();
void displayStudentsInCourse();
void sortStudentsInCourse();
void searchStudentInCourse();
Student** convertToArray(Student* head, int& size);
int binarySearch(Student** students, int size, const char* targetID);
void selectionSort(Student** students, int size);

int main() {
    char ch = 'y';
    do {
        system("cls");
        int choice = 0;
        cout << "1) Add a course\n"
             << "2) Add student to a course\n"
             << "3) Display courses\n"
             << "4) Display students in a course\n"
             << "5) Sort students in a course\n"
             << "6) Search for a student in a course\n"
             << "7) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addCourse(); break;
            case 2: addStudentToCourse(); break;
            case 3: displayCourses(); break;
            case 4: displayStudentsInCourse(); break;
            case 5: sortStudentsInCourse(); break;
            case 6: searchStudentInCourse(); break;
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

// Add a new course
void addCourse() {
    Course* newCourse = new Course;
    cout << "Enter course ID: ";
    cin >> newCourse->courseID;
    cout << "Enter course name: ";
    cin.ignore();
    cin.getline(newCourse->courseName, 50);
    newCourse->studentList = NULL;
    newCourse->next = courseList;
    courseList = newCourse;
    cout << "Course added successfully.\n";
}

// Add a student to a specific course
void addStudentToCourse() {
    if (courseList == NULL) {
        cout << "No courses available. Please add a course first.\n";
        return;
    }

    char courseID[25];
    cout << "Enter course ID to add student: ";
    cin >> courseID;

    Course* course = courseList;
    while (course != NULL && strcmp(course->courseID, courseID) != 0) {
        course = course->next;
    }

    if (course == NULL) {
        cout << "Course not found.\n";
        return;
    }

    Student* newStudent = new Student;
    cout << "Enter student ID: ";
    cin >> newStudent->ID;
    cout << "Enter student name: ";
    cin >> newStudent->name;
    cout << "Enter student grade: ";
    cin >> newStudent->Grade;

    newStudent->next = course->studentList;
    course->studentList = newStudent;

    cout << "Student added successfully to course " << course->courseName << ".\n";
}

// Display all courses
void displayCourses() {
    if (courseList == NULL) {
        cout << "No courses available.\n";
        return;
    }

    Course* temp = courseList;
    cout << "Available Courses:\n";
    cout << "==========================\n";
    while (temp != NULL) {
        cout << "Course ID: " << temp->courseID << "\n";
        cout << "Course Name: " << temp->courseName << "\n";
        cout << "--------------------------\n";
        temp = temp->next;
    }
}

// Display all students in a specific course
void displayStudentsInCourse() {
    char courseID[25];
    cout << "Enter course ID to display students: ";
    cin >> courseID;

    Course* course = courseList;
    while (course != NULL && strcmp(course->courseID, courseID) != 0) {
        course = course->next;
    }

    if (course == NULL) {
        cout << "Course not found.\n";
        return;
    }

    if (course->studentList == NULL) {
        cout << "No students enrolled in this course.\n";
        return;
    }

    Student* student = course->studentList;
    cout << "Students in " << course->courseName << ":\n";
    cout << "\tID\tName\tGrade\n";
    cout << "=============================\n";
    while (student != NULL) {
        cout << "\t" << student->ID << "\t" << student->name << "\t" << student->Grade << "\n";
        student = student->next;
    }
}

// Sort students in a specific course
void sortStudentsInCourse() {
    char courseID[25];
    cout << "Enter course ID to sort students: ";
    cin >> courseID;

    Course* course = courseList;
    while (course != NULL && strcmp(course->courseID, courseID) != 0) {
        course = course->next;
    }

    if (course == NULL) {
        cout << "Course not found.\n";
        return;
    }

    int size = 0;
    Student** students = convertToArray(course->studentList, size);
    selectionSort(students, size);

    // Rebuild the linked list with sorted students
    course->studentList = NULL;
    for (int i = size - 1; i >= 0; i--) {
        students[i]->next = course->studentList;
        course->studentList = students[i];
    }

    delete[] students;
    cout << "Students sorted successfully.\n";
}

// Search for a student in a specific course
void searchStudentInCourse() {
    char courseID[25], studentID[25];
    cout << "Enter course ID to search student: ";
    cin >> courseID;

    Course* course = courseList;
    while (course != NULL && strcmp(course->courseID, courseID) != 0) {
        course = course->next;
    }

    if (course == NULL) {
        cout << "Course not found.\n";
        return;
    }

    cout << "Enter student ID to search: ";
    cin >> studentID;

    int size = 0;
    Student** students = convertToArray(course->studentList, size);
    int index = binarySearch(students, size, studentID);

    if (index != -1) {
        cout << "Student Found:\n";
        cout << "ID: " << students[index]->ID << "\n";
        cout << "Name: " << students[index]->name << "\n";
        cout << "Grade: " << students[index]->Grade << "\n";
    } else {
        cout << "Student not found.\n";
    }

    delete[] students;
}

// Convert linked list to array
Student** convertToArray(Student* head, int& size) {
    size = 0;
    Student* temp = head;

    // Count the number of nodes
    while (temp != NULL) {
        size++;
        temp = temp->next;
    }

    // Allocate array
    Student** arr = new Student*[size];
    temp = head;

    // Populate array
    for (int i = 0; i < size; i++) {
        arr[i] = temp;
        temp = temp->next;
    }

    return arr;
}

// Perform binary search on array of students
int binarySearch(Student** students, int size, const char* targetID) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int cmp = strcmp(students[mid]->ID, targetID);

        if (cmp == 0) {
            return mid;
        } else if (cmp < 0) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Not found
}

// Perform selection sort on array of students
void selectionSort(Student** students, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (strcmp(students[j]->ID, students[minIndex]->ID) < 0) {
                minIndex = j;
            }
        }

        // Swap pointers
        if (minIndex != i) {
            Student* temp = students[i];
            students[i] = students[minIndex];
            students[minIndex] = temp;
        }
    }
}
