#include<iostream>

using namespace std;

class Annimal{
	public:
		virtual void speak(){ 
			cout<<"动物在说话"<<endl;
	} 
};
class Cat:public Annimal{
	void speak(){
		cout<<"小猫在说话"<<endl; 
	}
}; 
class Dog:public Annimal{
	void speak(){
		cout<<"小狗在说话"<<endl; 
	}
}; 

void doSpeak(Annimal &annimal){
	annimal.speak();
} 
void test(){
	Cat cat;
	doSpeak(cat);
	
}
int main(){
	test();
} 
