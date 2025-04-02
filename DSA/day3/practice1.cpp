#include<iostream>;
#include<cstdlib>;
#include<conio.h>;
using namespace std;


struct student{
  int id;

  char first_name[20];

  char last_name[20];

  int age;

  int number_of_year;

  student*next;

}*start=NULL;

void insert_b();
void regi();
void insert_e();
void del_b();
void del_e();

void display();
int main (){
        char ch='y';
        int choice=0;
              do{
                    cout<<"=========================="<<endl;
                    cout<<"****welcome to registration ****"<<endl;
                    cout<<"1.insert_b registration"<<endl;
                    cout<<"2.insert_e registration"<<endl;
                    cout<<"3.del_b registration"<<endl;
                    cout<<"4.del_e registration"<<endl;
                    cout<<"5.display all registration"<<endl;
                    cout<<"6.exit"<<endl;
                    cout<<"=========================="<<endl;
                  switch (choice) {
                      {
                      case 1:insert_b(); break;
                      case 2:insert_e();break;
                      case 3:del_b(); break;
                      case 4:del_e();break;
                      case 5:display(); break;
                      case 6:ch='n';cout<<"good buy";break;
                      default:cout<<"please enter a number 1-6 \n";break;
                      }
                      if (choice!='6')
                        cout<<"do you want continue?y/n";
                        cin>>ch;
                    }
            }while (ch=='y');
      return 0;
      }

void regi(){
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

}
void insert_b(){
  student *temp=new student;
  regi();
  if(start==NULL){
    start=temp;
    temp->next=NULL;
  }
  else{
    temp->next=start;
    start=temp;
  }
}
void insert_e(){
  student *temp=new student;
  regi();
  temp->next=NULL;
  if(start==NULL){
    start=temp;
  }
  else{
    student *stud=start;
    while(stud->next!=NULL){
      stud=stud->next;
    }
    stud->next=temp;
  }}
void del_b(){
  if (start==NULL){
    cout<<"the list is empty"<<endl;
  }else{
    student *temp=start;
    start=start->next;
    delete temp;
    cout<<"one student deleted from the beginning"<<endl;
  }

}
void del_e(){
  if (start==NULL){
    cout<<"the list is empty"<<endl;
  }else if(start->next==NULL){
    delete start;
    start=NULL;
    cout<<"one student deleted"<<endl;
  }else{
    student *temp=start;
    while(temp->next->next!=NULL){
      temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    cout<<"one student deleted from the end"<<endl;
  }
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
