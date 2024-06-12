class Solution {
  public:
    string armstrongNumber(int n){
        int x=0;
        int hash=n;
        while(n>0){
            int r=n%10;
            x+=(r*r*r);
            n/=10;
        }
        if(x==hash) return "Yes";
        return "No";
    }
};