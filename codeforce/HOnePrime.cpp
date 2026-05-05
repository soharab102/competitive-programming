#include<iostream>
#include<cmath>
using namespace std;

void primeCheck(int X){
    if(X <= 1){
        cout << "NO\n";
        return;
    }

    for(int i = 2; i <= sqrt(X); i++){
        if(X % i == 0){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main(){
    int X;
    cin >> X;
    primeCheck(X);
    return 0;
}