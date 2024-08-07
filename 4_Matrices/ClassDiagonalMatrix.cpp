 #include <iostream>
 using namespace std;
 class Diagonal{
    private:
    int *A;
    int n;
    public:
    Diagonal(){
        n=2;
        A=new int[2];

    }
    Diagonal(int n){
            this->n=n;
            A=new int[n];
    }
    ~Diagonal()
    {
        delete[]A;
    }
    void Set(int i,int j,int x);
    int Set(int i,int j);
    void Display();
 };

void Diagonal::Display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
            cout<<A[i]<<" ";
    }
}

 int main(){

 }