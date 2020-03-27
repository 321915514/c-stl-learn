#include<iostream>
using namespace std;

typedef struct student{
	int id;
	string name;
	int score;
}Student,*stu;//STUDENT ==struct student  ,*stu==struct student *,
int main(){
	Student stu1;
	stu p;
	p=&stu1;
	stu1.id=1;
	stu1.name="java";
	stu1.score=90;
	cout<<p->name<<endl;
	
} 
