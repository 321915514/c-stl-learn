#include<iostream>

using namespace std;

const double PI=3.14;

class Circle{
	public://Ȩ��
		int r ;
		double calculateZC(){
			return 2*PI*r;
		}
		
	
};

int main(){
	//��������
	 Circle c1;
	 c1.r=3;
	 cout<<"Բ���ܳ�:"<<c1.calculateZC()<<endl;
	 
} 
