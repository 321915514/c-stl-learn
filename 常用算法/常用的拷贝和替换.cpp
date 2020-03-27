#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


void print(int val){
	cout<<val<<" ";
}
void test(){
	// copy(v.begin(),v.end(),v2.begin()); copy 
	vector<int> v;
	v.push_back(10);
	v.push_back(23);
	v.push_back(23);
	vector<int> v2;
	v2.resize(v.size());
	copy(v.begin(),v.end(),v2.begin());
	for_each(v2.begin(),v2.end(),print);
	cout<<endl;
	// replace;
	replace(v.begin(),v.end(),23,2000);
	copy(v.begin(),v.end(),v2.begin());
	for_each(v2.begin(),v2.end(),print);
	// swap
	
}
int main(){
	test();
}
