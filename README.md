# cppRestpackage

sudo apt-get install build-essential libpq-dev libcurl4-gnutls-dev cmake libboost-all-dev libtcmalloc-minimal4 && sudo ln -s /usr/lib/libtcmalloc_minimal.so.4 /usr/lib/libtcmalloc_minimal.so

g++ -Wall -std=c++11 ./crow.cpp -o crow -lboost_system -pthread
