class node:
    data = None
    next= None
    def __init__(self,data):
        self.data= data
        

def traversal(ptr):
    while ptr!=None:
        print(ptr.data)
        ptr=ptr.next
def insertionAB(ptr,val):
    if ptr==None:
        newnode=node(val)
        newnode.next=None
        return newnode
    newnode=node(val)
    newnode.next=ptr 
    return newnode   
def insertionEnd(ptr,val):
    if ptr==None:
        newnode=node(val)
        newnode.next=None
        return newnode
    qtr=ptr 
    ftr=qtr.next
    while qtr.next!=None:
        qtr=qtr.next
    newnode=node(val)
    qtr.next=newnode
    newnode.next=None
    return ptr
def insertionABB(ptr,val,index):
    if ptr==None:
        return None
    copy=ptr
    count=0
    while copy!=None:
        count=count+1
        copy=copy.next
    if count>index:
        qtr=ptr
        i=0
        while i<index-1:
            qtr= qtr.next
            i=i-1
        newnode=node(val)
        newnode.next=qtr.next
        qtr.next=newnode
        return ptr
    else:
        print("index is insufficient")
def insertionAsdata(ptr,val,sval):
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
        newnode=node(val)
        newnode.next=ftr
        qtr.next=newnode
        return ptr
def insertionAaftData(ptr,val,sval):
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
        while qtr.data!=sval:
            qtr=qtr.next
            ftr=ftr.next
        newnode=node(val)
        newnode.next=qtr.next
        qtr.next=newnode
        return ptr
def deletionAB(ptr):
    if ptr==None:
        return None
    ptr=ptr.next
    return ptr
        
def deletionAE(ptr):
    if ptr==None:
        return None
    


a=node(10)
b=node(20)
c=node(30)
d=node(40)
e=node(50)
a.next=b
b.next=c
c.next=d
d.next=e
e.next=None
a=insertionAB(a,34)
a=insertionEnd(a,22)
a=insertionABB(a,56,1)
a=insertionAsdata(a,34,30)
a=insertionAaftData(a,44,40)
a=deletionAB(a)
traversal(a)