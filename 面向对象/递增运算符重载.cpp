#include<iostream>


using namespace std;

//������������� 

class MyInteger{
	friend ostream & operator<<(ostream &cout,MyInteger Integer);//Ϊʲô�������� 
	private:
		int num;
		
	public:
		MyInteger(){
			num=0;
		}
	MyInteger& operator++(){//ǰ��++
		num++;
	return *this;
	}
	
	MyInteger operator++(int){//����++
		MyInteger temp=*this;
		num++;
		return temp;
	}
	 	
}; 
ostream & operator<<(ostream &cout,MyInteger Integer){
	cout<<Integer.num;
	return cout;
}
//����++�����
 //ǰ��++,����++;
 
 void test(){
 	MyInteger myint;
	cout<<myint++<<endl;
	cout<<myint<<endl;
 	
 }
int main(){
	MyInteger num;
	cout<<num<<endl;
	cout<<++num<<endl; 
	cout<<num<<endl;
	test();
} 
