file(GLOB_RECURSE srcs CONFIGURE_DEPENDS
    *.cpp
    *.cc
    *.c
)

add_executable(quantity_test ${srcs})

target_link_libraries(quantity_test
PRIVATE 
    quantity
    gtest
    gtest_main
)

add_test(NAME quantity_test COMMAND quantity_test)
