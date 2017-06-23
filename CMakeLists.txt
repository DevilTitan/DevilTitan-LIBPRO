cmake_minimum_required(VERSION 3.9)

# Default configuration values. These must be before the project command or
# they won't work in Windows.
# If no build type is specified, default to "Release"
if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE STRING
      "None Debug Release RelWithDebInfo MinSizeRel"
      FORCE)
endif()
# Install to "dist" directory in Windows for testing and as a staging directory
# for the installer.
if (WIN32 AND NOT CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX dist CACHE STRING "Install path prefix.")
endif()

project(LIBPRO)
set(PROJECT_LONGNAME "LIBPRO")
set(PROJECT_VERSION "1.0.0")

# Global CMake options
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

# Configure Qt
set (CMAKE_PREFIX_PATH "C:\\Qt\\5.9\\winrt_armv7_msvc2015\\")
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Sql REQUIRED)
find_package(Qt5Test REQUIRED)

if (NOT MSVC)
  # Enable the C++11 standard
  set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -std=c++11)
endif()

# Testing configuration
enable_testing()
set(TEST_LINK_LIBRARIES Qt5::Test Qt5::Core Qt5::Sql Qt5::Quick)

add_subdirectory(DevilTitan-LIBPRO-64)