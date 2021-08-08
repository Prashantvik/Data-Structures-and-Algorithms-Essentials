#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key){
    int s = 0, e = n-1;

    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    //out of the loop
    return -1;
}

int main() {
   // your code goes here
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    int index = binary_search(arr,n,key);
    
    if(index == -1){
        cout << "Key(" << key << ") is not present" << endl;
    }
    else{
        cout << "Key(" << key << ") is present at index " << index << endl;
    }

	return 0;
}

