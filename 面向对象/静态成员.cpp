#include<iostream>

using namespace std;

class Person{
	public:
		static void fun(){
			cout<<"��̬��Ա����"<<endl; 
			cout<<a++<<endl;
		}
		static int a; 
		
};
int Person::a=0;
int main(){
	//�������
	Person p;
	p.fun(); 
	Person::fun();//����� 
} 
