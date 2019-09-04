/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   dps_sap.h
 *
 * Project:
 * --------
 *   WCDMA
 *
 * Description:
 * ------------
 *   Dummy Protocol Stack, SAP definition
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "module_msg_range.h"

#ifndef _UDPS_MSG_H
#define _UDPS_MSG_H

MODULE_MSG_BEGIN(MSG_ID_UDPS_CODE_BEGIN)
MSG_ID_UDPS_UMTS_TEST_STOP_REQ = MSG_ID_UDPS_CODE_BEGIN,
MSG_ID_UDPS_UMTS_TEST_STOP2_REQ,
MSG_ID_UDPS_INITIAL_CELL_SEARCH,
MSG_ID_UDPS_SFN_READ_SIB_LISTEN,
MSG_ID_UDPS_PAGING_RESPONSE,
MSG_ID_UDPS_TARGET_CELL_SEARCH,
MSG_ID_UDPS_PCH_READING_ON_STTD_CELL, /* I5 = MPS2(CSD) and BSC1(CSD) */
MSG_ID_UDPS_PCH_RECEIVE,  /* I6 (Requested by CSD) */
MSG_ID_UDPS_RECURSIVE_TCS_IN_PCH, /* I8 = CS6(CSD) and CS7(CSD) */
MSG_ID_UDPS_RECURSIVE_ICS_IN_NULL, /* I9 = CS1(CSD) */
MSG_ID_UDPS_UL1D_CS_TEST, /* I10 = MTK UL1 internal CS testing (UL1D request) */
MSG_ID_UDPS_RECURSIVE_IPS_IN_NULL, /* I11 = IPS(CSD) */
MSG_ID_UDPS_PCH_MEASUREMENT_8960, /* I12 (3G Sleep Mode Testing) */
MSG_ID_UDPS_CONTINUAL_ICS, /* I13: continual ICS */

MSG_ID_UDPS_UL_OPEN_LOOP_PWR_CTRL,
MSG_ID_UDPS_TX_ON_OFF_TIME_MASK,
MSG_ID_UDPS_RX_ACK_ON_AICH,
MSG_ID_UDPS_RX_NO_ACK_ON_AICH,
MSG_ID_UDPS_RX_NACK_ON_AICH,
MSG_ID_UDPS_BEST_EFFORT_FOR_PRACH, /* A6 = ACH1(CSD) */
MSG_ID_UDPS_RECURSIVE_TCS_IN_FACH, /* A7 = CS5(CSD) */
MSG_ID_UDPS_FACH_PERFORMANCE, /* A8 */

MSG_ID_UDPS_UL_INNER_LOOP_PWR_CTRL,
MSG_ID_UDPS_OUT_OF_SYNC_HANDLING,
MSG_ID_UDPS_CHANGE_OF_TFC,
MSG_ID_UDPS_UL_COMPRESSED_MODE,
MSG_ID_UDPS_PEF_IN_STATIC_CH,
MSG_ID_UDPS_PEF_IN_FADING_CH,
MSG_ID_UDPS_PEF_IN_MOVING_CH,
MSG_ID_UDPS_PEF_IN_BIRTH_DEATH_CH,
MSG_ID_UDPS_PEF_IN_TX_DIV_MODE,
MSG_ID_UDPS_DL_PWR_CTRL_CONST_BLER,
MSG_ID_UDPS_PEF_IN_DL_COMPRESSED_MODE,
MSG_ID_UDPS_PEF_OF_BTFD,
MSG_ID_UDPS_PEF_IN_SHO,
MSG_ID_UDPS_PEF_OF_TPC_COMBINING,
MSG_ID_UDPS_PEF_IN_SSDT_PWR_CTRL,
MSG_ID_UDPS_ACTIVE_SET_UPDATE_DELAY,
MSG_ID_UDPS_TX_TIMING_IN_SHO,
MSG_ID_UDPS_INTRA_FREQ_TRHHO_DELAY,
MSG_ID_UDPS_INTER_FREQ_TRHHO_DELAY,
MSG_ID_UDPS_RRC_REESTAB_DELAY,
MSG_ID_UDPS_INTER_FREQ_TMHHO, /* CD21 */
MSG_ID_UDPS_INTER_FREQ_TRHHO_REVERT, /* CD22 */
MSG_ID_UDPS_INTER_FREQ_TMHHO_REVERT, /* CD23 */
MSG_ID_UDPS_ABORT_ENTER_DCH, /* CD24 */
MSG_ID_UDPS_RECURSIVE_TCS_IN_DCH, /* CD25 = CS2(CSD),CS3(CSD),CS4(CSD) */
MSG_ID_UDPS_UNKNOWN_SFN_DECODING_IN_DCH, /* CD26 = BCH1(CSD) */

