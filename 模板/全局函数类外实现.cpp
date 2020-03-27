#include<iostream>

using namespace std;

template<class T1,class T2>//����ģ�� 
class Person; //������ 
	
template<class T1,class T2>//����������� 
void showPerson1(Person<T1,T2> p){
	cout<<p.name<<p.age<<endl;
}


template<class T1,class T2>
class Person{
	friend void showPerson(Person<T1,T2> p){
		cout<<p.name<<p.age<<endl;
	}
	//�ӿղ����б� 
	friend void showPerson1<>(Person<T1,T2> p);
	private:
		T1 name;
		T2 age;
	public:
		Person(T1 name,T2 age){
			this->name=name;
			this->age=age;
		}
		
	
};
void test(){
	Person<string,int> p1("c++",12);
	showPerson(p1);
	showPerson1(p1);
}

int main(){
	test();
}
