def binary(a,item,n):
	l=0
	u=n-1
	while u>=l:
		m=(l+u)/2
		if item==a[m]:
			print("success")
			return
		elif item>a[m]:
			l=m+1
		else:
			u=m-1


a=[2,3,45,65,67]
binary(a,67,5)