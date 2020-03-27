#include<iostream>

using namespace std;

class Base{
	public:
		int a;
		Base(){
			a=100;
		}
		void fun(){
			cout<<"父类同名函数"<<endl; 
		}
		void fun(int a){
			cout<<"父类同名函数"<<endl; 
		}
	protected:
		int b;
	private:
		int c;
}; 
class A:public Base{
	public:
		A(){
			a=23;
		}
		int a;
		void fun(){
			cout<<"子类同名函数"<<endl; 
		}
};
class B:protected Base{
}; 
class C:private Base{
};
void test(){
	A a1;
	cout<<a1.a<<endl;
	cout<<a1.Base::a<<endl;
	a1.fun();
	a1.Base::fun();
	//若想访问到父类的同名成员函数加作用域 
	a1.Base::fun(1000); 

	
	
}
int main(){
	test();
} 
