#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
using namespace std;


void print(int val){
	cout<<val<<" ";
}

void test(){
	vector<int> v;
	for(int i=0;i<9;i++){
		v.push_back(i);
	}
	vector<int>  v2;
	for(int i=0;i<4;i++){
		v2.push_back(i);
	}
	vector<int> v3;
	v3.resize(v.size()+v2.size());
	merge(v.begin(),v.end(),v2.begin(),v2.end(),v3.begin()); // merge �ϲ�, �����������ϲ��ŵ�������������. �����������������,�ϲ���Ҳ������� 
	for_each(v3.begin(),v3.end(),print);  
	cout<<endl;
	reverse(v.begin(),v.end());
	for_each(v.begin(),v.end(),print);
	cout<<endl;
	random_shuffle(v.begin(),v.end()); // random_shuffle ϴ��,����������� 
	for_each(v.begin(),v.end(),print);
	cout<<endl; 
	
}
int main(){
	srand((unsigned int)time(NULL));
	test();
} 
