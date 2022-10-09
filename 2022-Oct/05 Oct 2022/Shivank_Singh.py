if __name__ == "__main__":
    s = input("")
    l = list(s.split(" "))
    l = sorted(l, key = len)
    print(len(l[-1]))
