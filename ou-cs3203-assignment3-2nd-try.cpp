#include <iostream>
#include  <vector>
using namespace std;

int sumList(vector<int> arr);

// computes the sum of a list / array of numbers given as a parameter and returns the result.
int sumList(vector<int> arr ) {
    int sum = 0;
    // itterate and add each integer to sum
    for (int i = 0; i < arr.size() ; i++) {
        sum += arr[i];
    }
    return sum;
}
