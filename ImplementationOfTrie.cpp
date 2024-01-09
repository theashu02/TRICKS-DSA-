class Trie {
public:
    
    struct trieNode { 
        trieNode *children[26];  // to assign the pointer
        bool isEndWord;        // make the last entry
    };
    
    trieNode* getNode() {
        trieNode* newNode = new trieNode();
        newNode->isEndWord = false;
        
        for (int i = 0; i < 26; i++) {
			newNode->children[i] = NULL;
		}
        
        return newNode;
    }
    
    // Initialize data structure
    trieNode* root;
    
    Trie() {
        root = getNode();
    }
    
    void insert(string word) {
        trieNode *crawl = root;    // to make every node in the trie
        
        for (auto ch : word) { 
            int idx = ch - 'a'; // to find the index
            if (crawl -> children[idx] == NULL) 
            crawl -> children[idx] = getNode();  // assign the node
            
            crawl = crawl->children[idx];    // increase the pointer
        }
        
        crawl->isEndWord = true;               // make last word true
    }
    
    bool search(string word) {
        trieNode *crawl = root; 
        
        for (auto ch : word) { 
            int idx = ch - 'a'; 
            if (crawl -> children[idx] == NULL) 
                return false; 
            crawl = crawl -> children[idx]; 
        }
        return (crawl != NULL && crawl -> isEndWord); 
    }
    
    bool startsWith(string prefix) {
        trieNode *crawl = root;
        int i = 0;
        for (i = 0; i < prefix.length(); i++) { 
            int idx = prefix[i] - 'a'; 
            
            if (crawl -> children[idx] == NULL) return false; 
            
            crawl = crawl -> children[idx]; // increase the pointer
        }
        if(i==prefix.length()) return true;
        return false;
    }
};
