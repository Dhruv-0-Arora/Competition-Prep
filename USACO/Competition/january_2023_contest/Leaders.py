n = int(input())
cowLine = input()
E = input().split(" ")
# n = 4
# cowLine = "GHHG"
# E = [2, 4, 3, 4]

for i in range(len(E)):
    E[i] = int(E[i])

numberOfGuernsey = 0
numberOfHolstein = 0
for i in range(n):
    if cowLine[i] == "G":
        numberOfGuernsey += 1
    elif cowLine[i] == "H":
        numberOfHolstein += 1

numberOfMatches = 0
for i in range(n):
    target = E[i]-1
    if cowLine[target] != cowLine[i]:
        begin = target
        end = E[target]
        count = 0
        letter = cowLine[target]
        for j in range(end-begin):
            j += begin
            if cowLine[j] == letter:
                count += 1
            j -= begin
        if letter == "H":
            if count == numberOfHolstein:
                numberOfMatches += 1
        if letter == "G":
            if count == numberOfGuernsey:
                numberOfMatches += 1
print(numberOfMatches)