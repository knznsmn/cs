function modulo(x, y)
  local remain = x
  while remain >= y do
    remain = remain - y
  end
  return remain
end

function is_odd(x)
  if modulo(x, 2) then
    return true
  else
    return false
  end
end

io.write("Enter the dividend: ")
local dividend = tonumber(io.read())
io.write("Enter the divisor: ")
local divisor = tonumber(io.read())
io.write("You entered ", dividend, " and ", divisor, "\n")
print(modulo(dividend, divisor))

if (is_odd(modulo(dividend, divisor))) then
    io.write("The remainder is even\n")
else
  io.write("The remainder is odd\n")
end
