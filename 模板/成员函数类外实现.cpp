#include<iostream>

using namespace std;

template<class T1,class T2>
class Person{
	public:
		Person(T1 name,T2 age);
		T1 name;
		T2 age;
		void showPerson();
};
template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age){//类模板构造函数类外实现 
	this->name=name;
	this->age=age;
}
template<class T1,class T2>
void Person<T1,T2>::showPerson(){//模板类成员函数类外实现 
	cout<<this->name<<this->age<<endl;
}
void test(){
	Person<string,int> p1("c++",12);
	p1.showPerson();
	
}
int main(){
	test();
}