MSG_ID_UDPS_TPC_COMBINING_RELIABLE_TEST, /* CD28 = UPC1(CSD), UPC2(CSD), UPC3(CSD), UPC4(CSD) and DDC3(CSD) */
MSG_ID_UDPS_SIR_MEAS_IN_DCH_WITH_TXTD_CM, /* CD31 = DPC7(CSD) and DPC8(CSD) */
MSG_ID_UDPS_DLPC_TEST_WIND_UP_DOWN, /* CD32 = DPC44(CSD) and DPC45(CSD) */
MSG_ID_UDPS_PEF_OF_TRCH_RECONFIG, /* CD33 = DPC46(CSD) */
MSG_ID_UDPS_DLPC_FOR_DIFF_TF, /* CD34 = DPC47(CSD) */
MSG_ID_UDPS_DLPC_FOR_BTFD_DUAL_TF, /* CD35 = DPC68(CSD) */
MSG_ID_UDPS_DLPC_FOR_TFCI_DUAL_TF, /* CD36 = DPC69(CSD) */
MSG_ID_UDPS_DLPC_TEST_INITIAL_CONVERGENCE, /* CD37 = DDC4(CSD) */
MSG_ID_UDPS_ULPC_FOR_TX_AGC_TEST, /* CD38 = UPC7~18(CSD) */
MSG_ID_UDPS_BER_TEST_IN_DCH_MODE, /* CD39 (SA/CS request) */
MSG_ID_UDPS_SADCH_TTI_EIGHTY, /* CD40 (R99) Stand-Alone DCH TTI=80ms */
MSG_ID_UDPS_SADCH_TTI_EIGHTY_WITH_CM, /* CD41 (R99) Stand-Alone DCH TTI=80ms with CM */

