class Solution {
public:
    bool isPowerOfTwo(int n) {
    //If the no has only one setBit then it is in power of 2
        int bitCount=0;

        if(n<=0){
            return false;
        }
        while(n){
            int bit=n&1;

            if(bit){
                bitCount++;
            }
            n>>=1;
        }

        if(bitCount==1){
            return true;
        }
        return false;

    }
};