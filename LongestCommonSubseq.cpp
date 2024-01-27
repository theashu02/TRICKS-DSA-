class Solution {
public:
    int dp[1001][1001];
    int solve(string &a, string &b, int i, int j){
        if((a.size()==i) || (b.size()==j)) 
           return 0;
        if(dp[i][j]!=-1) 
           return dp[i][j];
        if(a[i]==b[j]) 
           dp[i][j] = 1 + solve(a,b,i+1,j+1);
        else 
           dp[i][j] = max(solve(a,b,i+1,j),solve(a,b,i,j+1));
        return dp[i][j];
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        return solve(text1,text2,0,0); 
    }
};

longest common subsequence
