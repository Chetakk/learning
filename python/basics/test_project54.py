def fact(a):
    e=a
    c=1
    while a>=1:
        c*=a
        a-=1
    print(f"the fatorial of {e} is {c}")
    return c

def inputt():
    e=int(input("Enter the number for factorial :"))
    fact(e)
if __name__=="__main__":
    inputt()