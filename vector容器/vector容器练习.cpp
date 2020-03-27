#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void test(){
	vector<int> v;
	v.push_back(12);
	v.push_back(23);
	for(vector<int>::iterator vbegin=v.begin();vbegin!=v.end();vbegin++){
		cout<<*vbegin<<endl;
	} 
}
int main(){
	test();
} 
