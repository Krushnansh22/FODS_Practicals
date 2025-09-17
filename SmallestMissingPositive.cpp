// E-1 A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Bubble sort function
vector<int> bubble(vector<int>& arr){
    // Remove negative elements
    arr.erase(remove_if(arr.begin(), arr.end(), [](int x){ return x < 0; }), arr.end());
    // Sort remaining array
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return arr;
}

// Function to find missing integers
int findMissingInteger(vector<int>& arr, int size){
    arr = bubble(arr);
    for(int i=1;i<size;i++){
        // Check for missing elements
        if (arr[i] != arr[i-1] + 1) {return arr[i-1] + 1;}
    }
    //Return next integer if all elements are present
    return arr[size-1] + 1;
}

int main(){
    vector<int> arr = {-2, 1, 3, 4, 6, 2};
    int n = arr.size();
    cout<<"Smallest Positive Missing Integer is: "<< findMissingInteger(arr, n);
    return 0;
}