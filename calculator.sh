clear
sum=0
i="y"
while [ $i = "y" ]
do
echo " Enter first no."
read n1
echo "Enter second no."
read n2
echo "1.Addition"
echo "2.Subtraction"
echo "3.Multiplication"
echo "4.Division"
echo "Enter your choice"
read ch
case $ch in
    1)sum=$((n1 + n2))
     echo "Sum = "$sum;;
    2)sum=$((n1 - n2))
     echo "Sub = "$sum;;
    3)sum=$((n1 * n2))
     echo "Mul = "$sum;;
    4)sum=$((n1 / n2))
     echo "Div = "$sum;;
    *)echo "Invalid choice";;
esac

echo "another ? [y/n]"
read i
if [ $i != "y" ]
then
    exit
fi
done    
