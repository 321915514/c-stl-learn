#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void printList(const list<int>& L) {
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
bool myCompare(int v1,int v2){
	return v1>v2;
}

void test() {
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_front(13);
	printList(L1);
	// 不能用中括号的形式访问list容器  at也不行, list是一个链表,不能使用连续线性空间存储数据 ,迭代器也是不支持随机访问的
	cout<<L1.front()<<endl; // 第一个 
	cout<<L1.back()<<endl;  //最后一个
	L1.reverse(); // 反转列表
	printList(L1); // 反转列表
	L1.sort(); // 链表排序
	printList(L1); // 链表排序 //所有不支持随机访问迭代器的容器,不可以用标准算法
	L1.sort(myCompare); // 降序
	printList(L1);
	 
	 
}
int main() {
	test();
}
