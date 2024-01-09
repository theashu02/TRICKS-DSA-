class Solution {
public:
    int countBits(int n) {
       bitset<32> bn(n);
       return bn;
      //  to count number of set bits __builtin_popcount()  is a built-in function of GCC compiler.
      //. This function is used to count the number of set bits in an unsigned integer. 
      //.  In other words, it counts the number of 1’s in the binary form of a positive integer.
    }
};

