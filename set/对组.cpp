#include<iostream>

using namespace std;

int main(){
	pair<string,int>p("tom",23);
	pair<string,int> p2 =make_pair("zhangsan",43);
	cout<<p.first<<p.second<<endl;
	cout<<p2.first<<p2.second<<endl;
} 
