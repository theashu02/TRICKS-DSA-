#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    /// to print the 32 bits of given number
    bitset<32> bn(n);
    cout<<bn<<endl;
 
    // to find right most digit 
    int right = n & 1;
    cout<<right<<endl;

    return 0;
}