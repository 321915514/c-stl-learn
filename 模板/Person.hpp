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
Person<T1,T2>::Person(T1 name,T2 age){//��ģ�幹�캯������ʵ�� 
	this->name=name;
	this->age=age;
}
template<class T1,class T2>
void Person<T1,T2>::showPerson(){//ģ�����Ա��������ʵ�� 
	cout<<this->name<<this->age<<endl;
} 
