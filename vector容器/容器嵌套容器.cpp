#include<iostream>
#include<vector>
using namespace std;

void test(){
	vector<vector<int> >v; //这里右边>>必须分开写 
	vector<int> v1;
	vector<int> v2;
	for(int i=0;i<4;i++){
		v1.push_back(i);
		v2.push_back(i+1);
	}
	v.push_back(v1);
	v.push_back(v2);
	for(vector<vector<int> >::iterator it = v.begin();it!=v.end();it++){
		// *it 指的是vector<int>
		//再次遍历
		for(vector<int>::iterator vit=(*it).begin();vit!=(*it).end();vit++){
			cout<<*(vit)<<" ";
		} 
		cout<<endl;
	}
}

int main(){
	test();
} 
