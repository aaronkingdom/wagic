
/* 
This file was auto-generated by ant build script on Sat, 26-Oct-2013 23::59:07 
To make changes please edit the ant build script, otherwise your changes will be lost

Author: Michael Nguyen

*/

#ifndef wagic_Wagic_Version_h
#define wagic_Wagic_Version_h

/* Wagic versions */
#define WAGIC_VERSION_MAJOR     0
#define WAGIC_VERSION_MEDIUM    19
#define WAGIC_VERSION_MINOR     1

#define VERSION_DOT(a, b, c) a ##.## b ##.## c
#define VERSION_WITHOUT_DOT(a, b, c) a ## b ## c
#define VERSION_GAME(a, b, c) VERSION_DOT(a, b, c)
#define VERSION_FILE(a, b, c) VERSION_WITHOUT_DOT(a, b, c)
#define VERSION_TOSTRING(a) #a
#define VERSION_STRINGIFY(a) VERSION_TOSTRING(a)

#define WAGIC_VERSION           VERSION_GAME(WAGIC_VERSION_MAJOR, WAGIC_VERSION_MEDIUM, WAGIC_VERSION_MINOR)
#define WAGIC_RESOURCE_VERSION  VERSION_FILE(WAGIC_VERSION_MAJOR, WAGIC_VERSION_MEDIUM, WAGIC_VERSION_MINOR)
#define WAGIC_VERSION_STRING    VERSION_STRINGIFY(WAGIC_VERSION)
#define WAGIC_CORE_VERSION_STRING "core_" VERSION_STRINGIFY(WAGIC_RESOURCE_VERSION)
#define WAGIC_RESOURCE_NAME     WAGIC_CORE_VERSION_STRING ".zip"

#endif

		
