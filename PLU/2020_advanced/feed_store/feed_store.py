file = open("feed_store.dat")
lines = file.readlines()

feedAmount = lines[0]
lines.remove(lines[0])

stores = lines[0].split(" ")
for i in range(len(stores)):
    stores[i] = list(stores[i])
    stores[i][1] = list(map(int, stores[i][1]))
print(stores)


# position = "A"
# while True:
#     break
#
# out = open("feed_store.out", "w")
# out.write("({}) - {}".format(distance, path))