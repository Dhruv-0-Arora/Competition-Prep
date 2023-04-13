file = open("scale.dat")

array = file.read().split("\n")
for i in range(len(array)):
    array[i] = list(map(int, array[i].split(" ")))

newArray = []
for j in range(len(array)):
    newArray.append([])
    for i in range(len(array[j])):
        if i == 0:
            newArray[j].append(array[j][i] * array[j][i+1])
        elif i == len(array[j])-1:
            newArray[j].append(array[j][i] * array[j][i-1])
        else:
            newArray[j].append(array[j][i] * array[j][i + 1] * array[j][i - 1])

for i in range(len(newArray)):
    newArray[i] = list(map(str, newArray[i]))

out = open("scale.out", "a")
for i in range(len(newArray)):
    out.write(" ".join(newArray[i]) + "\n")

file.close()
out.close()

