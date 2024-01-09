N = int(input())

infected = ['0']
deepCopy = ['0']

first = True
continuation = False

c = input().split("")

for _ in range(N):
    if first and c == '0':
        first = False
        continuation = True
    elif not continuation and c == '0':
        continuation = True
    elif first and c == '1':
        infected.append('1')

    infected.append(c)
    deepCopy.append(c)

if continuation:
    for i in range(len(infected)-1, 0, -1):
        if infected[i] == '0':
            break
        else:
            infected.append('1')

infected.append('0')
deepCopy.append('0')


countOfI = 1000000000
i = 1
while i <= len(infected):
    if infected[i] == '1' and infected[i-1] == '0':
        j = i
        while infected[j] == '1':
            j += 1
        countOfI = min(countOfI, j-i)
        i = j
    else :
        i += 1

nights = (countOfI - 1) // 2

numberInfected = 0
i = 1
while i <= len(deepCopy):
    if deepCopy[i] == '1' and deepCopy[i-1] == '0':
        j = i
        while deepCopy[j] == '1':
            j += 1
        countOfI = j-i

        numberInfected += countOfI // ((nights*2) + 1)
        if countOfI % ((nights*2) + 1) != 0:
            numberInfected += 1

        i = j
    else:
        i += 1

print(numberInfected)