#include<iostream>

using namespace std;

//构造函数的分类和调用

//
class Person{
	public:
		Person(){
			cout<<"无参"<<endl; 
		};//无参构造 
		Person(int a){//有参构造 
			cout<<"有参"<<endl; 
		}
		//拷贝构造函数
		Person(const Person &p){
			//将传入的对象的所有属性拷贝到自己身上.
			cout<<"拷贝构造"<<endl; 
		} 
		~Person(){
			cout<<"析构"<<endl; 
		}
}; 

int main(){
	//括号法
	Person p1;
	Person p2(12); 
	//调用拷贝构造函数
	Person  p3(p1);
	//注意事项:
	//不能用Person p1()调用,编译器会认为一个函数,不会认为是创建对象 
	//显示法
	Person p4=p1; 
	Person(10);//匿名对象 ,当前行执行结束,系统会立即回收掉匿名对象 
	//不要利用拷贝构造函数初始化匿名对象如: Person(p1); 编译器会认为Person (p1)==Person p3 ,对象声明 
	//隐式转换法 
	Person  p5=10;//等价于 Person p5=Person(10); 有参构造 
	Person p6=p5;//拷贝 
} 
