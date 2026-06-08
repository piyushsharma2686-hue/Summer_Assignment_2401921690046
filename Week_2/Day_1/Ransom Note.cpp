class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>map(26,0);
        vector<int>map2(26,0);
        for(int i=0;i<magazine.size();i++){
            int k = magazine[i]-'a';
            map[k]++;
        }
        for(int i=0;i<ransomNote.size();i++){
            int k = ransomNote[i]-'a';
            map2[k]++;
        }
        for(int i=0;i<map2.size();i++){
            if(map2[i]>0){
                if(map2[i]>map[i]){
                    return false;
                }
            }
        }

        return true;
    }
};
