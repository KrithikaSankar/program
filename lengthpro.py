#krithika
n=input()
n=int(n)
l=[]
for i in range(0,n):  
    n1=input()
    l.append(n1)
Z=[]
for i in zip(*l):
    if i.count(i[0])==len(i): 
        Z.append(i[0])
    else:
        break
print(''.join(Z))
