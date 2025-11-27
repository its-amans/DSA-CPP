class Solution {
public:
    bool isPowerOfTwo(int n) {
    //If the no has only one setBit then it is in power of 2

        if(n<=0){
            return false;
        }
        if((n&(n-1))==0){
            return true;
        }
        return false;
    }
};