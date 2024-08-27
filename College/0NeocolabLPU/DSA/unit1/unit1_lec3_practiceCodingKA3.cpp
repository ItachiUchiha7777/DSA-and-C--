// You are using GCC
#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int ,int> occurenceMap;
    int n;
    
    cin>>n;
    int vote;
    for(int i=0;i<n;i++){
        cin>>vote;
        occurenceMap[vote]++;
    }
   
    int majority=-1;
    for(const auto& pair:occurenceMap){
        if(pair.second>n/2){
            majority=pair.first;
        }
    }
    if (majority!=-1)
    cout<<"The majority candidate is ID "<<majority;
    else
    cout<<"No majority candidate found";
    return 0;
}