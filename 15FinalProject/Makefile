TARGET = Game 

all: $(TARGET)

%: %.cpp
	g++ -std=c++11 $< -o $@
	
%: %.cc
	g++ -std=c++11 $< -o $@

%: %.c
	gcc $< -o $@

clean:
		-rm -f *.o
		-rm -f $(TARGET)
		
