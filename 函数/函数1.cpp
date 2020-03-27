#include<iostream>
using namespace std;
int sum(int,int);
int main(){
	int a,b,add;
	cin>>a>>b;
	add=sum(a,b);
	cout<<add<<endl;
}
int sum(int x,int y){
	return x+y;
	
}
