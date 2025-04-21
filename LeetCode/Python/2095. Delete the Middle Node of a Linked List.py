# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        size = 0

        curr_node = head
        while curr_node: 
            size += 1
            curr_node = curr_node.next
        
        if size == 0 or size == 1:
            return None
    
        idx_to_delete = (size // 2)
        print(idx_to_delete)
        prev = head
        for _ in range(idx_to_delete-1):
            prev = prev.next 
        
        prev.next = prev.next.next

        return head
    
# OR
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return None

        prev, slow, fast = None, head, head

        while fast and fast.next:
            prev = slow
            slow = slow.next
            fast = fast.next.next
            print(slow, fast)
            

        if prev:
            prev.next = slow.next

        return head 