#include <iostream>
 
using namespace std;
 
int main() {
 
    int t;
    cin>>t;
    int x,y;
    while(t--){
        cin>>x>>y;
        
        if(x%2==0) x++;
        int result = x;
        for(int i=1; i<y; i++){
            x +=2;
            result = result + x;
        }
        cout<<result<<endl;
    }
 
    return 0;
}
