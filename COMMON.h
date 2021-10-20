 /**
  * @file common.h
  * @author Youssef Hossam
  * @brief Header file containing the common std types used in the project
  * 
  */
#ifndef COMMON_H_
#define COMMON_H_

/* Type Definitions */
typedef unsigned char uint8;
typedef signed char sint8;
typedef unsigned short uint16;
typedef signed short sint16;
typedef unsigned int uint32;
typedef signed int sint32;
typedef unsigned long uint64;
typedef signed long sint64;


#define NULL_PTR    ((void*)0)


/* Pin Status */
#ifndef LOW
#define LOW 0U
#endif
#ifndef HIGH
#define HIGH 1U
#endif

#ifndef OUTPUT
#define OUTPUT 0U
#endif

/* Boolean Values */
#ifndef FALSE
#define FALSE       (0u)
#endif
#ifndef TRUE
#define TRUE        (1u)
#endif


#endif /* COMMON_H_ */
