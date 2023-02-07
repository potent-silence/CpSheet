class Solution {
public:
    map<int,map<int,vector<int>>>tree;
    void traverse(TreeNode* root,int key,int level){
        if(!root)   return;
        tree[key][level].push_back(root->val);
        if(root->left!=NULL){
            traverse(root->left,key-1,level+1);
        }
        if(root->right!=NULL){
            traverse(root->right,key+1,level+1);
        }
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        int key=0,level=0;
        traverse(root,key,level);
        for(auto it:tree){
            vector<int>temp;
            for(auto t:it.second){
                sort(t.second.begin(),t.second.end());
                for(int x=0;x<t.second.size();x++){
                    temp.push_back(t.second[x]);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

//For solving and seeing the details see https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/