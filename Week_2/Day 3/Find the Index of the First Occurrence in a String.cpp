class Solution {
public:
    int strStr(string haystack, string needle) {
        vector<int>lps(needle.size(),0);
        
        int pre=0, suf=1,m=needle.size(),n=haystack.size();
        while(suf<m){
            if(needle[pre]==needle[suf]){
                lps[suf]=pre+1;
                pre++;
                suf++;
            }
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre = lps[pre-1];
                }
            }
        }

        int start=0, end=0;
        while(start<n){
            if(haystack[start]==needle[end]){
                start++;
                end++;
            }
            if(end==m){
                return start-end;
            } 
            else if(start<n&&haystack[start]!=needle[end]){
                if(end!=0){
                    end=lps[end-1];
                }
                else{
                    start++;
                }
            }
        }
        return -1;
    }
};
