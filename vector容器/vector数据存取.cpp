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
	//cout<<*v1<<endl; // �������� 
	// ���鷽ʽ����vector
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	} 
	cout<<endl;
	for(int i=0;i<v1.size();i++){
		cout<<v1.at(i)<<" ";
	}
	cout<<endl;
	// ��ȡ��һ��Ԫ��
	cout<<v1.front()<<endl; 
	//��������
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
	 // ʵ����;,�����ڴ�ռ� 
	vector<int> v4;
	
	//ʹ��reserveԤ���ռ�,���Լ����ڴ濪�ٴ���
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
	cout<<num<<endl; //num ����ͳ�ƿ����˶��ٴ��ڴ�  18 �� 
	cout<<v4.capacity()<<endl;
	v4.resize(3);
	vector<int>(v4).swap(v4); //�������� ,�����ڴ� 
	cout<<v4.capacity()<<endl;
	// Ԥ���ռ�
	 
}

int main(){
	test();
} 
