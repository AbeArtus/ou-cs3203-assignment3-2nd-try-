#include <iostream>
#include  <vector>
using namespace std;

int sumList(vector<int> arr);
int multiplyList(vector<int> arr);

// computes the sum of a list / array of numbers given as a parameter and returns the result.
int sumList(vector<int> arr ) {
    int sum = 0;
    // itterate and add each integer to sum
    for (int i = 0; i < arr.size() ; i++) {
        sum += arr[i];
    }
    return sum;
}


// compute the multiple of all the numbers in the list
int multiplyList(vector<int> arr) {
    int prod = 1;
    // multyply each elemnt times prod and save to product
    for (int i = 0; i < arr.size()  ; i++) {
        prod = arr[i]*prod;
    }
    return prod;
}