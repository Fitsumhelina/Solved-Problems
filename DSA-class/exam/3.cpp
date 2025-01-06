#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cstring>
using namespace std;

struct Student {
    char ID[25], name[20], Grade;
    Student* next;
};

Student* start = NULL;
char key[10];

void addStudent();
void searchStudent();
void removeStudent();
void sortStudent();
void reverseStudent();
void gradereport();
void displayall();

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
             << "7) Display all \n"
             << "8) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: searchStudent(); break;
            case 3: removeStudent(); break;
            case 4: sortStudent(); break;
            case 5: reverseStudent(); break;
            case 6: gradereport(); break;
            case 7: displayall(); break;
            case 8: ch = 'n'; cout << "Goodbye!\n"; break;
            default: cout << "Please enter a number between 1 and 7.\n"; break;
        }

        if (choice != 8) {
            cout << "Press any key to continue...\n";
            getch();
        }
    } while (ch == 'y');
    return 0;
}

void addStudent() {
    Student* newnode = new Student;
    cout << "Enter student ID: ";
    cin >> newnode->ID;
    cout << "Enter student name: ";
    cin >> newnode->name;
    cout << "Enter student grade: ";
    cin >> newnode->Grade;

    newnode->next = start;
    start = newnode;
}

void searchStudent() {
    if (start == NULL) {
        cout << "The list is empty.\n";
        return;
    }

    cout << "Enter the ID of the student to search: ";
    cin >> key;
    Student* temp = start;

    cout << "\tID\tName\tGrade\n";
    cout << "=============================\n";
    while (temp != NULL) {
        if (strcmp(temp->ID, key) == 0) {
            cout << "\t" << temp->ID << "\t" << temp->name << "\t" << temp->Grade << "\n";
            return;
        }
        temp = temp->next;
    }
    cout << "No student found with ID " << key << ".\n";
}


void removeStudent() {
    if (start == NULL) {
        cout << "The list is empty.\n";
        return;
    }

    cout << "Enter the ID of the student to remove: ";
    cin >> key;

    Student* temp = start;
    Student* prev = NULL;

    while (temp != NULL) {
        if (strcmp(temp->ID, key) == 0) {
            if (prev == NULL) {
                start = temp->next;
            } else {
                prev->next = temp->next;
            }
            cout << "Student with ID " << key << " was deleted.\n";
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    cout << "No student found with ID " << key << ".\n";
}

void sortStudent() {
    if (start == NULL || start->next == NULL) {
        cout << "List is empty or has only one student.\n";
        return;
    }

    for (Student* i = start; i != NULL; i = i->next) {
        for (Student* j = i->next; j != NULL; j = j->next) {
            if (strcmp(i->ID, j->ID) > 0) {
                char* x = i->ID;
                i->ID = j->ID;
                j->ID = x;
              
            }
        }
    }
    cout << "Students sorted by ID.\n";
}

void reverseStudent() {
    if (start == NULL) {
        cout << "The list is empty.\n";
        return;
    }

    Student* prev = NULL;
    Student* current = start;
    Student* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    start = prev;

    cout << "Students list reversed.\n";
}

void gradereport() {
    if (start == NULL) {
        cout << "The list is empty.\n";
        return;
    }

    int gradeCount[5] = {0}; // For A, B, C, D, F
    Student* temp = start;

    while (temp != NULL) {
        switch (temp->Grade) {
            case 'A': gradeCount[0]++; break;
            case 'B': gradeCount[1]++; break;
            case 'C': gradeCount[2]++; break;
            case 'D': gradeCount[3]++; break;
            case 'F': gradeCount[4]++; break;
            default: cout << "Invalid grade found for ID " << temp->ID << "\n"; break;
        }
        temp = temp->next;
    }

    cout << "Grade Report:\n";
    cout << "A: " << gradeCount[0] << "\n";
    cout << "B: " << gradeCount[1] << "\n";
    cout << "C: " << gradeCount[2] << "\n";
    cout << "D: " << gradeCount[3] << "\n";
    cout << "F: " << gradeCount[4] << "\n";
}
void displayall(){
     if(start==NULL)
    {
      cout<<"the list is empty\n";
      return;
    }
    else{
      Student *temp=start;
      cout<<"\t ID"<<"\t"<<"name\n";
      cout<<"========================\n";
      while(temp!=NULL){
        cout<<"\t"<<temp->ID<<"\t"<<temp->name<<"\n";
        temp=temp->next;
        
      }
    }
    cout<<"press any key to continue...\n";
    getch();
    
  }

