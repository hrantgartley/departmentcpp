CXX := g++-13
CXXFLAGS := -std=c++20 -ld_classic -I/usr/local/Cellar/nlohmann-json/3.11.2/include/

SRCS := grades.cc main.cc
OBJS := $(SRCS:.cc=.o)

grades: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o grades

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o grades
