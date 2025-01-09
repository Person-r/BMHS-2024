"""
You are given a linked list
All you have to do is return a list of all of the values in the linked list

EXAMPLE 1:
(1) => (2) => (3) => NULL

ANSWER:
[1,2,3]

Node Structure
Class TreeNode
    __init__(self, value=None,next=None):
        self.value = value
        self.next = next

        
>>CHALLENGE<<
Do it in O(0.5N) time complextiy. or else.
dont actually do that its impossible 
"""

class TreeNode:
    def __init__(self, value=None,next=None):
        self.value = value
        self.next = next

def Returnlinkedlist(head:TreeNode) -> list[int]:
    pass























































































































































































































































































































































































def CreateLLfromTree(List):
    head = TreeNode(List[0])
    pointer = TreeNode()
    head.next = pointer
    i = 1 
    while i != len(List):
        pointer.value = List[i]
        pointer.next = TreeNode()
        pointer = pointer.next
        i+=1
    return head

def myanswer(head:TreeNode):
    answer = []
    while head.value:
        answer.append(head.value)
        head = head.next
    print(answer)
    return answer

def main() -> str:
    qs = [
        CreateLLfromTree([1,2,3,4,5]),
        CreateLLfromTree([6,2,4,21,6]),
        CreateLLfromTree([2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2]),
        CreateLLfromTree([8,5,4,3,2,5,9,278,6,8,]),
        CreateLLfromTree([5,5,5,5,5,5,5,5,5,5,2]),
        CreateLLfromTree([0,0,3,4,2,1,3,5,6,73,8,2,8,3]),
        CreateLLfromTree([1,2,3,3,3,4,5,7,1,2])
    ]

    for i in range(len(qs)):
        if myanswer(qs[i]) != Returnlinkedlist(qs[i]):
            return f'''
Failed testcase {i}

Your Answer:
{Returnlinkedlist(qs[i])}

Correct Answer:
{myanswer(qs[i])}
            '''

    return "you passed"

if __name__ == "__main__":
    print(main())