#include <iostream>
using namespace std;

int largest_SubarraySum3(int arr[], int n){

    int cs = 0;
    int largest_sum = 0;

    for(int i=0; i<n; i++){
        cs = cs + arr[i];
        if(cs < 0){
            cs = 0;
        }
        largest_sum = max(largest_sum, cs);
    }

    return largest_sum;
}


//Kadane's Algorithm to find largest subarray sum
int main() {
    // your code goes here
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(int);

    cout << largest_SubarraySum3(arr,n) << endl;

    return 0;
}

