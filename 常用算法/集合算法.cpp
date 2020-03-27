#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(int val){
	cout<<val<<" ";
}
void test(){
	vector<int> v;
	vector<int> v2;
	vector<int> v3;
	for(int i=0;i<10;i++){
		v.push_back(i);
		v2.push_back(i+5);
	} 
	v3.resize(min(v.size(),v2.size()));
	// 交集 
	vector<int>::iterator it=set_intersection(v.begin(),v.end(),v2.begin(),v2.end(),v3.begin());
	for_each(v3.begin(),it,print); // 注意 
	cout<<endl; 
	// 并集
	v3.resize(v.size()+v2.size());
	vector<int>::iterator vit=set_union(v.begin(),v.end(),v2.begin(),v2.end(),v3.begin());
	for_each(v3.begin(),vit,print); // 注意 
	cout<<endl;
	// 补集
	v3.resize(max(v.size(),v2.size()));
	vector<int>::iterator vdit=set_difference(v.begin(),v.end(),v2.begin(),v2.end(),v3.begin());
	for_each(v3.begin(),vdit,print); // 注意 
	cout<<endl;
		v3.resize(max(v.size(),v2.size()));
	vector<int>::iterator vmaxit=set_difference(v2.begin(),v2.end(),v.begin(),v.end(),v3.begin());
	for_each(v3.begin(),vmaxit,print); // 注意 
	cout<<endl;
}

/*
5 6 7 8 9
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
0 1 2 3 4
10 11 12 13 14
*/

int main(){
	test();
} 
