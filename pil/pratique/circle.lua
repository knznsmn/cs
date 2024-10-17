pi = 3.14159

function circle_area(r)
  return pi * r * r
end

function circle_volume(r)
  return 2 * pi * r ^ 2
end


io.write("Enter the circle's radius: ")
local radius = io.read()

area = circle_area(radius)
volume = circle_volume(radius)

io.write("The area of the circle is ", area, "\n")
io.write("The volume is ", volume, "\n")
