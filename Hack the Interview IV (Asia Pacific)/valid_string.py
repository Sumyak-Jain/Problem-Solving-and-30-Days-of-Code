import re
s=input()
d=input()
a=re.sub('00','01',s)
count1=s.count('1')
count2=a.count('1')
print(count2-count1)
