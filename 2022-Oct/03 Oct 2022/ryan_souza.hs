import Data.Char

main = do
    str <- getLine
    putStrLn $ map (\letter -> if letter `elem` ['a'..'z'] then toUpper letter else toLower letter) str