#include<iostream>

using namespace std;

class Person{
	public:
		int *a;
	public:
		Person(int age){
			a=new int(age);
		}
		~Person(){
			if(a!=NULL){
				delete(a);
				a=NULL;
			}
		}
		Person & operator=(Person &p){
			if(a!=NULL){
				delete(a);
			} 
			a=new int(*p.a);//Éî¿½±´ 
			return *this; 
		} 
};

void test(){
	Person p1(20);
	Person p2(10);
	Person p3(10);
	p3=p2=p1;
	cout<< *p2.a<<endl;
	cout<< *p3.a<<endl;
}

int main(){
	test();
} 
