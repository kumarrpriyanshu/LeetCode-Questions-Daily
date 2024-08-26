class Solution {
public:
    vector<int> postorder(Node* root) {
        // If the root is null, return an empty vector
        if (!root) return {};

        vector<int> res;

        function<void(Node*)> dfs = [&](Node* node) {
           
            for (Node* child : node->children) {
                dfs(child);
            }
            
            res.push_back(node->val);
        };

     
        dfs(root);

        
        return res;
    }
};