#include <iostream>
#include <vector>
using namespace std;
// int main(){
//     int scores[] {10,20,30,40};
//     for(int apple:scores){
//         std::cout<<apple<<" "<<std::endl;
//         return 0;
//     }
// }

int main(){


    vector <double> temperatures {88.9,55.3,44.1,55.2};
    double averageTemperature {};
    double total {};
    for(auto temp:temperatures){
        cout<<temp<<endl;
        total += temp;
    }
    averageTemperature = temperatures.size();
    cout<<averageTemperature<<endl;

}