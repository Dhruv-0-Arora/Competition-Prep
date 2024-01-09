def solve():
    

    plants = []
    for _ in range(n):  # getting the order it should be in
        p = int(input())
        plants.append(p)

    if n == 1:  # corner case
        print(0)
        return

    plants.sort()

    # check if the growthrates are in descending order
    for i in range(1, n):
        if plants[i-1][1][1] < plants[i][1][1]:
            print(-1)
            return
        elif plants[i-1][1][1] == plants[i][1][1]:
            if plants[i-1][1][0] <= plants[i][1][0]:
                print(-1)
                return

    days = 0
    while True:
        if check(plants, n):
            break

        for i in range(n):
            plants[i][1][0] += plants[i][1][1]

        days += 1

    print(days)

t = int(input())
for range(t):
    solve()