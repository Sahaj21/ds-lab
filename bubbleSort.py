print("Enter the array to be sorted \n")
a = [int(i) for i in input().split()]

for i in range(len(a)-1):
	for j in range(0,len(a)-1):
		if a[j] > a[j+1]:
			# swap= ar[j];
			# ar[j] =ar[j+1];
			# ar[j+1]= swap;
			a[j], a[j+1] = a[j+1] , a[j];


print("Acending Order Sorted Array" ,a)
