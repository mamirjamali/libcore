cmake_minimum_required(VERSION 3.16)

project(libcore VERSION 0.1.0 LANGUAGES C)

include(GNUInstallDirs)
include(CTest)

add_library(libcore src/libcore.c)
add_library(libcore::libcore ALIAS libcore)

target_compile_features(libcore PUBLIC c_std_99)
target_include_directories(libcore
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

install(TARGETS libcore
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
install(FILES include/libcore.h DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

if(BUILD_TESTING)
    add_executable(test_status tests/test_status.c)
    target_link_libraries(test_status PRIVATE libcore::libcore)
    add_test(NAME status COMMAND test_status)
endif()
