all: st.o
	gcc st.o
run:
	./a.out
st.o: st.c st.h
	gcc -c -w st.c
