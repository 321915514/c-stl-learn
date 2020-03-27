#include<iostream>
#include<functional> // 算数仿函数头文件
#include<vector>
#include<algorithm> 
using namespace std;


void test1(){
	plus<int> p;
	negate<int> n; 
	cout<<p(12,43)<<endl; // 不支持匿名 
	cout<<n(129)<<endl; //取反 
	vector<int> v;
	for(int i=0;i<9;i++){
		v.push_back(i);
	}
	sort(v.begin(),v.end(),greater<int>()); //关系仿函数  
	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";  
	}
	cout<<endl; 
	// 逻辑运算符
	vector<bool> v1;
	v1.push_back(true);
	vector<bool> v2;
	v2.resize(v1.size());
	transform(v1.begin(),v1.end(),v2.begin(),logical_not<bool>());
	for(vector<bool>::iterator it=v2.begin();it!=v2.end();it++){
		cout<<*it<<" ";  
	}
}

/*
55
-129
8 7 6 5 4 3 2 1 0
0
*/

int main(){
	test1();
} 
