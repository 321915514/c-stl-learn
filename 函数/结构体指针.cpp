#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

typedef struct student {
	string name;
	int score;
}Student, * Stu;//

typedef struct teacher {
	string name;
	Student StuArr[5];
}Teacher, * T;//*T==struct teacher *;

void allocateSpace(Teacher *, int);
void printInfo(Teacher *, int);
int main() {
	srand((unsigned)time(NULL));
	Teacher teacher[3];
	int n = sizeof(teacher) / sizeof(teacher[0]);
	allocateSpace(teacher, n);
	printInfo(teacher, n);
}

void allocateSpace(Teacher *p, int n) {
	string nameseed = "ABCDE";
	for (int i = 0; i < n; i++) {
		//����ʦ��ֵ
		p[i].name = "teacher_";
		p[i].name += nameseed[i];
		//ͨ��ѭ����ÿ����ʦ��ֵ
		for (int j = 0; j < 5; j++) {
			p[i].StuArr[j].name = "student_";
			p[i].StuArr[j].name += nameseed[j];
			p[i].StuArr[j].score = rand()%61+40;
		}
	}

}
void printInfo(Teacher *p, int n) {
	for (int i = 0; i < n; i++) {
		cout <<p[i].name <<endl;
		for (int j = 0; j < 5; j++) {
			cout << "ѧ������:" << p[i].StuArr[j].name << "ѧ������" << p[i].StuArr[j].score << endl;
		}
	}

}
