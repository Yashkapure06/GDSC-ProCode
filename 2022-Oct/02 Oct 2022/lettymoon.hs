import Data.Char
main = do
    str <- getLine 

    putStrLn $ show $ length $ filter (\x -> x == toUpper x) str