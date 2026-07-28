/***************************************************************************************
                  Skyworks Inc MSS Si475x/6x/9x module code

   EVALUATION AND USE OF THIS SOFTWARE IS SUBJECT TO THE TERMS AND CONDITIONS OF
     THE SOFTWARE LICENSE AGREEMENT IN THE DOCUMENTATION FILE CORRESPONDING
     TO THIS SOURCE FILE.
   IF YOU DO NOT AGREE TO THE LIMITED LICENSE AND CONDITIONS OF SUCH AGREEMENT,
     PLEASE RETURN ALL SOURCE FILES TO Skyworks.

   Date: Sep 24 2021
  (C) Copyright 2021, Skyworks, Inc. All rights reserved.
****************************************************************************************/


#ifndef _DC_CONFIG_2T_H_
#define _DC_CONFIG_2T_H_

#include "general_config.h"

#define SUPPORT_2T

//define chip0 part namber and includes the config
#define CHIP0_PART "21GE" //si47921_ge
#include "si47921GE_config.h"

#define CHIP1_PART "04GE" //si47904_ge
#include "si47904GE_config.h"

#endif 
