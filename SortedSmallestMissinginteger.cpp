// E1 - C
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find missing integers
int findMissingInteger(vector<int>& arr, int size){
    for(int i=1;i<size;i++){
        // Check for missing elements
        if (arr[i] != arr[i-1] + 1 && arr[i-1]>=0) {return arr[i-1] + 1;}
    }
    //Return next integer if all elements are present
    return arr[size-1] + 1;
}

int main(){
    vector<int> arr = {-4, -2, 0, 1, 2, 4, 5};
    int n = arr.size();
    cout<<"Smallest Positive Missing Integer is: "<< findMissingInteger(arr, n);
    return 0;
}