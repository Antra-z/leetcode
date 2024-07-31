class Solution {
public:

    bool halvesAreAlike(string s) {
        string x,b;
        x=(s.substr(0,s.length()/2));
        b=(s.substr(s.length()/2,s.length()));
        int c=0;
        int d=0;
        for(auto i:x)
        {
            char a=tolower(i);
            if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
            c++;
        }
        for(auto i:b)
        {
             char a=tolower(i);
            if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
            d++;
        }
        if(c==d)
        {
            return true;
        }
        return false;
    }
};