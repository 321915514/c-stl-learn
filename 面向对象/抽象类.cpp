#include<iostream>

using namespace std;

class AbstractDrinking{
	public:
		//��ˮ 
		virtual void Boil()=0;
		//����
		virtual void Brew()=0;
		//���뱭��
		virtual void PourInCup()=0;
		//���� 
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
		//��ˮ 
		virtual void Boil(){
			cout<<"��ˮ"<<endl; 
		}
		//����
		virtual void Brew(){
			cout<<"����"<<endl; 
		}
		//���뱭��
		virtual void PourInCup(){
			cout<<"���뱭��"<<endl; 
		}
		//���� 
		virtual void PutSomething(){
			cout<<"����"<<endl; 
		}
}; 
class Tea:public AbstractDrinking{
	public:
		//��ˮ 
		virtual void Boil(){
			cout<<"��ˮ"<<endl; 
		}
		//����
		virtual void Brew(){
			cout<<"���ݲ�Ҷ"<<endl; 
		}
		//���뱭��
		virtual void PourInCup(){
			cout<<"���뱭��"<<endl; 
		}
		//���� 
		virtual void PutSomething(){
			cout<<"����"<<endl; 
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
