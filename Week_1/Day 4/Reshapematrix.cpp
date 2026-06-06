class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>ans(r,vector<int>(c));
        vector<int>list;
        int m = mat.size();
        int n = mat[0].size();
        if(m*n!=r*c) return mat;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                list.push_back(mat[i][j]);
            }
        }
        int k=0;
        
            for(int i=0;i<ans.size();i++){
            for(int j=0;j<c;j++){
                ans[i][j] = list[k++];
            
            }
        
        }
        
        return ans;
    }
};
