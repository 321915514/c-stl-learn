#include<iostream>

using namespace std;

//�������캯������ʱ�� 
//1 ʹ��һ���Ѿ������Ķ�������ʼ��һ���¶��� 
//2 ֵ���ݵķ�ʽ��������ֵ
//3 ֵ���ؾֲ�����
class Person{
	public:
		Person(){
		cout<<"Ĭ��"<<endl; 
		};
		Person(const Person &p){
			cout<<"��������"<<endl; 
		}
		~Person(){
			cout<<"����"<<endl; 
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
