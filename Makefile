INCLUDE_DIR := ./include
LIB_DIR := ./lib
LIBS := X11 glfw3 dl pthread m glad

INCLUDE_DIR_FLAGS := $(foreach p,$(INCLUDE_DIR),$(addprefix -I,$(p)))
LIB_DIR_FLAGS := $(foreach p,$(LIB_DIR),$(addprefix -L,$(p)))
LIB_FLAGS := $(foreach p,$(LIBS),$(addprefix -l,$(p)))

a.out: main.cpp
	$(CXX) main.cpp $(INCLUDE_DIR_FLAGS) $(LIB_DIR_FLAGS) $(LIB_FLAGS)

