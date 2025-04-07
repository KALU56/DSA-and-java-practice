#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;


struct student{
  int id;

  char first_name[20];

  char last_name[20];

  int age;

  int number_of_year;

  student*next;
  student*prev;

}*start=NULL;

void add();
void display();
void search();
void del();
void update();
void sort();



int main (){
        char ch='y';
        int choice=0;
              do{
                    cout<<"=========================="<<endl;
                    cout<<"****welcome to registration ****"<<endl;
                    cout<<"1.add registration"<<endl;
                    cout<<"2.display all registration"<<endl;
                    cout<<"3.search "<<endl;
                    cout<<"4.del"<<endl;
              
                    cout<<"5.exit"<<endl;
                    cout<<"=========================="<<endl;
                  switch (choice) {
                      {
                      case 1: add(); break;
                      case 2:display();break;
                      case 3:search(); break;
                      case 4:del();break;
                
                      case 5:ch='n';cout<<"good buy";break;
                      default:cout<<"please enter a number 1-5 \n";break;
                      }
                      if (choice!='5')
                        cout<<"do you want continue?y/n";
                        cin>>ch;
                    }
            }while (ch=='y');
      return 0;
      }

void add(){
 student *temp=start;
 cout<<"wlcome";
 cout<<"please enter your employ id";
 cin>>temp->id;
 cout<<"please enter your first name";
 cin>>temp->first_name;
 cout<<"please enter your last name";
 cin>>temp->last_name;
 cout<<"please enter your age";
 cin>>temp->age;
 cout <<"please enter your expreance";
 cin>>temp->number_of_year;
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
}
  


}void search(){}
void del(){

}
void update(){

}
void sort(){

}
void display(){
  student *temp=start;
  while(temp!=NULL){
    cout<<"id: "<<temp->id<<endl;
    cout<<"first name: "<<temp->first_name<<endl;
    cout<<"last name: "<<temp->last_name<<endl;
    cout<<"age: "<<temp->age<<endl;
    cout<<"expreance: "<<temp->number_of_year<<endl;
    cout<<"----------------------------------------"<<endl;
    temp=temp->next;
  }
  if (start==NULL){
    cout<<"the list is empty"<<endl;
  }
  else{
    cout<<"the list is not empty"<<endl;
  }

}
