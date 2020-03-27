#include<iostream>

using namespace std;

void Myswap(int &a,int &b ){
	int temp=a;
	a=b;
	b=temp;
}
int &test1(){
	static int a=100;//static放在全局区 
	return a;
}
int main(){
	int a=10;
	int c=20;
	Myswap(a,c);
	int &b=test1();
	cout<<b<<endl;
	test1()=10000;
	cout<<a<<" "<<b<<" "<<c<<" "<<endl;
	
} 
