#include<iostream>

using namespace std;

struct Hero{
	string name;
	int age;
	string gender;
};
void orderByAge(struct Hero *p,int n){
	struct Hero temp; 
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(p[i].age>p[j].age){
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			} 
		}
	}
	
}
int main(){
	struct Hero hero[5]={
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"} 
	};
	for(int i=0;i<sizeof(hero)/sizeof(hero[0]);i++){
		cout<<"姓名 "<<hero[i].name<<"年龄 "<<hero[i].age<<"性别 "<<hero[i].gender<<endl; 
	}
	orderByAge(hero,sizeof(hero)/sizeof(hero[0]));
	cout<<"--------------------"<<endl;
	for(int i=0;i<sizeof(hero)/sizeof(hero[0]);i++){
		cout<<"姓名 "<<hero[i].name<<"年龄 "<<hero[i].age<<"性别 "<<hero[i].gender<<endl; 
	}
}
