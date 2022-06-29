class Solution {
public:
    void recursion(int index, vector<int>& nums,vector<int> &n ,vector<vector<int>> &ans){
        
            ans.push_back(n);
    
            
        for(int i=index;i<nums.size();i++){
            n.push_back(nums[i]);
            recursion(i+1,nums,n,ans);
            
           n.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>subset;
        int index=0;
        recursion(index,nums,subset,ans);
        return ans;
    }
};
