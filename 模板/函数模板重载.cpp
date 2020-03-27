#include<iostream>

using namespace std;

template<class T>
void add(T a,T b){
	cout<<"函数模板1"<<endl; 
}
template<class T>
void add(T a,T b,T c){
	cout<<"函数模板2"<<endl; 
}
void add(int a,int b){
	cout<<"普通函数"<<endl; 
}

void test(){
	add(12,30);
	add<>(12,30);
	add(12,30,23);
}
int main(){
	test();
} 
