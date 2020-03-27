#include<iostream>

using namespace std;
#include"person.hpp"
void test(){
	Person<string,int> p1("java",12);
	p1.showPerson();
}
int main(){
	test();
}
