#include<iostream>
#include<vector>
using namespace std;

void test(){
	vector<vector<int> >v; //�����ұ�>>����ֿ�д 
	vector<int> v1;
	vector<int> v2;
	for(int i=0;i<4;i++){
		v1.push_back(i);
		v2.push_back(i+1);
	}
	v.push_back(v1);
	v.push_back(v2);
	for(vector<vector<int> >::iterator it = v.begin();it!=v.end();it++){
		// *it ָ����vector<int>
		//�ٴα���
		for(vector<int>::iterator vit=(*it).begin();vit!=(*it).end();vit++){
			cout<<*(vit)<<" ";
		} 
		cout<<endl;
	}
}

int main(){
	test();
} 
