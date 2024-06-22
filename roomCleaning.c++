#include <iostream>
using namespace std;
int main(){
    int noRooms {0};
    cout<<"Please enter the number of rooms you want to be cleaned up: "<<endl;
    cin>>noRooms;
    cout<<"cost per room is 50 rupees so total is: "<<noRooms*50<<endl;
    return 0;
}