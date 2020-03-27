#include<iostream>
#include<typeinfo>
using namespace std;


template<class T1,class T2>
class Person{
	public:
		Person(T1 name,T2 age){
			this->name=name;
			this->age=age;
		}
		T1 name;
		T2 age;
		void showPerson(){
			cout<<this->name<<" "<<this->age<<endl;
		}
};
//1 指定传入类型 
void printPerson(Person<string,int> &p){//1 指定传入类型 
	p.showPerson();
}
//2 参数模板化
template<class T1,class T2> 
void printPerson2(Person<T1,T2> &p){//1 指定传入类型 
	p.showPerson();
}
//3 整个类模板化
template<class T>
void  printPerson3(T &p){
	p.showPerson();
	cout<<typeid(T).name()<<endl;
}
void test(){//类模板的对象做函数的参数 
	Person<string,int> p1("java",12);
	printPerson(p1);
	printPerson2(p1);
	printPerson3(p1);
}
int main(){
	test();	
} 
