#include<iostream>
#include<vector>
#include<map> 
#include <cstdio>
#include <cstdlib>
#include<set>
#include<ctime>
using namespace std;
/*
	有十个员工,将这些员工随机分配到每个岗位,然后输出每个岗位的人员信息
	将10个人放在vector中,然后遍历vector将人随机分配到multimap的容器中
	分部门显示员工信息
	 
	

*/
class Worker{
	public:
		string name;
		int Salary;
//		Worker(string name,int Salary){
//			this->name=name;
//			this->Salary=Salary;
//		}
};


void createWorker(vector<Worker> &worker){
	string name_seed = "ABCDEFGHIJ"; 
	for(int i=0;i<10;i++){
		Worker w;
		w.name="员工";
		w.name+=name_seed[i];
		w.Salary= rand()%10000+10000; // 坑 , 一句还执行不了  worker.push_back(Worker("员工"+name_seed[i],rand()%10000+10000));
		worker.push_back(w); // 10000-19999
	}
	
//	for(vector<Worker>::iterator it=worker.begin();it!=Worker.end();it++){
//		itWorker()
//	}
}
void printVector(vector<Worker> &worker){
	for(vector<Worker>::iterator it=worker.begin();it!=worker.end();it++){
		cout<<"姓名:"<< it->name<<" "<<"工资:"<<it->Salary<<endl;
	}	
}
void setGroup(vector<Worker> &worker,multimap<int,Worker> &mworker){
	for(vector<Worker>::iterator it=worker.begin();it!=worker.end();it++){
		int dept = rand()%3; // 0 1 2 
		mworker.insert(make_pair(dept,*it));
	}
}
void printMworker(multimap<int,Worker>&worker){ //  0 A B C  1 F G  2 D E 
	cout<<"美术--------------"<<endl;	
	for(multimap<int,Worker>::iterator it=worker.begin();it!=worker.end();it++){
		if((*it).first==0){	
			cout<<"姓名:"<< it->second.name<<" "<<"工资:"<< it->second.Salary<<endl;
			
		}
	} 
	cout<<"设计--------------"<<endl;	
	for(multimap<int,Worker>::iterator it=worker.begin();it!=worker.end();it++){
		if((*it).first==1){	
			cout<<"姓名:"<< it->second.name<<" "<<"工资:"<< it->second.Salary<<endl;
			
		}
	} 
	cout<<"开发---------------"<<endl;	
	for(multimap<int,Worker>::iterator it=worker.begin();it!=worker.end();it++){
		if((*it).first==2){	
			cout<<"姓名:"<< it->second.name<<" "<<"工资:"<< it->second.Salary<<endl;		
		}	
	}
}
int main(){
	srand((unsigned int )time(NULL));
	vector<Worker> vWorker;
	createWorker(vWorker);
	printVector(vWorker);
	// 员工分组
	multimap<int,Worker> mWorker;
	setGroup(vWorker,mWorker);
	printMworker(mWorker);
	
}

/*
姓名:员工A 工资:15799
姓名:员工B 工资:19029
姓名:员工C 工资:14589
姓名:员工D 工资:11870
姓名:员工E 工资:11106
姓名:员工F 工资:16145
姓名:员工G 工资:12290
姓名:员工H 工资:15171
姓名:员工I 工资:13026
姓名:员工J 工资:19923
美术--------------
姓名:员工B 工资:19029
姓名:员工C 工资:14589
姓名:员工D 工资:11870
姓名:员工F 工资:16145
设计--------------
姓名:员工A 工资:15799
姓名:员工E 工资:11106
姓名:员工J 工资:19923
开发---------------
姓名:员工G 工资:12290
姓名:员工H 工资:15171
姓名:员工I 工资:13026
*/ 
