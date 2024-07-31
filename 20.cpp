class Solution {
public:
    bool isValid(string s) {
        stack<char> c;
        for(char i: s)
        {
        switch(i)
        {
            case '(':
            c.push(i);
            break;
            case ')':
            if(c.empty()!=1 && c.top()=='(')
            {
                c.pop();
            }
            else
            {
                c.push(i);
            }
            
            break;
            case '[':
            c.push(i);
            break;
            case ']':
            if(c.empty()!=1 && c.top()=='[')
            {
                c.pop();
            }
            else
            {
                c.push(i);
            }
            break;
            case '{':
            c.push(i);
            break;
            case '}':
            if(c.empty()!=1 && c.top()=='{')
            {
                c.pop();
            }
            else
            {
                c.push(i);
            }
            break;
        }
        }
        return c.empty();
    }
};