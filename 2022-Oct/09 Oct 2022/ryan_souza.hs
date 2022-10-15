import Data.Array

combinations :: String -> [String]
combinations [] = [""]
combinations (x:xs) = [x:ys | ys <- combinations xs] ++ combinations xs

main = do
    str1 <- getLine
    let allCombinations = combinations str1
    print allCombinations

-- if input is "ABC"
-- output is ["ABC","AB","AC","A","BC","B","C",""]