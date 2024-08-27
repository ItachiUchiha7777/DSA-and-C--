// You are using GCC
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