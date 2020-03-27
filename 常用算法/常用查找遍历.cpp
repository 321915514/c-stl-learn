#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class print1{
	public:
		void operator()(int val){
			cout<<val<<" ";
		}
};
class Person{
	public:
		string name;
		int age;
		Person(string name,int age){
			this->age=age;
			this->name=name;
		}
		bool operator==(const Person&p){ //比较规则 
			if(this->name==p.name&&this->age==p.age){
				return true;
			}else{
				return false;
			}
		}
}; 
void print(int val){
	cout<< val <<" "; 
}
void test1(){
	// for_each
	vector<int> v;
	for(int i=0;i<9;i++){
		v.push_back(i);
	}
	
	for_each(v.begin(),v.end(),print); //遍历
	cout<<endl;
	for_each(v.begin(),v.end(),print1()); //遍历
	cout<<endl;	
	//常用的查找算法
	// find
	vector<Person> p;
	Person p1("12",32);
	Person p2("43",32);
	Person p3("45",32);
	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);
	vector<int>::iterator it=find(v.begin(),v.end(),5); // 必返回一个迭代器,如果没找到,就返回end 
	cout<<*it<<endl; 
	vector<Person>::iterator itp=find(p.begin(),p.end(),p1); //查找自定义数据类型 
	cout<<itp->name<<" "<<itp->age<<endl;
	cout<<endl;
	// find_if
	// adjacent_find 查找相邻重复的元素
	// binary_search 二分查找 返回值是true 和false  查找的元素必须为有序序列 
	cout<<binary_search(v.begin(),v.end(),6)<<endl; 
	// count 统计 
	cout<<count(v.begin(),v.end(),1)<<endl;
	// count_if
	 
	
	 
}

int main(){
	test1();
} 
