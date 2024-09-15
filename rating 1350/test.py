k = int(input())


for i in range(1,k):
    ans = []
    for j in range(1,k):
        p = i * j
        s = ''
        while p:
            s += str(p % k)
            p //= k
        ans.append(s[::-1])
    print(' '.join(ans))