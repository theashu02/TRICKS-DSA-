#include<bits/stdc++.h>
using namespace std;

int leftmostBinaryDigit(int n)
{
    // initialize the size of the number then right shit the number
    int size = sizeof(n) * 8;

    while (size > 1)
    {
        n = n >> 1;
        size--;
    }

    int leftmostBit = n & 1;

    return leftmostBit;
}

int main(){
    int n; cin>>n;
    // to print the 32 bits of the number
    bitset<32> bn(n);
    cout<<bn<<endl;
    
    // int left most
    int leftmostBit = leftmostBinaryDigit(n);

    cout<<leftmostBit<<endl;

    return 0;
}