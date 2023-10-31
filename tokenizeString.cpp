// The >> operator is used to separate words in the input stream based on whitespace. It reads and extracts words (separated by spaces, tabs, or newlines) and stores them in the word variable.

class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        stringstream ss(s);
        string word;
        while (ss >> word) {
          st.push(word);
        } 
        // your logic 
        
    }
};

// Input: s = "the sky is blue"
// Output: "the","sky","is","blue"

// Input: s = "  hello world  "
// Output: "hello","world"

// Input: s = "a good   example"
// Output: "a","good","example"
