#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(int v[], int n){

    for(int times=0; times <= n-1; times++){
        for(int j=0; j < n - times - 1; j++){

            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }
}


int main() {
    // your code goes here
    int arr[] = {5, 4, 1, 3, 10, 8};
    int n = sizeof(arr)/sizeof(int);

    BubbleSort(arr, n);
    
    //Print sorted array
    for(auto x : arr){
        cout << x << " ";
    }

    return 0;
}