#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

void myPrint(string  val){
	cout<<val<<endl; 
} 
void test01(){
	vector<string> v;//��������
	//�������в�������
	v.push_back("hello");
	v.push_back("java");
	v.push_back("c++");
	//ͨ������������
	vector<string>::iterator itBegin =v.begin(); //ָ���һ��Ԫ��
	vector<string>::iterator itEnd =v.end();//ָ�����������һ��Ԫ�ص���һ��λ��
	//whileѭ��
	while(itBegin!=itEnd){
		cout<<*itBegin<<endl;
		itBegin++;
	} 
	//�ڶ��ֱ���
	for(vector<string>::iterator itBegin =v.begin();itBegin!=v.end();itBegin++){
		cout<<*itBegin<<endl;
	} 
	//������
	 for_each(itBegin,itEnd,myPrint);
}

int main(){
	test01(); 
} 
