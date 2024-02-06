length, start = map(int, input().split())
coords = [list(map(int, input().split())) for _ in range(length)]

position = start - 1
currentPower = 1
targetsBroken = 0
while 0 <= position < length:
    if coords[position][0] == 1:
        if abs(currentPower) >= coords[position][1]:
            coords[position][0] = 2
            targetsBroken += 1
        position += currentPower
    elif coords[position][0] == 0:
        if currentPower > 0:
            currentPower += coords[position][1]
            currentPower *= -1
        else:
            currentPower -= coords[position][1]
            currentPower *= -1
        position += currentPower
    elif coords[position][0] == 2:
        position += currentPower

print(targetsBroken)
