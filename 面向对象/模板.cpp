#include<iostream>

using namespace std;


template<class T>
void add(T a,T b){
	cout<<a+b<<endl; 
}

void test(){
	add<int>(23,12);
	add(12.2,34.2);
}
int main(){
	test();
} 
