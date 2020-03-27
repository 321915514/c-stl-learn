#include<iostream>

using namespace std;

int fun(int a,int b=10000,int c=100){//若我们自己传入数据,就用自己的数据,如果没有,就用默认值 
	return a+b+c;
}

int main(){
	cout<<fun(10,20)<<endl;
} 
