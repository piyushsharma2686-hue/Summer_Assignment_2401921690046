class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxsum =0;
        for(int i=0;i<k;i++){
            maxsum+=nums[i];
        }
         double ans = maxsum/k;
        int i=0;
        int j = k;
        while(j<nums.size()){

            maxsum-=nums[i];
            i++;
            maxsum+=nums[j];
            j++;
            
            ans = max(ans,maxsum/k);
        }
        return ans;
    }
};
