class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
         vector<int>Pfreq(26,0);
         vector<int>ans;
         if(s.length()<p.length()) return ans;
         for(int i=0;i<p.length();i++){
            int index = p[i]-'a';
            Pfreq[index]++;
         }
         vector<int>Sfreq(26,0);
         for(int i=0;i<p.length();i++){
            int index = s[i]-'a';
            Sfreq[index]++;
         }
         int i =0;
         int j = p.length()-1;
        while(j<s.length()){
            bool flag =1;
            for(int k=0;k<Pfreq.size();k++){
               
                    if(Pfreq[k]!=Sfreq[k]){
                     flag =0;
                     break;
                    }
                
            }
            if(flag ==1){
                ans.push_back(i);
            }

            Sfreq[s[i]-'a']--;
            i++;
            j++;
            if(j < s.length())
            Sfreq[s[j]-'a']++;

        }
         
        return ans;
    }
};
