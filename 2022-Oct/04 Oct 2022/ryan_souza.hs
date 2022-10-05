import Data.List
main = do
    str1 <- getLine
    str2 <- getLine
    if (sort str1) == (sort str2) then
        putStrLn "True"
    else
        putStrLn "False"