n = int(input())
k = int(input())
sumk=0
sum1=0
sum2=0
sumn=0
for i in range (1,n+1):
    if(i%k==0):
        sum1+=1
        sumk+=i
    else:
        sum2+=1
        sumn+=i
print(format(sumk/sum1,'.1f'),format(sumn/sum2,'.1f'))
