n=int(input("Enter a number: "))
if n<2:
    print("no")
else:
    for i in range(2,n):
        if(n%i==0):
            print("no")
            break
    else:
        print("yes")
     
        
        

    
    
    
    
    

    


    
    