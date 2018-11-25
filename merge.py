def Merge(L,R,A):
	nl=len(L)
	nr=len(R)
	i=j=k=0
	while i<nl and j<nr :
		if L[i] <= R[j]:
			A[k]=L[i]
			k=k+1
			i=i+1
		else:
			A[k]=R[j]
			k=k+1
			j=j+1
	while i < nl:
		A[k]=L[i]
		i=i+1
		k=k+1
	while j< nr:
		A[k]=R[j]
		j=j+1
		k=k+1
def MergeSort(A):
	n=len(A)
	if n<2:
		return
	else:
		mid=n/2
	left=[]
	right=[]
	for i in range(0,mid):
		left.append(A[i])
		print left
	for i in range(mid,n):
		right.append(A[i])
		print right
	MergeSort(left)
	MergeSort(right)
	Merge(left,right,A)
	#print A
A=[23,51,12,26,71,11,29]
MergeSort(A)
print A
