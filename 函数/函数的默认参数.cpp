#include<iostream>

using namespace std;

int fun(int a,int b=10000,int c=100){//�������Լ���������,�����Լ�������,���û��,����Ĭ��ֵ 
	return a+b+c;
}

int main(){
	cout<<fun(10,20)<<endl;
} 
