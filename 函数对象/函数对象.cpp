#include<iostream>

using namespace std;

class myAdd{ // �������� 
	public:
		myAdd(){
			this->count=0;
		}
		int operator()(int a,int b){
			this->count++;
			return a+b;
		} 
		//ʹ�����Լ�¼������ô���
		int count; 
};
void test1(){
	myAdd myadd;
	cout<< myadd(12,43) <<endl;
	cout<< myadd(12,43) <<endl;
	cout<<myadd.count<<endl; // 2
}
 // ������Ϊ��������
void doAdd(myAdd &myadd,int a,int b){
	cout<<myadd(a,b)<<endl;
}
void  test2(){
	myAdd myadd;
	doAdd(myadd,12,44);
}
int main(){
	//test1();
	test2();
} 
