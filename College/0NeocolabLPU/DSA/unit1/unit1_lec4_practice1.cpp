// Single File Programming Question
// Problem Statement



// Rajesh wants to add elements of two arrays and display the merged array. Help Rajesh by writing a program to take input for two arrays add both array elements and display the merged array.



// Company Tags: TCS

// Input format :
// The first line of input consists of an integer n1, representing the size of the first array.

// The second line of input consists of n1 space-separated integers, representing the elements of the first array.

// The third line of input consists of an integer n2, representing the size of the second array.

// The fourth line of input consists of n2 space-separated integers, representing the elements of the second array.

// Output format :
// The output displays added and merged array elements, separated by space.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n1, n2 ≤ 200

// 1 ≤ array elements ≤ 200

// Sample test cases :
// Input 1 :
// 5
// 2 5 7 44 890
// 3
// 456 3 4
// Output 1 :
// 458 8 11 44 890 
// Input 2 :
// 7
// 23 40 120 70 100 150 220
// 4
// 40 5 10 18
// Output 2 :
// 63 45 130 88 100 150 220 







#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    vector <int> arr(n1);
    for(int i=0;i<n1;i++){
        cin>>arr[i];
    }
    cin>>n2;
    vector<int> arr2(n2);
    for(int i=0;i<n2;i++){
        cin>>arr2[i]; 
    }
    int big=max(n1,n2);
    vector <int> newarr(big);
    for( int i=0;i<big;i++){
       int val1=(i<n1)?arr[i]:0;
       int val2=(i<n2)?arr2[i]:0;
       newarr[i]=val1+val2;
    }
    for(int i=big-1;i>=0;i--){
        cout<<newarr[i]<<" ";
    }
    return 0;
}



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    
    // Input size and elements for the first array
    cin >> n1;
    vector<int> arr1(n1);
    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }
    
    // Input size and elements for the second array
    cin >> n2;
    vector<int> arr2(n2);
    for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }
    
    // Resultant array size
    int maxSize = max(n1, n2);
    vector<int> result(maxSize);
    
    // Compute the sum of elements
    for (int i = 0; i < maxSize; ++i) {
        if (i < n1 && i < n2) {
            result[i] = arr1[i] + arr2[i];
        } else if (i < n1) {
            result[i] = arr1[i];
        } else if (i < n2) {
            result[i] = arr2[i];
        }
    }
    
    // Print the result
    for (int i = 0; i < maxSize; ++i) {
        if (i > 0) cout << " ";
        cout << result[i];
    }
    cout << endl;

    return 0;
}
