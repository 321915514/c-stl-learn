#include<iostream>


using namespace std;


class Person{
	friend ostream & operator<<(ostream &cout,Person &p);
	private:
		int a;
		int b;
	public:
		Person(int a,int b){
			this->a=a;
			this->b=b;
		}
};

ostream & operator<<(ostream &cout,Person &p){
	cout<<p.a<<"-----------"<<p.b;
}

int main(){
	Person p1(12,23);
	cout<<p1<<endl;
	
}
