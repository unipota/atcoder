# -*- coding: utf-8 -*-
N = int(input())
dic = {}
count = 0
for i in range(N):
  temp = "".join(sorted(input()))
  if temp in dic:
    count += dic[temp]
    dic[temp] += 1
  else:
    dic[temp] = 1

print(count)