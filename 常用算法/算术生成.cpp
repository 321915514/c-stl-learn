#include<iostream>
#include<vector>
using namespace std;
#include<numeric> // ͷ�ļ� 

void test(){
	vector<int>v;
	for(int i=0;i<=100;i++){
		v.push_back(i);
	}
	// �������������ۼ���ʼֵ. 
	cout<<accumulate(v.begin(),v.end(),0)<<endl;
	// fill() �����ֵ
	//fill()
	 
}
int main(){
	test();
} 
