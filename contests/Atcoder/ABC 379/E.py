# TLE
# from decimal import Decimal,getcontext
# n=int(input())
# s=input()
# getcontext().prec=n+1

# solve=[[] for _ in range(10)]

# for i in range(1,10):
#     a=""
#     solve[i].append(Decimal("0"))
#     for j in range(n+1):
#         a+=str(i)
#         solve[i].append(Decimal(a))

# res=Decimal("0")
# for i in range(len(s)):
#     left=Decimal(str(i+1))
#     right=len(s)-i
#     res+=solve[ord(s[i])-ord('0')][right]*left

# print("{0:f}".format(res))