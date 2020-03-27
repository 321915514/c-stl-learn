#include<iostream>

using namespace std;

class Person{
	public:
		Person(int age,string name){
			this->age=age;
			this->name=name;
		}
		int age;
		string name;
};
template<class T>
bool mycompare(T &a,T &b){
	if(a==b){
		return true;
	}
}
template<> bool mycompare(Person &a,Person &b){
	if(a.age==b.age&&a.name==b.name){
		return true;
	}
}
void test(){
	Person p1(12,"java");
	Person p2(12,"java");
	cout<<mycompare(p1,p2)<<endl;
}
int main(){
	test();
} 
