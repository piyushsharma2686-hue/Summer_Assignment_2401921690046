class Solution {
public:
    bool repeatedSubstringPattern(string s) {
         int n = s.length();
         for(int l = n/2;l>=1;l--){
            if(n%l==0){
                string pattern = s.substr(0,l);
                int times = n/l;
                string ans = "";
                while(times--){
                    ans.append(pattern);
                }
                if(s==ans){
                    return 1;
                }
            }
            
         }
         return 0;
    }
};
