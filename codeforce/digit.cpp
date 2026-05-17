#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    vector<int> N(T);

    for(int i = 0; i < T; i++){
        cin >> N[i];
    }

    for(int i = 0; i < T; i++){

        if(N[i] == 0){
            cout << 0;
        }

        while(N[i] > 0){
            int digit = N[i] % 10;
            cout << digit << " ";

            N[i] = N[i] / 10;
        }

        cout << endl;
    }

    return 0;
}