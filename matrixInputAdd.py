r= int(input("Enter Rows"))
c= int(input("Enter Columns"))

mat=[]

for x in range(r):
	a=[]
	for y in range(c):
		t=int(input())
		a.append(t)
	mat.append(a)


print(mat)

mat2=[]

for x in range(r):
	a=[]
	for y in range(c):
		t=int(input())
		a.append(t)
	mat2.append(a)


print(mat2)

ans=[]


for i in range(r):
    mp=[]
    for j in range(c):
        mp.append(mat[i][j]+mat2[i][j])

    ans.append(mp)


print("SUM OF GIVEN 2 MATRIX IS : ")
print(ans)



