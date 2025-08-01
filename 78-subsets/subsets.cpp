void solve(vector<int>nums,vector<int>output,int index,vector<vector<int>> &ans){
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }
    solve(nums,output,index+1,ans);

    int elements=nums[index];
    output.push_back(elements);
    solve(nums,output,index+1,ans);
}
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> output;
        int index = 0;
        solve(nums,output,index,ans);
        return ans;
    }
};