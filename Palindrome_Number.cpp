#include<math.h>
class Solution {
public:
    bool isPalindrome(int x) { 
        int i,j,f=0,l=log10(x);
        if(x==0) l=0;
        if(x<0)
           f=1;
        else
        {
            while(1)
            {
                j=x%10;
                i=x/pow(10,l);
                if(i!=j)
                {
                    f=1;
                    break;
                }
                x=fmod(x,(pow(10,l)));
                x/=10;
                if(x<10 && l<=2)
                    break;
                l-=2;
                
            }
        }
        if(f==0)
            return true;
        else
            return false;
    }
};