#include<iostream>

using  namespace std;
class Person{
	public:
		Person(int a,int b,int c):a(a),b(b),c(c){//初始化列表 
		}
		int a;
		int b;
		int c;
};	
int main(){
	Person p(1,2,3);
	cout<<p.a<<p.b<<" "<<p.c<<endl;
	
}
