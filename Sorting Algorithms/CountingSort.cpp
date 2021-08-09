#include <bits/stdc++.h>
#include <vector>
using namespace std;

//Works for a particular range
void CountingSort(int a[], int n){
    //Largest element
    int largest = INT_MIN ;
    for( int i = 0; i<n; i++){
        largest = max(largest, a[i]);
    }

    vector<int> freq(largest+1, 0);

    //update the freq array
    for(int i=0; i<n; i++){
        freq[a[i]]++;
    } 

    //Put back the elements from freq into original array
    int j = 0;
    for(int i=0; i<=largest; i++){

        while(freq[i]>0){
            a[j] = i;
            freq[i]--;
            j++;
        }

    }
    return;
}


int main() {
    // your code goes here
    int arr[] = {5, 0, 4, 1, 10, 8};
    int n = sizeof(arr)/sizeof(int);

    CountingSort(arr, n);
    
    //Print sorted array
    for(auto x : arr){
        cout << x << " ";
    }

    return 0;
}