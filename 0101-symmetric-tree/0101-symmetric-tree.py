# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return

        def mirrorMatch(leftSub, rightSub):
            if leftSub is None and rightSub is None:
                return True
            
            if leftSub is None or rightSub is None:
                return False
            
            return (leftSub.val==rightSub.val) and mirrorMatch(leftSub.left, rightSub.right) and mirrorMatch(leftSub.right, rightSub.left)
        
        return mirrorMatch(root.left,root.right)
        