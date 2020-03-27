#include<iostream>

using namespace std;

//深拷贝,浅拷贝
class  Person{
	public:
		Person(){	
		}
		~Person(){
			//将堆区开辟的数据释放
			 if(P_height!=NULL){
			 	delete P_height;
			 	P_height=NULL;
			 } 
		}
		Person(int age,int height){
			P_height=new int(height);
			P_age=age;
		}
		Person(const Person &p){
			P_age=p.P_age;
			//p_height=p.P_height;编译器执行的是这种
			//用深拷贝解决
			 P_height=new int(*p.P_height); 
		}
		
		int P_age;
		int *P_height;
};

void Test1(){
	Person p(12,150);
	Person p1(p);
	cout<<p.P_age<<*p.P_height<<endl;
	cout<<p1.P_age<<*p1.P_height<<endl;
}
int main(){
	Test1();
	return 0;
} 
