-- defines a factorial function
function fact (n)
  if n == 0 then
    return 1
  elseif n < 0 then
    print("Can't perform factorial with n < 0.")
  else
    return n * fact(n - 1)
  end
end

print("enter a number:")
a = io.read("*n")        -- reads a number
print(fact(a))