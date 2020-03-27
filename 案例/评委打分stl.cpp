#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
#include<ctime>
using namespace std;
class Person{
	public:
		string name;
		int score;
		Person(string name,int score){
			this->name=name;
			this->score=score;
		}
};
void print(const vector<Person>&v){
	for(vector<Person>::const_iterator it=v.begin();it!=v.end();it++){
		cout<<(*it).name<<":"<<"分数"<<(*it).score<<endl;
	}
	cout<<endl;
}
void createPerson(vector<Person> &v){
	string stringSeed="ABCDE";
	int score=0;
	for(int i=0;i<5;i++){
		string name ="选手";
		name+=stringSeed[i];
		Person p(name,score);
		v.push_back(p); //创建5名对象 
	}
}

void setScore(vector<Person>&v){
	for(vector<Person>::iterator it=v.begin();it!=v.end();it++){
		deque<int> d;
		for(int i=0;i<10;i++){
			int score=rand()%41+60; //60-100
			d.push_back(score);
			cout<<(*it).name<<":"<<score<<" ";
		}
		cout<<endl;
		sort(d.begin(),d.end()); // 排序
		d.pop_front();
		d.pop_back(); //去掉分数
		int sum=0;
		for(deque<int>::iterator it=d.begin();it!=d.end();it++){
			sum+=*it;
		}
		(*it).score=sum/d.size();
	}
} 

int main(){
	//随机数种子
	srand((unsigned int)time(NULL)); 
	// 创建5名选手
	vector<Person> v;
	createPerson(v);
	// 给5名选手打分
	setScore(v);
	//  
	print(v);
	cout<<rand()<<endl;
} 
