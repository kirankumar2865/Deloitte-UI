#include<iostream>
using namespace std;
class Person{
	char name1[30];
	public:
	 void Getdetails(){
		cout<<"enter the name of the person";
		cin>>name1;
	}
	  void PrintDetails(){
	  		cout<<"person name -- "<<name1<<endl;
	  }
	char* NAME(){
		return name1;
	}
};
class Employee:public Person{
	char prjt[30];
	public:
	 void getemploy(){
	 	Getdetails();
	 	cout<<"enter the project name ";
	 	cin>>prjt;
	 }
	 void Printemploy(){
	 	PrintDetails();
	 	cout<<Person::NAME()<<" deals with the project -- "<<prjt<<endl;
	 }
	char* ProjectName(){
		return prjt;
	}
};
class Manager:public Employee{
	char mngr1[30];
	public:
	 void getmngr(){
	 	getemploy();
	 	cout<<"enter the name of manager";
	 	cin>>mngr1;
	 }
	 void Printmngr(){
	 	Printemploy();
	 	cout<<"the project "<<Employee::ProjectName()<<" is under the control of the manager -- "<<mngr1<<endl;
	 }
		 
};
main(){
	Manager m;
	m.getmngr();
	m.Printmngr();
}
