class Node:
    data=None
    next=None
    prev=None
    def __init__(self,data):
        self.data=data
def traversal(ptr):
    while ptr!=None:
        print(ptr.data)
        ptr=ptr.next
def rev_traversal(ptr):
        while ptr.next!=None:
            ptr=ptr.next
        while ptr!=None:
            print(ptr.data)
            ptr=ptr.prev
def insertionAB(ptr,val):
    if ptr==None:
        newnode=Node(val)
        return newnode
    newnode=Node(val)
    newnode.next=ptr
    ptr.prev=newnode
    return newnode
def insertionAEnd(ptr,val):
    if ptr==None:
        newnode=Node(val)
        return newnode
    qtr=ptr
    while qtr.next!=None:
        qtr=qtr.next
    newnode=Node(val)
    newnode.prev=qtr
    qtr.next=newnode
    return ptr
def insertionABW(ptr,val,index):
    if ptr==None:
        return None
    copyptr=ptr
    count=0
    i=0
    while copyptr!=None:
        count=count+1
        copyptr=copyptr.next
        if count>index:
            qtr=ptr
            ftr=qtr.next
            i=i+1
        newnode=Node(val)
        newnode.next= ftr
        newnode.prev=qtr
        ftr.prev=newnode
        qtr.next=newnode
        return ptr

a=Node(10)
b=Node(20)
c=Node(30)
d=Node(40)
e=Node(50)

a.prev=None
a.next=b

b.prev=a
b.next=c

c.prev=b
c.next=d

d.prev=c
d.next=e

e.prev=d
e.next=None
#a=insertionAB(a,0)
a=insertionAEnd(a,60)
a=traversal(a)
#a=rev_traversal(a)
