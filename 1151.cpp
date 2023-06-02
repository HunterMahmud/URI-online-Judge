#include <iostream>
 
using namespace std;

 
int main() {
    int a;
    cin>>a;
    
    int x=0,y=1;
    //if(a==1) cout<<0<<endl;
    //if(a%2==1) a=(a+1);
    for(int i=1;i<=a;i++){
        if(i==a)
            cout<<x<<endl;
        else cout<<x<<' ';
        int tmp = y;
        y=x;
        x += tmp;
      }
 
    return 0;
}
