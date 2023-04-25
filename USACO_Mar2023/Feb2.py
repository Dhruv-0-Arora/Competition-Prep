n = int(input())
s = input()

# Count the number of occurrences of "BB" and "EE" in the string
bb_count = s.count("BB")
ee_count = s.count("EE")

# If there are no obfuscated messages, we only have one possibility
if "F" not in s:
    print(1)
    print(bb_count + ee_count)
else:
    # Count the number of obfuscated messages
    f_count = s.count("F")

    # Calculate the number of double-sends that we know for sure
    # (assuming that each obfuscated message is either B or E)
    known_bb_count = bb_count
    known_ee_count = ee_count
    for i in range(f_count):
        b_count = s[:i].count("B") + s[i+1:].count("B")
        e_count = s[:i].count("E") + s[i+1:].count("E")
        if b_count > e_count:
            known_bb_count += 1
        elif e_count > b_count:
            known_ee_count += 1

    # Calculate the number of double-sends that we don't know for sure
    # (assuming that each obfuscated message can be either B or E)
    unknown_bb_count = bb_count + f_count - known_ee_count
    unknown_ee_count = ee_count + f_count - known_bb_count

    # Collect all possible excitement levels and print them
    levels = set()
    for i in range(unknown_bb_count + 1):
        for j in range(unknown_ee_count + 1):
            level = known_bb_count + known_ee_count + 2 * min(i, j)
            levels.add(level)
    print(len(levels))
    for level in sorted(levels):
        print(level)
