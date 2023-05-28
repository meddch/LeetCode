/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxdepth,sum;
void doit(struct TreeNode *p,int d){
    if(p==NULL)return;
    d=d+1;
    if(p->left==NULL && p->right==NULL){
        if(maxdepth<d){
            sum=p->val;
            maxdepth=d;
        }
        else if(maxdepth==d){
            sum+=p->val;
        }
        return;
    }
    doit(p->left,d);
    doit(p->right,d);
}


int deepestLeavesSum(struct TreeNode* root){
    maxdepth=sum=0;
    doit(root,0);
    return sum;
}