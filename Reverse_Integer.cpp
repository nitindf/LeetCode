class Solution {
public:
    int numPlaces (int n) {
    if (n < 10) return 1;
    if (n < 100) return 2;
    if (n < 1000) return 3;
    if (n < 10000) return 4;
    if (n < 100000) return 5;
    if (n < 1000000) return 6;
    if (n < 10000000) return 7;
    if (n < 100000000) return 8;
    if (n < 1000000000) return 9;
    return 10;
}
    int reverse(int y) {
        int f=0,l;
        long int x=y,d,m,rem=0;
        if(x<0)
        {
            x*=-1;
            f=1;
        }
        if(x>2147483647)
            return 0;
        if(x%10==0)
                x/=10;
        l=numPlaces(x)- 1;
        if(l==11)
            return 0;
        m=pow(10,l);
        while(x>0)
        {
            d=x%10;
            d*=m;
            rem+=d;
            m/=10;
            x/=10;
        }
        if(rem>2147483647)
            return 0;
        if(f==1)
            rem*=-1;
        return rem;
        
    }
};