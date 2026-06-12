class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>strscopy = strs;
        vector<int>map(strs.size(),0);
        vector<vector<string>>ans;
        for(int i=0;i<strs.size();i++){
             sort(strscopy[i].begin(),strscopy[i].end());
        }
        for(int i=0;i<strs.size();i++){
            if(map[i]==1){
                continue;
            }
            vector<string>temp;
            for(int j =0;j<strs.size();j++){
               if(strscopy[i]==strscopy[j]){
                map[j]=1;
                temp.push_back(strs[j]);

               }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
