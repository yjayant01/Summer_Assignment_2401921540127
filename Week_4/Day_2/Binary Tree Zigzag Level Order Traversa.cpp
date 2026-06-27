class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL){
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight=true;
        while(!q.empty()){
            int n=q.size();
            vector<int> ans(n);
            for(int i=0;i<n;i++){
                TreeNode* frontNode=q.front();
                q.pop();
                int index=leftToRight ? i:n-i-1;
                ans[index]=frontNode->val;
                if(frontNode->left){
                    q.push(frontNode->left);
                }
                if(frontNode->right){
                    q.push(frontNode->right);
                }
            }
            leftToRight=!leftToRight;
            result.push_back(ans);
        }
        return result;
    }
};