#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct student{
	int id;
	string name;
};
void printInfo(int *p,int n){
	for(int i=0;i<n;i++){
		cout<<*(p+i)<<endl;
	}
	
}
void InitStu(struct student *p,int n){
	for(int i=0;i<n;i++){
		p[i].id=rand()%10; 
	}
}
void printStu(struct student *p,int n){
	for(int i=0;i<n;i++){
		cout<<p[i].id<<endl;
	}
}
int main(){
	struct student stu[3];
	int a[]={1,2,3,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(stu)/sizeof(stu[0]);
	printInfo(a,n);
	InitStu(stu,m);
	printStu(stu,m);

	return 0;
} 
