#include <iostream>
using namespace std;

int largest_SubarraySum2(int arr[], int n){

    //Prefix Sum
    int prefix[100] = {0};
    prefix[0] = arr[0];
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    int largest_sum = 0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){

            int subarrsum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];
            largest_sum = max(largest_sum, subarrsum);
        } 
    }
    return largest_sum;
}


//Prefix sum approach to find largest subarray sum
int main() {
    // your code goes here
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(int);

    cout << largest_SubarraySum2(arr,n) << endl;

    return 0;
}

