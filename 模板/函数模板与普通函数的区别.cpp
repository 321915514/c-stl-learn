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
	cout<<myadd(a,b)<<endl;//函数模板自动类型推导,不会发生自动类型转换 
	cout<<myadd<int>(a,c)<<endl;//不能类型转换,需要指定类型 
}
int main(){
	test();
} 
