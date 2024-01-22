-- name = "Rohit"

-- io.write("Size of string is ",#name,'\n')
-- name = 4

-- longString = [[
-- I am Rohit Raj Karki
-- Hello HI
-- ]]

-- -- concatenate
-- longString = longString .. name

-- io.write(longString,"\n")

-- -- Ternary operator

-- age = 13
-- -- canVote = age >18 ? True : False
-- -- But this is done using

-- canVote = age > 18 and true or false
-- io.write("Can vote is ",tostring(canVote))

-- -- Strings

-- -- Looping

-- while(i<=10) do 
--     io.write(i,"\n")
--     if(i == 8) break end
-- end

-- Tables
-- Tables are similar to arrays records in other languages

aTable = {}

for i=1,10,1 do
    aTable[i] = i
end

io.write("value at index 5 is ",aTable[5],"\n")

table.insert(aTable, 5,0)
io.write("value at index 5 is ",aTable[5],"\n")

-- functions 
function getSum(num1,num2)
    sum = num1 + num2
    return sum
end

print(string.format("5 + 2 = %d",getSum(5,2)))

function splitString(theString)
    wordTable = {}
    local i = 1
    for word in string.gmatch(theString,"[^%s]+") do
        wordTable[i] = word
        i = i + 1 
    end
    return wordTable, i
end

wordsTables , noOf = splitString("Rohit is hello world")
print(wordsTables[2] , noOf)

-- Varadic functions

function getSumMore(...)
    local sum = 0
    for k ,v in pairs{...} do
        sum = sum + v
    end
    return sum
end

print("Sum is ",getSumMore(1,2,3,4,5,6,7,8,9,10),'\n')