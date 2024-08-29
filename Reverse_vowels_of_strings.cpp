class Solution {
public:
bool checkVowels(char ch)
{
    return (ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U' ) ? true:false;
}
    string reverseVowels(string s) {
        
        int l = 0, r = s.size() - 1;

        while(l < r)
        {
            if( checkVowels(s[l]) && checkVowels(s[r])) swap(s[l++], s[r--]);
            else if(checkVowels(s[l]) == false &&  checkVowels(s[r])) l++;
            else if( checkVowels(s[l]) && checkVowels(s[r]) == false) r--;
            else l++, r--;
        }

        return s;
    }
};
