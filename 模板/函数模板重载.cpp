#include<iostream>

using namespace std;

template<class T>
void add(T a,T b){
	cout<<"����ģ��1"<<endl; 
}
template<class T>
void add(T a,T b,T c){
	cout<<"����ģ��2"<<endl; 
}
void add(int a,int b){
	cout<<"��ͨ����"<<endl; 
}

void test(){
	add(12,30);
	add<>(12,30);
	add(12,30,23);
}
int main(){
	test();
} 
