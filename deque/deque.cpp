#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
// deque容器的插入和删除 
void printDeque(const deque<int>&d){
	for(deque<int>::const_iterator it=d.begin();it!=d.end();it++){
		cout<<*it<<" ";	
	}
	cout<<endl;
}
void test(){
	deque<int> d;
	d.push_back(12);
	d.push_back(100);
	d.push_front(120);
	printDeque(d);
	// 尾删
	d.pop_back();
	d.pop_front();
	printDeque(d);
	// 指定位置插入删除
	d.insert(d.begin(),10000);
	printDeque(d); 
	// 在指定区间
	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	// 
	d.insert(d.begin(),d2.begin(),d2.end());
	
	printDeque(d); 
	
	// 删除
	d.erase(d.begin());
	deque<int>::iterator it=d.begin();
	it++;
	d.erase(it); 
	printDeque(d);
	sort(d.begin(),d.end());
	printDeque(d);
}
/*
120 12 100
12
10000 12
1 2 3 10000 12
2 10000 12
2 12 10000
*/

int main(){
	test();
} 
