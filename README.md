# blsct-lib-driver

## Initial setup
```
$ git submodule update --init --recursive
```

## How to build
```
$ ./autogen.sh
$ ./configure
$ make
```

## Updating `blsct-lib` dependency
```
$ git submodule update --remote src/blsct-lib
```
