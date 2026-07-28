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


#ifndef _RADIO_CONFIG_H_
#define _RADIO_CONFIG_H_

#define FM_SPACE 10
#define FM_BOT_FREQ	8750
#define FM_TOP_FREQ	10800

#define AM_SPACE 9
#define AM_BOT_FREQ	522
#define AM_TOP_FREQ	1710

#ifndef SUPPORT_RDS
#define SUPPORT_RDS ///<set this MACRO 0 when NOT need RDS feature
#endif

#endif 
