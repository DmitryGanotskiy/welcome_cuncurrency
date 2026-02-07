-- Equality class
equalsType :: (Int, Int)-> Bool
equalsType (x,y) = x == y

--Num class
addition :: (Int, Int)-> Int
addition (r, s) = r + s


--Conversion 
convertion :: (Int) -> String
convertion (n) = show n

converString :: (String) -> Int
converString (p) = read p

myLength :: [Int] -> Int
myLength []     = 0           -- empty list has length 0
myLength (_:xs) = 1 + myLength xs   -- add 1 for head and recurse on tail

printValue:: ([Int]) -> [Int]
printValue ([x:xs]) = xxs]