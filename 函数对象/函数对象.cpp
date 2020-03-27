#include<iostream>

using namespace std;

class myAdd{ // 函数对象 
	public:
		myAdd(){
			this->count=0;
		}
		int operator()(int a,int b){
			this->count++;
			return a+b;
		} 
		//使用属性记录对象调用次数
		int count; 
};
void test1(){
	myAdd myadd;
	cout<< myadd(12,43) <<endl;
	cout<< myadd(12,43) <<endl;
	cout<<myadd.count<<endl; // 2
}
 // 可以作为参数传递
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
