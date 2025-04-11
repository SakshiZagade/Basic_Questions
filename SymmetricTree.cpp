class Solution {
  public:
  bool isMirror(Node*left, Node*right)
  {
      if(left == NULL && right== NULL)
        return true;
      
      if(left == NULL || right == NULL)
        return false;
      
      if(left->data != right->data)
        return false;
        
        return isMirror(left->left,right->right) && isMirror(left->right,right->left);
  }
    bool isSymmetric(Node* root) {
        // Code here
        if(root == NULL)
        return true;
        
        return isMirror(root->left,root->right);
      
       
    }
};
