# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\lubom\source\repos\CPP-Learning

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\lubom\source\repos\CPP-Learning\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\CPP_Learning.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\CPP_Learning.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\CPP_Learning.dir\flags.make

CMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning.cpp.obj: CMakeFiles\CPP_Learning.dir\flags.make
CMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning.cpp.obj: ..\CPP-Learning\CPP-Learning.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lubom\source\repos\CPP-Learning\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CPP_Learning.dir/CPP-Learning/CPP-Learning.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning.cpp.obj /FdCMakeFiles\CPP_Learning.dir\ /FS -c C:\Users\lubom\source\repos\CPP-Learning\CPP-Learning\CPP-Learning.cpp
<<

CMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPP_Learning.dir/CPP-Learning/CPP-Learning.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lubom\source\repos\CPP-Learning\CPP-Learning\CPP-Learning.cpp
<<

CMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPP_Learning.dir/CPP-Learning/CPP-Learning.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning.cpp.s /c C:\Users\lubom\source\repos\CPP-Learning\CPP-Learning\CPP-Learning.cpp
<<

CMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning2.cpp.obj: CMakeFiles\CPP_Learning.dir\flags.make
CMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning2.cpp.obj: ..\CPP-Learning\CPP-Learning2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lubom\source\repos\CPP-Learning\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CPP_Learning.dir/CPP-Learning/CPP-Learning2.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning2.cpp.obj /FdCMakeFiles\CPP_Learning.dir\ /FS -c C:\Users\lubom\source\repos\CPP-Learning\CPP-Learning\CPP-Learning2.cpp
<<

CMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPP_Learning.dir/CPP-Learning/CPP-Learning2.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning2.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lubom\source\repos\CPP-Learning\CPP-Learning\CPP-Learning2.cpp
<<

CMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPP_Learning.dir/CPP-Learning/CPP-Learning2.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning2.cpp.s /c C:\Users\lubom\source\repos\CPP-Learning\CPP-Learning\CPP-Learning2.cpp
<<

# Object files for target CPP_Learning
CPP_Learning_OBJECTS = \
"CMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning.cpp.obj" \
"CMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning2.cpp.obj"

# External object files for target CPP_Learning
CPP_Learning_EXTERNAL_OBJECTS =

CPP_Learning.exe: CMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning.cpp.obj
CPP_Learning.exe: CMakeFiles\CPP_Learning.dir\CPP-Learning\CPP-Learning2.cpp.obj
CPP_Learning.exe: CMakeFiles\CPP_Learning.dir\build.make
CPP_Learning.exe: CMakeFiles\CPP_Learning.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\lubom\source\repos\CPP-Learning\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable CPP_Learning.exe"
	"C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\CPP_Learning.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\CPP_Learning.dir\objects1.rsp @<<
 /out:CPP_Learning.exe /implib:CPP_Learning.lib /pdb:C:\Users\lubom\source\repos\CPP-Learning\cmake-build-debug\CPP_Learning.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\CPP_Learning.dir\build: CPP_Learning.exe

.PHONY : CMakeFiles\CPP_Learning.dir\build

CMakeFiles\CPP_Learning.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CPP_Learning.dir\cmake_clean.cmake
.PHONY : CMakeFiles\CPP_Learning.dir\clean

CMakeFiles\CPP_Learning.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\lubom\source\repos\CPP-Learning C:\Users\lubom\source\repos\CPP-Learning C:\Users\lubom\source\repos\CPP-Learning\cmake-build-debug C:\Users\lubom\source\repos\CPP-Learning\cmake-build-debug C:\Users\lubom\source\repos\CPP-Learning\cmake-build-debug\CMakeFiles\CPP_Learning.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\CPP_Learning.dir\depend

