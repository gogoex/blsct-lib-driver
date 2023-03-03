SUBDIRS = blsct-lib blsct-lib/src

bin_PROGRAMS = driver
driver_SOURCES = main.cpp
driver_LDADD = blsct-lib/src/libblsct.la blsct-lib/src/bls/lib/libbls384_256.a blsct-lib/src/bls/mcl/lib/libmcl.a
driver_CXXFLAGS = -Wall -std=c++17 -Iblsct-lib/src/include
driver_LDFLAGS = -pthread
