import Data.Char;
f = map (\ch -> if ch == 'T' then 'U' else ch)

main = do
     a <- getLine
     putStrLn $ trans 