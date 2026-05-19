#include <iostream>
using namespace std;
int main() {
    int T,X,Y;
    cin>>T;
        
    while(T--){
        cin>>X>>Y;
        if(X>=0 || Y>=0){
            if(X>Y){
            swap(X,Y);
        }
        int sum=0;
        for(int i=X+1;i<Y;i++){
            if(i%2 !=0){
                sum=sum+i;
            }
        }
        cout<<sum<<endl;
    }

        
}
        
    
    
    
    
    return 0;
}