// 1) We really should have a header guard here, but will omit it for simplicity (we'll cover header guards in the next lesson)
// Header guards
// When this header is #included, the preprocessor checks whether SOME_UNIQUE_NAME_HERE has been previously defined. If this is the first time we’re including the header, SOME_UNIQUE_NAME_HERE will not have been defined. Consequently, it #defines SOME_UNIQUE_NAME_HERE and includes the contents of the file. If the header is included again into the same file, SOME_UNIQUE_NAME_HERE will already have been defined from the first time the contents of the header were included, and the contents of the header will be ignored (thanks to the #ifndef).


//In large programs, it’s possible to have two separate header files (included from different directories) that end up having the same filename (e.g. directoryA\config.h and directoryB\config.h). If only the filename is used for the include guard (e.g. CONFIG_H), these two files may end up using the same guard name. If that happens, any file that includes (directly or indirectly) both config.h files will not receive the contents of the include file to be included second. This will probably cause a compilation error.
// Because of this possibility for guard name conflicts, many developers recommend using a more complex/unique name in your header guards. Some good suggestions are a naming convention of <PROJECT>_<PATH>_<FILE>_H , <FILE>_<LARGE RANDOM NUMBER>_H, or <FILE>_<CREATION DATE>_H

#ifndef ADD_H 
#define ADD_H

// 2) This is the content of the .h file, which is where the declarations go
int add(int x, int y); // function prototype for add.h -- don't forget the semicolon!



#endif
