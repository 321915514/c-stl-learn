#include<iostream>

using namespace std;

class Person{
	
	public:
		Person(int a){
			cout<<"person构造函数的调用"<<endl; 
			cout<<a<<endl;
		}
		~Person(){
			cout<<"析构函数的调用"<<endl; 
		}
};



int main(){
	Person p(12);
} 
