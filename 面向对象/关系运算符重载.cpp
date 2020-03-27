#include<iostream>

using namespace std;

class Person{
	private:
		int age;
		string name;
	public:
		Person(int age,string name){
			this->age=age;
			this->name=name;
		}
		bool operator==(Person &p){
			if(this->age==p.age&&this->name==p.name){
				return true;
			}
			return false;
		}
};

int main(){
	Person p1(12,"java");
	Person p2(12,"java");
	if(p1==p2){
		cout<<"p1=p2"<<endl;
	}else{
		cout<<"p1!=p2"<<endl;
	}
} 
