def fact(n):
    if n==1:
        return 1
    return n*fact(n-1)

print(sum([fact(i) for i in range(1,20)]))