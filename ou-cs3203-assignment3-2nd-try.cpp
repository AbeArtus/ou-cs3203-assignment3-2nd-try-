#include <iostream>
#include  <vector>
using namespace std;

int sumList(vector<int> arr);
int multiplyList(vector<int> arr);
void printvec(vector<int> arr);

int main() {
    // init vector to be used
    vector<int> list;  

    // prompt user to enter Integers
    cout << "Enter vectors numbers seperated by spaces, end seq. with E:";
    int n;
    while (cin >> n) {  
        list.push_back(n);  
    }
    
    // display the vector size and elements
    cout<< "Inputted Vector: ";
    printvec(list);

    // sum of the array
    cout << "Sum of the Vector Integers: " << sumList(list) << endl;

    // vector multiplied together
    cout << "Product of the Vector Integers: " << multiplyList(list) << endl;
}

void printvec(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

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