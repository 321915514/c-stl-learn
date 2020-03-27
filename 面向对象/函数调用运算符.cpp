#include<iostream>
using namespace std;

class Person{
	public:
		void operator()(string text){
			cout<<text<<endl;
		}
};
int main(){
	Person p1;
	p1("Hello world");
	Person()("123");//ÄäÃû¶ÔÏó 
}
