//** OS commands  To find the odd and even number from a given number  

#!/bin/bash
x=10
if [ $((x%2))==0 ]
then
 echo "The number is even."
else
 echo "The number is odd."
fi


