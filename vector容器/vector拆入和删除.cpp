#include<iostream>

#include<vector>

using namespace std;


void printVector(vector<int>&v){
	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}
void test(){
	vector<int> v1;
	cout<<v1.capacity()<<endl;// Ϊ�յ�ʱ�� ����Ϊ0 
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	cout<<v1.capacity()<<endl;//
	 // �����ɾ��
	// βɾ
	printVector(v1);
	v1.pop_back();
	printVector(v1);
	// insert()
	v1.insert(v1.begin(),100);
	printVector(v1);
	v1.insert(v1.begin(),2,1000);
	printVector(v1);
	v1.erase(v1.begin());
	printVector(v1);
	v1.erase(v1.begin(),v1.end()); //�������� 
	printVector(v1);
	v1.clear(); //��� 
}
int main(){
	test();
} 
