class Solution {
public:
    void paren(int n, int left, int right,  vector<string>&ans, string&temp){
           
           if(left==n && right==n) {
            ans.push_back(temp);
            return;
                     }

         
        if(left<n){
            temp.push_back('(');
            paren(n,left+1,right,ans,temp);
            temp.pop_back();
        }
        if(right<left){
            temp.push_back(')');
            paren(n,left,right+1,ans,temp);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string temp;
        vector<string>ans;
        int left =0, right=0;
        paren(n,left,right, ans,temp);
        return ans;
    }
};
