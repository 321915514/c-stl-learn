#include<iostream>


using namespace std;

class Cpu{
	public: 
		virtual void caculate()=0;
};
class VideoCard{
	public:
		virtual void display()=0;
};
class Memory{
	public: 
		virtual void storage()=0; 
}; 

class Computer{
	public:
		Computer(Cpu *cpu,VideoCard *videoCard,Memory *memory){
			this->cpu=cpu;
			this->videoCard=videoCard;
			this->memory=memory;
	}
	void Work(){
		cpu->caculate();
		videoCard->display();
		memory->storage();
	}
	~Computer(){
		if(cpu!=NULL){
			delete cpu;
		}
		if(videoCard!=NULL){
			delete videoCard;
		}
		if(memory!=NULL){
			delete memory;
		}
	}
	private:
		Cpu *cpu;
		VideoCard *videoCard;
		Memory *memory;
	
};
class IntelCpu:public Cpu{
	public: 
		virtual void caculate(){
			cout<<"Intel的cpu"<<endl;
		}
};
class IntelVideoCard:public VideoCard{
	public:
		virtual void display(){
			cout<<"Intel的显示器"<<endl; 
		}
};
class IntelMemory:public Memory{
	public: 
		virtual void storage(){
			cout<<"Intel的内存"<<endl; 
		}
};
class LenovoCpu:public Cpu{
	public: 
		virtual void caculate(){
			cout<<"Lenovo的cpu"<<endl;
		}
};
class LenovoVideoCard:public VideoCard{
	public:
		virtual void display(){
			cout<<"Lenovo的显示器"<<endl; 
		}
};
class LenovoMemory:public Memory{
	public: 
		virtual void storage(){
			cout<<"Lenovo的内存"<<endl; 
		}
};
void test(){
	Computer *com=new Computer(new IntelCpu,new LenovoVideoCard,new IntelMemory);
	com->Work();
	delete com; 
} 
int main(){
	test();
} 
