#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



class Person{
	friend void test();
	private:
		int age;
		string name;
	public:
			Person(int age,string name){
				this->age=age;
				this->name=name;	
			} 
};
void test(){
	Person p1(12,"java");
	Person p2(13,"c++");
	Person p3(1,"c");
	vector<Person*> v;
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	for(vector<Person*>::iterator it=v.begin();it!=v.end();it++){
		cout<<(*it)->age<<(*it)->name<<endl;
	}
}
int main(){
	test();
}
