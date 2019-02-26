#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
//Write your code here.

for(int i=1;i<N;i++){
	int j=i;
	//cout//
	for(int k=0;k<N;k++){
		if(k==j) cout << "[" << d[k]<< "]" << " ";
		cout << d[k] << " ";
	}
	cout <<" => ";
	//cout//
	while(d[j]>d[j-1] && j>0){
		swap(d,j,j-1);
		j--;
	}
	//cout//
	for(int k=0;k<N;k++){
		if(k==j) cout << "[" << d[k]<< "]" << " ";
		cout << d[k] << " ";
	}
	cout <<"\n";
	//cout//
}



}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
