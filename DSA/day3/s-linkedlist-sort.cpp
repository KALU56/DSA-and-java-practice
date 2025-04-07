#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<cstring>
using namespace std;

struct student {
    int id;
    char name[20];
    student *next; 
} *start = NULL;

void insert_big();
void insert_end();
void del_big();
void del_end();
void display();
void sortByName();

int main() {
    char ch = 'y';
    do {
        system("cls");
        int choice = 0;
        cout << "1. Insert at the beginning\n";
        cout << "2. Insert at the end\n";
        cout << "3. Delete from the beginning\n";
        cout << "4. Delete from the end\n";
        cout << "5. Display all the list\n";
        cout << "6. Sort by name (A-Z)\n";
        cout << "7. Exit\n";
        cout << "Please enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: insert_big(); break;
            case 2: insert_end(); break;
            case 3: del_big(); break;
            case 4: del_end(); break;
            case 5: display(); break;
            case 6: sortByName(); cout << "List sorted by name.\n"; getch(); break;
            case 7: ch = 'n'; cout << "Goodbye!\n"; break;
            default: cout << "Please enter a valid choice (1-7).\n"; getch();
        }
        
        if (ch != 'n') {
            cout << "Do you want to continue (y/n)? ";
            cin >> ch;
        }
    } while (ch == 'y');
    
    return 0;
}

void insert_big() {
    student *tem = new student;
    cout << "Please enter student ID: ";
    cin >> tem->id;
    cout << "Please enter student name: ";
    cin >> tem->name;
    
    tem->next = start;
    start = tem;
}

void insert_end() {
    student *tem = new student;
    cout << "Please enter student ID: ";
    cin >> tem->id;
    cout << "Please enter student name: ";
    cin >> tem->name;
    tem->next = NULL;
    
    if (start == NULL) {
        start = tem;
    } else {
        student *curr = start;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = tem;
    }
}

void del_big() {
    if (start == NULL) {
        cout << "The list is empty." << endl;
    } else {
        student *temp = start;
        start = start->next;
        delete temp;
        cout << "One student record deleted from the beginning." << endl;
    }
    getch();
}

void del_end() {
    if (start == NULL) {
        cout << "The list is empty." << endl;
    } else if (start->next == NULL) {
        delete start;
        start = NULL;
        cout << "One student record deleted." << endl;
    } else {
        student *curr = start;
        while (curr->next->next != NULL) {
            curr = curr->next;
        }
        delete curr->next;
        curr->next = NULL;
        cout << "One student record deleted from the end." << endl;
    }
    getch();
}

void display() {
    if (start == NULL) {
        cout << "The list is empty." << endl;
    } else {
        student *curr = start;
        cout << "ID  Name" << endl;
        cout << "=======================" << endl;
        while (curr != NULL) {
            cout << curr->id << "  " << curr->name << endl;
            curr = curr->next;
        }
    }
    getch();
}

void sortByName() {
    if (start == NULL || start->next == NULL) return;

    bool swapped;
    student *ptr1;
    student *lptr = NULL;

    do {
        swapped = false;
        ptr1 = start;

        while (ptr1->next != lptr) {
            if (strcmp(ptr1->name, ptr1->next->name) > 0) {
                // Swap the data (id and name)
                int tempId = ptr1->id;
                char tempName[20];
                strcpy(tempName, ptr1->name);

                ptr1->id = ptr1->next->id;
                strcpy(ptr1->name, ptr1->next->name);

                ptr1->next->id = tempId;
                strcpy(ptr1->next->name, tempName);

                swapped = true;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}
