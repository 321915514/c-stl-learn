#include<iostream>

using namespace std;

int myadd01(int a,int b){
	return a+b;
}
template<class T>
T myadd(T a,T b){
	return a+b;
}
void test(){
	int a=12,b=23;
	char c='a';
	cout<<myadd01(a,b)<<endl;
	cout<<myadd01(a,c)<<endl;
	cout<<myadd(a,b)<<endl;//����ģ���Զ������Ƶ�,���ᷢ���Զ�����ת�� 
	cout<<myadd<int>(a,c)<<endl;//��������ת��,��Ҫָ������ 
}
int main(){
	test();
} 
