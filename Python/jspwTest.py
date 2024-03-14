n = int(input())
for i in range(1,2*n):
    if (i<n+1):
        for j in range(1,2*n):
            if (i+j == n+1 or j-i == n-1):
                print("*",end=' ')
            else:
                print(" ",end=' ')
    else:
        i = i-n
        for j in range(1,2*n):
            if (j-i == 1 or j == 2*n-1-i):
                print("*",end=' ')
            else:
                print(" ",end=' ')
    print()

