class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int start=0;
        map<char,int> lastseen;
        int maxlen=0;
        for(int i=0;i<s.length();i++){
            char c=s[i];

            if(lastseen.find(c)!=lastseen.end() && lastseen[c]>=start){
                start=lastseen[c]+1;
            }
            lastseen[c]=i;
            maxlen=max(maxlen,i-start+1);
        }
        return maxlen;
    }
};