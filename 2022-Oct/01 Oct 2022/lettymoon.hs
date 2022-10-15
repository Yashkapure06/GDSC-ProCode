main = do
    str <- getLine

    if str == reverse str then
        putStrLn "Palindrome"
    
    else 
        putStrLn "NOT Palindrome"