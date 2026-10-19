# SVD-to-HGLETL generator (C++ prototype)

## Dependencies
 - CMake
 - libtinyxml2-dev (TinyXML2)

## Build

mkdir build && cd build
cmake ..
cmake --build .

## Run

./generator path/to/GPIO_svd.txt path/to/out

Outputs:
 - out/templates/<peripheral>.ht   (HGLETL template file)
 - out/generated/<peripheral>.h   (concrete C header example)
