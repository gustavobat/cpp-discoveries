find_package (Threads)
add_executable(threads-demo main.cpp)
set_property(TARGET threads-demo PROPERTY CXX_STANDARD 17)
target_link_libraries (threads-demo ${CMAKE_THREAD_LIBS_INIT})
