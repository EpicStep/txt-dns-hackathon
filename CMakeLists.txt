cmake_minimum_required(VERSION 3.16)
project(txt_dns)

include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git GIT_TAG f4622efcb59d84071ae11404ae61bd821c1c344b) # the commit hash for 1.6.2
FetchContent_MakeAvailable(cpr)

set(CMAKE_CXX_STANDARD 17)

set(CPACK_PACKAGE_NAME "txt_dns")
set(CPACK_PACKAGE_CONTACT "epicstyt@gmail.com")
#set(CPACK_DEBIAN_PACKAGE_DEPENDS "libssl-dev")
include(CPack)

add_executable(txt_dns main.cpp)

install(TARGETS txt_dns DESTINATION bin)

target_link_libraries(txt_dns PRIVATE cpr::cpr)