MSG_ID_UDPS_AUTO_RECONFIG,/* CD50, By Albert for auto re-config */
MSG_ID_UDPS_DCH_FACH_TRANSIT, /* CD51, By Amida */
MSG_ID_UDPS_DPAS_SL1,
MSG_ID_UDPS_DPAS_SL2,
MSG_ID_UDPS_DPAS_SL3,
MSG_ID_UDPS_DPAS_SL4,
MSG_ID_UDPS_DPAS_SL5,
MSG_ID_UDPS_DPAS_SL6,
MSG_ID_UDPS_DPAS_SL7,
MSG_ID_UDPS_DPAS_SL8,
MSG_ID_UDPS_DPAS_SL9,
MSG_ID_UDPS_DPAS_SL10,
MSG_ID_UDPS_DPAS_SL11,
MSG_ID_UDPS_DPAS_SL12,
MSG_ID_UDPS_DPAS_SL13,
MSG_ID_UDPS_DPAS_FDD_TEST_SL1,
MSG_ID_UDPS_DPAS_FDD_TEST_SL2,
MSG_ID_UDPS_DPAS_CC1,
MSG_ID_UDPS_DPAS_CC2,
MSG_ID_UDPS_DPAS_CC3,
MSG_ID_UDPS_DPAS_CC4,
MSG_ID_UDPS_DPAS_CC5,
MSG_ID_UDPS_DPAS_CC6,
MSG_ID_UDPS_DPAS_TGPS1,
MSG_ID_UDPS_DPAS_TGPS2,
MSG_ID_UDPS_DPAS_MEAS1,
MSG_ID_UDPS_DPAS_MEAS2,
MSG_ID_UDPS_DPAS_MEAS3,
MSG_ID_UDPS_DPAS_OCIC1,
MSG_ID_UDPS_DPAS_OCIC2,
MSG_ID_UDPS_DPAS02_OCIC,
MSG_ID_UDPS_DPAS08_1,
MSG_ID_UDPS_DPAF01,
MSG_ID_UDPS_DPAF02,
MSG_ID_UDPS_DPAF03,
MSG_ID_UDPS_DPAF04,
MSG_ID_UDPS_DPAF07,
MSG_ID_UDPS_DPAF08,
MSG_ID_UDPS_DPAF09,
MSG_ID_UDPS_DPAF10,
MSG_ID_UDPS_DPAF11,
MSG_ID_UDPS_DPAF11_1,
MSG_ID_UDPS_DPAF12, 
MSG_ID_UDPS_DPAF13, 
MSG_ID_UDPS_DPAF14, 
MSG_ID_UDPS_DPAF15, 
MSG_ID_UDPS_R6_CN01_1,
MSG_ID_UDPS_R6_CN01_2,
MSG_ID_UDPS_R6_CN02_1,
MSG_ID_UDPS_R6_CN02_2,
MSG_ID_UDPS_R6_CN03_1,
MSG_ID_UDPS_R6_CN03_2,
MSG_ID_UDPS_R6_CN04_1,
MSG_ID_UDPS_R6_CN04_2,
MSG_ID_UDPS_R6_CN05_1,
MSG_ID_UDPS_R6_CN05_2,
MSG_ID_UDPS_R6_CN06_1,
MSG_ID_UDPS_R6_CN06_2,
MSG_ID_UDPS_R6_CN07_1,
MSG_ID_UDPS_R6_CN07_2,
MSG_ID_UDPS_R6_CN08_1,
MSG_ID_UDPS_R6_CN08_2,
MSG_ID_UDPS_R6_CN09_1,
MSG_ID_UDPS_R6_CN09_2,
MSG_ID_UDPS_R6_CN10_1,
MSG_ID_UDPS_R6_CN10_2,
MSG_ID_UDPS_R6_CN11_1,
MSG_ID_UDPS_R6_CN11_2,
MSG_ID_UDPS_R6_CN12_1,
MSG_ID_UDPS_R6_CN12_2,
MSG_ID_UDPS_R6_CN13_1,
MSG_ID_UDPS_R6_CN13_2,
MSG_ID_UDPS_R6_CN14_1,
MSG_ID_UDPS_R6_CN14_2,
MSG_ID_UDPS_R6_CN15_1,
MSG_ID_UDPS_R6_CN15_2,
MSG_ID_UDPS_R6_CN16,
MSG_ID_UDPS_R6_CN17_1,
MSG_ID_UDPS_R6_CN17_2,
MSG_ID_UDPS_R6_CN18_1,
MSG_ID_UDPS_R6_CN18_2,
MSG_ID_UDPS_R6_CN19_1,
MSG_ID_UDPS_R6_CN19_2,
MSG_ID_UDPS_R6_CN20,
MSG_ID_UDPS_R6_CN21,
MSG_ID_UDPS_R6_CN22,
MSG_ID_UDPS_R6_CN90_1,
MSG_ID_UDPS_R6_CN90_2,
MSG_ID_UDPS_R6_CN91_1,
MSG_ID_UDPS_R6_CN91_2,
MSG_ID_UDPS_R6_PW01_1,
MSG_ID_UDPS_R6_PW01_2,
MSG_ID_UDPS_R6_PW02,
MSG_ID_UDPS_R6_PW03,
MSG_ID_UDPS_R6_PW04,
MSG_ID_UDPS_R6_PW05,
MSG_ID_UDPS_R6_PW06_1,
MSG_ID_UDPS_R6_PW06_2,
MSG_ID_UDPS_R6_PW06_3,
MSG_ID_UDPS_R6_PW07_1,
MSG_ID_UDPS_R6_PW07_2,
MSG_ID_UDPS_R6_PW07_3,
MSG_ID_UDPS_R6_PW08_1,
MSG_ID_UDPS_R6_PW08_2,
MSG_ID_UDPS_R6_PW08_3,
MSG_ID_UDPS_R6_CM01_1,
MSG_ID_UDPS_R6_CM01_2,
MSG_ID_UDPS_R6_CM02_1,
MSG_ID_UDPS_R6_CM02_2,
MSG_ID_UDPS_R6_CM03_1,
MSG_ID_UDPS_R6_CM03_2,
MSG_ID_UDPS_R6_CM04,
MSG_ID_UDPS_R6_CM05_1,
MSG_ID_UDPS_R6_CM05_2,
MSG_ID_UDPS_R6_HI01_1,
MSG_ID_UDPS_R6_HI01_2,
MSG_ID_UDPS_R6_HI02_1,
MSG_ID_UDPS_R6_HI02_2,
MSG_ID_UDPS_R6_HI03_1,
MSG_ID_UDPS_R6_HI03_2,
MSG_ID_UDPS_R6_HI04_1,
MSG_ID_UDPS_R6_HI04_2,
MSG_ID_UDPS_R6_RG01_1,
MSG_ID_UDPS_R6_RG01_2,
MSG_ID_UDPS_R6_RG02,
MSG_ID_UDPS_R6_RG03_1,
MSG_ID_UDPS_R6_RG03_2,
MSG_ID_UDPS_R6_RG04_1,
MSG_ID_UDPS_R6_RG04_2,
MSG_ID_UDPS_R6_AG01_1,
MSG_ID_UDPS_R6_AG01_2,
MSG_ID_UDPS_R6_AG02_1,
MSG_ID_UDPS_R6_AG02_2,
MSG_ID_UDPS_R6_AG03_1,
MSG_ID_UDPS_R6_AG03_2,
MSG_ID_UDPS_R6_TF01_1,
MSG_ID_UDPS_R6_TF01_2,
MSG_ID_UDPS_R6_TF02_1,
MSG_ID_UDPS_R6_TF02_2,
MSG_ID_UDPS_R6_CD01_1,
MSG_ID_UDPS_R6_CSD_HI01_1,
MSG_ID_UDPS_R6_CSD_HI01_2,
MSG_ID_UDPS_R6_CSD_HI02_1,
MSG_ID_UDPS_R6_CSD_HI02_2,
MSG_ID_UDPS_R6_CSD_HI03_1,
MSG_ID_UDPS_R6_CSD_HI03_2,
MSG_ID_UDPS_R6_CSD_HI04_1,
MSG_ID_UDPS_R6_CSD_HI04_2,
MSG_ID_UDPS_R6_CSD_RG01_1,
MSG_ID_UDPS_R6_CSD_RG01_2,
MSG_ID_UDPS_R6_CSD_RG02,
MSG_ID_UDPS_R6_CSD_RG03_1,
MSG_ID_UDPS_R6_CSD_RG03_2,
MSG_ID_UDPS_R6_CSD_RG04_1,
MSG_ID_UDPS_R6_CSD_RG04_2,
MSG_ID_UDPS_R6_CSD_AG01_1,
MSG_ID_UDPS_R6_CSD_AG01_2,
MSG_ID_UDPS_R6_CSD_AG02_1,
MSG_ID_UDPS_R6_CSD_AG02_2,
MSG_ID_UDPS_R6_CSD_PW02,
MSG_ID_UDPS_R6_CSD_PW03,
MSG_ID_UDPS_R6_AGL01_1,
MSG_ID_UDPS_R6_AGL01_2,
MSG_ID_UDPS_R6_AGL02_1,
MSG_ID_UDPS_R6_AGL02_2,
MSG_ID_UDPS_R6_AGL_HI01_1_ACK,
MSG_ID_UDPS_R6_AGL_HI01_1_FALSE_ACK,
MSG_ID_UDPS_R6_AGL_HI01_2_ACK,
MSG_ID_UDPS_R6_AGL_HI01_2_FALSE_ACK,
MSG_ID_UDPS_R6_AGL_AG01_1,
MSG_ID_UDPS_R6_AGL_AG01_2,
MSG_ID_UDPS_R6_ME01_1,
MSG_ID_UDPS_R6_ME01_2,
MSG_ID_UDPS_R6_ME02_1,
MSG_ID_UDPS_R6_ME02_2,
MSG_ID_UDPS_R6_ME02_3,
MSG_ID_UDPS_R6_ME03_1,
MSG_ID_UDPS_R6_ME03_2,
MSG_ID_UDPS_R6_ME03_3,
// __UMTS_R7__
MSG_ID_UDPS_R7_HSDPA_01,
MSG_ID_UDPS_R7_HSDPA_02,
MSG_ID_UDPS_R7_HSDPA_03,
MSG_ID_UDPS_R7_HSDPA_04,
MSG_ID_UDPS_R7_HSDPA_05,
MSG_ID_UDPS_R7_HSDPA_06,
MSG_ID_UDPS_R7_HSDPA_07,
MSG_ID_UDPS_R7_HSDPA_08,
MSG_ID_UDPS_R7_CPC_01,
MSG_ID_UDPS_R7_CPC_02,
MSG_ID_UDPS_R7_CPC_03,
MSG_ID_UDPS_R7_CPC_04,
MSG_ID_UDPS_R7_CPC_05,
MSG_ID_UDPS_R7_CPC_06,
MSG_ID_UDPS_R7_CPC_07,
MSG_ID_UDPS_R7_CPC_08,
MSG_ID_UDPS_R7_CPC_09,
MSG_ID_UDPS_R7_CPC_10,
MSG_ID_UDPS_R7_CPC_11,
MSG_ID_UDPS_R7_CPC_12,
MSG_ID_UDPS_R7_CPC_13,
MSG_ID_UDPS_R7_CPC_14,
MSG_ID_UDPS_R7_CPC_15,
MSG_ID_UDPS_R7_CPC_16,
MSG_ID_UDPS_R7_FDPCH_01,
MSG_ID_UDPS_R7_FDPCH_02,
MSG_ID_UDPS_R7_FDPCH_03,
MSG_ID_UDPS_R7_FDPCH_04,
MSG_ID_UDPS_R7_FDPCH_05,
MSG_ID_UDPS_R7_EFACH_01,
MSG_ID_UDPS_R7_EFACH_02,
MSG_ID_UDPS_R7_EFACH_03,
MSG_ID_UDPS_R7_EFACH_04,
MSG_ID_UDPS_R7_EFACH_05,
MSG_ID_UDPS_R7_EFACH_06,
MSG_ID_UDPS_R7_EFACH_07,
MSG_ID_UDPS_R7_TF01_1,
MSG_ID_UDPS_R7_TF01_2,
MSG_ID_UDPS_R7_F01,
MSG_ID_UDPS_R7_F02,
MSG_ID_UDPS_R7_F03,
MSG_ID_UDPS_R7_F04,
MSG_ID_UDPS_R7_F05,
MSG_ID_UDPS_R7_F06,
MSG_ID_UDPS_R7_F07,
MSG_ID_UDPS_R7_F08,
MSG_ID_UDPS_R7_F09,
MSG_ID_UDPS_R8_F01,
MSG_ID_UDPS_R8_F02,
MSG_ID_UDPS_R8_F03,
MSG_ID_UDPS_R8_F04,
MSG_ID_UDPS_R8_F05,
MSG_ID_UDPS_R8_F06,

