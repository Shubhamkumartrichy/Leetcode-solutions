class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            vector<int> a;
            for(int j=0;j<n;j++){
                a.push_back(matrix[n-j-1][i]);
            }
            ans.push_back(a);
            a.clear();
        }
        matrix=ans;
    }
};