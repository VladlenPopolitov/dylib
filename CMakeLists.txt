# mkdir build
# cd build
# cmake ..
# make
# ./str
# output is: 123456789012345678901234567890
cmake_minimum_required(VERSION 3.13)
project(Dynlibs)

add_library(Art SHARED Art.c)
add_library(Bus SHARED Bus.c)
add_library(Bus1 SHARED Bus1.c)
add_library(Bus1a SHARED Bus1a.c)
add_library(Bus2 SHARED Bus2.c)

add_executable(mac_app mac_app.c)
target_link_libraries(mac_app Art Bus)
target_link_libraries(Bus  Bus1 Bus2)
target_link_libraries(Bus1  Bus1a )

add_library(b SHARED b.c)
add_library(bc SHARED bc.c)
add_library(bcw_wiw SHARED bcw_wiw.c)
add_library(bcw_wi SHARED bcw_wi.c)
add_library(bcw_w SHARED bcw_w.c)
add_library(c SHARED c.c)
target_link_libraries(b c)
add_executable(a2b2c a2b2c.c)
add_executable(ac2b2c ac2b2c.c)
add_executable(ac2bc ac2bc.c)
add_executable(ac2bcw_wiw ac2bcw.c)
add_executable(ac2bcw_wi ac2bcw.c)
add_executable(ac2bcw_w ac2bcw.c)

add_executable(acw2bcw_wiw acw2bcw.c)
add_executable(acw2bcw_wi acw2bcw.c)
add_executable(acw2bcw_w acw2bcw.c)

target_link_libraries(ac2b2c b c)
target_link_libraries(a2b2c b c)
target_link_libraries(ac2bc bc )
target_link_libraries(ac2bcw_wiw bcw_wiw)
target_link_libraries(ac2bcw_wi bcw_wi)
target_link_libraries(ac2bcw_w bcw_w)
target_link_libraries(acw2bcw_wiw bcw_wiw)
target_link_libraries(acw2bcw_wi bcw_wi)
target_link_libraries(acw2bcw_w bcw_w)


add_executable(str str.cpp)
add_library(res SHARED res.cpp)
target_link_libraries(str res)

set_property(TARGET str PROPERTY CXX_STANDARD 11)
set_property(TARGET str PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET str PROPERTY CXX_EXTENSIONS OFF)

