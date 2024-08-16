class Node:
    def __init__(self,value):
        #create new node
        self.value=value
        self.next=None
class LinkedList:
    def __init__(self,value):
        new_node=Node(value)
        self.head=new_node
        self.tail=new_node
        self.length=1
    def print_list(self):
        temp=self.head
        while temp is not None:
            print(temp.value)
            temp=temp.next
    def append(self,value):
        #add new node to end
        new_node=Node(value)
        if self.head is None:
            self.head=new_node
            self.tail=new_node
        else:
            self.tail.next=new_node
            self.tail=new_node
        self.length+=1
        return True
    def pop(self):
        if self.length==0:
            return None
        temp=self.head
        pre=self.head
        while temp.next:
            pre=temp
            temp=temp.next
        self.tail=pre
        self.length-=1
        self.tail.next=None
        if self.length==0:
            self.head=None
            self.tail=None
        return temp
    def prepend(self,value):
        pass
    def insert(self,value):
        pass
myLL=LinkedList(4)
myLL.append(10)
print(myLL.print_list())
myLL.pop()
print(myLL.print_list())

        