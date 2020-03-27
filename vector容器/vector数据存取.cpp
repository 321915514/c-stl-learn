#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> &v1){
	for(vector<int>::iterator it=v1.begin();it!=v1.end();it++){
		cout<<*it<<" "; 
	} 
	cout<<endl;
}
void test(){
	vector<int> v1;
	vector<int> v2;
	for(int i=0;i<10;i++){
		v1.push_back(i);
	}
	for(int i=10;i>0;i--){
		v2.push_back(i);
	}
	//cout<<*v1<<endl; // 不被允许 
	// 数组方式遍历vector
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	} 
	cout<<endl;
	for(int i=0;i<v1.size();i++){
		cout<<v1.at(i)<<" ";
	}
	cout<<endl;
	// 获取第一个元素
	cout<<v1.front()<<endl; 
	//互换容器
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
	 // 实际用途,收缩内存空间 
	vector<int> v4;
	
	//使用reserve预留空间,可以减少内存开辟次数
	v4.reserve(100000); 
	int num=0; 
	int *p=NULL;  
	for(int i=0;i<100000;i++){
	 	v4.push_back(i);
	 	if(p!=&v4[0]){
	 		p=&v4[0];
	 		num++;
		 }
	} 
	cout<<num<<endl; //num 用来统计开辟了多少次内存  18 次 
	cout<<v4.capacity()<<endl;
	v4.resize(3);
	vector<int>(v4).swap(v4); //匿名对象 ,回收内存 
	cout<<v4.capacity()<<endl;
	// 预留空间
	 
}

int main(){
	test();
} 
