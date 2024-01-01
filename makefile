CXX := g++
CXXFLAGS := -std=c++20

SRCS := grades.cc main.cc
OBJS := $(SRCS:.cc=.o)

grades: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o grades

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o grades
