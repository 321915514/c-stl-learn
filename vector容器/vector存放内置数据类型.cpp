#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

void myPrint(string  val){
	cout<<val<<endl; 
} 
void test01(){
	vector<string> v;//创建容器
	//向容器中插入数据
	v.push_back("hello");
	v.push_back("java");
	v.push_back("c++");
	//通过迭代器访问
	vector<string>::iterator itBegin =v.begin(); //指向第一个元素
	vector<string>::iterator itEnd =v.end();//指向容器中最后一个元素的下一个位置
	//while循环
	while(itBegin!=itEnd){
		cout<<*itBegin<<endl;
		itBegin++;
	} 
	//第二种遍历
	for(vector<string>::iterator itBegin =v.begin();itBegin!=v.end();itBegin++){
		cout<<*itBegin<<endl;
	} 
	//第三种
	 for_each(itBegin,itEnd,myPrint);
}

int main(){
	test01(); 
} 
