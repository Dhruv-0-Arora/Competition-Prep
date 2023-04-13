# n = int(input())
# s = str(input())

n  = 9
s = "FEBFEBFEB"

EE_count = s.count("EE")
BB_count = s.count("BB")

possibilitiesList = []

for i in range(s):
    if s[i] == "F":
        if i == 0:
            possibilitiesList.append([-1])





# lastChar = ""
# excited = 1
# arr = []
# for i in range(n):
#     if lastChar == s[i]:
#         excited += 1
#         continue
#     elif lastChar == "F":
#         excited += 1
#         lastChar = s[i]
#         continue
#     elif lastChar == "":
#         lastChar = s[i]
#         continue
#     else:
#         arr.append(excited)
#         excited = 1
#         lastChar = s[i]
#
# k = 0
# newarr = []
# for i in arr:
#     if i in newarr:
#         continue
#     else:
#         newarr.append(i)
#         k += 1
# print(k)
#
# newarr.sort()
# for i in range(len(newarr)):
#     print(newarr[i])



