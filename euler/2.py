#https://projecteuler.net/problem=1
sum=2
b=1;
a=2;
temp=0
for i in range(4000000-2):
    temp=a;
    a=a+b;
    b=temp;
    if(a%2==0):
        sum+=a;
print(sum)
