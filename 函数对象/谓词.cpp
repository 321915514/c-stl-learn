#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


// �º��� ����ֵ��bool����, ��Ϊν�� 
// һԪν�� ,����һ������ 
class GreatorFind{
	public:
		bool operator()(int val){ // һԪν�� 
			return val>5;
		}

}; 
class myCompare{
	public:
		bool operator()(int a,int b){ // ��Ԫν�� 
			return a>b;
		}
}; 


void test(){
	vector<int> v;
	for(int i=0;i<10;i++){
		v.push_back(i);
	}
	vector<int>::iterator it=find_if(v.begin(),v.end(),GreatorFind());
	cout<<*it<<endl;
	sort(v.begin(),v.end(),myCompare());
	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	} 
}

/*
6
9 8 7 6 5 4 3 2 1 0
*/
 
 
int main(){
	test();
}
