#include<iostream>
using namespace std;

int main() {
	int a[][3] = {23,34,45,56,76,78,56,78,98},sum=0;
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		for (int j = 0; j < sizeof(a[0]) / sizeof(a[0][0]); j++) {
			sum += a[i][j];
		}
		cout << sum << endl;
		sum = 0;
	}


	cout << "hello world!" << endl;

}
