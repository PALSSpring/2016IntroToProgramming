TARGET = hello-c-world

all: $(TARGET)

%: %.cc
	g++ -std=c++11 $< -o $@.out

%: %.c
	gcc $< -o $@.out

clean:
		-rm -f *.o
		-rm -f $(TARGET).out
		
		