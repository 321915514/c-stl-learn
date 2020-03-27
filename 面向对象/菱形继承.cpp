#include<iostream>

using namespace std;

class Base{
	public:
		int age;
};
class A:virtual public Base{
};
class B:virtual public Base{
};
class C:public A,public B{
};
void test(){
	C c;
	c.age=100;
	c.age=23;
	cout<<c.age<<endl;
}
int main(){
	test();
} 
