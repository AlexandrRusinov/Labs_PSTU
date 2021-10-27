from itertools import*
from itertools import groupby
n=int(input('Введите трехзначное число:'))
a=n//100
b=(n//10)%10
c=n%10
if len(str(n))!=3:
    print('Вы ввели не трехзначное число! Попробуйте снова.')
    while len(str(n))!=3:
        n=int(input('Введите трехзначное число:')) 
s=[]
sp=[]
comb=permutations(str(n))
for i in comb:
    s.append(i)
for i in range(len(s)):
    sp.append(int(s[i][0]+s[i][1]+s[i][2]))
print(list(set(sp))) #Оставляем только уникальные комбинации при помощи множества "set". Он делает "контейнер" из неповторяющихся элементов.
print(max(sp))
