#include<iostream>

using namespace std;

const double PI=3.14;

class Circle{
	public://权限
		int r ;
		double calculateZC(){
			return 2*PI*r;
		}
		
	
};

int main(){
	//创建对象
	 Circle c1;
	 c1.r=3;
	 cout<<"圆的周长:"<<c1.calculateZC()<<endl;
	 
} 
