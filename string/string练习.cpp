#include <iostream> 
using namespace std;

void test(){
	string str="hello";
	str.append("world"); //添加 
	str+="i";
	string str1="cdwewewf";
	str1.replace(1,3,"das"); //字符替换 
	cout<<str1;
	string str3="hello";
	string str2="xello" ;
	if(str3.compare(str2)==0){ //字符串比较 
		cout<<"相等"<<endl; 
	}
	else{
		cout<<"不相等"<<endl; 
	}
	
	//string字符存取
	string str4="hello";
	//访问字符
	for(int i=0;i<str4.size();i++){
		cout<<str4[i]<<" ";
	}
	cout<<endl; 
	for(int i=0;i<str4.size();i++){
		cout<<str4.at(i)<<" ";
	} 
	cout<<endl;
	// string 插入删除
	// insert()
	// erase(int pos,int n=npos);
	str2.erase(1,2);
	cout<<str2<<endl;
	// 子串
	// substr(int pos,int n=npos)
	 string str5=str3.substr(2,3);
	 cout<<str5<<endl;
	 
	 string email = "zhangsan@sina.com"; //截取邮箱 
	 int pos = email.find("@");
	 cout<<email.substr(0,pos)<<endl;
} 
int main(){
    test();
    
}
