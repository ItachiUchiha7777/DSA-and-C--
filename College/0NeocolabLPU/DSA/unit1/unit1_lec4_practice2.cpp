// You are using GCC
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    vector<int> arr1(n1);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cin>>n2;
    
    for(int i=0;i<n2;i++){
        int neww;
        cin>>neww;
        arr1.push_back(neww);
    }
   size_t len=arr1.size();
    cout<<len;
    return 0;
    
}