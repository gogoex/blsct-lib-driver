SUBDIRS = blsct-lib blsct-lib/src

bin_PROGRAMS = driver
driver_SOURCES = main.cpp
driver_LDADD = blsct-lib/src/libblsct.a
driver_CXXFLAGS = -Wall -std=c++17 -Ibls/include -Ibls/mcl/include
driver_LDFLAGS = -pthread
