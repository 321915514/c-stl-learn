#include<iostream>

using namespace std;

//���캯���ķ���͵���

//
class Person{
	public:
		Person(){
			cout<<"�޲�"<<endl; 
		};//�޲ι��� 
		Person(int a){//�вι��� 
			cout<<"�в�"<<endl; 
		}
		//�������캯��
		Person(const Person &p){
			//������Ķ�����������Կ������Լ�����.
			cout<<"��������"<<endl; 
		} 
		~Person(){
			cout<<"����"<<endl; 
		}
}; 

int main(){
	//���ŷ�
	Person p1;
	Person p2(12); 
	//���ÿ������캯��
	Person  p3(p1);
	//ע������:
	//������Person p1()����,����������Ϊһ������,������Ϊ�Ǵ������� 
	//��ʾ��
	Person p4=p1; 
	Person(10);//�������� ,��ǰ��ִ�н���,ϵͳ���������յ��������� 
	//��Ҫ���ÿ������캯����ʼ������������: Person(p1); ����������ΪPerson (p1)==Person p3 ,�������� 
	//��ʽת���� 
	Person  p5=10;//�ȼ��� Person p5=Person(10); �вι��� 
	Person p6=p5;//���� 
} 
