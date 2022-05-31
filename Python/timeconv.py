#60s => 1min => 3600s => 1 hr
#3600 => 1hr:0min:0sec
#3610 => 1hr:0min:10sec
#3670 => 1hr:1min:10sec
# sec //3600 = hour
# sec %= 3600
# sec // 60 = minutes
# sec %= 60
seconds = int (input("Enter seconds: "))
hours = seconds // 3600
seconds %= 3600
min = seconds // 60
seconds %= 60
print (hours," hr:",min," min:",seconds," s")