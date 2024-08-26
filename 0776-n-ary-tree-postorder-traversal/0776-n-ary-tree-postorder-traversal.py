"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def postorder(self, root: 'Node') -> List[int]:
        ans=[]

        def helper(node):
            if(not node):
                return ans
            for child in node.children:
                helper(child)
            ans.append(node.val)

        helper(root)
        return ans
        
        
        