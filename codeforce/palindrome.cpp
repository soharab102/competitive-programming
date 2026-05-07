#include<iostream>
#include<cmath>
using namespace std;
void checkPalindrome(int N){
    int originalN = N;
    int reversedN = 0;

    while(N > 0){
        int digit = N % 10;
        reversedN = reversedN * 10 + digit;
        N /= 10;
    }

    if(originalN == reversedN){
        cout<<reversedN<<"\n";
        cout << "YES\n";
    } else {
         cout<<reversedN<<"\n";
        cout << "NO\n";
    }
}

int main(){
    int N;
    cin >> N;
   if(N>0)
     checkPalindrome(N);   
    else{
        cout<<"Not valid\n";
    }
   



    return 0;
}