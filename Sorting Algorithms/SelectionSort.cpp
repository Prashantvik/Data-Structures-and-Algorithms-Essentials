#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(int a[], int n){

    for(int pos = 0; pos <= n-2; pos++){
       
        int current = a[pos];
        int min_posn = pos;

        //find out the min element
        for(int j=pos; j<n; j++){

            if(a[j] < a[min_posn]){
                min_posn = j;
            }
        }
        //swap outside the loop
        swap(a[min_posn], a[pos]);

    }
}


int main() {
    // your code goes here
    int arr[] = {5, 0, 4, 1, -3, 10, 8};
    int n = sizeof(arr)/sizeof(int);

    SelectionSort(arr, n);
    
    //Print sorted array
    for(auto x : arr){
        cout << x << " ";
    }

    return 0;
}