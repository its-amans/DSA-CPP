class Solution {
public:
    int hammingWeight(int n) {
       int bitCount=0;
       vector<int> arr;  
       while(n){
        int dig =n%2;
        arr.push_back(dig);
        n=n/2;
       } 

       for(int i: arr){
        if(i==1){
            bitCount++;
        }
       } 
       return bitCount;
    }
};