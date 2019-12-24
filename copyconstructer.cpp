#include<iostream>
using namespace std;
class CopyConstr{
	int a;
	public :
		CopyConstr(){
			a=12; 
			cout<<"default constructor \n";
		}
		CopyConstr(CopyConstr &d){
			cout<<"copy constructor "<<d.a<<endl;
		}
};
main(){
	CopyConstr cpcn;
	CopyConstr cpcn1(cpcn);
}
