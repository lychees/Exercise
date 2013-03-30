import Control.Applicative
import Control.Arrow
import Data.Ratio

main :: IO ()
main = do
  [x,y,n] <- map read.words <$> getLine :: IO [Integer]
  let q = x `div` y
      (a0,b0) = (x - q*y,y)
      (x0,y0) = (numerator&&&denominator) $ solve a0 b0 n
  putStr $ shows(x0+q*y0)"/"++show y0

solve a b n = go 1 (0%1) (1%1)
   where
     go !i !l !r
       | i <= n = let l' = a*i`quot`b
                  in go (i+1) (max l (l'%i)) (min r ((l'+1)%i))
       | a%b-l <= r-a%b = l
       | otherwise = r