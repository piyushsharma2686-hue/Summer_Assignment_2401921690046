class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        string ans = strs[0];
        for(int i=1;i<strs.size();i++){
            int p=0,j=0;
            while(p<strs[i].length() && j<ans.length()){
                if(strs[i][p]!=ans[j]) break;
                p++;
                j++;
            }
            if(j==0){
                return "";
            }
            ans = ans.substr(0, j);
        }
        return ans;
    }
};
