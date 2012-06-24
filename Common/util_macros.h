
//=============================================================================
//
// Utility macros
//
//=============================================================================
#ifndef __AGS_CN__UTIL_MACROS_H
#define __AGS_CN__UTIL_MACROS_H

#define SAFE_DELETE(p)          if (p) delete p;
#define SAFE_DELETE_ARR(p)      if (p) delete [] p;

#define INIT_VAL_ARRAY(a, n, v) for (int __i = 0; __i < n; ++__i ) a[__i] = v;

#define INIT_PTR_ARRAY(a, n)    INIT_VAL_ARRAY(a, n, NULL)
#define RELEASE_PTR_ARRAY(a, n) for (int __i = 0; __i < n; ++__i ) SAFE_DELETE(a[__i])

#endif // __AGS_CN__UTIL_MACROS_H
