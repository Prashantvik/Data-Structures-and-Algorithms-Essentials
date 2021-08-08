#include <iostream>
#include <vector>
using namespace std;

int main() {
    // your code goes here
    vector<int> v = {10, 20, 30, 40, 50};

    //Initialization using a fill constructor
    vector<int> v1(10,0);
    
    //Pop back
    v.pop_back();

    //Push back
    v.push_back(70);

    //Print all the elements
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl; 

    //Size of vector
    cout << v.size() << endl;

    //Capacity of vector
    cout << v.capacity() << endl;
	return 0;
}

