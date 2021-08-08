#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int largest = INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
     return largest;
}

int main() {
    // your code goes here
    vector<int>  arr = {10, -20, 30, 40,- 50};

    cout << largestElement(arr) << endl;
    return 0;
}

