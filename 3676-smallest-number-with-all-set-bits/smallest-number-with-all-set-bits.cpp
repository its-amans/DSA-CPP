class Solution {
public:
    int smallestNumber(int n) {
        int number=0;
        int cnt=0;
        int ans=0;
        int dig;
        int i=0;
        int res=0;
        while(n>0){
            dig=n%2;
            n=n/2;
            number=number*10+dig;
            cnt++;
        }
        for(int i=0;i<cnt;i++){
            ans=ans*10+1;
        }

        while(ans>0){
            dig=ans%10;
            ans=ans/10;
            res+=dig*pow(2,i);
            ++i;
        }
        
        return res;
    }
};