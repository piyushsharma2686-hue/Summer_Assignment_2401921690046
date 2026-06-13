class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return "";

        string ans = s.substr(0,1);
        
        for(int i = 1;i<s.length();i++){
           
            
            
            
                int j = i;
                int k = i;
                
                 while(j>=0 && k<s.length() && s[j]==s[k] ){
                    j--;
                    k++;
                 }
                 

                 string temp = s.substr(j+1,k-j-1);
                 if(temp.length()>ans.length()){
                    ans = temp;
                 }
            
          
                 j = i-1;
                 k = i;
                
                 while(j>=0 && k<s.length() && s[j]==s[k] ){
                    j--;
                    k++;
                 }
                 
                  temp = s.substr(j+1,k-j-1);
                if(temp.length()>ans.length()){
                    ans = temp;
                 }

            
           
        }
        return ans;
    }
};
