<<<<<<< HEAD
# Install script for directory: /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/src
=======
# Install script for directory: /home/rafa/Escritorio/asdasd/proyecto_final/src
>>>>>>> d56f12ef443918ac4520125815e42f122e242a65

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
<<<<<<< HEAD
  include("/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/actividades/cmake_install.cmake")
  include("/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/admin/cmake_install.cmake")
  include("/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/director-actividad/cmake_install.cmake")
  include("/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/foro/cmake_install.cmake")
  include("/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/persona/cmake_install.cmake")
  include("/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/usuario/cmake_install.cmake")
  include("/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/menus/cmake_install.cmake")
  include("/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/systema/cmake_install.cmake")
=======
  include("/home/rafa/Escritorio/asdasd/proyecto_final/build/src/actividades/cmake_install.cmake")
  include("/home/rafa/Escritorio/asdasd/proyecto_final/build/src/admin/cmake_install.cmake")
  include("/home/rafa/Escritorio/asdasd/proyecto_final/build/src/director-actividad/cmake_install.cmake")
  include("/home/rafa/Escritorio/asdasd/proyecto_final/build/src/foro/cmake_install.cmake")
  include("/home/rafa/Escritorio/asdasd/proyecto_final/build/src/persona/cmake_install.cmake")
  include("/home/rafa/Escritorio/asdasd/proyecto_final/build/src/usuario/cmake_install.cmake")
  include("/home/rafa/Escritorio/asdasd/proyecto_final/build/src/menus/cmake_install.cmake")
  include("/home/rafa/Escritorio/asdasd/proyecto_final/build/src/systema/cmake_install.cmake")
  include("/home/rafa/Escritorio/asdasd/proyecto_final/build/src/app/cmake_install.cmake")
>>>>>>> d56f12ef443918ac4520125815e42f122e242a65

endif()

