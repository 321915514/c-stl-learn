#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void check(vector<int> &v,int j,int &num){
	for(int i=j+1;i<v.size();i++){
		sort(v.begin(),v.end());
		if(v[i]==v[j]){
			v[i]+=1;
			num++;
		}
		j++;
		check(v,j,num);		
	}
//	int num=0;
//	vector<int>::iterator p2;
//	vector<int>::iterator p1;
//	p1=v.begin();
//	p2=v.end();
//	for(int i=0;i<v.size();i++){
//			if(*p1==*p2 && &p1 != &p2){
//				*p2 ++;
//				num++;
//				check(v);
//			}
//			p1++;
//			p2--;		
//		}
//		cout<<num<<endl;
}
void test(){
	vector<int> v;
	v.push_back(2);
	v.push_back(2);
	v.push_back(1);
	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
//	cout<<endl;
//	int num=0;
//	check(v,num);
//		for(vector<int>::iterator it=v.begin();it!=v.end();it++){
//			if(*it != *it++){
//				break;
//			}
//		}
//	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
//		cout<<*it<<" ";
//	}
	cout<<endl;
		
}
void test1(){
	vector<int> v;
	v.push_back(2);
	v.push_back(2);
	v.push_back(1);
	int num=0;
	check(v,0,num);
	cout<<num<<endl;
		 
	}
int main(){
	//test();
	test1();
}

