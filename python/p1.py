n=int(input("Enter a number: "))
count=0
while n>0:
    r=n%10
    
    if r%2==0:
        count+=1
    n//=10
        
print(count)
    