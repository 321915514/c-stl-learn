#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


// 仿函数 返回值是bool类型, 成为谓词 
// 一元谓词 ,接收一个参数 
class GreatorFind{
	public:
		bool operator()(int val){ // 一元谓词 
			return val>5;
		}

}; 
class myCompare{
	public:
		bool operator()(int a,int b){ // 二元谓词 
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
