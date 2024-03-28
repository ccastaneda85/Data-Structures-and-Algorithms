
def decode(message_file):
    file = open(message_file, "r")
    lines = file.readlines()
    myDict = {}
    counter = 0

    for line in lines:
        x = line.split()
        myDict[int(x[0])] = x[1]
        counter += 1

    decodedString = ""

    i = 1
    j = 2
    while i <= counter:
        decodedString += myDict[i] + " "
        i += j
        j += 1

    return decodedString


myString = decode("coding_qual_input.txt")

print(myString)
