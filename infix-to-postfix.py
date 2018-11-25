def push(a,ele):
	global top
	if(top is -1):
		top=0
		a[top]=ele
	else:
		a[top]=ele
	top=top+1
def pop(a):
	global top
	nm=a[top-1]
	top=top-1
	return nm
def lst(a):
	global top
	nm=a[top-1]
	return nm
print("infix to postfix")
a=[0]*10000
top=-1
print("enter the string")
c=input()
priority={ "(":5,"[":5,"{":5,"^":1,"*":2,"/":2,"+":3,"-":3}
b=[]
l=len(c)

for i in range(l):
	asc=ord(c[i])
	if((asc>=65 and asc<=90) or(asc>=97 and asc<=122) or (asc>=48 and asc<=57)):
		b.append(c[i])
	elif((c[i] == "(" ) or (c[i] == "[" ) or (c[i] == "{")):
		push(a,c[i])
	elif((c[i] is ")" ) or (c[i] is "]" ) or (c[i] is "}")):
		ee=pop(a)
		while(((ee!= "(" ) and (ee != "[" ) and (ee != "{"))):
			b.append(ee)
			ee=pop(a)
	elif(top>=1):
		tp=lst(a)
		if(priority[tp]>priority[c[i]]):
			push(a,c[i])
		else:
			flag=0
			while(top>=1):
				el=lst(a)
				if((priority[el]>priority[c[i]]) and ((el != "(" ) or (el != "[" ) or (el != "{"))):
					push(a,c[i])
					flag=1
					break;
				elif(((el == "(" ) or (el == "[" ) or (el == "{"))):
					flag=1
					break;
				else:
					b.append(el)
					pop(a)
			if(flag==0):
				push(a,c[i])

	else:
		push(a,c[i])
while(top>=1):
	el=lst(a)
	b.append(el)
	pop(a)
print(b)