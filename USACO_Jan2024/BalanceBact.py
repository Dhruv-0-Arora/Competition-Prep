from collections import deque
from typing import List, Tuple

# inputing N number of patches of field
N = int(input())

# input each path
a = deque()
for _ in range(N):
    temp = int(input().strip())
    a.append(temp)

# start traversing the queue and tracking the processes in a list of tuples => (power, multiplicity)
processes: List[Tuple[int, int]] = []
ans = 0
for i in range(N):
    # get the first element
    multiplicity = a.popleft()

    # using processes to calculate the real multiplicity using the current multiplicity
    for j in range(len(processes) - 1, -1, -1):
        # update the multiplicity
        multiplicity += ((processes[j][0] - (N-i) + 1) * processes[j][1] * -1)

    # if the multiplicity is 0, then we don't need to do anything
    if multiplicity == 0:
        continue
    # otherwise, we need to add the process to the list
    ans += abs(multiplicity)

    processes.append((N-i, multiplicity))

print(ans)
