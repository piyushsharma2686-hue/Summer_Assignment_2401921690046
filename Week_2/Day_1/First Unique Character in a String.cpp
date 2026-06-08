class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>map(26,0);
        for(int i=0;i<s.length();i++){
            int index = s[i]-'a';
            map[index]++;
        }
        for(int i=0;i<s.length();i++){
          int   index = s[i]-'a';
            if(map[index]==1){
                return i;
                break;
            }
        }
        return -1;
    }
};
