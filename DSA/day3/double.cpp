#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<cstring>
using namespace std;

struct student {
    int id;
    char name[20];
    student*next;
    student*prev;
} *start = NULL;

void add();
void display();

int main() {
    char ch = 'y';
    do {
        system("cls");
        int choice = 0;
                     cout<<"=========================="<<endl;
                    cout<<"****welcome to registration ****"<<endl;
                    cout<<"1.add registration"<<endl;
                    cout<<"2.display all registration"<<endl;
        cout << "3. Exit\n";
        cout << "Please enter your choice: ";
        cin >> choice;
        
        switch (choice) {
          case 1: add(); break;
          case 2:display();break;
          case 3: ch = 'n'; cout << "Goodbye!\n"; break;
            default: cout << "Please enter a valid choice (1-3).\n"; getch();
        }
        
        if (ch != 'n') {
            cout << "Do you want to continue (y/n)? ";
            cin >> ch;
        }
    } while (ch == 'y');
    
    return 0;
}

void add(){
  student *temp=start;
  
  cout<<"please enter your  id: "<<endl;
  cin>>temp->id;
  cout<<"please enter your first name";
  cin>>temp->name;

  if (start ==NULL)
   {
     start=temp;
     temp->next=NULL;
     temp->prev=NULL;
   }
   else if (start->next==NULL)
   {
     start->next=temp;
     temp->prev=start;
     temp->next=NULL;
   }
   else
   {
     int Id;
     cout<<"please enter the your student id "<<endl;
     cin>>Id;
     student *temp1=start;
     while(temp1->id!=Id&& temp1->next!=NULL){
       temp1=temp1->next;
       if(temp1->next==NULL){
       temp->prev=temp1;
       temp->next=NULL;
     }
     else{
       temp1->next->prev=temp;
       temp->next=temp1->next;
       temp1->next=temp;
       temp->prev=temp1;
 
     }
   }
 }}





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
