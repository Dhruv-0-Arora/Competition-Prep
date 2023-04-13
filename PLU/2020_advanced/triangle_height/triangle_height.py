file = open("triangle_height.dat")
lines = file.read().split("\n")

numberOfLines = lines[0]
lines.remove(lines[0])

for i in range(len(lines)):
    lines[i] = list(map(float, lines[i].split(" ")))

out = open("triangle_height.out", "a")
for i in range(len(lines)):
    height = (lines[i][0] * 2) / lines[i][1]
    out.write("The height of the triangle is %.2f units" % height)
    if (i != len(lines)-1):
        out.write("\n")
