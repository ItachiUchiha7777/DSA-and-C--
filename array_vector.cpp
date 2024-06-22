#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vector1;
    vector <int> vector2;
    vector<vector<int>> vector3;

    vector1.push_back(10);
    vector1.push_back(20);
    cout<<vector1[0]<<" "<<vector1[1]<<endl;
    cout<<"The size of the vector 1 is"<<vector1.size()<<endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout<<vector2[0]<<" "<<vector2[1]<<endl;
    cout<<"The size of the vector 2 is"<<vector2.size()<<endl;

    vector3.push_back(vector1);
    vector3.push_back(vector2);
     cout << "The elements of vector3 are: " << endl;
    for (size_t i = 0; i < vector3.size(); ++i) {
        for (size_t j = 0; j < vector3[i].size(); ++j) {
            cout << vector3[i][j] << " ";
        }
        cout << endl;
    }
    
}