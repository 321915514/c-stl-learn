#include<iostream>
#include<set>

using namespace std;


//void printSet(set<int> &s){
//	for(set<int,compare>::iterator it=s.begin();it!=s.end();it++){
//		cout<<*it<<" ";
//	}
//	cout<<endl;
//}
class compare{
	public:
		bool operator()(int v1,int v2){
			return v1>v2;
		}
		
	
};

		
 
void test(){
	set<int,compare> s;
	s.insert(23);
	s.insert(43);
	for(set<int,compare>::iterator it=s.begin();it!=s.end();it++){
		cout<<*it<<" ";
	}
//	// find ·µ»Øµü´úÆ÷
//	if(s.find(43)!=s.end()){
//		cout<<*(s.find(43))<<endl; // ·µ»Øµü´úÆ÷ *(s.find(23))
//	} 
	
	
}
int main(){
	test();
} 
