class Solution{
  public:
    int minJumps(int nums[], int n){
        int l=0,r=0,c=0;
        while(r<n-1){
            int farthest=0;
            for(int j=l;j<=r;j++){
                farthest=max(farthest,nums[j]+j);
            }
            if(farthest==r) return -1;
            l=r+1;
            r=farthest;
            c++;
        }
        return c;
    }
};
