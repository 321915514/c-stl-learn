#include<iostream>

using namespace std;

//���,ǳ����
class  Person{
	public:
		Person(){	
		}
		~Person(){
			//���������ٵ������ͷ�
			 if(P_height!=NULL){
			 	delete P_height;
			 	P_height=NULL;
			 } 
		}
		Person(int age,int height){
			P_height=new int(height);
			P_age=age;
		}
		Person(const Person &p){
			P_age=p.P_age;
			//p_height=p.P_height;������ִ�е�������
			//��������
			 P_height=new int(*p.P_height); 
		}
		
		int P_age;
		int *P_height;
};

void Test1(){
	Person p(12,150);
	Person p1(p);
	cout<<p.P_age<<*p.P_height<<endl;
	cout<<p1.P_age<<*p1.P_height<<endl;
}
int main(){
	Test1();
	return 0;
} 
