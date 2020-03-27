#include<iostream>
#include<list>

using namespace std;
// list ������������ 
class Person{
	public:
		int age;
		string name;
		int height;
		Person(string name,int age, int height){
			this->name=name;
			this->age=age;
			this->height=height;
		}
	    
		
};
void printPerson(const list<Person>&L){
	for(list<Person>::const_iterator it=L.begin();it!=L.end();it++){
		cout<<(*it).name<<" "<<(*it).age<<" "<<(*it).height<<endl; 
	}
	cout<<endl;
}
bool myCompare(Person &p1, Person &p2 ){ // �Զ����������͵�������� 
	if(p1.age==p2.age){
		return p1.height<p2.height;
	}
	return p1.age<p2.age;
}
void test(){
	list<Person> L;
	L.push_back(Person("zhangsan",23,180));
	L.push_back(Person("lisi",43,290));
	L.push_back(Person("wangwu",43,90));
	
	// ��������������,���������ͬ,���������
	printPerson(L);

	
	L.sort(myCompare);
	
	printPerson(L);
} 

int main(){
	test();
}
 
