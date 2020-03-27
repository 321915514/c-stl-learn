#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void printList(const list<int>& L) {
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
bool myCompare(int v1,int v2){
	return v1>v2;
}

void test() {
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_front(13);
	printList(L1);
	// �����������ŵ���ʽ����list����  atҲ����, list��һ������,����ʹ���������Կռ�洢���� ,������Ҳ�ǲ�֧��������ʵ�
	cout<<L1.front()<<endl; // ��һ�� 
	cout<<L1.back()<<endl;  //���һ��
	L1.reverse(); // ��ת�б�
	printList(L1); // ��ת�б�
	L1.sort(); // ��������
	printList(L1); // �������� //���в�֧��������ʵ�����������,�������ñ�׼�㷨
	L1.sort(myCompare); // ����
	printList(L1);
	 
	 
}
int main() {
	test();
}
