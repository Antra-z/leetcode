class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){

      return false;

    }

    n=n&n-1;

    return n==0;
        /*if(n==0)
        {
            return false;
        }
        return floor(log2(n))==ceil(log2(n));*/
    }
};