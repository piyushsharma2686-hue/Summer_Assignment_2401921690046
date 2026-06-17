class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int i=0;
        vector<int>nextG;
        
        while(i<nums2.size()-1){
            int j = i+1;
            int flag = 0;
            while(j<nums2.size()){
                if(nums2[i]<nums2[j]){
                    nextG.push_back(nums2[j]);
                    flag = 1;
                    break;
                }
                j++;
            }
            if(flag==0){
                nextG.push_back(-1);
            }
            i++;
        }
        nextG.push_back(-1);
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans.push_back(nextG[j]);
                }
            }
        }
        return ans;
    }
};
