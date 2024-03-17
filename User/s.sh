for((i = 1; ; i++)); do
	echo $i
	./gen $i > input2.in
	./main < inputf.in > outputf.in
	./brute < input2.in > output2.in
	diff -w outputf.in output2.in || break
	# diff -w <(./main < input2.in) <(./brute < input2.in) || break
done
echo -e
cat input2.in
echo -e
echo -e
