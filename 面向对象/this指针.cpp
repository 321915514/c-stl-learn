#include<iostream>

using namespace std;

class Person{
	public:
		int age;
		Person(int age):age(age){
		}
		Person& addPersonAge(Person &p){
			this->age+=p.age;
			return *this;
		}
		
}; 

int main(){
	Person p1(10);
	Person p2(10);
	p2.addPersonAge(p1).addPersonAge(p1).addPersonAge(p1);
	cout<<p1.age<<endl;
	cout<<p2.age<<endl;
	
} 
