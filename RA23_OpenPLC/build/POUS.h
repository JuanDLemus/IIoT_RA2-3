#include "beremiz.h"
#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

__DECLARE_ENUMERATED_TYPE(LOGLEVEL,
  LOGLEVEL__CRITICAL,
  LOGLEVEL__WARNING,
  LOGLEVEL__INFO,
  LOGLEVEL__DEBUG
)
// FUNCTION_BLOCK LOGGER
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,MSG)
  __DECLARE_VAR(LOGLEVEL,LEVEL)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,TRIG0)

} LOGGER;

void LOGGER_init__(LOGGER *data__, BOOL retain);
// Code part
void LOGGER_body__(LOGGER *data__);
// PROGRAM RA23
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,B1)
  __DECLARE_VAR(BOOL,B2)
  __DECLARE_VAR(BOOL,B3)
  __DECLARE_VAR(BOOL,H1)
  __DECLARE_VAR(BOOL,H2)
  __DECLARE_VAR(BOOL,H6)
  __DECLARE_VAR(BOOL,H3)
  __DECLARE_VAR(BOOL,H4)
  __DECLARE_VAR(BOOL,H5)
  __DECLARE_VAR(BOOL,PUMP)
  __DECLARE_VAR(BOOL,V1)
  __DECLARE_VAR(BOOL,V2)

  // PROGRAM private variables - TEMP, private and located variables

} RA23;

void RA23_init__(RA23 *data__, BOOL retain);
// Code part
void RA23_body__(RA23 *data__);
#endif //__POUS_H
