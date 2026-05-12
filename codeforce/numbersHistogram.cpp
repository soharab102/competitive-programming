#include <iostream>
using namespace std;
int main() {
    char S;
    int N;
    cin>>S;
    cin>>N;
    int X[N];
    for(int i=0;i<N;i++){
        cin>>X[i];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<X[i];j++){
            cout<<S;
        }
        cout<<endl;
    }

    return 0;
}