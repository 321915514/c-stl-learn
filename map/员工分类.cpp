#include<iostream>
#include<vector>
#include<map> 
#include <cstdio>
#include <cstdlib>
#include<set>
#include<ctime>
using namespace std;
/*
	��ʮ��Ա��,����ЩԱ��������䵽ÿ����λ,Ȼ�����ÿ����λ����Ա��Ϣ
	��10���˷���vector��,Ȼ�����vector����������䵽multimap��������
	�ֲ�����ʾԱ����Ϣ
	 
	

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
		w.name="Ա��";
		w.name+=name_seed[i];
		w.Salary= rand()%10000+10000; // �� , һ�仹ִ�в���  worker.push_back(Worker("Ա��"+name_seed[i],rand()%10000+10000));
		worker.push_back(w); // 10000-19999
	}
	
//	for(vector<Worker>::iterator it=worker.begin();it!=Worker.end();it++){
//		itWorker()
//	}
}
void printVector(vector<Worker> &worker){
	for(vector<Worker>::iterator it=worker.begin();it!=worker.end();it++){
		cout<<"����:"<< it->name<<" "<<"����:"<<it->Salary<<endl;
	}	
}
void setGroup(vector<Worker> &worker,multimap<int,Worker> &mworker){
	for(vector<Worker>::iterator it=worker.begin();it!=worker.end();it++){
		int dept = rand()%3; // 0 1 2 
		mworker.insert(make_pair(dept,*it));
	}
}
void printMworker(multimap<int,Worker>&worker){ //  0 A B C  1 F G  2 D E 
	cout<<"����--------------"<<endl;	
	for(multimap<int,Worker>::iterator it=worker.begin();it!=worker.end();it++){
		if((*it).first==0){	
			cout<<"����:"<< it->second.name<<" "<<"����:"<< it->second.Salary<<endl;
			
		}
	} 
	cout<<"���--------------"<<endl;	
	for(multimap<int,Worker>::iterator it=worker.begin();it!=worker.end();it++){
		if((*it).first==1){	
			cout<<"����:"<< it->second.name<<" "<<"����:"<< it->second.Salary<<endl;
			
		}
	} 
	cout<<"����---------------"<<endl;	
	for(multimap<int,Worker>::iterator it=worker.begin();it!=worker.end();it++){
		if((*it).first==2){	
			cout<<"����:"<< it->second.name<<" "<<"����:"<< it->second.Salary<<endl;		
		}	
	}
}
int main(){
	srand((unsigned int )time(NULL));
	vector<Worker> vWorker;
	createWorker(vWorker);
	printVector(vWorker);
	// Ա������
	multimap<int,Worker> mWorker;
	setGroup(vWorker,mWorker);
	printMworker(mWorker);
	
}

/*
����:Ա��A ����:15799
����:Ա��B ����:19029
����:Ա��C ����:14589
����:Ա��D ����:11870
����:Ա��E ����:11106
����:Ա��F ����:16145
����:Ա��G ����:12290
����:Ա��H ����:15171
����:Ա��I ����:13026
����:Ա��J ����:19923
����--------------
����:Ա��B ����:19029
����:Ա��C ����:14589
����:Ա��D ����:11870
����:Ա��F ����:16145
���--------------
����:Ա��A ����:15799
����:Ա��E ����:11106
����:Ա��J ����:19923
����---------------
����:Ա��G ����:12290
����:Ա��H ����:15171
����:Ա��I ����:13026
*/ 
