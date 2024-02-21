string p = "00000000000000000000000000000100";
bitset<32> bits(p);
unsigned long decimal = bits.to_ulong();
return decimal;
