# # txt="python"
# # # for i in txt[::-1]:
# # #     print(i)
# # feq={}
# # count=0
# # for ch in txt:
# #     if ch  in feq:
# #         feq[ch]+=1
# #     else:
# #         feq[ch]=1
# # print(feq)
   
# n=int((input("enetr number")))  
# for i in range(n):
#     for j in range(n+1):
#         print("*", end=" ")
#     print()



num=int(input("Enter a number :"))
count=0
while num>0:
    num=num//10
    count+=1
print(count)
    

    