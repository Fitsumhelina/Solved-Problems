#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

struct Student {
    char ID[25],name[20],Grade;
    Student*next;

}
*start=NULL;
char key;

void addStudent();
// void searchStudent();
void displayStudent();
void removeStudent();
void sortStudent();
void reverseStudent();
void gradereport();

int main()
{
  char ch='y';
  do{system("cls");
  int choice=0;
  cout<<"1)add student data \n"
  <<"2)search and display\n"
  <<"3)remove student \n"
  <<"sort students \n"
  <<"5)reverse students\n"
  <<"6)grade report\n"
  <<"7)exit\n";
  cout<<"enter your choice\n";cin>>choice;

   switch (choice)
  {
    case 1:addStudent();break;
    case 2:displayStudent();break;
    case 3:removeStudent();break;
    case 4:sortStudent();break;
    case 5:reverseStudent();break;
    case 6:gradereport();break;
    case 7:ch='n';cout<<"good bye";break;
    default:cout<<"please enter 1-5\n"; break;

  }

  if(choice!=6){
    cout<<"press any key to continue...\n";
    getch();
  }
  }
  while(ch=='y');
}

 void addStudent(){
    Student*newnode=new Student;
    cout<<"enter student id:";cin>>newnode->ID;
    cout<<"enter student name:";cin>>newnode->name;
    cout << "enter student grade:";cin>>newnode->Grade;

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

void displayStudent(){
    if(start==NULL)
    {
      cout<<"the list is empty\n";
      return;
    }
    else{
      Student *temp=start;
      int left=start,right
      if (temp == NULL){
        temp = right;
      }
      
      cout<<"enter the id of the student";
      cin>>key;
      cout<<"\t ID"<<"\t"<<"name\n";
      cout<<"========================\n";
      while(temp!=NULL){
        if (temp->ID == key){
        cout<<"\t"<<temp->ID <<"\t"<<temp->name<<"\n";
		}
		temp=temp->next;
      }
    }
    cout<<"press any key to continue...\n";
    getch();
}

void removeStudent(){
      if(start==NULL){
      cout<<"the list id empty\n";
      return;
    }
    else{
 	  cout << "enter the student id ";
      cin>>key;
      Student*temp=start;
      if (key==temp->ID){
      start=start->next;
      delete temp;
      cout<<"student with "<<temp->ID <<" id was deleted\n";

      }
    }
    
  }
	
void sortStudent(){
	
}
void reverseStudent(){
	
}
void gradereport(){
	
}