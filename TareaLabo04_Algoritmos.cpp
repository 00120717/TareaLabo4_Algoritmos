#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void swap(int * a,int * b){
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[],int low,int high)
{
int pivot = arr[high]; 
int i =(low-1); 
for(int j = low; j<=high-1;j++)
{

	if (arr[j] < pivot){
	i++; 
	swap(&arr[i], &arr[j]);
}
}
	swap(&arr[i+1],&arr[high]);
	return(i+1);
}

void quickSort(int arr[],int low,int high)
{
if (low < high)
{

int pi = partition(arr, low, high);

quickSort(arr,low,pi-1);
quickSort(arr,pi+1,high);
}}

//imprimir arreglo
void printArray(int arr[],int size)
{
int i;
for (i = 0; i < size; i++)
cout << arr[i] << " ";
cout << endl;
}

//llenar array
void fillArray(int sizeArray ){
	int a[sizeArray],dato;
	
	for(int i=0;i<sizeArray;i++){
		cin>>dato;
		a[i] = dato;
	}
	
	int n = sizeof(a)/sizeof(a[0]);
	quickSort(a,0,n-1);
	
	if(a[sizeArray-1]%2==0){
		cout<<a[sizeArray-1]+2;
	}else{
		cout<<a[sizeArray-1]+1;
	}
}

int main()
{
	int n_arr,n_items;
	cin>>n_arr;
	for(int i = 1; i<=n_arr;i++){
		cin>>n_items;
		fillArray(n_items);
	}
	return 0;
}
