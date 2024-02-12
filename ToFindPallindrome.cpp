class Solution {
public:
    int dp[1001][1001];
    int countSubstrings(string s) {
        int n = s.size();
        memset(dp, false, sizeof(dp)); 
        int c = 0;
        for(int l=1;l<=n;l++){
            for(int i=0;i+l-1 < n;i++){
                int j = i + l - 1;
                if(i==j) dp[i][j] = true;

                else if(i+1 == j) dp[i][j] = (s[i] == s[j]);
                
                else dp[i][j] = (s[i] == s[j] && dp[i+1][j-1]);

                if(dp[i][j]==true) c++;
            }    
        }
        return c;
    }
};
