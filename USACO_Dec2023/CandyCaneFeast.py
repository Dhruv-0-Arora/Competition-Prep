n, m = map(int, input().split())
cowHeights = list(map(int, input().split()))
candiesHeights = list(map(int, input().split()))

for x in range(m):
    suspendedHeight = [candiesHeights[x], 0]

    for y in range(n):
        if cowHeights[y] > suspendedHeight[1]:
            foodEaten = min(suspendedHeight[0], cowHeights[y])
            cowHeights[y] += (foodEaten - suspendedHeight[1])
            suspendedHeight[1] = foodEaten

            if suspendedHeight[0] == suspendedHeight[1]:
                break

for a in cowHeights:
    print(a)