#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    
    // bits --> 000000011010101
    int rightshift = n >> 1;
    // after the right shift --> 000000001101010

    cout<<rightshift<<endl;

    //bits --> 000000011010101
    int leftshift =  n << 1;
    // after the left shift --> 000000110101010

    cout<<leftshift<<endl;

    return 0;
}