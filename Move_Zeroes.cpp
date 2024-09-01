class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int cur = 0, nextNonZero;
        int idx = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                nums[idx] = nums[i];
                if(i != idx) nums[i] = 0;
                idx++;
            }
        }

        return;
    }
};
