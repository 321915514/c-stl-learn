#include<iostream>
#include<map>
using namespace std;
void test(){
	map<string,int> m;
	m.insert(pair<string,int>("zhangsan",23));
	m.insert(pair<string,int>("lisi",34));
	m.insert(pair<string,int>("wangwu",343));
	m.insert(make_pair("wangmazi",89));
	m.insert(map<string,int>::value_type("啦啦啦",43));
	cout<<m["zhangsan"]<<endl; // 中括号适合访问,不适合插入 
	cout<< *(m.find("zhangsan")) <<endl; 
	for(map<string,int>::iterator it=m.begin();it!=m.en
	d();it++){
		cout<<it->first<<it->second<<endl;
	}
}
int main(){
	test();
} 
