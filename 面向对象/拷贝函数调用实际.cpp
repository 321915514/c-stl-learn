#include<iostream>

using namespace std;

//拷贝构造函数调用时机 
//1 使用一个已经创建的对象来初始化一个新对象 
//2 值传递的方式给函数传值
//3 值返回局部对象
class Person{
	public:
		Person(){
		cout<<"默认"<<endl; 
		};
		Person(const Person &p){
			cout<<"拷贝构造"<<endl; 
		}
		~Person(){
			cout<<"析构"<<endl; 
		}
}; 

void test1(){
	Person p1;
	Person p2(p1);
}
void dowork(Person p){
	
}
void test2(){
	Person p3;
	dowork(p3);
}
Person dowork1(){
	Person p4;
	cout<<"p4--"<<(int*)&p4<<endl;
	return p4;
}
void test3(){
	Person p5=dowork1();
	cout<<(int*)&p5<<endl;
} 
int main(){
	test1();
	test2();
	test3();

	return 0;
} 
