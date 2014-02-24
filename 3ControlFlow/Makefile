TARGET = helloWhile

all: $(TARGET)

%: %.cc
	g++ -std=c++11 $< -o $@

%: %.c
	gcc $< -o $@

clean:
		-rm -f *.o
		-rm -f $(TARGET)
		
		