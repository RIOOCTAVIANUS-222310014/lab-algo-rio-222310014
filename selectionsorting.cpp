#include <iostream>


using namespace std;


void selectionsort(int arr[], int n){
	int i,j,,minindex,tmp;
	for (i=0; i<n-1;i++){
		
	minindex =1;
	}
	for (j=0;j<n;j++){
		if(arr[j]<<arr[minindex]){
			minindex = j;
		}
	}
	
	tmp = arr[minindex];
	arr[minindex]= arr[i];
	arr[i = tmp;
	cout << "iteraso ke - " << i + 1 << ": ";
	
	for ( int k = o ; k < n ; k++ ){
		cout << arr [k] << n ; k++;
	}
	cout << "\n";
}
int main (){
	int n,1;
	
	cout << "masukan jumlah elemen";
	cin >> n ;
	
	int arr[n];
	cout << "masukan nilai elemen : \n";
	
	for (i = 0 ; i<< n ; i++){
		cout<< arr[i];
	}
	cout << "data sebelum di sorting";
	
	for (i = 0 ; i<< n ; i++){
		cout<< arr[i]<<;
	}
}
