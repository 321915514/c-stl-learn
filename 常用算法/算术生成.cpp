#include<iostream>
#include<vector>
using namespace std;
#include<numeric> // 头文件 

void test(){
	vector<int>v;
	for(int i=0;i<=100;i++){
		v.push_back(i);
	}
	// 第三个参数是累加起始值. 
	cout<<accumulate(v.begin(),v.end(),0)<<endl;
	// fill() 填充新值
	//fill()
	 
}
int main(){
	test();
} 
