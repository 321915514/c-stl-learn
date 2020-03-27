#include<iostream>

using namespace std;

class AbstractDrinking{
	public:
		//煮水 
		virtual void Boil()=0;
		//冲泡
		virtual void Brew()=0;
		//倒入杯中
		virtual void PourInCup()=0;
		//加料 
		virtual void PutSomething()=0;
		void makeDrink(){
			Boil();
			Brew();
			PourInCup();
			PutSomething();
		}
};
class Coffee:public AbstractDrinking{
	public:
		//煮水 
		virtual void Boil(){
			cout<<"煮水"<<endl; 
		}
		//冲泡
		virtual void Brew(){
			cout<<"冲泡"<<endl; 
		}
		//倒入杯中
		virtual void PourInCup(){
			cout<<"导入杯中"<<endl; 
		}
		//加料 
		virtual void PutSomething(){
			cout<<"加料"<<endl; 
		}
}; 
class Tea:public AbstractDrinking{
	public:
		//煮水 
		virtual void Boil(){
			cout<<"煮水"<<endl; 
		}
		//冲泡
		virtual void Brew(){
			cout<<"冲泡茶叶"<<endl; 
		}
		//倒入杯中
		virtual void PourInCup(){
			cout<<"导入杯中"<<endl; 
		}
		//加料 
		virtual void PutSomething(){
			cout<<"加料"<<endl; 
		}
}; 


void doWork(AbstractDrinking *abs){
	abs->makeDrink();
	delete abs; 
}
void test(){
	doWork(new Coffee);
	doWork(new Tea);
	
}
int main(){
	test();
} 
