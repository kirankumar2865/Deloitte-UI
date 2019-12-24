#include<iostream>
using namespace std;
class Sample{
 public :
 	void BaseClass(){
 		cout<<"this is the base class"<<endl;
 		cout<<"this is the second paragraph of the base class";
	 }
};
class Bsample : Sample{
	public :
		void childclass(){
			
		Sample s;
		s.BaseClass();
			cout<<"this will be the child class";
			
		}
};
main(){
	Bsample b;
	b.childclass();
}