// __UMTS_R7__
//__UMTS_R8__

MSG_ID_UDPS_R8_DCHSDPA_01,
MSG_ID_UDPS_R8_DCHSDPA_02,
MSG_ID_UDPS_R8_DCHSDPA_03,
MSG_ID_UDPS_R8_DCHSDPA_04,
MSG_ID_UDPS_R8_DCHSDPA_05,
MSG_ID_UDPS_R8_DCHSDPA_06,
MSG_ID_UDPS_R8_DCHSDPA_07,
MSG_ID_UDPS_R8_DCHSDPA_08,
MSG_ID_UDPS_R8_DCHSDPA_09,
MSG_ID_UDPS_R8_DCHSDPA_10,
MSG_ID_UDPS_R8_DCHSDPA_11,
MSG_ID_UDPS_R8_DCHSDPA_12,
MSG_ID_UDPS_R8_DCHSDPA_13,
MSG_ID_UDPS_R8_DCHSDPA_14,
MSG_ID_UDPS_R8_DCHSDPA_15,
MSG_ID_UDPS_R8_LESSMODE_01,
MSG_ID_UDPS_R8_LESSMODE_02,
MSG_ID_UDPS_R8_LESSMODE_03,
MSG_ID_UDPS_R8_LESSMODE_04,
MSG_ID_UDPS_R8_LESSMODE_05,
MSG_ID_UDPS_R8_CEDCH_01,
MSG_ID_UDPS_R8_CEDCH_02,
MSG_ID_UDPS_R8_CEDCH_03,
MSG_ID_UDPS_R8_CEDCH_04,
MSG_ID_UDPS_R8_CEDCH_05,
MSG_ID_UDPS_R8_CEDCH_06,
MSG_ID_UDPS_R8_CEDCH_07,
MSG_ID_UDPS_R8_FACHDRX_01,
MSG_ID_UDPS_R8_FACHDRX_02,
MSG_ID_UDPS_R8_FACHDRX_03,
MSG_ID_UDPS_R8_M01,
MSG_ID_UDPS_R8_M02,
MSG_ID_UDPS_R8_M03,
MSG_ID_UDPS_R8_M04,
MSG_ID_UDPS_R8_M05,
MSG_ID_UDPS_R8_M06,
MSG_ID_UDPS_R8_M07,
MSG_ID_UDPS_R8_M08,
MSG_ID_UDPS_R8_M09,
MSG_ID_UDPS_R8_M10,
MSG_ID_UDPS_R8_MCPC1_01,
MSG_ID_UDPS_R8_MCPC1_02,
MSG_ID_UDPS_R8_MCPC2_01,
MSG_ID_UDPS_R8_MCPC2_02,
MSG_ID_UDPS_R8_CRS1,
MSG_ID_UDPS_R8_CRS2,

