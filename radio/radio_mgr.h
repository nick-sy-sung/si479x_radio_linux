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


//-----------------------------------------------------------------------------
//
// audio_mgr.h
//
// Contains the function prototypes for the functions contained in AMRXtest.c
//
//-----------------------------------------------------------------------------
#ifndef _RADIOMGR_H_
#define _RADIOMGR_H_

#include "type.h"
#include "dc_config.h"

void Radio_ForceMono();

void Radio_EnableStereo();

uint8_t Radio_CheckStereo();

#endif
