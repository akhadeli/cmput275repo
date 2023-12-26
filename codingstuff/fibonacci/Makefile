fib: fib.cpp
	g++ fib.cpp -o fib.out
	time ./fib.out

fib_td: fib_topdown.cpp
	g++ fib_topdown.cpp -o fib_td.out
	time ./fib_td.out

fib_bu: fib_bottomup.cpp
	g++ fib_bottomup.cpp -o fib_bu.out
	time ./fib_bu.out

compare: fib fib_td fib_bu
	
clean:
	rm -rf *.out