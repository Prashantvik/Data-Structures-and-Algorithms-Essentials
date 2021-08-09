#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(int a[], int n){

    for(int i=1; i <= n-1; i++){
       
        int current = a[i];
        int prev = i - 1;
        //loop to find right index where the element is to be inserted
        while(prev>=0 and a[prev] > current){
            a[prev +1] = a[prev];
            prev = prev - 1;
       }
        a[prev+1] = current;
    }
}


int main() {
    // your code goes here
    int arr[] = {5, 0, 4, 1, -3, 10, 8};
    int n = sizeof(arr)/sizeof(int);

    InsertionSort(arr, n);
    
    //Print sorted array
    for(auto x : arr){
        cout << x << " ";
    }

	return 0;
}