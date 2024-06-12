class Solution {
  public:
    long long gcd(long long A,long long B){
        while(B!=0){
            long long temp=B;
            B=A%B;
            A=temp;
        }
        return A;
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long a=gcd(A,B);
        long long b=(A*B)/a;
        vector<long long>ans;
        ans.push_back(b);
        ans.push_back(a);
        return ans;
    }
};