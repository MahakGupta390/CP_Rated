//CF:-Odd Divisor
// Check if a number has an odd divisor greater than 1
// First Intution :-since test cases are so large normal iteration will not work
// Actual intution:- 1. Prime factorisation of any number contains only prime number at last 
//composite breaks down to prime numbers.
// 2. only even prime number is 2 rest are odd.
//3. so number to have at least one odd divisor greater than 1 it should have at least one odd prime factor
//4. if a number is power of 2 it will not have any odd prime factor rest all will have at least one odd prime factor.
//5. so we just need to check if number is power of 2 or not.
//6. Trick to do so :- if n is a power of 2 we kknow that in binary representation it will have only one bit set.
//7. so n & (n-1) will be 0 only for power of 2 numbers. e.g 8 = 1000 and 7=0111 so 8&7=0 because for n-1 all bits after rightmost set bit become 1 and that set bit becomes 0.
//8. so if n & (n-1) ==0 then n is power of 2 else not.
#include <studio.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if((n&n-1)==0){
            cout<<"No"<<endl;
        } 
        else{
            cout<<"Yes"<<endl;
        } 
      }
}