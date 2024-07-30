class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        unordered_map<char,int> m;
        for(int i=0;i<stones.length();i++)
        {
            m[stones[i]]++;

        }
        for(char a:jewels)
        {
            count+=m[a];
        }
        return count;
    }
};