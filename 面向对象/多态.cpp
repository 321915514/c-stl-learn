#include<iostream>

using namespace std;

class Annimal{
	public:
		virtual void speak(){ 
			cout<<"������˵��"<<endl;
	} 
};
class Cat:public Annimal{
	void speak(){
		cout<<"Сè��˵��"<<endl; 
	}
}; 
class Dog:public Annimal{
	void speak(){
		cout<<"С����˵��"<<endl; 
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
