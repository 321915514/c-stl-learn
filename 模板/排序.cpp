#include<iostream>

using namespace std;

template<class T>
void order(T arr[],int len){
	for(int i=0;i<len;i++){
		int max=i;
		for(int j=i+1;j<len;j++){
			if(arr[j]>arr[max]){
				max=j;
			}
		}
		if(max!=i){
			T temp=arr[max];
			arr[max]=arr[i];
			arr[i]=temp;
		}
	}
}
template<class T>
void printArray(T arr[],int len){
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void test(){
	char arr[]="sadasdfda";
	order(arr,sizeof(arr)/sizeof(char));
	printArray(arr,sizeof(arr)/sizeof(char));
	double array[]={1.1,2.4,3.5,7.3,1.1};
	order(array,sizeof(array)/sizeof(double));
	printArray(array,sizeof(array)/sizeof(double));
}
int main(){
	test();
}
