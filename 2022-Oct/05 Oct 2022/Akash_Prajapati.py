st=input()
ans=0
for i in st.split(" "):
    ans=max(ans,len(i))
print(ans)


#Time Complexity O(n)
#Space Complexity O(1)