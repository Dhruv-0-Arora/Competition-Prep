file = open("floor_cleaner.dat")
lines = file.read()
lines = lines.split("\n")

floorMap = []
for i in range(10):
    floorMap.append([])
    for j in range(len(lines[i])):
        floorMap[i].append(lines[i][j])

obstructions = []
for i in range(len(lines)-10):
    obstructions.append([])
    obstructions[i].append(lines[i+10][1])
    obstructions[i].append(lines[i+10][3])

for i in range(len(obstructions)):



# out = open("floor_cleaner.out", "w")
# out.write("({}) - {}".format(distance, path))