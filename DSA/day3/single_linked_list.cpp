#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
struct student
{
  int id;
  char name[20];
  // stracter can not call it self
  student *next; 
}*start=NULL;
// (student * start=null)
void insert_big();
void insert_end();

void del_big();

void del_end();

void display();
int main(){
  char ch='y';
  do{
       system("cls");
       int choice=0;
     cout<<"1. Insert at the beginning\n";
     cout<<"2. Insert at the end\n";
     cout<<"3. Delete from the beginning\n";
     cout<<"4. Delete from the end\n";
     cout<<"5. display all the list\n";
     cout<<"6. exit\n";
     cout<<"please enter your choice\n";
     cin>>choice;
     switch (choice)
     {
      case 1: insert_big(); break;
      case 2: insert_end()
      ;
      case 3:del_big(); break;
      case 4: del_end(); break;
      case 5: display(); break;
      case 6: ch='n';cout<<"good by\n" ;break;
      default:cout<<"please enter your 1-5\n";
     
  }if(ch!='6')
  cout<<"continue\n"<<endl;
  
  cout<<"do you want to continue(y/n)\n";
  cin>>ch;
  }while(ch=='y');

  return 0;

}
void insert_big(){
  student *tem=new student;
  cout<<"please enter student id\n";
  cin>>tem->id;
  cout<<"please enter student name\n";
  cin>>tem->name;
  if(start==NULL){
    start=tem;
    tem->next=NULL;
  }
  else{
    tem->next=start;
    start=tem;
  }
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
void del_big(){}
void del_end(){}
void display() {
  student *curr = start;

  if (start == NULL) {
      cout << "The list is empty" << endl;
      getch();
  } else {
      cout << "ID" << "  " << "Name" << endl;
      cout << "================================" << endl;
      
      while (curr != NULL) { 
          cout << curr->id << "  " << curr->name << endl;
          curr = curr->next;
      }
      
  }
  getch();
}