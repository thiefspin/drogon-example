# C++ Web Server with Drogon

## Running the server
### Install dependencies:
Linux:  
```shell 
sudo apt install git gcc g++ cmake libjsoncpp-dev uuid-dev openssl libssl-dev zlib1g-dev
```
Macos:  
```shell 
brew install libjson-rpc-cpp ossp-uuid openssl
```

### Install Drogon
```shell
git clone https://github.com/an-tao/drogon
cd drogon
git submodule update --init
mkdir build
cd build
cmake ..
make && sudo make install
```

### Build project
```shell
cd ./build
cmake ..
make
```

### Run binary
```shell
./drogon-example
```
