n='0123456789'
d={}
s=input()
for i in range(len(s)):
    if s[i] not in d and s[i] in n:
        d[s[i]]=0

for i in range(len(s)):
    if s[i] in n:
        d[s[i]]+=0
        d[s[i]]+=1

ss=[ d.get('0'), d.get('1') , d.get('2') , d.get('3'), d.get('4'), d.get('5'), d.get('6'), d.get('7'), d.get('8') , d.get('9') ]

sss=[]
for i in range(len(ss)):
    if ss[i] is not None:
        sss.append(ss[i])
    else:
        sss.append(0)
print(sss.index(max(sss)), max(sss))
#самое частовстречающиеся число и его количество в строке.