//__UMTS_R8__
MSG_ID_UDPS_INTER_FREQ_CRS_IN_IDLE,
MSG_ID_UDPS_INTRA_FREQ_CRS_IN_FACH,
MSG_ID_UDPS_INTER_FREQ_CRS_IN_FACH,

MSG_ID_UDPS_INTRA_FREQ_REPORTING_DELAY,
MSG_ID_UDPS_INTRA_FREQ_REPORTING_DELAY_IN_FADING,
MSG_ID_UDPS_INTER_FREQ_REPORTING_DELAY,
MSG_ID_UDPS_ABS_INTRA_FREQ_CPICH_RSCP,
MSG_ID_UDPS_REL_INTRA_FREQ_CPICH_RSCP,
MSG_ID_UDPS_REL_INTER_FREQ_CPICH_RSCP,
MSG_ID_UDPS_ABS_INTRA_FREQ_CPICH_ECIO,
MSG_ID_UDPS_REL_INTRA_FREQ_CPICH_ECIO,
MSG_ID_UDPS_REL_INTER_FREQ_CPICH_ECIO,
MSG_ID_UDPS_ABS_UTRA_CARRIER_RSSI,
MSG_ID_UDPS_REL_UTRA_CARRIER_RSSI,
MSG_ID_UDPS_INTRA_FREQ_SFN_CFN_DIFF,
MSG_ID_UDPS_INTER_FREQ_SFN_CFN_DIFF,
MSG_ID_UDPS_SFN_SFN_DIFF_TYPE1,
MSG_ID_UDPS_UE_TX_POWER,
MSG_ID_UDPS_ALL_MEAS_STATISTIC,/* CSD request */

