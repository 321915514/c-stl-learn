#include<iostream>

using namespace std;

class Person{
	
	public:
		Person(int a){
			cout<<"person���캯���ĵ���"<<endl; 
			cout<<a<<endl;
		}
		~Person(){
			cout<<"���������ĵ���"<<endl; 
		}
};



int main(){
	Person p(12);
} 
