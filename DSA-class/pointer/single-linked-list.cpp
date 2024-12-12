#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
struct Student{
  char ID[25],name[20];
  Student*next;
}
*start=NULL;
void insert_big();
void insert_end();
void del_big();
void del_end();
void display();


int main()
{
  char ch='y';
  do{system("cls");
  int choice=0;
  cout<<"1)insert at beg\n"
  <<"2)insert at end\n"
  <<"3)del at beg\n"
  <<"4del at end\n"
  <<"5)display\n"
  <<"6)exit\n";
  cout<<"enter your choice\n";cin>>choice;
  switch (choice)
  {
    case 1:insert_big();break;
    case 2: insert_end();break;
    case 3:del_big();break;
    case 4:del_end();break;
    case 5:display();break;
    case 6:ch='n';cout<<"good bye";break;
    default:cout<<"please enter 1-5\n"; break;

  }
  if(choice!=5){
    cout<<"press any key to continue...\n";
    getch();
  }
  }
  while(ch=='y');
}
  void insert_big(){
    Student*newnode=new Student;
    cout<<"enter student id:";cin>>newnode->ID;
    cout<<"enter student name:";cin>>newnode->name;
    if (start==NULL)
    {
      start=newnode;
      newnode->next=NULL;
    }
    else{
      newnode->next=start;
      start=newnode;
    }
  }
  void insert_end(){
    Student*newnode=new Student;
    cout<<"enter student id:";cin>>newnode->ID;
    cout<<"enter student name:";cin>>newnode->name;
    if (start==NULL)
    {
      start=newnode;
      newnode->next=NULL;
    }
    else{
      Student*temp=start;
      while(temp->next!=NULL)
      {
        temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
      }
    }
  void del_big(){
    if(start==NULL){
      cout<<"the list id empty\n";
      return;
    }
    else{
      Student*temp=start;
      start=start->next;
      delete temp;
      cout<<"one student list was deleted\n";
    }
    
  }
  void del_end(){
      if(start==NULL){
      cout<<"the list id empty\n";
      return;
    }
    else if(start->next==NULL){
      Student*temp=start;
      start=NULL;
      delete temp;
      cout<<"one student list was deleted\n";
    }
    else{Student*temp=start;
    Student*prev=NULL;
      while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
      }
      prev->next=NULL;
    delete temp;
      cout<<"one student list was deleted\n";
    
  }
  }
  void display(){
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