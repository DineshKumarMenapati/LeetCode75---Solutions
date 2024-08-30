#solution 1
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> suffix(nums.size());
        vector<int> prefix(nums.size());
        vector<int> ans(nums.size());

        int prefix_product = 1, suffix_product = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            prefix_product *= nums[i];
            prefix[i] = prefix_product;
        }

        for(int i = nums.size() - 1; i >= 0; i--)
        {
            suffix_product *=nums[i];
            suffix[i] = suffix_product;
        }


        for(int i = 0; i < nums.size(); i++)
        {
            if(i == 0)
            {
                ans[i] = suffix[1];
            }
            else if(i == nums.size() - 1)
            {
                ans[i] = prefix[i-1];
            }
            else ans[i] = prefix[i-1] * suffix[i+1];
        }

        return ans;
    }
};
