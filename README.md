This repository contains a skeleton for using the [Lwan](https://lwan.ws/) API.

# Building

These commands will pull lwan, compile it and build the stub project.

```text
git submodule update
cd lwan
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cd ../..
make
```
