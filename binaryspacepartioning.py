# The binary Space Partioning Space is very effective method in determining the visibility relationship among a static group of 3d polygons
# as seen from the arbitary viewpoint

class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None


def insert(node, value):
    if value < node.value:
        if node.left:
            insert(node.left, value)
        else:
            node.left = value
    elif value > node.value:
        if node.right:
            insert(node.right, value)
        else:
            node.right = value
