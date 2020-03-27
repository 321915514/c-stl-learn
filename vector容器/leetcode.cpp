#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;


class Solution {
public:
    int num=0;
    int i=0;
    int j=0;
    int minIncrementForUnique(vector<int>& A) {
		 for(i=j;i<A.size();i++){
		 	if(A[i]==A[j]){
		 		A[i]+=1;
			 }
			 j++;
			 vector<int> B;
			 for(int i=j;i<A.size();i++){
			 	B.push_back(A[i]);
			 }
			 
			 
		 }
		 for(i=1;i<A.size();i++){
		 	if(A[i]==A[0]){
		 		A[i]+=1;
			 }
			 j++;
		}
		 

    }
};

int main(){
	Solution s;
	vector<int> A;
	A.push_back(1);
	A.push_back(1); //2 
	A.push_back(2); // 3
	A.push_back(2); //
	A.push_back(3); //
	A.push_back(7);
	int a=s.minIncrementForUnique(A);
	
	for(int i=0;i<A.size();i++){
		cout<<A[i]<< " ";
	}
} 
