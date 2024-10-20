# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        lst=[]
        def traverse(node):
            if node is None:
                return

            traverse(node.left)
            lst.append(node.val)
            traverse(node.right)

        traverse(root)
        return lst
            


        