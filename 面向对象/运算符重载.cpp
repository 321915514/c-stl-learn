#include<iostream>

using namespace std;


//�Ӻ����������
//ȫ�ֺ������ؼӺ�
 
class Person{
	public:
		int a;
		int b;
//		Person operator+(Person &p){//��Ա�����ı��� 
//			Person temp;
//			temp.a=p.a+this->a;
//			temp.b=p.b+this->b;
//			return temp;	
//		}	
};

Person operator+(Person &p1,Person &p2){
	Person temp;
	temp.a=p1.a+p2.a;
	temp.b=p1.b+p2.b;
	return temp;
} 
int main(){
	Person p1;
	Person p2;
	p2.a=12;
	p2.b=23;
	p1.a=10;
	p1.b=10;
	Person p3=p1+p2;
	cout<<p3.a<<"------------"<<p3.b<<endl;
} 
