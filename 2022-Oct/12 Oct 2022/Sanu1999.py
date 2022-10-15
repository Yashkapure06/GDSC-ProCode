[21:16, 12/10/2022] Captain_Sandeep_127.0.0.1: Thalaiva?
[21:31, 12/10/2022] Gokul Msc: L1 = [10, 20, 30, 40, 50, 60, "a", "s", [], ()]
L2 = [1, 4, 'S', 10, "a", "m", "b", {}, 'b', []]


same_elem = []

for i in L1:
  for j in L2:
    if i == j:
      same_elem.append(i)


print("Output: {}".format(same_elem))
