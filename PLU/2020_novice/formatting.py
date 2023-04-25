s="Tintin"
s1="polaris"
print (s)
x=3.4567
y=12345
print (x)
print (y)
print
print(f'{y:8d}')

l=[2,3,"asterix","obelix"]
print (l)
print(l[2])

print(f'the number is {x}')

print(f'the number is {x:.2f}')
      
print(f'given string is : {s} {s1} end')

print(f'given string is : {s:10} end')

print(f'given string is : {s:10} {s1:10} end')

print('{0} and {1}'.format(s, s1))

l2=[[1,"zebra"], [3, "ant"], [2, "monkey"]]

print(l2)

import operator
l7 = sorted(l2)
print (l7)
l3=sorted(l2, key=operator.itemgetter(0))
print(l3)
l4=sorted(l2, key=operator.itemgetter(1))
print(l4)
print(l2)
l5=l2
print(l5)
l5[0][0]=123
print(l5)
print(l2)

import copy
l6=copy.deepcopy(l2)
print(l6)
l6[0][0]=456
print(l6)
print(l2)

## dictionaries
d1={1:"zebra", 3:"ant", 2:"monkey"}
print (d1)
print(d1[3])
d1[6]="elephant"
print(d1)
for i in d1:
    print(d1[i])
    
for i in d1.keys():
    print(i)

print(f'lenght of dictionary is {len(d1)}')


#
def longest_common_subseq_(s,t):
    n=len(s)
    result=[0]*(n+1)
    for x in t:
        row=[0]*(n+1)
        for j in range(n):
            if x==s[j]:
                row[j+1]=result[j]+1
            else:
                row[j+1]=max(row[j],result[j+1])
        result=row

    subseq=''
    indices=[]
    for j in range(n):
        if result[j]<result[j+1]:
            indices.append(j)
            subseq+=s[j]
    return result,indices,subseq


def test():
    s="abcdef"
    t="acbcf"
    print(s,t)
    result,indices,subseq=longest_common_subseq_(s,t)
    print(result)
    print(result[-1],indices,subseq)

test()
