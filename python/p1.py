x,y,z=map(int,input("Enter a number: ").split())

if x>y and x>z:
    print(x)
elif y>x and y>z:
    print(y)
elif z>x and z>y:
    print(z)