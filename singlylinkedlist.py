class Node:
    data=None
    next=None
    
    def __init__(self,data):
        self.data=data
def traversal(ptr):
    while ptr!=None:
        print(ptr.data)
        ptr=ptr.next
def insertionAB(ptr,val):
    if ptr==None:
        newnode=Node(val)
        newnode.next=None
        return newnode
    newnode=Node(val)
    newnode.next=ptr
    return newnode
def inisertionAEND(ptr,val):
    if ptr==None:
        newnode=Node(val)
        newnode.next=None
        return newnode
    qtr=ptr
    ftr=qtr.next
    while qtr.next!=None:
        qtr=qtr.next
    newnode=Node(val)
    qtr.next=newnode
    return ptr
def inisetionABB(ptr,val,index):
    if ptr==None:
        return None
    copyptr=ptr
    count=0
    while copyptr!=None:
        count=count+1
        copyptr=copyptr.next
    print(count)
    if count>index:
        qtr=ptr
        i=0
        while i<index-1:
            qtr=qtr.next
            i=i+1
        newnode=Node(val)
        newnode.next=qtr.next
        qtr.next=newnode
        return ptr
    else:
        print("index is insufficient")

def insertionABeforData(ptr,sval,val):
    if ptr==None:
        return None
    copyptr=ptr
    flag=False
    while copyptr!=None:
        if copyptr.data==sval:
            flag=True
            break
        copyptr=copyptr.next
    if flag==True:
        qtr=ptr
        ftr=qtr.next
        while ftr.data!=sval:
            qtr=qtr.next
            ftr=ftr.next
        newnode=Node(val)
        newnode.next=ftr
        qtr.next=newnode
        return ptr
    else:
        print("data not present")

def insertionAAfterData(ptr,sval,val):
    if ptr==None:
        return None
    copyptr=ptr
    flag=False
    while copyptr!=None:
        if copyptr.data==sval:
            flag=True
            break
        if flag==True:
            qtr=ptr
            ftr=qtr.next
            while qtr.data!=sval:
                qtr=qtr.next
                ftr=ftr.next
            newnode=Node(val)
            newnode.next=ftr
            qtr.next=newnode
            return ptr
        else:
            print("data not found")

def deletionAB(ptr):
    if ptr==None:
        return None
    ptr=ptr.next
    return ptr
def deletionAEnd(ptr):
    if ptr==None:
        return None
    qtr=ptr
    ftr=qtr.next
    while ftr.next!=None:
        qtr=qtr.next
        ftr=ftr.next
    qtr.next=None
    return ptr
def deletionABW(ptr,index):
    if ptr==None:
        return None
    copyptr=ptr
    count=0
    while copyptr!=None:
        count=count+1
        copyptr=copyptr.next
    if count>index:
        qtr=ptr
        ftr=qtr.next
        while ftr!=index:
            qtr=qtr.next
            ftr=ftr.next
        ftr.next=qtr.next
        ftr=None
        return ptr
    else:
        print("index not found")



a=Node(10)
b=Node(20)
c=Node(30)
d=Node(40)
e=Node(50)

a.next=b
b.next=c
c.next=d
d.next=e
e.next=None
#a=insertionAB(a,0)
#a=inisertionAEND(a,60)
#a=inisetionABB(a,33,3)
#a=insertionABeforData(a,40,41)
#a=insertionAAfterData(a,30,35)
#a=deletionAB(a)
#a=deletionAEnd(a)
a=deletionABW(a,3)
traversal(a)