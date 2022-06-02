#Like a virgin touched for the very first time, welcome to the world!
import string
import copy


world = "Hello World!"


def func_world():
    print("Hello World!\n")



print("Hello World!\n")

func_world()

print(world+"\n")

for n in world:
    print(n+"\n")

if world.endswith("!"):
    print("Hello World!\n")

i = 0
for n in world:
    print(world[i])
    i += 1

#shallow copy
new_world = copy.copy(world)
print(new_world+"\n")

#deep copy
deep_new_world = copy.deepcopy(world)
print(deep_new_world+"\n")

ascii_world = string.ascii_letters(world)
print(ascii_world+"\n")