s=input("enter any sring :")
new_str=""
for i in range (len(s)):
    if s[i].isupper():
        new_str+=s[i].lower()
    elif s[i].islower():
        new_str+=s[i].upper()
    else:
        new_str+=s[i]
print("converted string:",new_str)
        
        
