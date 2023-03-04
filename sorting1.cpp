#include <iostream>


using namespace std;

void bubblesort(int arr[], int n){
	int i, j,tmp;
	//looping array 2 dimensi 
	for (i=0; i<n; i++){
		for (j = 0; j< n-1; j++){
			//menukar nilai pertama dan bilangan 
			if (arr[j]> arr [j+1]){
				tmp = arr[j];
				arr[j]= arr [j + 1];
				arr [j + 1] = tmp;
			}
		}
	}
}
	
int main() {
 int n,i,j,tmp,array[100];
 cout <<"masukan banyak elemen : ";
 cin >> n;
 cout << "masukan nilai : \n";
 
 for (i = 0; i < n ; i++){
 	cin >> array[i];
 }
 
 bubblesort(array, n);
 
 cout << "hasil pengurutan dengan algoritma bubble sort\n";
 
 for (i=0; i<n; i++){
 	cout << array[i]<<"";
 }
 
 
 

}
	
	
