#include<iostream>
using namespace std;


int main() {
	string names[] = {"zhnagsan","lisi","wangwu"};
	for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++){
		cout << "ÐÕÃû:" << names[i] << endl;
	}


}