/* 2.5G Measurement */
/* 2G Standby 3G Active: start from UDPS */
MSG_ID_UDPS_GSM_MEAS_IN_NULL, /* GM1 */
MSG_ID_UDPS_GSM_MEAS_IN_IDLE, /* GM2 */
MSG_ID_UDPS_GSM_MEAS_IN_FACH, /* GM3 */
MSG_ID_UDPS_GSM_REPORTING_DELAY,
MSG_ID_UDPS_GSM_REPORTING_DELAY_NO_BSIC, /* GM5 */
MSG_ID_UDPS_ABS_GSM_CARRIER_RSSI,

/* 2G Active 3G Standby: still start from UDPS */
MSG_ID_UDPS_WCDMA_MEAS_IN_SCAN, /* UM1 */
MSG_ID_UDPS_WCDMA_MEAS_IN_IDLE, /* UM2 */
MSG_ID_UDPS_WCDMA_MEAS_IN_DEDI, /* UM3 */
MSG_ID_UDPS_WCDMA_MEAS_IN_PIDLE, /* UM4 */
MSG_ID_UDPS_WCDMA_MEAS_IN_PTX, /* UM5 */
MSG_ID_UDPS_RECURSIVE_TCS_IN_2G_IDLE, /* UM6 = CS12(CSD) and CS13(CSD) */
MSG_ID_UDPS_RECURSIVE_TCS_IN_2G_DEDI, /* UM7 = CS8(CSD) and CS9(CSD) */

MSG_ID_UDPS_GSM_CRS_TO_UMTS, /*IRT1*/
MSG_ID_UDPS_UMTS_CRS_TO_GSM, /*IRT2*/
MSG_ID_UDPS_GSM_HHO_TO_UMTS, /*IRT3*/
MSG_ID_UDPS_UMTS_HHO_TO_GSM, /*IRT4*/

/* UDPS_UNIT_TEST */
MSG_ID_CPHY_UL_DPCH_CB,

/* For Phase 3 Emulation */
MSG_ID_UL1D_LOOPBACK_REQ,
MSG_ID_UL1D_LOOPBACK_RESULT_IND,

/* For TPC CER(Command Error Rate)  Evaluation */
MSG_ID_UL1D_DL_TPC_RESULT_IND,

MSG_ID_UDPS_EVENT_3B_TRIGGERED,
MSG_ID_UDPS_EVENT_3C_TRIGGERED,
MSG_ID_UDPS_ABORT_SUCCESS,

MSG_ID_UDPS_START_RUN_L1S_CASE,
MODULE_MSG_END(MSG_ID_UDPS_CODE_TAIL)

#endif  //_UDPS_MSG_H
