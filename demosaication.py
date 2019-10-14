import random
n = int(input("Enter the size of square matrix: "))
a = [[0 for i in range(n+2)] for j in range(n+2)]
for i in range(1,n+1):
    b = []
    for j in range(1,n+1):
        a[i][j] = random.randint(0, 255)

print(a)

r = []
b = []
g = []
img = []
for i in range(1,n+1):#Demosaicing
    r1=[]
    b1=[]
    g1=[]
    for j in range(1,n+1):
        if i%2==0 and j%2==0:
            r1.append(a[i][j])
            b1.append((a[i-1][j-1]+a[i-1][j+1]+a[i+1][j-1]+a[i+1][j+1])/4)
            g1.append((a[i][j-1]+a[i][j+1]+a[i+1][j]+a[i-1][j])/4)
        elif i%2!=0 and j%2!=0:
            b1.append(a[i][j])
            r1.append((a[i-1][j-1]+a[i-1][j+1]+a[i+1][j-1]+a[i+1][j+1])/4)
            g1.append((a[i][j-1]+a[i][j+1]+a[i+1][j]+a[i-1][j])/4)
        else:
            if i%2==0:
                b1.append((a[i-1][j]+a[i+1][j])/2)
                g1.append((a[i-1][j-1]+a[i-1][j+1]+a[i+1][j-1]+a[i+1][j+1]+a[i][j])/5)
                r1.append((a[i][j-1]+a[i][j+1])/2)
            else:
                r1.append((a[i-1][j]+a[i+1][j])/2)
                g1.append((a[i-1][j-1]+a[i-1][j+1]+a[i+1][j-1]+a[i+1][j+1]+a[i][j])/5)
                b1.append((a[i][j-1]+a[i][j+1])/2)

    r.append(r1)
    g.append(g1)
    b.append(b1)

print('R: ',r)   #individual color components
print('B: ',b)
print('G: ',g)
