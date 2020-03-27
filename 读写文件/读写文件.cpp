#include<iostream>
#include<fstream>

using namespace std;

void write(){
	ofstream ofs;
	ofs.open("test.txt",ios::app);
	ofs<<"张三"<<endl;
	ofs<<"李四"<<endl;
	ofs.close();
} 
void read(){
	ifstream ifs;
	ifs.open("test.txt",ios::in);
	if(!ifs.is_open()){
		cout<<"文件打开失败"<<endl; 
	}
	//四种方式读取
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
	//4单个读取
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
