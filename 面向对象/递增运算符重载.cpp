#include<iostream>


using namespace std;

//自增运算符重载 

class MyInteger{
	friend ostream & operator<<(ostream &cout,MyInteger Integer);//为什么不传引用 
	private:
		int num;
		
	public:
		MyInteger(){
			num=0;
		}
	MyInteger& operator++(){//前置++
		num++;
	return *this;
	}
	
	MyInteger operator++(int){//后置++
		MyInteger temp=*this;
		num++;
		return temp;
	}
	 	
}; 
ostream & operator<<(ostream &cout,MyInteger Integer){
	cout<<Integer.num;
	return cout;
}
//重载++运算符
 //前置++,后置++;
 
 void test(){
 	MyInteger myint;
	cout<<myint++<<endl;
	cout<<myint<<endl;
 	
 }
int main(){
	MyInteger num;
	cout<<num<<endl;
	cout<<++num<<endl; 
	cout<<num<<endl;
	test();
} 
