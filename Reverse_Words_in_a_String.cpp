
class Solution {
public:
    string reverseWords(string s) {
        
        stack<string> st;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != ' ')
            {
                string word;
                while(i  < s.size() && s[i] != ' ')
                {
                    word += s[i];
                    i++;
                }

                st.push(word);
            }
        }

        string ans;

        while(!st.empty())
        {
            string topW = st.top();
            ans = ans + topW + ' ';
            st.pop();
        }

        if(ans.size() > 0) ans.pop_back();

        return ans;

    }
};
