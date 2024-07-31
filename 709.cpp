class Solution {
public:
    string toLowerCase(string s) {
        string final="";
        for(char c:s)
        {
            final+=tolower(c);
        }
        return final;
    }
};