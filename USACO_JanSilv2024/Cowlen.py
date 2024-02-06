N = int(input())
a = set(map(int, input().split()))

maxL = min(a) // 4

ans = 0

for i in range(maxL, 0, -1):
    b = set()
    for x in a:
        b.add(x % i)
        if len(b) > 3:
            break
    else:
        ans += i

print(ans)
