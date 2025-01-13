#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cstring>  // for string operations
using namespace std;

struct Student {
    char ID[25], name[20];
    Student* next;
    Student* prev;  // Added previous pointer for a doubly linked list
};

Student* start = NULL;

void insert_big();
void insert_end();
void insert_betn();
void del_big();
void del_end();
void display();
void search_display();

int main() {
    char ch = 'y';
    do {
        system("cls");
        int choice = 0;
        cout << "1) Insert at beginning\n"
             << "2) Insert at end\n"
             << "3) Delete at beginning\n"
             << "4) Delete at end\n"
             << "5) Insert between\n"
             << "6) Display\n"
             << "7) Search and display\n"
             << "8) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: insert_big(); break;
            case 2: insert_end(); break;
            case 3: del_big(); break;
            case 4: del_end(); break;
            case 5: insert_betn(); break;
            case 6: display(); break;
            case 7: search_display(); break;
            case 8: ch = 'n'; cout << "Goodbye!\n"; break;
            default: cout << "Please enter a valid choice (1-8)\n"; break;
        }
        if (choice != 8) {
            cout << "Press any key to continue...\n";
            getch();
        }
    } while (ch == 'y');
}

void insert_big() {
    Student* newnode = new Student;
    cout << "Enter student ID: "; cin >> newnode->ID;
    cout << "Enter student name: "; cin >> newnode->name;

    newnode->next = start;
    newnode->prev = NULL;
    if (start != NULL) {
        start->prev = newnode;
    }
    start = newnode;
}

void insert_end() {
    Student* newnode = new Student;
    cout << "Enter student ID: "; cin >> newnode->ID;
    cout << "Enter student name: "; cin >> newnode->name;

    newnode->next = NULL;
    if (start == NULL) {
        newnode->prev = NULL;
        start = newnode;
    } else {
        Student* temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
}

void del_big() {
    if (start == NULL) {
        cout << "The list is empty.\n";
        return;
    }
    Student* temp = start;
    start = start->next;
    if (start != NULL) {
        start->prev = NULL;
    }
    delete temp;
    cout << "One student record deleted from the beginning.\n";
}

void del_end() {
    if (start == NULL) {
        cout << "The list is empty.\n";
        return;
    }
    Student* temp = start;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    if (temp->prev != NULL) {
        temp->prev->next = NULL;
    } else {
        start = NULL;  // The list had only one element
    }
    delete temp;
    cout << "One student record deleted from the end.\n";
}

void display() {
    if (start == NULL) {
        cout << "The list is empty.\n";
        return;
    }
    Student* temp = start;
    cout << "\tID\tName\n";
    cout << "========================\n";
    while (temp != NULL) {
        cout << "\t" << temp->ID << "\t" << temp->name << "\n";
        temp = temp->next;
    }
    cout << "Press any key to continue...\n";
    getch();
}

void insert_betn() {
    Student* newnode = new Student;
    cout << "Enter student ID: "; cin >> newnode->ID;
    cout << "Enter student name: "; cin >> newnode->name;

    if (start == NULL) {
        start = newnode;
        newnode->next = NULL;
        newnode->prev = NULL;
    } else {
        Student* temp = start;
        char key[25];
        cout << "Enter the key ID to insert after: ";
        cin >> key;

        bool found = false;
        while (temp != NULL) {
            if (strcmp(temp->ID, key) == 0) {
                found = true;
                break;
            }
            temp = temp->next;
        }

        if (!found) {
            cout << "The key ID not found.\n";
            return;
        } else {
            newnode->next = temp->next;
            newnode->prev = temp;
            if (temp->next != NULL) {
                temp->next->prev = newnode;
            }
            temp->next = newnode;
        }
    }
}

void search_display() {
    char key[25];
    cout << "Enter student ID to search: ";
    cin >> key;

    if (start == NULL) {
        cout << "The list is empty.\n";
        return;
    }

    Student* temp = start;
    bool found = false;
    while (temp != NULL) {
        if (strcmp(temp->ID, key) == 0) {
            cout << "Student found:\n";
            cout << "ID: " << temp->ID << "\n";
            cout << "Name: " << temp->name << "\n";
            found = true;
            break;
        }
        temp = temp->next;
    }

    if (!found) {
        cout << "Student with ID " << key << " not found.\n";
    }
    cout << "Press any key to continue...\n";
    getch();
}
