def push(a):
	global top
	print("enter the element")
	ele=int(input())
	if(top is -1):
		top=0
		a[top]=ele
	else:
		a[top]=ele
	top=top+1
def pop(a):
	global top
	top=top-1
print("welcome to stack")
print("enter upper limit of stack")
l=int(input())
a=[0]*l
top=-1
print("enter 1 to push 2 to pop and 3 to print 4 to terminate")
c=int(input())
while(1):
	if(c==1):
		if(top>=l):
			print("stack full")
		else:
			push(a)
	elif(c==2):
		if(top==-1):
			print("stack is empty")
		else:
			pop(a)
	elif(c==3):
		for i in range(0,top):
			print(a[i])
	elif(c==4):
		break
	print("enter 1 to push 2 to pop and 3 to print 4 to terminate")
	c=int(input())