#include <iostream> 
using namespace std;

void test(){
	string str="hello";
	str.append("world"); //��� 
	str+="i";
	string str1="cdwewewf";
	str1.replace(1,3,"das"); //�ַ��滻 
	cout<<str1;
	string str3="hello";
	string str2="xello" ;
	if(str3.compare(str2)==0){ //�ַ����Ƚ� 
		cout<<"���"<<endl; 
	}
	else{
		cout<<"�����"<<endl; 
	}
	
	//string�ַ���ȡ
	string str4="hello";
	//�����ַ�
	for(int i=0;i<str4.size();i++){
		cout<<str4[i]<<" ";
	}
	cout<<endl; 
	for(int i=0;i<str4.size();i++){
		cout<<str4.at(i)<<" ";
	} 
	cout<<endl;
	// string ����ɾ��
	// insert()
	// erase(int pos,int n=npos);
	str2.erase(1,2);
	cout<<str2<<endl;
	// �Ӵ�
	// substr(int pos,int n=npos)
	 string str5=str3.substr(2,3);
	 cout<<str5<<endl;
	 
	 string email = "zhangsan@sina.com"; //��ȡ���� 
	 int pos = email.find("@");
	 cout<<email.substr(0,pos)<<endl;
} 
int main(){
    test();
    
}
