file = open("playtime.dat")
lines = file.readlines()

out = open("playtime.out", "a")

for line in range(int(lines[0])):
    line = line + 1

    input = lines[line].split(",")
    gameTitle = input[0]
    minutesPlayed = int(input[1])
    out.write(gameTitle + " - ")

    years = minutesPlayed // (365 * 60 * 24)
    if (years != 0):
        out.write(str(years) + " year(s) ")
    minutesPlayed = minutesPlayed % (365 * 60 * 24)

    days = minutesPlayed // (60 * 24)
    if (days != 0):
        out.write(str(days) + " day(s) ")
    minutesPlayed = minutesPlayed % (60 * 24)

    hours = minutesPlayed // (60)
    if (hours != 0):
        out.write(str(hours) + " hour(s) ")

    minutes = minutesPlayed % 60
    if (minutes != 0):
        out.write(str(minutes) + " minute(s) ")

    out.write("\n")



file.close()