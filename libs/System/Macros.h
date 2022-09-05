#ifndef SYSTEM_MACROS_H
#define SYSTEM_MACROS_H

#ifdef __cplusplus
#define SYSTEM_HEADER_BEGIN extern "C" {
#define SYSTEM_HEADER_END } // extern "C"
#else
#define SYSTEM_HEADER_BEGIN
#define SYSTEM_HEADER_END
#endif

#endif // SYSTEM_MACROS_H
