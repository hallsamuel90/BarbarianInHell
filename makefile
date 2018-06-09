
CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -O3
LDFLAGS = -lboost_date_time

OBJS = main.o utilityFunctions.o Barbarian.o Character.o Die.o FloorSpace.o ItemSpace.o Lucifer.o Map.o Minion.o MonsterSpace.o Overlord.o Portal.o Potion.o Space.o

SRCS = main.cpp utilityFunctions.cpp Barbarian.cpp Character.cpp Die.cpp FloorSpace.cpp ItemSpace.cpp Lucifer.cpp Map.cpp Minion.cpp MonsterSpace.cpp Overlord.cpp Portal.cpp Potion.cpp Space.cpp

HEADERS = utilityFunctions.hpp Barbarian.hpp Character.hpp Die.hpp FloorSpace.hpp ItemSpace.hpp Lucifer.hpp Map.hpp Minion.hpp MonsterSpace.hpp Overlord.hpp Portal.hpp Potion.hpp Space.hpp

#target: dependencies
#	rule to build
#

main: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o main

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)
    