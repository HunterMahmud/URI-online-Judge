#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    long long result=1;
   if(n==1 || n==0) {cout<<result<<endl; return 0;}
   else{
       for(int i=2; i<= n; i++){
           result *= i;
       }
   }
   cout<<result<<endl;
 
    return 0;
}
