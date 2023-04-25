from operator import itemgetter
phoneNums = open('num.txt').read().split('\n')
num = int(phoneNums[0])
phoneBook = []
for eachNameOrNum in range(1, num+1):
    eachPerson = phoneNums[eachNameOrNum].split(' ')
    phoneBook.append(eachPerson)
for missingNamesOrNums in range(num+1, len(phoneNums)):
    #print(phoneNums[missingNamesOrNums])
    check = 'no'
    if phoneNums[missingNamesOrNums].isdigit():
        for intMissing in range(len(phoneBook)):
            #print(phoneBook[intMissing][1])
            if int(phoneNums[missingNamesOrNums]) == int(phoneBook[intMissing][1]):
                print('{} {}'.format(phoneNums[missingNamesOrNums], phoneBook[intMissing][0]))
                check = 'yes'
    if phoneNums[missingNamesOrNums] == str(phoneNums[missingNamesOrNums]):
        for strMissing in range(len(phoneBook)):
            if phoneNums[missingNamesOrNums] == phoneBook[strMissing][0]:
                print('{} {}'.format(phoneNums[missingNamesOrNums], phoneBook[strMissing][1]))
                check = 'yes'
    if check == 'no':
        print('{} is not found'.format(phoneNums[missingNamesOrNums]))

print()
print()
nameSort = sorted(phoneBook, key=itemgetter(0))
#nameSort = phoneBook.sort()
for x in range(len(nameSort)):
    print('{} {}'.format(nameSort[x][0], nameSort[x][1]))
#print(nameSort)


print()
print()
numSort = sorted(phoneBook, key=itemgetter(1))
for x in range(len(numSort)):
    print('{} {}'.format(numSort[x][1], numSort[x][0]))
#print(numSort)

        

