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
		bool operator==(const Person&p){ //�ȽϹ��� 
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
	
	for_each(v.begin(),v.end(),print); //����
	cout<<endl;
	for_each(v.begin(),v.end(),print1()); //����
	cout<<endl;	
	//���õĲ����㷨
	// find
	vector<Person> p;
	Person p1("12",32);
	Person p2("43",32);
	Person p3("45",32);
	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);
	vector<int>::iterator it=find(v.begin(),v.end(),5); // �ط���һ��������,���û�ҵ�,�ͷ���end 
	cout<<*it<<endl; 
	vector<Person>::iterator itp=find(p.begin(),p.end(),p1); //�����Զ����������� 
	cout<<itp->name<<" "<<itp->age<<endl;
	cout<<endl;
	// find_if
	// adjacent_find ���������ظ���Ԫ��
	// binary_search ���ֲ��� ����ֵ��true ��false  ���ҵ�Ԫ�ر���Ϊ�������� 
	cout<<binary_search(v.begin(),v.end(),6)<<endl; 
	// count ͳ�� 
	cout<<count(v.begin(),v.end(),1)<<endl;
	// count_if
	 
	
	 
}

int main(){
	test1();
} 
