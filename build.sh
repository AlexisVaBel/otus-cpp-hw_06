mkdir ./build
cd ./build
cmake ..
make -j4
doxygen ../doc/Doxyfile
./bulk
#ltrace -e malloc -e free ./bulk > /dev/null
#valgrind --tool=memcheck ./bulk
#valgrind --leak-check=full -v  ./bulk
