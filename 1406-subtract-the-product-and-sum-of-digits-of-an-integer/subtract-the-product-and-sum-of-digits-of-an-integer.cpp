class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        while(n){
            int dig = n%10;
            prod*=dig;
            sum+=dig;  //sum=sum+dig;
            n=n/10;
        }
        return prod-sum;
    }
};