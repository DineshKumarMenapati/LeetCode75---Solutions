class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatestNumber = candies[0];

        for(int i = 1; i < candies.size(); i++)
        {
            greatestNumber >= candies[i] ? greatestNumber: greatestNumber = candies[i];
        }

        vector<bool> result(candies.size(), false);

        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i] + extraCandies >=  greatestNumber) result[i] = true;
        }

        return result;

    }
};
