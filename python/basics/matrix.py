mat1=[[1,2,3],[4,5,6],[7,8,9]]
mat2=[[10,20,30],[40,50,60],[70,80,90]]
rmat=[[0,0,0],[0,0,0],[0,0,0]]
for i in range(len(mat1)):
    for j in range(len(mat2)):
        rmat[i][j]=mat1[i][j]+mat2[i][j]

print("Added Matrix :-")
for i in range(len(rmat)):
    print(rmat[i])

#transpose

tmat=[[0,0,0],[0,0,0],[0,0,0]]
for i in range(len(rmat)):
    for j in range(len(rmat)):
        tmat[i][j]=rmat[j][i]

print("\nTranpose :- ")

for i in range(len(rmat)):
    print(tmat[i])