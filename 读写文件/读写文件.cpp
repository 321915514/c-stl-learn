#include<iostream>
#include<fstream>

using namespace std;

void write(){
	ofstream ofs;
	ofs.open("test.txt",ios::app);
	ofs<<"����"<<endl;
	ofs<<"����"<<endl;
	ofs.close();
} 
void read(){
	ifstream ifs;
	ifs.open("test.txt",ios::in);
	if(!ifs.is_open()){
		cout<<"�ļ���ʧ��"<<endl; 
	}
	//���ַ�ʽ��ȡ
	//1
	char buf[1024]={0};
	while(ifs>>buf){
		cout<<buf<<endl;
	} 
	//2
	char buf2[1024]={0};
	while(ifs.getline(buf2,sizeof(buf2))){
		cout<<buf2<<endl;
	}
	//3
	string buffer;
	while(getline(ifs,buffer)){
		cout<<buffer;
	}
	//4������ȡ
	 char c;
	 while(c=ifs.get()!=EOF){
	 	cout<<c<<endl;
	 } 
	ifs.close();
}
int main(){
	write();
	read();
}
