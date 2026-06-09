class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>map1(26,0);
         vector<int>map2(26,0);
        int n = s1.length();
        int m =s2.length();
        if(n>m) return false;

        for(int i=0;i<n;i++){
            map1[s1[i]-'a']++;
            map2[s2[i]-'a']++;
        }
        if(map1==map2) return true;
        for(int i=1;i<=m-n;i++){
           
            map2[s2[i-1]-'a']--;
            map2[s2[i+n-1]-'a']++;
            if(map1==map2){
                return true;
            }
        }
        return false;
    }
};
