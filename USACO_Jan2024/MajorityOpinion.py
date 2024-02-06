def solve():
    n = int(input())

    a = list(map(int, input().split()))

    if n == 2:
        if a[0] == a[1]:
            print(a[0])
        else:
            print("-1")
        return
    if n == 1:
        print(a[0])
        return

    ans = set()

    for i in range(n - 2):
        if a[i] in ans and i != n - 3:
            continue

        if a[i] == a[i+1] or a[i] == a[i+2]:
            ans.add(a[i])
            continue
        elif a[i+1] == a[i+2]:
            ans.add(a[i+1])
            continue

    if not ans:
        print("-1")
        return

    print(" ".join(map(str, ans)))


t = int(input())
for _ in range(t):
    solve()
