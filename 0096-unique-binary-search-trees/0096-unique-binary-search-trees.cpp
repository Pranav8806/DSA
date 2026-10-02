class Solution {
public:
    long long combination(int n, int r) {
        if (r > n - r)
            r = n - r;

        long long ans = 1;

        for (int i = 1; i <= r; i++) {
            ans = ans * (n - i + 1) / i;
        }

        return ans;
    }
    int numTrees(int n) {
        int ans=combination(2*n,n)/(n+1);
        return ans;
    }
};