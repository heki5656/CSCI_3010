CXX = g++ 
CXXFLAGS = -std=c++20 -Wall
all: test

clean:
	rm test

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test
