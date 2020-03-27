#include<iostream>
#include<list>

using namespace std;

void printList(const list<int>&L){
	
	for(list<int>::const_iterator it=L.begin();it!=L.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
} 

void test(){
	list<int> L1;
	list<int> L2;
	L1.push_back(100);
	L1.push_back(20);
	L1.push_back(12);
	L2.assign(10,100);
	printList(L1);
	printList(L2);
	L1.swap(L2); //½»»» 
	printList(L1);
	printList(L2);
}
int main(){
	test();
} 
