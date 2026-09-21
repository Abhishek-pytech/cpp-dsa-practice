txt="python"
# for i in txt[::-1]:
#     print(i)
feq={}
count=0
for ch in txt:
    if ch  in feq:
        feq[ch]+=1
    else:
        feq[ch]=1
print(feq)
   
    
    