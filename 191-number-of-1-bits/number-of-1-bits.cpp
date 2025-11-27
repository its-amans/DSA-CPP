class Solution {
public:
    int hammingWeight(int n) {
    int bitCount=0;

     while(n){
        bitCount += n&1;

        n=n>>1;
     }
    return bitCount;
    }
};