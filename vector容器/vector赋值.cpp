#include<iostream>

#include<vector>

using namespace std;

void printVector(vector<int> &v){
	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
}
void test(){
	vector<int> v1;
	for(int i=0;i<4;i++){
		v1.push_back(i);
	}
	printVector(v1);
	vector<int> v2;
	v2=v1; //øΩ±¥ππ‘Ï 
	printVector(v2);
	vector<int> v3;
	v3.assign(v1.begin(),v1.end());
	printVector(v3);
	vector<int> v4;
	v4.assign(10,100); //∏≥÷µ 
	printVector(v4);
}

int main(){
	test();
} 
