print("Enter the array to be sorted \n")
a = [int(i) for i in input().split()]

swapped = True
for i in range(len(a)-1, 0, -1):
        if not swapped:
                break
        swapped = False
        for j in range(i):
                if a[j] > a[j+1]:
                        a[j], a[j+1] = a[j+1] , a[j]
                        swapped = True

print("Acending Order Sorted Array" ,a)
