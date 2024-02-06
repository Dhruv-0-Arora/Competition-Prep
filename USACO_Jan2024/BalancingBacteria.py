def solve(a, ans, start):
    # power is = to length
    power = len(a) - start
    # multiplicity = first element
    multiplicity = a[start]
    ans[0] += abs(multiplicity)
    if multiplicity == 0:
        return

    for i in range(len(a) - 1, start, -1):
        a[i] += (power * multiplicity * -1)
        power -= 1



N = int(input())


a = list(map(int, input().split()))

ans = [0]
for i in range(N):
    solve(a, ans, i)

print(ans[0])
