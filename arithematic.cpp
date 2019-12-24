#include<iostream>
using namespace std;
class Calc{
	int a,b,result;
	 public:
	 	void GetNumbers(){
	 		cout<<"enter the two values here";
	 		cin>>a;
	 		cin>>b;
		 }
		 void Add(){
		 	GetNumbers();
		 	 result=a+b;
		 	cout<<"addition of two numbers is "<<result;
		 }
		 void Mul(){
		 	GetNumbers();
		 	result=a*b;
		    cout<<" multiplication of two numbers is "<<result;
		 }
		  void sub(){
		 	GetNumbers();
		 	result=a-b;
		    cout<<" substraction of two numbers is "<<result;
	}
	 void div(){
		 	GetNumbers();
		 	result=a/b;
		    cout<<" division of two numbers is "<<result;
	}
};
main(){
	int input;
	Calc calc;
	cout<<" enter the values  to perfrom calculations "<<endl;
	cout<<" 1 for addition \n 2 for multiplication \n 3 for substraction \n 4 for division "<<endl;
	cout<<"enter :";
	cin>>input;
	switch(input){
		case 1:{
			calc.Add();
			break;
		}
		case 2:{
			calc.Mul();
			break;
		}
		case 3:{
			calc.sub();
			break;
		}
		case 4:{
			calc.div();
				break;
			}
	}
	
}#include<iostream>
using namespace std;
class Calc{
	int a,b,result;
	 public:
	 	void GetNumbers(){
	 		cout<<"enter the two values here";
	 		cin>>a;
	 		cin>>b;
		 }
		 void Add(){
		 	GetNumbers();
		 	 result=a+b;
		 	cout<<"addition of two numbers is "<<result;
		 }
		 void Mul(){
		 	GetNumbers();
		 	result=a*b;
		    cout<<" multiplication of two numbers is "<<result;
		 }
		  void sub(){
		 	GetNumbers();
		 	result=a-b;
		    cout<<" substraction of two numbers is "<<result;
	}
	 void div(){
		 	GetNumbers();
		 	result=a/b;
		    cout<<" division of two numbers is "<<result;
	}
};
main(){
	int input;
	Calc calc;
	cout<<" enter the values  to perfrom calculations "<<endl;
	cout<<" 1 for addition \n 2 for multiplication \n 3 for substraction \n 4 for division "<<endl;
	cout<<"enter :";
	cin>>input;
	switch(input){
		case 1:{
			calc.Add();
			break;
		}
		case 2:{
			calc.Mul();
			break;
		}
		case 3:{
			calc.sub();
			break;
		}
		case 4:{
			calc.div();
				break;
			}
	}
	
}
