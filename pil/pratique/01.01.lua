function modulo(x, y)
  local remain = x
  while remain >= y do
    remain = remain - y
  end
  return remain
end

io.write("Enter the dividend: ")
local dividend = tonumber(io.read())
io.write("Enter the divisor: ")
local divisor = tonumber(io.read())
io.write("You entered ", dividend, " and ", divisor, "\n")
print(modulo(dividend, divisor))
