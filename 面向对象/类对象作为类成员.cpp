#include<iostream>
#include<string>
using namespace std;

class Phone{
	public:
		Phone(string Phone_name):name(Phone_name){ 
			cout<<"Phone�Ĺ���"; 
		}
		string name;
};
class Person{
	public:
		Person(string name,int id):phone(name),P_id(id){
			cout<<"Person�Ĺ���"; 
		}
		Phone phone;
		int P_id;
};

void test(){
	Person p("apple",12);
	cout<<p.phone.name<<endl;
}
int main(){
	test();

	return 0;
} 
