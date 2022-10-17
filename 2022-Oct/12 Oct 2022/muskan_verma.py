def common_member(a, b):   
    L1_set = set(L1)
    L2_set = set(L2)
     
    if len(L1_set.intersection(L2_set)) > 0:
        return(L1_set.intersection(L2_set)) 
    else:
        return("no common elements")
     
  
L1={10,20,30,40}
L2={40,50,60,70}
print("Common Membets in Lists are")
print(common_member(L1, L2))

L1={'A','B','C'} 
L2={'D','B','A','E'}
print("Common Membets in Lists are")
print(common_member(L1,L2))
