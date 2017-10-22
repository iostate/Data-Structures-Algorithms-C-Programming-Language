cmake_minimum_required(VERSION 3.8)
project(c)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        multifile/multifile.c
        multifile/myFile.c
        multifile/myFile.h
        play/wtf.c
        alloc.c
        arrays.c
        arraysize.c
        arrayvsptr.c
        badstring.c
        basiclist.c
        basiclist.h
        bitwise.c
        constants.c
        constparm.c
        control.c
        ctype.c
        datatypes.c
        debug.c
        doublepointer.c
        encrypt.c
        endian.c
        fileio.c
        functional.c
        functionpointer.c
        functions.c
        hello.c
        helloworld.c
        macros.c
        math.c
        memdump.c
        morechars.c
        morepointers.c
        pointers.c
        polymorphism.c
        raggedstringarray.c
        recursion.c
        sideeffect.c
        str.c
        string_memory.c
        stringexample.c
        stringfunctions.c
        stringparm.c
        stringpointers.c
        stringvspointer.c
        structnamespace.c
        structsize.c
        structures.c
        system.c
        project(CPractice)

        set(CMAKE_CXX_STANDARD 11)

        set(SOURCE_FILES
        arrays_practice.c
        math_practice.c)

        add_executable(c ${SOURCE_FILEBLAHS})
        tailrecursion.c
        unions.c)

add_executable(c ${SOURCE_FILES})
add_executable(constants constants.c)
add_executable(basiclist basiclist.c)
add_executable(constparm constparm.c)
add_executable(math math.c)
add_executable(arrays_practice CPractice/arrays_practice.c)
add_executable(ControlStructures "/Users/qmtruong92/OneDrive/School/Fall 2017/CSC240/First Week Code Examples/ControlStructures.c")
add_executable(control_structures_practice CPractice/control_structures_practice.c)
add_executable(forward_declarations CPractice/triple_it.c)
add_executable(declare_variables_int_and_floatingpoint_array CPractice/declare_variables_int_and_floatingpoint_array.c)
add_executable(return_largest_integer_in_an_array CPractice/return_largest_integer_in_an_array.c)
add_executable(array_max CPractice/array_max.c)
add_executable(Conditionals CPractice/Conditionals.c)
add_executable(return_int_array_using_pointer CPractice/return_int_array_using_pointer.c)
add_executable(TutorialPoint_Array CPractice/TutorialPoint_Array.c)
add_executable(letter_count CPractice/letter_count.c)
add_executable(char_array BuckyTutorial/char_array.c)
add_executable(QuanInfo BuckyTutorial/QuanInfo.h)
add_executable(pointers BuckyTutorial/pointers.c)
add_executable(RunHisShit David/RunHisShit.c)
add_executable(Pointers Pointers/Pointers.c)
add_executable(stupidfunction CPractice/stupidfunction.c)
add_executable(activity3.c Activity3C/activity3.c)
add_executable(mymath Activity3C/mymath.c)
add_executable(activity3 Activity3C/activity3.c)
add_executable(mapobject Project2/mapobject.h)
add_executable(test Project2/test1.c)
add_executable(test1 Project2/test1.c)
add_executable(call_structure Struct/call_structure.c)
add_executable(test_struct Project2/test_struct.c)