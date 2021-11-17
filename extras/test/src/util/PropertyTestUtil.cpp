/*
 * Copyright (c) 2020 Arduino.  All rights reserved.
 */

/**************************************************************************************
   INCLUDE
 **************************************************************************************/

#include <util/PropertyTestUtil.h>
#include <Arduino.h>
#include <TimeService.h>

/**************************************************************************************
   FUNCTION DEFINITION
 **************************************************************************************/

unsigned long getTime()
{
  return 0;
}

unsigned long TimeService::getLocalTime()
{
  return getTime();
}
