n = 10
i=0
while i <= 10:
    i+=1
    if i == 5:
        print(f"Breaking at {i}") #this will run(anything above continue will run)
        continue
    if i > 10:
        break
    print(f"{n} X {i} = {n*i}") #this won't run(anything below continue wont run for that itration)