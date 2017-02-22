# Project: assignment1


CPP  = g++
CC   = gcc
WINDRES = windres
RES  = 
OBJ  = utility1.o testTravelPass.o myTic.o allDayZone1.o allDayZone1And2.o travelPass.o twoHoursZone1.o twoHoursZone1And2.o $(RES)
LINKOBJ  = utility1.o testTravelPass.o myTic.o allDayZone1.o allDayZone1And2.o travelPass.o twoHoursZone1.o twoHoursZone1And2.o $(RES)
BIN  = testTravelPass
CXXFLAGS = $(CXXINCS)   -Wall -ansi -pedantic 
CFLAGS = $(INCS)   -Wall -ansi -pedantic 
RM = rm -f

.PHONY: all all-before all-after clean clean-custom

all: all-before testTravelPass all-after


clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o "testTravelPass" 

utility.o: utility1.cpp
	$(CPP) -c utility1.cpp -o utility1.o $(CXXFLAGS)

testTravelPass.o: testTravelPass.cpp
	$(CPP) -c testTravelPass.cpp -o testTravelPass.o $(CXXFLAGS)

myTic.o: myTic.cpp
	$(CPP) -c myTic.cpp -o myTic.o $(CXXFLAGS)

allDayZone1.o: allDayZone1.cpp
	$(CPP) -c allDayZone1.cpp -o allDayZone1.o $(CXXFLAGS)

allDayZone1And2.o: allDayZone1And2.cpp
	$(CPP) -c allDayZone1And2.cpp -o allDayZone1And2.o $(CXXFLAGS)

travelPass.o: travelPass.cpp
	$(CPP) -c travelPass.cpp -o travelPass.o $(CXXFLAGS)

twoHoursZone1.o: twoHoursZone1.cpp
	$(CPP) -c twoHoursZone1.cpp -o twoHoursZone1.o $(CXXFLAGS)

twoHoursZone1And2.o: twoHoursZone1And2.cpp
	$(CPP) -c twoHoursZone1And2.cpp -o twoHoursZone1And2.o $(CXXFLAGS)
