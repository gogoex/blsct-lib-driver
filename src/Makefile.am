SUBDIRS = blsct-lib blsct-lib/src

bin_PROGRAMS = driver
driver_SOURCES = main.cpp
driver_LDADD = blsct-lib/src/libblsct.la
driver_CXXFLAGS = -Wall -std=c++17 -Iblsct-lib/src/include
driver_LDFLAGS = -pthread
