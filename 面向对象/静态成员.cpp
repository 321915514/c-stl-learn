#include<iostream>

using namespace std;

class Person{
	public:
		static void fun(){
			cout<<"静态成员函数"<<endl; 
			cout<<a++<<endl;
		}
		static int a; 
		
};
int Person::a=0;
int main(){
	//对象访问
	Person p;
	p.fun(); 
	Person::fun();//类访问 
} 
