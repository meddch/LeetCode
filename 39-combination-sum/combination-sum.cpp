class Solution {
public:
    vector<vector<int>> ans;

    void combos(vector<int>& candidates, int target, int count, vector<int>& curr, int a){
        if(count==target){
            ans.push_back(curr);
            return;
        }
        if(count>target) return;
        for(int i=a;i<candidates.size();i++){
            curr.push_back(candidates[i]);
            combos(candidates, target, count+candidates[i], curr, i);
            curr.pop_back();
        }
        return;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr; 
        combos(candidates, target, 0, curr, 0);
        return ans;
    }
};