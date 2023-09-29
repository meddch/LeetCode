class Solution {
public:
    int arraySign(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){return 0;break;}
            if(nums[i]<0) cnt++;
        }
        if(cnt%2) return -1;
        return 1;
    }
};