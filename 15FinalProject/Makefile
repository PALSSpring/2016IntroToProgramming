TARGET = Game 

all: $(TARGET)

%: %.cpp
	g++ -std=c++11 $< -o $@

clean:
		-rm -f *.o
		-rm -f $(TARGET)
		
