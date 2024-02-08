## convert int into char
    // method 1:
   // string t = to_string(i);
   // char const *n1 = t.c_str();
   // s.push_back(*n1);


   // mehtod 2:
   // temp.append(to_string(val));
   // s.push_back(temp);
   // to_string(val): This function takes an integer value val as input and returns a string representation of that value.
   // temp.append(...): This method is used to append a string to the end of another string. In this case, it appends the string representation of the integer value val to the string temp.

   (int) -> (char)

## convert char into int

   stringstream t; 
   int it = 907856;
   int n = 0;
   t<<it;  
   t>>n;
   return n;
   output n = 907856 ->(int form)

// Use 'static_cast' to convert the size to int 
/*  static_cast<int>(x.size()); */


LEETCODE --> 129

class Solution {
public:
    void dfs(TreeNode* root, vector<string> &v,string s){
        if(root==NULL)return;

        string t = to_string(root->val);
        char const *n1 = t.c_str();
        s.push_back(*n1);
        if(root->right==NULL && root->left==NULL){
           v.push_back(s);
           return;
        }
        dfs(root->right,v,s);
        dfs(root->left,v,s);
    }
    int sumNumbers(TreeNode* root) {
        vector<string> v;
        string s = "";
        int sum =0;
        dfs(root,v,s);   
        for(auto it:v){
           stringstream t;
           int n = 0;
           t<<it; 
           t>>n; 
           sum+=n;
        }  
        return sum;

    }
};
