class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string FinalWord;

       int maxLen = max(word1.size(), word2.size());

       for(int i = 0; i < maxLen; i++)
       {
            if(i < word1.size()) FinalWord.push_back(word1[i]);
            if(i < word2.size()) FinalWord.push_back(word2[i]);
       }
       
       return FinalWord;

    }
};
