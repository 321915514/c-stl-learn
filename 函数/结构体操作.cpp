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
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"} 
	};
	for(int i=0;i<sizeof(hero)/sizeof(hero[0]);i++){
		cout<<"���� "<<hero[i].name<<"���� "<<hero[i].age<<"�Ա� "<<hero[i].gender<<endl; 
	}
	orderByAge(hero,sizeof(hero)/sizeof(hero[0]));
	cout<<"--------------------"<<endl;
	for(int i=0;i<sizeof(hero)/sizeof(hero[0]);i++){
		cout<<"���� "<<hero[i].name<<"���� "<<hero[i].age<<"�Ա� "<<hero[i].gender<<endl; 
	}
}
