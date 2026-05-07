// Reconstructed implementation of MUVoiceMapperVoiceOption
// From MikeCore binary — reverse-engineered pseudocode

#include "MUVoiceMapperVoiceOption.h"

// ============================================================
// @01553b80 — 16108 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01556bc7) */
/* WARNING: Removing unreachable block (ram,0x01556bd0) */
/* WARNING: Removing unreachable block (ram,0x01556b6f) */
/* WARNING: Removing unreachable block (ram,0x01556b78) */
/* WARNING: Removing unreachable block (ram,0x01556b17) */
/* WARNING: Removing unreachable block (ram,0x01556b20) */
/* WARNING: Removing unreachable block (ram,0x01556b43) */
/* WARNING: Removing unreachable block (ram,0x01556b4c) */
/* WARNING: Removing unreachable block (ram,0x01556b9b) */
/* WARNING: Removing unreachable block (ram,0x01556ba4) */
/* WARNING: Removing unreachable block (ram,0x01556dbb) */
/* WARNING: Removing unreachable block (ram,0x01556dc4) */

longlong * FUN_01553b80(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int unaff_ESI;
  longlong *unaff_RDI;
  bool bVar7;
  byte bVar8;
  undefined8 *local_50;
  char local_48;
  
  if (unaff_ESI < 0x300) {
    switch(unaff_ESI) {
    case 0:
      if ((DAT_028ad1b8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad1b0 = '\0';
        DAT_028ad1b1 = '\0';
        uRam00000000028ad1b2 = 0;
        DAT_028ad1a8._0_7_ = 0;
        DAT_028ad1a8._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad1a8._7_1_,(undefined7)DAT_028ad1a8);
      if ((lVar6 == 0) || (DAT_028ad1b1 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad1a8._7_1_,(undefined7)DAT_028ad1a8) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad1a8._7_1_,(undefined7)DAT_028ad1a8);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad1a8._0_7_ = SUB87(puVar4,0);
            DAT_028ad1a8._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad1b0 == '\0') {
            DAT_028ad1b0 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad1b1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad1b1 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad1a8._7_1_,(undefined7)DAT_028ad1a8);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 1:
      if ((DAT_028ad1d0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad1c8 = '\0';
        DAT_028ad1c9 = '\0';
        uRam00000000028ad1ca = 0;
        DAT_028ad1c0._0_7_ = 0;
        DAT_028ad1c0._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad1c0._7_1_,(undefined7)DAT_028ad1c0);
      if ((lVar6 == 0) || (DAT_028ad1c9 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad1c0._7_1_,(undefined7)DAT_028ad1c0) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad1c0._7_1_,(undefined7)DAT_028ad1c0);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad1c0._0_7_ = SUB87(puVar4,0);
            DAT_028ad1c0._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad1c8 == '\0') {
            DAT_028ad1c8 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad1c9 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad1c9 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad1c0._7_1_,(undefined7)DAT_028ad1c0);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 2:
      if ((DAT_028ad1e8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad1e0 = '\0';
        DAT_028ad1e1 = '\0';
        uRam00000000028ad1e2 = 0;
        DAT_028ad1d8._0_7_ = 0;
        DAT_028ad1d8._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad1d8._7_1_,(undefined7)DAT_028ad1d8);
      if ((lVar6 == 0) || (DAT_028ad1e1 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad1d8._7_1_,(undefined7)DAT_028ad1d8) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad1d8._7_1_,(undefined7)DAT_028ad1d8);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad1d8._0_7_ = SUB87(puVar4,0);
            DAT_028ad1d8._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad1e0 == '\0') {
            DAT_028ad1e0 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad1e1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad1e1 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad1d8._7_1_,(undefined7)DAT_028ad1d8);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 3:
      if ((DAT_028ad200 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad1f8 = '\0';
        DAT_028ad1f9 = '\0';
        uRam00000000028ad1fa = 0;
        DAT_028ad1f0._0_7_ = 0;
        DAT_028ad1f0._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad1f0._7_1_,(undefined7)DAT_028ad1f0);
      if ((lVar6 == 0) || (DAT_028ad1f9 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad1f0._7_1_,(undefined7)DAT_028ad1f0) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad1f0._7_1_,(undefined7)DAT_028ad1f0);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad1f0._0_7_ = SUB87(puVar4,0);
            DAT_028ad1f0._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad1f8 == '\0') {
            DAT_028ad1f8 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad1f9 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad1f9 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad1f0._7_1_,(undefined7)DAT_028ad1f0);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 4:
      if ((DAT_028ad218 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad210 = '\0';
        DAT_028ad211 = '\0';
        uRam00000000028ad212 = 0;
        DAT_028ad208._0_7_ = 0;
        DAT_028ad208._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad208._7_1_,(undefined7)DAT_028ad208);
      if ((lVar6 == 0) || (DAT_028ad211 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad208._7_1_,(undefined7)DAT_028ad208) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad208._7_1_,(undefined7)DAT_028ad208);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad208._0_7_ = SUB87(puVar4,0);
            DAT_028ad208._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad210 == '\0') {
            DAT_028ad210 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad211 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad211 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad208._7_1_,(undefined7)DAT_028ad208);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 5:
      if ((DAT_028ad230 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad228 = '\0';
        DAT_028ad229 = '\0';
        uRam00000000028ad22a = 0;
        DAT_028ad220._0_7_ = 0;
        DAT_028ad220._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad220._7_1_,(undefined7)DAT_028ad220);
      if ((lVar6 == 0) || (DAT_028ad229 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad220._7_1_,(undefined7)DAT_028ad220) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad220._7_1_,(undefined7)DAT_028ad220);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad220._0_7_ = SUB87(puVar4,0);
            DAT_028ad220._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad228 == '\0') {
            DAT_028ad228 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad229 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad229 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad220._7_1_,(undefined7)DAT_028ad220);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 6:
      if ((DAT_028ad248 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad240 = '\0';
        DAT_028ad241 = '\0';
        uRam00000000028ad242 = 0;
        DAT_028ad238._0_7_ = 0;
        DAT_028ad238._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad238._7_1_,(undefined7)DAT_028ad238);
      if ((lVar6 == 0) || (DAT_028ad241 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad238._7_1_,(undefined7)DAT_028ad238) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad238._7_1_,(undefined7)DAT_028ad238);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad238._0_7_ = SUB87(puVar4,0);
            DAT_028ad238._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad240 == '\0') {
            DAT_028ad240 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad241 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad241 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad238._7_1_,(undefined7)DAT_028ad238);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 7:
      if ((DAT_028ad260 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad258 = '\0';
        DAT_028ad259 = '\0';
        uRam00000000028ad25a = 0;
        DAT_028ad250._0_7_ = 0;
        DAT_028ad250._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad250._7_1_,(undefined7)DAT_028ad250);
      if ((lVar6 == 0) || (DAT_028ad259 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad250._7_1_,(undefined7)DAT_028ad250) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad250._7_1_,(undefined7)DAT_028ad250);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad250._0_7_ = SUB87(puVar4,0);
            DAT_028ad250._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad258 == '\0') {
            DAT_028ad258 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad259 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad259 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad250._7_1_,(undefined7)DAT_028ad250);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 8:
      if ((DAT_028ad278 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad270 = '\0';
        DAT_028ad271 = '\0';
        uRam00000000028ad272 = 0;
        DAT_028ad268._0_7_ = 0;
        DAT_028ad268._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad268._7_1_,(undefined7)DAT_028ad268);
      if ((lVar6 == 0) || (DAT_028ad271 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad268._7_1_,(undefined7)DAT_028ad268) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad268._7_1_,(undefined7)DAT_028ad268);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad268._0_7_ = SUB87(puVar4,0);
            DAT_028ad268._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad270 == '\0') {
            DAT_028ad270 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad271 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad271 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad268._7_1_,(undefined7)DAT_028ad268);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    default:
      goto switchD_01553bb9_caseD_9;
    case 0xb:
      if ((DAT_028ad290 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad288 = '\0';
        DAT_028ad289 = '\0';
        uRam00000000028ad28a = 0;
        DAT_028ad280._0_7_ = 0;
        DAT_028ad280._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad280._7_1_,(undefined7)DAT_028ad280);
      if ((lVar6 == 0) || (DAT_028ad289 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad280._7_1_,(undefined7)DAT_028ad280) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad280._7_1_,(undefined7)DAT_028ad280);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad280._0_7_ = SUB87(puVar4,0);
            DAT_028ad280._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad288 == '\0') {
            DAT_028ad288 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad289 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad289 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad280._7_1_,(undefined7)DAT_028ad280);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0xc:
      if ((DAT_028ad2a8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad2a0 = '\0';
        DAT_028ad2a1 = '\0';
        uRam00000000028ad2a2 = 0;
        DAT_028ad298._0_7_ = 0;
        DAT_028ad298._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad298._7_1_,(undefined7)DAT_028ad298);
      if ((lVar6 == 0) || (DAT_028ad2a1 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad298._7_1_,(undefined7)DAT_028ad298) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad298._7_1_,(undefined7)DAT_028ad298);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad298._0_7_ = SUB87(puVar4,0);
            DAT_028ad298._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad2a0 == '\0') {
            DAT_028ad2a0 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad2a1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad2a1 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad298._7_1_,(undefined7)DAT_028ad298);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x10:
      if ((DAT_028ad2c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad2b8 = '\0';
        DAT_028ad2b9 = '\0';
        uRam00000000028ad2ba = 0;
        DAT_028ad2b0._0_7_ = 0;
        DAT_028ad2b0._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad2b0._7_1_,(undefined7)DAT_028ad2b0);
      if ((lVar6 == 0) || (DAT_028ad2b9 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad2b0._7_1_,(undefined7)DAT_028ad2b0) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad2b0._7_1_,(undefined7)DAT_028ad2b0);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad2b0._0_7_ = SUB87(puVar4,0);
            DAT_028ad2b0._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad2b8 == '\0') {
            DAT_028ad2b8 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad2b9 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad2b9 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad2b0._7_1_,(undefined7)DAT_028ad2b0);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x11:
      if ((DAT_028ad2d8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad2d0 = '\0';
        DAT_028ad2d1 = '\0';
        uRam00000000028ad2d2 = 0;
        DAT_028ad2c8._0_7_ = 0;
        DAT_028ad2c8._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad2c8._7_1_,(undefined7)DAT_028ad2c8);
      if ((lVar6 == 0) || (DAT_028ad2d1 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad2c8._7_1_,(undefined7)DAT_028ad2c8) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad2c8._7_1_,(undefined7)DAT_028ad2c8);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad2c8._0_7_ = SUB87(puVar4,0);
            DAT_028ad2c8._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad2d0 == '\0') {
            DAT_028ad2d0 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad2d1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad2d1 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad2c8._7_1_,(undefined7)DAT_028ad2c8);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x12:
      if ((DAT_028ad2f0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad2e8 = '\0';
        DAT_028ad2e9 = '\0';
        uRam00000000028ad2ea = 0;
        DAT_028ad2e0._0_7_ = 0;
        DAT_028ad2e0._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad2e0._7_1_,(undefined7)DAT_028ad2e0);
      if ((lVar6 == 0) || (DAT_028ad2e9 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad2e0._7_1_,(undefined7)DAT_028ad2e0) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad2e0._7_1_,(undefined7)DAT_028ad2e0);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad2e0._0_7_ = SUB87(puVar4,0);
            DAT_028ad2e0._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad2e8 == '\0') {
            DAT_028ad2e8 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad2e9 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad2e9 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad2e0._7_1_,(undefined7)DAT_028ad2e0);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x13:
      if ((DAT_028ad308 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad300 = '\0';
        DAT_028ad301 = '\0';
        uRam00000000028ad302 = 0;
        DAT_028ad2f8._0_7_ = 0;
        DAT_028ad2f8._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad2f8._7_1_,(undefined7)DAT_028ad2f8);
      if ((lVar6 == 0) || (DAT_028ad301 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad2f8._7_1_,(undefined7)DAT_028ad2f8) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad2f8._7_1_,(undefined7)DAT_028ad2f8);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad2f8._0_7_ = SUB87(puVar4,0);
            DAT_028ad2f8._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad300 == '\0') {
            DAT_028ad300 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad301 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad301 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad2f8._7_1_,(undefined7)DAT_028ad2f8);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x40:
      if ((DAT_028ad320 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad318 = '\0';
        DAT_028ad319 = '\0';
        uRam00000000028ad31a = 0;
        DAT_028ad310._0_7_ = 0;
        DAT_028ad310._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad310._7_1_,(undefined7)DAT_028ad310);
      if ((lVar6 == 0) || (DAT_028ad319 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad310._7_1_,(undefined7)DAT_028ad310) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad310._7_1_,(undefined7)DAT_028ad310);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad310._0_7_ = SUB87(puVar4,0);
            DAT_028ad310._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad318 == '\0') {
            DAT_028ad318 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad319 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad319 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad310._7_1_,(undefined7)DAT_028ad310);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x42:
      if ((DAT_028ad338 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad330 = '\0';
        DAT_028ad331 = '\0';
        uRam00000000028ad332 = 0;
        DAT_028ad328._0_7_ = 0;
        DAT_028ad328._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad328._7_1_,(undefined7)DAT_028ad328);
      if ((lVar6 == 0) || (DAT_028ad331 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad328._7_1_,(undefined7)DAT_028ad328) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad328._7_1_,(undefined7)DAT_028ad328);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad328._0_7_ = SUB87(puVar4,0);
            DAT_028ad328._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad330 == '\0') {
            DAT_028ad330 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad331 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad331 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad328._7_1_,(undefined7)DAT_028ad328);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x50:
      if ((DAT_028ad350 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad348 = '\0';
        DAT_028ad349 = '\0';
        uRam00000000028ad34a = 0;
        DAT_028ad340._0_7_ = 0;
        DAT_028ad340._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad340._7_1_,(undefined7)DAT_028ad340);
      if ((lVar6 == 0) || (DAT_028ad349 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad340._7_1_,(undefined7)DAT_028ad340) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad340._7_1_,(undefined7)DAT_028ad340);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad340._0_7_ = SUB87(puVar4,0);
            DAT_028ad340._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad348 == '\0') {
            DAT_028ad348 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad349 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad349 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad340._7_1_,(undefined7)DAT_028ad340);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x52:
      if ((DAT_028ad368 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad360 = '\0';
        DAT_028ad361 = '\0';
        uRam00000000028ad362 = 0;
        DAT_028ad358._0_7_ = 0;
        DAT_028ad358._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad358._7_1_,(undefined7)DAT_028ad358);
      if ((lVar6 == 0) || (DAT_028ad361 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad358._7_1_,(undefined7)DAT_028ad358) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad358._7_1_,(undefined7)DAT_028ad358);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad358._0_7_ = SUB87(puVar4,0);
            DAT_028ad358._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad360 == '\0') {
            DAT_028ad360 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad361 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad361 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad358._7_1_,(undefined7)DAT_028ad358);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x62:
      if ((DAT_028ad380 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad378 = '\0';
        DAT_028ad379 = '\0';
        uRam00000000028ad37a = 0;
        DAT_028ad370._0_7_ = 0;
        DAT_028ad370._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad370._7_1_,(undefined7)DAT_028ad370);
      if ((lVar6 == 0) || (DAT_028ad379 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad370._7_1_,(undefined7)DAT_028ad370) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad370._7_1_,(undefined7)DAT_028ad370);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad370._0_7_ = SUB87(puVar4,0);
            DAT_028ad370._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad378 == '\0') {
            DAT_028ad378 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad379 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad379 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad370._7_1_,(undefined7)DAT_028ad370);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case -1:
      if ((DAT_028ad1a0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad198 = '\0';
        DAT_028ad199 = '\0';
        uRam00000000028ad19a = 0;
        DAT_028ad190._0_7_ = 0;
        DAT_028ad190._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad190._7_1_,(undefined7)DAT_028ad190);
      if ((lVar6 == 0) || (DAT_028ad199 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad190._7_1_,(undefined7)DAT_028ad190) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad190._7_1_,(undefined7)DAT_028ad190);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad190._0_7_ = SUB87(puVar4,0);
            DAT_028ad190._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad198 == '\0') {
            DAT_028ad198 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad199 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad199 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad190._7_1_,(undefined7)DAT_028ad190);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) {
LAB_015569e4:
          lVar6 = 0;
          break;
        }
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
    }
  }
  else if (unaff_ESI < 0x1800) {
    if (unaff_ESI < 0xf00) {
      if (unaff_ESI < 0x900) {
        if (unaff_ESI == 0x300) {
          if ((DAT_028ad398 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
            DAT_028ad390 = '\0';
            DAT_028ad391 = '\0';
            uRam00000000028ad392 = 0;
            DAT_028ad388._0_7_ = 0;
            DAT_028ad388._7_1_ = 0;
            ___cxa_atexit();
            ___cxa_guard_release();
          }
          lVar6 = CONCAT17(DAT_028ad388._7_1_,(undefined7)DAT_028ad388);
          if ((lVar6 == 0) || (DAT_028ad391 == '\0')) {
            FUN_00e8cb50();
            if (CONCAT17(DAT_028ad388._7_1_,(undefined7)DAT_028ad388) == 0) {
              puVar4 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar4 = &DAT_02575d80;
              (*DAT_02575d98)();
              puVar5 = (undefined8 *)CONCAT17(DAT_028ad388._7_1_,(undefined7)DAT_028ad388);
              if (puVar5 == puVar4) {
                bVar2 = false;
              }
              else {
                DAT_028ad388._0_7_ = SUB87(puVar4,0);
                DAT_028ad388._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
                bVar2 = true;
                if (puVar5 != (undefined8 *)0x0) {
                  FUN_00d50b20();
                }
              }
              if (DAT_028ad390 == '\0') {
                DAT_028ad390 = '\x01';
                FUN_00e8cb90();
              }
              if (!bVar2) {
                FUN_00d50b20();
              }
              FUN_00d46080();
              DAT_028ad391 = '\x01';
              FUN_00e8cb70();
            }
            else {
              DAT_028ad391 = '\x01';
              FUN_00e8cb70();
            }
            lVar6 = CONCAT17(DAT_028ad388._7_1_,(undefined7)DAT_028ad388);
            *(undefined1 *)(unaff_RDI + 1) = 0;
            if (lVar6 == 0) goto LAB_015569e4;
          }
          else {
            *(undefined1 *)(unaff_RDI + 1) = 0;
          }
          FUN_00d50b00();
        }
        else {
          if (unaff_ESI != 0x600) goto switchD_01553bb9_caseD_9;
          if ((DAT_028ad3b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
            DAT_028ad3a8 = '\0';
            DAT_028ad3a9 = '\0';
            uRam00000000028ad3aa = 0;
            DAT_028ad3a0._0_7_ = 0;
            DAT_028ad3a0._7_1_ = 0;
            ___cxa_atexit();
            ___cxa_guard_release();
          }
          lVar6 = CONCAT17(DAT_028ad3a0._7_1_,(undefined7)DAT_028ad3a0);
          if ((lVar6 == 0) || (DAT_028ad3a9 == '\0')) {
            FUN_00e8cb50();
            if (CONCAT17(DAT_028ad3a0._7_1_,(undefined7)DAT_028ad3a0) == 0) {
              puVar4 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar4 = &DAT_02575d80;
              (*DAT_02575d98)();
              puVar5 = (undefined8 *)CONCAT17(DAT_028ad3a0._7_1_,(undefined7)DAT_028ad3a0);
              if (puVar5 == puVar4) {
                bVar2 = false;
              }
              else {
                DAT_028ad3a0._0_7_ = SUB87(puVar4,0);
                DAT_028ad3a0._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
                bVar2 = true;
                if (puVar5 != (undefined8 *)0x0) {
                  FUN_00d50b20();
                }
              }
              if (DAT_028ad3a8 == '\0') {
                DAT_028ad3a8 = '\x01';
                FUN_00e8cb90();
              }
              if (!bVar2) {
                FUN_00d50b20();
              }
              FUN_00d46080();
              DAT_028ad3a9 = '\x01';
              FUN_00e8cb70();
            }
            else {
              DAT_028ad3a9 = '\x01';
              FUN_00e8cb70();
            }
            lVar6 = CONCAT17(DAT_028ad3a0._7_1_,(undefined7)DAT_028ad3a0);
            *(undefined1 *)(unaff_RDI + 1) = 0;
            if (lVar6 == 0) goto LAB_015569e4;
          }
          else {
            *(undefined1 *)(unaff_RDI + 1) = 0;
          }
          FUN_00d50b00();
        }
      }
      else if (unaff_ESI == 0x900) {
        if ((DAT_028ad3c8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          DAT_028ad3c0 = '\0';
          DAT_028ad3c1 = '\0';
          uRam00000000028ad3c2 = 0;
          DAT_028ad3b8._0_7_ = 0;
          DAT_028ad3b8._7_1_ = 0;
          ___cxa_atexit();
          ___cxa_guard_release();
        }
        lVar6 = CONCAT17(DAT_028ad3b8._7_1_,(undefined7)DAT_028ad3b8);
        if ((lVar6 == 0) || (DAT_028ad3c1 == '\0')) {
          FUN_00e8cb50();
          if (CONCAT17(DAT_028ad3b8._7_1_,(undefined7)DAT_028ad3b8) == 0) {
            puVar4 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar4 = &DAT_02575d80;
            (*DAT_02575d98)();
            puVar5 = (undefined8 *)CONCAT17(DAT_028ad3b8._7_1_,(undefined7)DAT_028ad3b8);
            if (puVar5 == puVar4) {
              bVar2 = false;
            }
            else {
              DAT_028ad3b8._0_7_ = SUB87(puVar4,0);
              DAT_028ad3b8._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
              bVar2 = true;
              if (puVar5 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
            }
            if (DAT_028ad3c0 == '\0') {
              DAT_028ad3c0 = '\x01';
              FUN_00e8cb90();
            }
            if (!bVar2) {
              FUN_00d50b20();
            }
            FUN_00d46080();
            DAT_028ad3c1 = '\x01';
            FUN_00e8cb70();
          }
          else {
            DAT_028ad3c1 = '\x01';
            FUN_00e8cb70();
          }
          lVar6 = CONCAT17(DAT_028ad3b8._7_1_,(undefined7)DAT_028ad3b8);
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (lVar6 == 0) goto LAB_015569e4;
        }
        else {
          *(undefined1 *)(unaff_RDI + 1) = 0;
        }
        FUN_00d50b00();
      }
      else {
        if (unaff_ESI != 0xc00) goto switchD_01553bb9_caseD_9;
        if ((DAT_028ad3e0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          DAT_028ad3d8 = '\0';
          DAT_028ad3d9 = '\0';
          uRam00000000028ad3da = 0;
          DAT_028ad3d0._0_7_ = 0;
          DAT_028ad3d0._7_1_ = 0;
          ___cxa_atexit();
          ___cxa_guard_release();
        }
        lVar6 = CONCAT17(DAT_028ad3d0._7_1_,(undefined7)DAT_028ad3d0);
        if ((lVar6 == 0) || (DAT_028ad3d9 == '\0')) {
          FUN_00e8cb50();
          if (CONCAT17(DAT_028ad3d0._7_1_,(undefined7)DAT_028ad3d0) == 0) {
            puVar4 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar4 = &DAT_02575d80;
            (*DAT_02575d98)();
            puVar5 = (undefined8 *)CONCAT17(DAT_028ad3d0._7_1_,(undefined7)DAT_028ad3d0);
            if (puVar5 == puVar4) {
              bVar2 = false;
            }
            else {
              DAT_028ad3d0._0_7_ = SUB87(puVar4,0);
              DAT_028ad3d0._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
              bVar2 = true;
              if (puVar5 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
            }
            if (DAT_028ad3d8 == '\0') {
              DAT_028ad3d8 = '\x01';
              FUN_00e8cb90();
            }
            if (!bVar2) {
              FUN_00d50b20();
            }
            FUN_00d46080();
            DAT_028ad3d9 = '\x01';
            FUN_00e8cb70();
          }
          else {
            DAT_028ad3d9 = '\x01';
            FUN_00e8cb70();
          }
          lVar6 = CONCAT17(DAT_028ad3d0._7_1_,(undefined7)DAT_028ad3d0);
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (lVar6 == 0) goto LAB_015569e4;
        }
        else {
          *(undefined1 *)(unaff_RDI + 1) = 0;
        }
        FUN_00d50b00();
      }
    }
    else {
      if (0x11ff < unaff_ESI) {
        if (unaff_ESI == 0x1200) {
          if ((DAT_028ad410 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
            DAT_028ad408 = '\0';
            DAT_028ad409 = '\0';
            uRam00000000028ad40a = 0;
            DAT_028ad400._0_7_ = 0;
            DAT_028ad400._7_1_ = 0;
            ___cxa_atexit();
            ___cxa_guard_release();
          }
          lVar6 = CONCAT17(DAT_028ad400._7_1_,(undefined7)DAT_028ad400);
          if ((lVar6 == 0) || (DAT_028ad409 == '\0')) {
            FUN_00e8cb50();
            if (CONCAT17(DAT_028ad400._7_1_,(undefined7)DAT_028ad400) == 0) {
              puVar4 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar4 = &DAT_02575d80;
              (*DAT_02575d98)();
              puVar5 = (undefined8 *)CONCAT17(DAT_028ad400._7_1_,(undefined7)DAT_028ad400);
              if (puVar5 == puVar4) {
                bVar2 = false;
              }
              else {
                DAT_028ad400._0_7_ = SUB87(puVar4,0);
                DAT_028ad400._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
                bVar2 = true;
                if (puVar5 != (undefined8 *)0x0) {
                  FUN_00d50b20();
                }
              }
              if (DAT_028ad408 == '\0') {
                DAT_028ad408 = '\x01';
                FUN_00e8cb90();
              }
              if (!bVar2) {
                FUN_00d50b20();
              }
              FUN_00d46080();
              DAT_028ad409 = '\x01';
              FUN_00e8cb70();
            }
            else {
              DAT_028ad409 = '\x01';
              FUN_00e8cb70();
            }
            lVar6 = CONCAT17(DAT_028ad400._7_1_,(undefined7)DAT_028ad400);
            *(undefined1 *)(unaff_RDI + 1) = 0;
            if (lVar6 == 0) goto LAB_015569e4;
          }
          else {
            *(undefined1 *)(unaff_RDI + 1) = 0;
          }
          FUN_00d50b00();
          goto LAB_015569e6;
        }
        if (unaff_ESI == 0x1500) {
          if ((DAT_028ad428 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
            DAT_028ad420 = '\0';
            DAT_028ad421 = '\0';
            uRam00000000028ad422 = 0;
            DAT_028ad418._0_7_ = 0;
            DAT_028ad418._7_1_ = 0;
            ___cxa_atexit();
            ___cxa_guard_release();
          }
          lVar6 = CONCAT17(DAT_028ad418._7_1_,(undefined7)DAT_028ad418);
          if ((lVar6 == 0) || (DAT_028ad421 == '\0')) {
            FUN_00e8cb50();
            if (CONCAT17(DAT_028ad418._7_1_,(undefined7)DAT_028ad418) == 0) {
              puVar4 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar4 = &DAT_02575d80;
              (*DAT_02575d98)();
              puVar5 = (undefined8 *)CONCAT17(DAT_028ad418._7_1_,(undefined7)DAT_028ad418);
              if (puVar5 == puVar4) {
                bVar2 = false;
              }
              else {
                DAT_028ad418._0_7_ = SUB87(puVar4,0);
                DAT_028ad418._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
                bVar2 = true;
                if (puVar5 != (undefined8 *)0x0) {
                  FUN_00d50b20();
                }
              }
              if (DAT_028ad420 == '\0') {
                DAT_028ad420 = '\x01';
                FUN_00e8cb90();
              }
              if (!bVar2) {
                FUN_00d50b20();
              }
              FUN_00d46080();
              DAT_028ad421 = '\x01';
              FUN_00e8cb70();
            }
            else {
              DAT_028ad421 = '\x01';
              FUN_00e8cb70();
            }
            lVar6 = CONCAT17(DAT_028ad418._7_1_,(undefined7)DAT_028ad418);
            *(undefined1 *)(unaff_RDI + 1) = 0;
            if (lVar6 == 0) goto LAB_015569e4;
          }
          else {
            *(undefined1 *)(unaff_RDI + 1) = 0;
          }
          FUN_00d50b00();
          goto LAB_015569e6;
        }
switchD_01553bb9_caseD_9:
        if ((DAT_028ad518 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          DAT_028ad510 = '\0';
          DAT_028ad511 = '\0';
          uRam00000000028ad512 = 0;
          DAT_028ad508._0_7_ = 0;
          DAT_028ad508._7_1_ = 0;
          ___cxa_atexit();
          ___cxa_guard_release();
        }
        bVar1 = 1;
        if ((CONCAT17(DAT_028ad508._7_1_,(undefined7)DAT_028ad508) == 0) || (DAT_028ad511 == '\0'))
        {
          FUN_00e8cb50();
          if (CONCAT17(DAT_028ad508._7_1_,(undefined7)DAT_028ad508) != 0) {
            DAT_028ad511 = '\x01';
            FUN_00e8cb70();
            goto LAB_015545ba;
          }
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02572358;
          (*DAT_02572370)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad508._7_1_,(undefined7)DAT_028ad508);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad508._0_7_ = SUB87(puVar4,0);
            DAT_028ad508._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad510 == '\0') {
            DAT_028ad510 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d21370();
          puVar5 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar5 = &DAT_02575d80;
          (*DAT_02575d98)();
          FUN_00d46080();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          local_48 = '\0';
          FUN_00d21140();
          DAT_028ad511 = '\x01';
          FUN_00e8cb70();
          bVar8 = 1;
          bVar1 = 0;
          bVar2 = true;
          local_50 = puVar5;
        }
        else {
LAB_015545ba:
          bVar8 = 0;
          bVar2 = false;
          puVar5 = (undefined8 *)0x0;
        }
        puVar4 = (undefined8 *)
                 **(undefined8 **)(CONCAT17(DAT_028ad508._7_1_,(undefined7)DAT_028ad508) + 0x10);
        if (puVar5 == puVar4) {
          puVar4 = puVar5;
          if ((bool)(bVar1 & puVar5 != (undefined8 *)0x0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (puVar4 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          if ((bool)(bVar8 & puVar5 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar3 = FUN_00d45870();
        puVar5 = puVar4;
        if (iVar3 == unaff_ESI) {
LAB_01556cb7:
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (!bVar2) {
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
LAB_01556cde:
            *unaff_RDI = (longlong)puVar5;
            goto LAB_015569ed;
          }
        }
        else {
          puVar5 = *(undefined8 **)
                    (*(longlong *)(CONCAT17(DAT_028ad508._7_1_,(undefined7)DAT_028ad508) + 0x10) + 8
                    );
          if (puVar4 == puVar5) {
            if ((!bVar2) && (puVar4 != (undefined8 *)0x0)) {
              bVar2 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (puVar4 != (undefined8 *)0x0)) {
              FUN_00d50b20();
              bVar2 = true;
              puVar4 = puVar5;
            }
            else {
              bVar2 = true;
              puVar4 = puVar5;
            }
          }
          iVar3 = FUN_00d45870();
          puVar5 = puVar4;
          if (iVar3 == unaff_ESI) goto LAB_01556cb7;
          puVar5 = *(undefined8 **)
                    (*(longlong *)(CONCAT17(DAT_028ad508._7_1_,(undefined7)DAT_028ad508) + 0x10) +
                    0x10);
          if (puVar4 == puVar5) {
            if ((!bVar2) && (puVar4 != (undefined8 *)0x0)) {
              bVar2 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (puVar4 != (undefined8 *)0x0)) {
              FUN_00d50b20();
              bVar2 = true;
              puVar4 = puVar5;
            }
            else {
              bVar2 = true;
              puVar4 = puVar5;
            }
          }
          iVar3 = FUN_00d45870();
          puVar5 = puVar4;
          if (iVar3 == unaff_ESI) goto LAB_01556cb7;
          puVar5 = *(undefined8 **)
                    (*(longlong *)(CONCAT17(DAT_028ad508._7_1_,(undefined7)DAT_028ad508) + 0x10) +
                    0x18);
          if (puVar4 == puVar5) {
            if ((!bVar2) && (puVar4 != (undefined8 *)0x0)) {
              bVar2 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (puVar4 != (undefined8 *)0x0)) {
              FUN_00d50b20();
              bVar2 = true;
              puVar4 = puVar5;
            }
            else {
              bVar2 = true;
              puVar4 = puVar5;
            }
          }
          iVar3 = FUN_00d45870();
          puVar5 = puVar4;
          if (iVar3 == unaff_ESI) goto LAB_01556cb7;
          puVar5 = *(undefined8 **)
                    (*(longlong *)(CONCAT17(DAT_028ad508._7_1_,(undefined7)DAT_028ad508) + 0x10) +
                    0x20);
          if (puVar4 == puVar5) {
            if ((!bVar2) && (puVar4 != (undefined8 *)0x0)) {
              bVar2 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (puVar4 != (undefined8 *)0x0)) {
              FUN_00d50b20();
              bVar2 = true;
              puVar4 = puVar5;
            }
            else {
              bVar2 = true;
              puVar4 = puVar5;
            }
          }
          iVar3 = FUN_00d45870();
          puVar5 = puVar4;
          if (iVar3 == unaff_ESI) goto LAB_01556cb7;
          FUN_00d23620();
          FUN_00d46530();
          if (local_50 == puVar4) {
            bVar7 = bVar2;
            if ((!bVar2) && (local_50 != (undefined8 *)0x0)) {
              bVar7 = true;
              if (local_48 != '\0') goto LAB_01556d9b;
              FUN_00d50b00();
              bVar7 = true;
            }
LAB_01556d87:
            if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            puVar5 = local_50;
            if (local_48 == '\0') {
              if (local_50 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
              bVar7 = true;
              if ((bVar2) && (puVar4 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01556d87;
            }
            bVar7 = true;
            if ((bVar2) && (puVar4 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
LAB_01556d9b:
          FUN_00d23370();
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (!bVar7) {
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            goto LAB_01556cde;
          }
        }
        *unaff_RDI = (longlong)puVar5;
        goto LAB_015569ed;
      }
      if (unaff_ESI == 0xf00) {
        if ((DAT_028ad3f8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          DAT_028ad3f0 = '\0';
          DAT_028ad3f1 = '\0';
          uRam00000000028ad3f2 = 0;
          DAT_028ad3e8._0_7_ = 0;
          DAT_028ad3e8._7_1_ = 0;
          ___cxa_atexit();
          ___cxa_guard_release();
        }
        lVar6 = CONCAT17(DAT_028ad3e8._7_1_,(undefined7)DAT_028ad3e8);
        if ((lVar6 == 0) || (DAT_028ad3f1 == '\0')) {
          FUN_00e8cb50();
          if (CONCAT17(DAT_028ad3e8._7_1_,(undefined7)DAT_028ad3e8) == 0) {
            puVar4 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar4 = &DAT_02575d80;
            (*DAT_02575d98)();
            puVar5 = (undefined8 *)CONCAT17(DAT_028ad3e8._7_1_,(undefined7)DAT_028ad3e8);
            if (puVar5 == puVar4) {
              bVar2 = false;
            }
            else {
              DAT_028ad3e8._0_7_ = SUB87(puVar4,0);
              DAT_028ad3e8._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
              bVar2 = true;
              if (puVar5 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
            }
            if (DAT_028ad3f0 == '\0') {
              DAT_028ad3f0 = '\x01';
              FUN_00e8cb90();
            }
            if (!bVar2) {
              FUN_00d50b20();
            }
            FUN_00d46080();
            DAT_028ad3f1 = '\x01';
            FUN_00e8cb70();
          }
          else {
            DAT_028ad3f1 = '\x01';
            FUN_00e8cb70();
          }
          lVar6 = CONCAT17(DAT_028ad3e8._7_1_,(undefined7)DAT_028ad3e8);
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (lVar6 == 0) goto LAB_015569e4;
        }
        else {
          *(undefined1 *)(unaff_RDI + 1) = 0;
        }
        FUN_00d50b00();
      }
      else {
        if (unaff_ESI != 0x1000) goto switchD_01553bb9_caseD_9;
        if ((DAT_028ad500 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          DAT_028ad4f8 = '\0';
          DAT_028ad4f9 = '\0';
          uRam00000000028ad4fa = 0;
          DAT_028ad4f0._0_7_ = 0;
          DAT_028ad4f0._7_1_ = 0;
          ___cxa_atexit();
          ___cxa_guard_release();
        }
        lVar6 = CONCAT17(DAT_028ad4f0._7_1_,(undefined7)DAT_028ad4f0);
        if ((lVar6 == 0) || (DAT_028ad4f9 == '\0')) {
          FUN_00e8cb50();
          if (CONCAT17(DAT_028ad4f0._7_1_,(undefined7)DAT_028ad4f0) == 0) {
            puVar4 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar4 = &DAT_02575d80;
            (*DAT_02575d98)();
            puVar5 = (undefined8 *)CONCAT17(DAT_028ad4f0._7_1_,(undefined7)DAT_028ad4f0);
            if (puVar5 == puVar4) {
              bVar2 = false;
            }
            else {
              DAT_028ad4f0._0_7_ = SUB87(puVar4,0);
              DAT_028ad4f0._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
              bVar2 = true;
              if (puVar5 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
            }
            if (DAT_028ad4f8 == '\0') {
              DAT_028ad4f8 = '\x01';
              FUN_00e8cb90();
            }
            if (!bVar2) {
              FUN_00d50b20();
            }
            FUN_00d46080();
            DAT_028ad4f9 = '\x01';
            FUN_00e8cb70();
          }
          else {
            DAT_028ad4f9 = '\x01';
            FUN_00e8cb70();
          }
          lVar6 = CONCAT17(DAT_028ad4f0._7_1_,(undefined7)DAT_028ad4f0);
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (lVar6 == 0) goto LAB_015569e4;
        }
        else {
          *(undefined1 *)(unaff_RDI + 1) = 0;
        }
        FUN_00d50b00();
      }
    }
  }
  else if (unaff_ESI < 0x2400) {
    if (unaff_ESI < 0x1e00) {
      if (unaff_ESI == 0x1800) {
        if ((DAT_028ad440 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          DAT_028ad438 = '\0';
          DAT_028ad439 = '\0';
          uRam00000000028ad43a = 0;
          DAT_028ad430._0_7_ = 0;
          DAT_028ad430._7_1_ = 0;
          ___cxa_atexit();
          ___cxa_guard_release();
        }
        lVar6 = CONCAT17(DAT_028ad430._7_1_,(undefined7)DAT_028ad430);
        if ((lVar6 == 0) || (DAT_028ad439 == '\0')) {
          FUN_00e8cb50();
          if (CONCAT17(DAT_028ad430._7_1_,(undefined7)DAT_028ad430) == 0) {
            puVar4 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar4 = &DAT_02575d80;
            (*DAT_02575d98)();
            puVar5 = (undefined8 *)CONCAT17(DAT_028ad430._7_1_,(undefined7)DAT_028ad430);
            if (puVar5 == puVar4) {
              bVar2 = false;
            }
            else {
              DAT_028ad430._0_7_ = SUB87(puVar4,0);
              DAT_028ad430._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
              bVar2 = true;
              if (puVar5 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
            }
            if (DAT_028ad438 == '\0') {
              DAT_028ad438 = '\x01';
              FUN_00e8cb90();
            }
            if (!bVar2) {
              FUN_00d50b20();
            }
            FUN_00d46080();
            DAT_028ad439 = '\x01';
            FUN_00e8cb70();
          }
          else {
            DAT_028ad439 = '\x01';
            FUN_00e8cb70();
          }
          lVar6 = CONCAT17(DAT_028ad430._7_1_,(undefined7)DAT_028ad430);
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (lVar6 == 0) goto LAB_015569e4;
        }
        else {
          *(undefined1 *)(unaff_RDI + 1) = 0;
        }
        FUN_00d50b00();
      }
      else {
        if (unaff_ESI != 0x1b00) goto switchD_01553bb9_caseD_9;
        if ((DAT_028ad458 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          DAT_028ad450 = '\0';
          DAT_028ad451 = '\0';
          uRam00000000028ad452 = 0;
          DAT_028ad448._0_7_ = 0;
          DAT_028ad448._7_1_ = 0;
          ___cxa_atexit();
          ___cxa_guard_release();
        }
        lVar6 = CONCAT17(DAT_028ad448._7_1_,(undefined7)DAT_028ad448);
        if ((lVar6 == 0) || (DAT_028ad451 == '\0')) {
          FUN_00e8cb50();
          if (CONCAT17(DAT_028ad448._7_1_,(undefined7)DAT_028ad448) == 0) {
            puVar4 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar4 = &DAT_02575d80;
            (*DAT_02575d98)();
            puVar5 = (undefined8 *)CONCAT17(DAT_028ad448._7_1_,(undefined7)DAT_028ad448);
            if (puVar5 == puVar4) {
              bVar2 = false;
            }
            else {
              DAT_028ad448._0_7_ = SUB87(puVar4,0);
              DAT_028ad448._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
              bVar2 = true;
              if (puVar5 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
            }
            if (DAT_028ad450 == '\0') {
              DAT_028ad450 = '\x01';
              FUN_00e8cb90();
            }
            if (!bVar2) {
              FUN_00d50b20();
            }
            FUN_00d46080();
            DAT_028ad451 = '\x01';
            FUN_00e8cb70();
          }
          else {
            DAT_028ad451 = '\x01';
            FUN_00e8cb70();
          }
          lVar6 = CONCAT17(DAT_028ad448._7_1_,(undefined7)DAT_028ad448);
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (lVar6 == 0) goto LAB_015569e4;
        }
        else {
          *(undefined1 *)(unaff_RDI + 1) = 0;
        }
        FUN_00d50b00();
      }
    }
    else if (unaff_ESI == 0x1e00) {
      if ((DAT_028ad470 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad468 = '\0';
        DAT_028ad469 = '\0';
        uRam00000000028ad46a = 0;
        DAT_028ad460._0_7_ = 0;
        DAT_028ad460._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad460._7_1_,(undefined7)DAT_028ad460);
      if ((lVar6 == 0) || (DAT_028ad469 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad460._7_1_,(undefined7)DAT_028ad460) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad460._7_1_,(undefined7)DAT_028ad460);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad460._0_7_ = SUB87(puVar4,0);
            DAT_028ad460._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad468 == '\0') {
            DAT_028ad468 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad469 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad469 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad460._7_1_,(undefined7)DAT_028ad460);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
    }
    else {
      if (unaff_ESI != 0x2100) goto switchD_01553bb9_caseD_9;
      if ((DAT_028ad488 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad480 = '\0';
        DAT_028ad481 = '\0';
        uRam00000000028ad482 = 0;
        DAT_028ad478._0_7_ = 0;
        DAT_028ad478._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad478._7_1_,(undefined7)DAT_028ad478);
      if ((lVar6 == 0) || (DAT_028ad481 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad478._7_1_,(undefined7)DAT_028ad478) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad478._7_1_,(undefined7)DAT_028ad478);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad478._0_7_ = SUB87(puVar4,0);
            DAT_028ad478._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad480 == '\0') {
            DAT_028ad480 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad481 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad481 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad478._7_1_,(undefined7)DAT_028ad478);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
    }
  }
  else if (unaff_ESI < 0x2a00) {
    if (unaff_ESI == 0x2400) {
      if ((DAT_028ad4a0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad498 = '\0';
        DAT_028ad499 = '\0';
        uRam00000000028ad49a = 0;
        DAT_028ad490._0_7_ = 0;
        DAT_028ad490._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad490._7_1_,(undefined7)DAT_028ad490);
      if ((lVar6 == 0) || (DAT_028ad499 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad490._7_1_,(undefined7)DAT_028ad490) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad490._7_1_,(undefined7)DAT_028ad490);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad490._0_7_ = SUB87(puVar4,0);
            DAT_028ad490._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad498 == '\0') {
            DAT_028ad498 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad499 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad499 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad490._7_1_,(undefined7)DAT_028ad490);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
    }
    else {
      if (unaff_ESI != 0x2700) goto switchD_01553bb9_caseD_9;
      if ((DAT_028ad4b8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028ad4b0 = '\0';
        DAT_028ad4b1 = '\0';
        uRam00000000028ad4b2 = 0;
        DAT_028ad4a8._0_7_ = 0;
        DAT_028ad4a8._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_028ad4a8._7_1_,(undefined7)DAT_028ad4a8);
      if ((lVar6 == 0) || (DAT_028ad4b1 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028ad4a8._7_1_,(undefined7)DAT_028ad4a8) == 0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02575d80;
          (*DAT_02575d98)();
          puVar5 = (undefined8 *)CONCAT17(DAT_028ad4a8._7_1_,(undefined7)DAT_028ad4a8);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            DAT_028ad4a8._0_7_ = SUB87(puVar4,0);
            DAT_028ad4a8._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad4b0 == '\0') {
            DAT_028ad4b0 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          DAT_028ad4b1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad4b1 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(DAT_028ad4a8._7_1_,(undefined7)DAT_028ad4a8);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      FUN_00d50b00();
    }
  }
  else if (unaff_ESI == 0x2a00) {
    if ((DAT_028ad4d0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      DAT_028ad4c8 = '\0';
      DAT_028ad4c9 = '\0';
      uRam00000000028ad4ca = 0;
      DAT_028ad4c0._0_7_ = 0;
      DAT_028ad4c0._7_1_ = 0;
      ___cxa_atexit();
      ___cxa_guard_release();
    }
    lVar6 = CONCAT17(DAT_028ad4c0._7_1_,(undefined7)DAT_028ad4c0);
    if ((lVar6 == 0) || (DAT_028ad4c9 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(DAT_028ad4c0._7_1_,(undefined7)DAT_028ad4c0) == 0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02575d80;
        (*DAT_02575d98)();
        puVar5 = (undefined8 *)CONCAT17(DAT_028ad4c0._7_1_,(undefined7)DAT_028ad4c0);
        if (puVar5 == puVar4) {
          bVar2 = false;
        }
        else {
          DAT_028ad4c0._0_7_ = SUB87(puVar4,0);
          DAT_028ad4c0._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
          bVar2 = true;
          if (puVar5 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        if (DAT_028ad4c8 == '\0') {
          DAT_028ad4c8 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_00d46080();
        DAT_028ad4c9 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028ad4c9 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(DAT_028ad4c0._7_1_,(undefined7)DAT_028ad4c0);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar6 == 0) goto LAB_015569e4;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
  else {
    if (unaff_ESI != 0x2d00) goto switchD_01553bb9_caseD_9;
    if ((DAT_028ad4e8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      DAT_028ad4e0 = '\0';
      DAT_028ad4e1 = '\0';
      uRam00000000028ad4e2 = 0;
      DAT_028ad4d8._0_7_ = 0;
      DAT_028ad4d8._7_1_ = 0;
      ___cxa_atexit();
      ___cxa_guard_release();
    }
    lVar6 = CONCAT17(DAT_028ad4d8._7_1_,(undefined7)DAT_028ad4d8);
    if ((lVar6 == 0) || (DAT_028ad4e1 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(DAT_028ad4d8._7_1_,(undefined7)DAT_028ad4d8) == 0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02575d80;
        (*DAT_02575d98)();
        puVar5 = (undefined8 *)CONCAT17(DAT_028ad4d8._7_1_,(undefined7)DAT_028ad4d8);
        if (puVar5 == puVar4) {
          bVar2 = false;
        }
        else {
          DAT_028ad4d8._0_7_ = SUB87(puVar4,0);
          DAT_028ad4d8._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
          bVar2 = true;
          if (puVar5 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        if (DAT_028ad4e0 == '\0') {
          DAT_028ad4e0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_00d46080();
        DAT_028ad4e1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028ad4e1 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(DAT_028ad4d8._7_1_,(undefined7)DAT_028ad4d8);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar6 == 0) goto LAB_015569e4;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_015569e6:
  *unaff_RDI = lVar6;
LAB_015569ed:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @015513a0 — 5531 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x015519fc) */
/* WARNING: Removing unreachable block (ram,0x01551a08) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015513a0(void *param_1,undefined8 param_2,size_t param_3)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong uVar20;
  void *pvVar21;
  longlong lVar22;
  longlong lVar23;
  pthread_key_t pVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  pthread_key_t pVar28;
  longlong *unaff_RDI;
  ulonglong uVar29;
  longlong lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  longlong lVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double local_8e0;
  longlong local_8b8;
  int local_8a8;
  longlong *local_890;
  char local_888;
  double local_878;
  float local_868;
  double local_860;
  int local_850;
  longlong *local_848;
  longlong local_838 [12];
  longlong alStack_7d8 [244];
  longlong local_38;
  undefined8 extraout_XMM0_Qb_00;
  
  uVar20 = (ulonglong)param_1 & 0xffffffff;
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  pvVar21 = param_1;
  uVar10 = FUN_00b33120();
  uVar29 = (ulonglong)uVar10;
  if (0 < (int)uVar10) {
    _memcpy(pvVar21,(void *)(uVar29 * 8),param_3);
  }
  dVar34 = (double)FUN_00b335d0();
  uVar13 = (uint)param_1;
  uVar11 = (int)(DAT_0240f0b8 * dVar34);
  if ((int)uVar13 < (int)(DAT_0240f0b8 * dVar34)) {
    uVar11 = uVar13;
  }
  local_860 = (double)(**(code **)(*unaff_RDI + 0x5e0))();
  dVar35 = (double)(**(code **)(*unaff_RDI + 0x5f0))();
  if ((*(char *)((longlong)unaff_RDI + 0x25e) != '\0') && ((char)unaff_RDI[0x4c] == '\0')) {
    dVar40 = DAT_02391030 * dVar34;
    lVar30 = unaff_RDI[0x23];
    *(float *)(lVar30 + 0x10) =
         (float)(*(uint *)(lVar30 + 0xc) ^ _DAT_023945e0) / (float)(int)dVar40;
    *(int *)(lVar30 + 0x14) = (int)dVar40;
    *(undefined1 *)(unaff_RDI + 0x4c) = 1;
  }
  if (uVar13 != 0) {
    dVar43 = dVar35 - local_860;
    uVar12 = (uint)(DAT_02391030 * dVar34);
    dVar40 = (DAT_0238fee8 / (double)(int)uVar13) * dVar43;
    fVar31 = (float)(int)(DAT_02391030 * dVar34);
    uVar14 = (ulonglong)(uVar10 & 0xfffffffc);
    uVar15 = (uVar14 - 4 >> 2) + 1;
    uVar25 = (ulonglong)((uint)uVar15 & 3);
    uVar26 = uVar25 << 5;
    bVar9 = true;
    local_8a8 = 0x80;
    local_8b8 = 0;
    lVar30 = 0;
    bVar6 = false;
    local_848 = (longlong *)0x0;
    bVar7 = false;
    local_878 = 0.0;
    local_8e0 = 0.0;
    uVar27 = uVar26;
    local_868 = DAT_023b26e8;
    do {
      pVar24 = (pthread_key_t)uVar27;
      local_850 = (int)uVar20;
      if (bVar9) {
        lVar23 = unaff_RDI[0x1d];
        lVar22 = lVar23;
        if (lVar23 == 0) {
          if (*(char *)((longlong)unaff_RDI + 0x25e) != '\0') {
            (**(code **)(*unaff_RDI + 0x678))();
            break;
          }
          lVar22 = unaff_RDI[99];
          if (lVar22 != 0) {
            FUN_00d50b00();
          }
          pvVar21 = _pthread_getspecific(pVar24);
          if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
            if (*(longlong *)(lVar22 + 0x50) != 0) goto LAB_01551693;
LAB_015516d5:
            (**(code **)(*unaff_RDI + 0x678))();
LAB_015516e4:
            bVar4 = false;
          }
          else {
            if (*(longlong *)
                 (*(longlong *)(lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8) +
                 0x50) == 0) goto LAB_015516d5;
LAB_01551693:
            pvVar21 = _pthread_getspecific(pVar24);
            if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
              lVar16 = *(longlong *)(lVar22 + 0x48);
            }
            else {
              lVar16 = *(longlong *)
                        (*(longlong *)
                          (lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8) + 0x48);
            }
            if (lVar16 == 0) goto LAB_015516d5;
            if (0.0 <= dVar43) {
              pvVar21 = _pthread_getspecific(pVar24);
              lVar16 = lVar22;
              if ((pvVar21 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                lVar16 = *(longlong *)
                          (lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8);
              }
              lVar17 = *(longlong *)(lVar16 + 0x48);
              pvVar21 = _pthread_getspecific(pVar24);
              if (pvVar21 != (void *)0x0) {
                lVar17 = *(longlong *)(lVar16 + 0x48);
                lVar16 = FUN_00e8b990();
                if (lVar16 != 0) {
                  lVar17 = *(longlong *)
                            (lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
                }
              }
              dVar36 = *(double *)(lVar17 + 0xe8) - local_860;
              uVar13 = 0;
              if (dVar36 <= DAT_02390448) {
LAB_01551ea8:
                if (dVar36 < DAT_0241b698) {
LAB_01551eb6:
                  *(undefined1 *)((longlong)unaff_RDI + 0x25f) = 1;
                }
                goto LAB_01551ebe;
              }
              if (*(double *)(lVar17 + 0xe8) < dVar35) {
                if ((dVar40 != DAT_02390448) || (NAN(dVar40) || NAN(DAT_02390448))) {
                  uVar13 = (uint)(dVar36 / dVar40 + DAT_023942d0);
                  goto LAB_01551ea8;
                }
              }
              goto LAB_015516e4;
            }
            pvVar21 = _pthread_getspecific(pVar24);
            lVar16 = lVar22;
            if ((pvVar21 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              lVar16 = *(longlong *)(lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8)
              ;
            }
            lVar17 = *(longlong *)(lVar16 + 0x48);
            pvVar21 = _pthread_getspecific(pVar24);
            if (pvVar21 != (void *)0x0) {
              lVar17 = *(longlong *)(lVar16 + 0x48);
              lVar16 = FUN_00e8b990();
              if (lVar16 != 0) {
                lVar17 = *(longlong *)
                          (lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
              }
            }
            dVar36 = *(double *)(lVar17 + 0xe8);
            pvVar21 = _pthread_getspecific(pVar24);
            lVar16 = lVar22;
            if ((pvVar21 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              lVar16 = *(longlong *)(lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8)
              ;
            }
            lVar17 = *(longlong *)(lVar16 + 0x48);
            pvVar21 = _pthread_getspecific(pVar24);
            if (pvVar21 != (void *)0x0) {
              lVar17 = *(longlong *)(lVar16 + 0x48);
              lVar16 = FUN_00e8b990();
              if (lVar16 != 0) {
                lVar17 = *(longlong *)
                          (lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
              }
            }
            dVar36 = dVar36 + *(double *)(lVar17 + 0xf0);
            dVar41 = dVar36 - local_860;
            uVar13 = 0;
            if (dVar41 < 0.0) {
              if (dVar35 < dVar36) {
                if ((dVar40 != DAT_02390448) || (NAN(dVar40) || NAN(DAT_02390448))) {
                  uVar13 = (uint)(dVar41 / dVar40 + DAT_023942d0);
                  goto LAB_01551fa8;
                }
              }
              goto LAB_015516e4;
            }
LAB_01551fa8:
            if (_DAT_02391038 < dVar41) goto LAB_01551eb6;
LAB_01551ebe:
            if (0 < (int)uVar13) {
              if (local_850 - uVar13 == 0 || local_850 < (int)uVar13) goto LAB_015516e4;
              if (0 < (int)uVar10) {
                pVar24 = uVar13;
                if (uVar10 < 4) {
                  uVar20 = 0;
                }
                else {
                  if (uVar14 - 4 < 0xc) {
                    lVar16 = 0;
                  }
                  else {
                    lVar16 = 0;
                    lVar17 = -(uVar15 & 0xfffffffffffffffc);
                    do {
                      lVar18 = (ulonglong)uVar13 * 4;
                      lVar42 = (ulonglong)uVar13 * 4;
                      local_838[lVar16] = local_838[lVar16] + lVar18;
                      local_838[lVar16 + 1] = local_838[lVar16 + 1] + lVar42;
                      local_838[lVar16 + 2] = local_838[lVar16 + 2] + lVar18;
                      local_838[lVar16 + 3] = local_838[lVar16 + 3] + lVar42;
                      local_838[lVar16 + 4] = local_838[lVar16 + 4] + lVar18;
                      local_838[lVar16 + 5] = local_838[lVar16 + 5] + lVar42;
                      local_838[lVar16 + 6] = local_838[lVar16 + 6] + lVar18;
                      local_838[lVar16 + 7] = local_838[lVar16 + 7] + lVar42;
                      local_838[lVar16 + 8] = local_838[lVar16 + 8] + lVar18;
                      local_838[lVar16 + 9] = local_838[lVar16 + 9] + lVar42;
                      local_838[lVar16 + 10] = local_838[lVar16 + 10] + lVar18;
                      local_838[lVar16 + 0xb] = local_838[lVar16 + 0xb] + lVar42;
                      auVar44._0_8_ = alStack_7d8[lVar16] + lVar18;
                      auVar44._8_8_ = alStack_7d8[lVar16 + 1] + lVar42;
                      *(undefined1 (*) [16])(alStack_7d8 + lVar16) = auVar44;
                      alStack_7d8[lVar16 + 2] = lVar18 + alStack_7d8[lVar16 + 2];
                      alStack_7d8[lVar16 + 3] = lVar42 + alStack_7d8[lVar16 + 3];
                      lVar16 = lVar16 + 0x10;
                      lVar17 = lVar17 + 4;
                    } while (lVar17 != 0);
                  }
                  if (uVar25 != 0) {
                    lVar16 = lVar16 * 8;
                    uVar20 = 0;
                    do {
                      plVar19 = (longlong *)((longlong)local_838 + uVar20 + lVar16);
                      auVar45._0_8_ = *plVar19 + (ulonglong)uVar13 * 4;
                      auVar45._8_8_ = plVar19[1] + (ulonglong)uVar13 * 4;
                      plVar19 = (longlong *)((longlong)local_838 + uVar20 + lVar16 + -0x828 + 0x838)
                      ;
                      lVar17 = *plVar19;
                      lVar18 = plVar19[1];
                      *(undefined1 (*) [16])((longlong)local_838 + uVar20 + lVar16) = auVar45;
                      plVar19 = (longlong *)((longlong)local_838 + uVar20 + lVar16 + -0x828 + 0x838)
                      ;
                      *plVar19 = (ulonglong)uVar13 * 4 + lVar17;
                      plVar19[1] = (ulonglong)uVar13 * 4 + lVar18;
                      uVar20 = uVar20 + 0x20;
                    } while (uVar26 != uVar20);
                  }
                  uVar20 = uVar14;
                  if (uVar14 == uVar29) goto LAB_01552739;
                }
                do {
                  local_838[uVar20] = local_838[uVar20] + (ulonglong)uVar13 * 4;
                  uVar20 = uVar20 + 1;
                } while (uVar29 != uVar20);
              }
LAB_01552739:
              local_860 = local_860 + (double)(int)uVar13 * dVar40;
              local_850 = local_850 - uVar13;
            }
            unaff_RDI[100] = 0;
            *(undefined4 *)(unaff_RDI[0x23] + 0x18) = 0xffffffff;
            lVar16 = unaff_RDI[0x1d];
            bVar4 = true;
            if (lVar16 != lVar22) {
              if (lVar22 != 0) {
                FUN_00d50b00();
              }
              unaff_RDI[0x1d] = lVar22;
              if (lVar16 != 0) {
                FUN_00d50b20();
              }
            }
          }
          if (lVar22 != 0) {
            FUN_00d50b20();
          }
          if (!bVar4) {
            if (!bVar7) goto LAB_01552914;
            goto LAB_0155290a;
          }
          lVar22 = unaff_RDI[0x1d];
        }
        pvVar21 = _pthread_getspecific(pVar24);
        if (pvVar21 != (void *)0x0) {
          lVar22 = unaff_RDI[0x1d];
          lVar16 = FUN_00e8b990();
          if (lVar16 != 0) {
            lVar22 = *(longlong *)(lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
          }
        }
        lVar22 = *(longlong *)(lVar22 + 0x48);
        if (lVar22 == lVar30) {
          lVar16 = lVar30;
          bVar4 = bVar6;
          if ((!bVar6) && (lVar22 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar22 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          lVar16 = lVar22;
          if ((bVar6) && (lVar30 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar6 = bVar4;
        lVar30 = lVar16;
        lVar22 = unaff_RDI[0x1d];
        pvVar21 = _pthread_getspecific(pVar24);
        if (pvVar21 != (void *)0x0) {
          lVar22 = unaff_RDI[0x1d];
          lVar16 = FUN_00e8b990();
          if (lVar16 != 0) {
            lVar22 = *(longlong *)(lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
          }
        }
        if ((*(longlong *)(lVar22 + 0x50) == 0) || (lVar30 == 0)) {
          (**(code **)(*unaff_RDI + 0x678))();
          break;
        }
        lVar22 = unaff_RDI[0x1d];
        pvVar21 = _pthread_getspecific(pVar24);
        if (pvVar21 != (void *)0x0) {
          lVar22 = unaff_RDI[0x1d];
          lVar16 = FUN_00e8b990();
          if (lVar16 != 0) {
            lVar22 = *(longlong *)(lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
          }
        }
        lVar22 = *(longlong *)(lVar22 + 0x50);
        if (lVar22 != 0) {
          FUN_00d50b00();
        }
        pvVar21 = _pthread_getspecific(pVar24);
        if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
          if (*(longlong *)(lVar22 + 0x40) != 0) goto LAB_0155188e;
LAB_01551950:
          (**(code **)(*unaff_RDI + 0x678))();
          bVar5 = false;
          bVar4 = false;
        }
        else {
          if (*(longlong *)
               (*(longlong *)(lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8) + 0x40
               ) == 0) goto LAB_01551950;
LAB_0155188e:
          pvVar21 = _pthread_getspecific(pVar24);
          lVar16 = lVar22;
          if ((pvVar21 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            lVar16 = *(longlong *)(lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8);
          }
          lVar17 = *(longlong *)(lVar16 + 0x40);
          pvVar21 = _pthread_getspecific(pVar24);
          if (pvVar21 != (void *)0x0) {
            lVar17 = *(longlong *)(lVar16 + 0x40);
            lVar16 = FUN_00e8b990();
            if (lVar16 != 0) {
              lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8)
              ;
            }
          }
          if (*(longlong *)(lVar17 + 0x60) == 0) goto LAB_01551950;
          pvVar21 = _pthread_getspecific(pVar24);
          if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
            local_868 = *(float *)(lVar30 + 0xf8);
            if (!NAN(local_868)) goto LAB_01551988;
          }
          else {
            local_868 = *(float *)(*(longlong *)
                                    (lVar30 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8)
                                  + 0xf8);
            if (!NAN(local_868) && !NAN(local_868)) {
LAB_01551988:
              pvVar21 = _pthread_getspecific(pVar24);
              if (pvVar21 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01264240();
              if (local_888 == '\0') {
                if (local_890 != (longlong *)0x0) {
                  FUN_00d50b00();
                  goto LAB_01551a0d;
                }
              }
              else if (local_890 != (longlong *)0x0) {
LAB_01551a0d:
                pvVar21 = _pthread_getspecific(pVar24);
                if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
                  lVar16 = local_890[0x2d];
                }
                else {
                  lVar16 = *(longlong *)
                            (local_890[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4] + 0x168);
                }
                if (lVar16 != 0) {
                  FUN_00d50b00();
                  pvVar21 = _pthread_getspecific(pVar24);
                  plVar19 = local_890;
                  if ((pvVar21 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                    plVar19 = (longlong *)local_890[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                  }
                  lVar17 = plVar19[0x17];
                  pvVar21 = _pthread_getspecific(pVar24);
                  plVar19 = local_890;
                  if ((pvVar21 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
                    plVar19 = (longlong *)local_890[(ulonglong)(*(uint *)(lVar18 + 0x154) & 1) + 4];
                  }
                  iVar2 = *(int *)((longlong)plVar19 + 0xbc);
                  fVar33 = (float)FUN_014b7610();
                  pVar24 = (pthread_key_t)(fVar33 / DAT_023942a8 + DAT_0239011c);
                  if ((int)pVar24 < 0) {
                    pVar24 = 0;
                  }
                  pVar28 = iVar2 - 1;
                  if ((int)pVar24 < iVar2) {
                    pVar28 = pVar24;
                  }
                  local_8b8 = (longlong)(int)(pVar28 * ((int)lVar17 * 8 + -4) | 2) * 4 +
                              *(longlong *)(lVar16 + 0x10);
                  FUN_00d50b20();
                  local_8a8 = (int)lVar17 * 8 + -8;
                }
                FUN_00d50b20();
              }
            }
          }
          pvVar21 = _pthread_getspecific(pVar24);
          if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
            lVar16 = *(longlong *)(lVar30 + 0x168);
          }
          else {
            lVar16 = *(longlong *)
                      (*(longlong *)(lVar30 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8)
                      + 0x168);
          }
          plVar19 = local_848;
          bVar8 = bVar7;
          if (lVar16 != 0) {
            pvVar21 = _pthread_getspecific(pVar24);
            if (pvVar21 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar21 = _pthread_getspecific(pVar24);
            if (pvVar21 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013eb530();
            if (local_890 == local_848) {
              if ((!bVar7) && (local_890 != (longlong *)0x0)) {
                bVar8 = true;
                if (local_888 != '\0') goto LAB_01552002;
                FUN_00d50b00();
                bVar8 = true;
              }
            }
            else {
              if (local_888 != '\0') {
                bVar8 = true;
                plVar19 = local_890;
                if ((bVar7) && (plVar19 = local_890, local_848 != (longlong *)0x0)) {
                  FUN_00d50b20();
                  plVar19 = local_890;
                }
                goto LAB_01552002;
              }
              if (local_890 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar8 = true;
              plVar19 = local_890;
              if ((bVar7) && (local_848 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_888 != '\0') && (local_890 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
LAB_01552002:
          local_848 = plVar19;
          pvVar21 = _pthread_getspecific(pVar24);
          if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
            local_878 = *(double *)(lVar30 + 0xe8);
            if (lVar23 != 0) goto LAB_015520f1;
LAB_01552057:
            lVar23 = unaff_RDI[0x23];
            *(undefined4 *)(lVar23 + 0xc) = 0x7fc00000;
            *(undefined4 *)((longlong)unaff_RDI + 0x134) = 0;
            if (*(char *)((longlong)unaff_RDI + 0x25f) != '\0') {
              fVar33 = DAT_02390124;
              if (local_848 != (longlong *)0x0) {
                pvVar21 = _pthread_getspecific(pVar24);
                plVar19 = local_848;
                if ((pvVar21 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
                  plVar19 = (longlong *)local_848[(ulonglong)(*(uint *)(lVar23 + 0x154) & 1) + 4];
                }
                dVar36 = 0.0;
                if (0.0 <= local_860 - local_878) {
                  dVar36 = local_860 - local_878;
                }
                dVar36 = (double)(**(code **)(*plVar19 + 0x3d8))(dVar36);
                fVar33 = (float)dVar36;
                lVar23 = unaff_RDI[0x23];
              }
              fVar32 = *(float *)((longlong)unaff_RDI + 0x26c);
              *(float *)(lVar23 + 0x10) =
                   (float)(~-(uint)(!NAN(fVar32) && !NAN(fVar32)) & (uint)fVar33 |
                          (uint)(fVar33 * fVar32) & -(uint)(!NAN(fVar32) && !NAN(fVar32))) / fVar31;
              *(undefined4 *)(lVar23 + 0xc) = 0;
              *(uint *)(lVar23 + 0x14) = uVar12;
              cVar1 = *(char *)((longlong)unaff_RDI + 0x25f);
              goto joined_r0x01552188;
            }
LAB_0155218a:
            if ((char)unaff_RDI[0x4c] == '\0') {
              *(undefined4 *)(unaff_RDI[0x23] + 0x14) = *(undefined4 *)((longlong)unaff_RDI + 0x134)
              ;
            }
          }
          else {
            local_878 = *(double *)
                         (*(longlong *)
                           (lVar30 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8) + 0xe8);
            if (lVar23 == 0) goto LAB_01552057;
LAB_015520f1:
            cVar1 = *(char *)((longlong)unaff_RDI + 0x25f);
joined_r0x01552188:
            if (cVar1 == '\0') goto LAB_0155218a;
          }
          *(undefined4 *)(unaff_RDI + 0x26) = 0;
          bVar5 = true;
          bVar4 = true;
          bVar9 = false;
          local_8e0 = dVar40;
          bVar7 = bVar8;
        }
        if (lVar22 != 0) {
          FUN_00d50b20();
          bVar4 = bVar5;
        }
        if (!bVar4) break;
      }
      uVar13 = *(uint *)(unaff_RDI + 0x26);
      if (uVar13 == 0) {
        uVar20 = unaff_RDI[0x23];
        uVar13 = *(int *)(uVar20 + 0x14) - *(int *)((longlong)unaff_RDI + 0x134);
        *(uint *)(uVar20 + 0x14) = uVar13;
        if ((uVar13 == 0) && (uVar13 = 0, (char)unaff_RDI[0x4c] == '\0')) {
          dVar36 = 0.0;
          if (0.0 <= local_860 - local_878) {
            dVar36 = local_860 - local_878;
          }
          uVar13 = uVar11;
          if (NAN(*(float *)(uVar20 + 0xc))) {
            if (local_848 != (longlong *)0x0) {
              pvVar21 = _pthread_getspecific((pthread_key_t)uVar20);
              plVar19 = local_848;
              if ((pvVar21 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
                plVar19 = (longlong *)local_848[(ulonglong)(*(uint *)(lVar23 + 0x154) & 1) + 4];
              }
              dVar41 = (double)(**(code **)(*plVar19 + 0x3d8))(dVar36,0);
              lVar23 = unaff_RDI[0x23];
              *(float *)(lVar23 + 0xc) = (float)dVar41;
              uVar20 = (ulonglong)uVar11;
              *(uint *)(lVar23 + 0x14) = uVar11;
              goto LAB_015524f9;
            }
            *(undefined4 *)(uVar20 + 0xc) = 0x3f800000;
            *(uint *)(uVar20 + 0x14) = uVar11;
            fVar33 = 0.0;
          }
          else {
            *(uint *)(uVar20 + 0x14) = uVar11;
            if (local_848 == (longlong *)0x0) {
              fVar33 = 0.0;
            }
            else {
LAB_015524f9:
              pvVar21 = _pthread_getspecific((pthread_key_t)uVar20);
              plVar19 = local_848;
              if ((pvVar21 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
                plVar19 = (longlong *)local_848[(ulonglong)(*(uint *)(lVar23 + 0x154) & 1) + 4];
              }
              dVar36 = (double)(**(code **)(*plVar19 + 0x3d0))(dVar36,local_8e0);
              fVar33 = *(float *)((longlong)unaff_RDI + 0x26c);
              uVar20 = unaff_RDI[0x23];
              fVar33 = ((float)(~-(uint)(!NAN(fVar33) && !NAN(fVar33)) & (uint)(float)dVar36 |
                               (uint)(fVar33 * (float)dVar36) &
                               -(uint)(!NAN(fVar33) && !NAN(fVar33))) - *(float *)(uVar20 + 0xc)) /
                       (float)(int)*(uint *)(uVar20 + 0x14);
              uVar13 = *(uint *)(uVar20 + 0x14);
            }
          }
          *(float *)(uVar20 + 0x10) = fVar33;
          *(undefined1 *)((longlong)unaff_RDI + 0x25f) = 0;
          *(uint *)((longlong)unaff_RDI + 0x134) = uVar13;
          *(uint *)(unaff_RDI + 0x26) = uVar13;
          lVar23 = unaff_RDI[0x1d];
        }
        else {
          *(uint *)((longlong)unaff_RDI + 0x134) = uVar13;
          *(uint *)(unaff_RDI + 0x26) = uVar13;
          lVar23 = unaff_RDI[0x1d];
        }
      }
      else {
        lVar23 = unaff_RDI[0x1d];
      }
      if ((lVar23 != 0) && (!NAN(local_868))) {
        fVar33 = (float)_exp2f(local_868 * DAT_023941f4);
        fVar33 = fVar33 * DAT_023941f8;
        dVar36 = (double)local_8a8;
        if (local_8b8 == 0) {
          dVar41 = ((double)unaff_RDI[100] / dVar36) * DAT_023d5998;
          auVar37._0_8_ = (double)_sin(dVar41 + dVar41);
          auVar37._8_8_ = extraout_XMM0_Qb_00;
          auVar38._4_12_ = auVar37._4_12_;
          auVar38._0_4_ = (float)auVar37._0_8_;
        }
        else {
          auVar38._0_8_ = FUN_00e838c0();
          auVar38._8_8_ = extraout_XMM0_Qb;
        }
        auVar39._4_12_ = auVar38._4_12_;
        auVar39._0_4_ = auVar38._0_4_ * *(float *)(unaff_RDI[0x23] + 0xc);
        fVar32 = (float)FUN_00bbc5a0(auVar39._0_8_);
        if (0 < (int)uVar10) {
          if (uVar10 == 1) {
            uVar20 = 0;
          }
          else {
            uVar20 = 0;
            do {
              pfVar3 = (float *)local_838[uVar20];
              *pfVar3 = *pfVar3 + fVar32;
              local_838[uVar20] = (longlong)(pfVar3 + 1);
              pfVar3 = (float *)local_838[uVar20 + 1];
              *pfVar3 = *pfVar3 + fVar32;
              local_838[uVar20 + 1] = (longlong)(pfVar3 + 1);
              uVar20 = uVar20 + 2;
            } while ((uVar10 & 0xfffffffe) != uVar20);
          }
          if ((uVar10 & 1) != 0) {
            pfVar3 = (float *)local_838[uVar20];
            *pfVar3 = fVar32 + *pfVar3;
            local_838[uVar20] = (longlong)(pfVar3 + 1);
          }
        }
        for (dVar41 = ((double)fVar33 / dVar34) * dVar36 + (double)unaff_RDI[100]; dVar36 <= dVar41;
            dVar41 = dVar41 - dVar36) {
        }
        unaff_RDI[100] = (longlong)dVar41;
        uVar13 = *(uint *)(unaff_RDI + 0x26);
      }
      uVar27 = unaff_RDI[0x23];
      fVar33 = *(float *)(uVar27 + 0x10) + *(float *)(uVar27 + 0xc);
      *(float *)(uVar27 + 0xc) = fVar33;
      *(uint *)(unaff_RDI + 0x26) = uVar13 - 1;
      if (((char)unaff_RDI[0x4c] != '\0') && (fVar33 <= 0.0)) {
        (**(code **)(*unaff_RDI + 0x678))();
        break;
      }
      pvVar21 = _pthread_getspecific((pthread_key_t)uVar27);
      lVar23 = lVar30;
      if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
        lVar23 = *(longlong *)(lVar30 + 0x20 + (ulonglong)(*(uint *)(lVar22 + 0x154) & 1) * 8);
      }
      local_860 = local_860 + dVar40;
      dVar36 = local_860 - local_878;
      if (((dVar36 <= 0.0) ||
          (*(double *)(lVar23 + 0xf0) <= dVar36 && dVar36 != *(double *)(lVar23 + 0xf0))) &&
         (*(undefined1 *)((longlong)unaff_RDI + 0x25e) = 1, (char)unaff_RDI[0x4c] == '\0')) {
        lVar23 = unaff_RDI[0x23];
        *(float *)(lVar23 + 0x10) = (float)(*(uint *)(lVar23 + 0xc) ^ _DAT_023945e0) / fVar31;
        uVar27 = (ulonglong)uVar12;
        *(uint *)(lVar23 + 0x14) = uVar12;
        *(undefined1 *)(unaff_RDI + 0x4c) = 1;
      }
      uVar20 = (ulonglong)(local_850 - 1U);
    } while (local_850 - 1U != 0);
    if (bVar7) {
LAB_0155290a:
      if (local_848 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
LAB_01552914:
    if ((bVar6) && (lVar30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




// ============================================================
// @01550b90 — 1809 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01550bec) */
/* WARNING: Removing unreachable block (ram,0x01550bf5) */
/* WARNING: Removing unreachable block (ram,0x01550c52) */
/* WARNING: Removing unreachable block (ram,0x01550c5b) */

longlong * FUN_01550b90(uint param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar20;
  undefined4 *puVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  float fVar26;
  ulonglong local_a0;
  longlong local_58;
  char local_50;
  
  local_a0 = (ulonglong)param_1;
  puVar17 = (undefined8 *)(ulonglong)param_2;
  iVar14 = param_2 * 8 + -4;
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  lVar4 = *(longlong *)(local_58 + 0x10);
  FUN_00e83120();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  puVar7 = (undefined4 *)FUN_00e83010();
  if (0 < (int)param_1) {
    puVar25 = *(undefined4 **)(*unaff_RSI + 0x10);
    lVar8 = (longlong)(int)(param_2 * 8 + -8);
    if ((int)param_2 < 3) {
      iVar15 = 2;
      uVar23 = 0;
      do {
        ___bzero();
        *puVar7 = puVar25[uVar23 * 2];
        puVar7[3] = puVar25[uVar23 * 2 + 1];
        puVar17 = (undefined8 *)(lVar4 + (longlong)iVar15 * 4);
        FUN_00e83640(lVar4,puVar17);
        fVar26 = (float)(**(code **)(DAT_02786500 + 0x10))();
        if (DAT_0239109c < fVar26) {
          (**(code **)(DAT_02786500 + 0x20))(DAT_0239109c / fVar26);
        }
        puVar17[-1] = *(undefined8 *)((longlong)puVar17 + lVar8 * 4 + -8);
        *(undefined8 *)((longlong)puVar17 + lVar8 * 4) = *puVar17;
        uVar23 = uVar23 + 1;
        iVar15 = iVar15 + iVar14;
      } while (local_a0 != uVar23);
    }
    else {
      puVar1 = (undefined8 *)(puVar7 + 2);
      iVar15 = param_2 - 1;
      uVar23 = (ulonglong)(param_2 - 3);
      if (param_2 - 3 < 7) {
        iVar22 = 2;
        do {
          ___bzero();
          puVar21 = puVar25 + 2;
          *puVar7 = *puVar25;
          puVar7[3] = puVar25[1];
          if (iVar15 == 2) {
            puVar9 = puVar21;
            puVar17 = puVar1;
            puVar21 = puVar25 + 1;
          }
          else {
            puVar7[5] = puVar25[2];
            puVar9 = puVar25 + 3;
            puVar17 = (undefined8 *)(puVar7 + 4);
            if (iVar15 != 3) {
              puVar7[7] = puVar25[3];
              puVar9 = puVar25 + 4;
              puVar17 = (undefined8 *)(puVar7 + 6);
              puVar21 = puVar25 + 3;
              if (iVar15 != 4) {
                puVar7[9] = puVar25[4];
                puVar9 = puVar25 + 5;
                puVar17 = (undefined8 *)(puVar7 + 8);
                puVar21 = puVar25 + 4;
                if (iVar15 != 5) {
                  puVar7[0xb] = puVar25[5];
                  puVar9 = puVar25 + 6;
                  puVar17 = (undefined8 *)(puVar7 + 10);
                  puVar21 = puVar25 + 5;
                  if (iVar15 != 6) {
                    puVar7[0xd] = puVar25[6];
                    puVar9 = puVar25 + 7;
                    puVar17 = (undefined8 *)(puVar7 + 0xc);
                    puVar21 = puVar25 + 6;
                    if (iVar15 != 7) {
                      puVar7[0xf] = puVar25[7];
                      puVar9 = puVar25 + 8;
                      puVar17 = (undefined8 *)(puVar7 + 0xe);
                      puVar21 = puVar25 + 7;
                    }
                  }
                }
              }
            }
          }
          *(undefined4 *)((longlong)puVar17 + 0xc) = *puVar9;
          puVar17 = (undefined8 *)(lVar4 + (longlong)iVar22 * 4);
          FUN_00e83640(lVar4,puVar17);
          fVar26 = (float)(**(code **)(DAT_02786500 + 0x10))();
          if (DAT_0239109c < fVar26) {
            (**(code **)(DAT_02786500 + 0x20))(DAT_0239109c / fVar26);
          }
          puVar25 = puVar21 + 2;
          puVar17[-1] = *(undefined8 *)((longlong)puVar17 + lVar8 * 4 + -8);
          *(undefined8 *)((longlong)puVar17 + lVar8 * 4) = *puVar17;
          iVar22 = iVar22 + iVar14;
          local_a0 = local_a0 - 1;
        } while (local_a0 != 0);
      }
      else {
        uVar24 = uVar23 + 1 & 0xfffffffffffffff8;
        uVar18 = 0;
        do {
          ___bzero();
          *puVar7 = *puVar25;
          puVar21 = puVar25 + 1;
          if ((puVar7 + 3 < puVar25 + uVar23 + 2) && (puVar21 < puVar7 + uVar23 * 2 + 4)) {
            puVar19 = puVar1;
            uVar16 = 1;
LAB_01551120:
            uVar20 = (param_2 - 2) - uVar16;
            if ((~uVar16 + param_2 & 7) != 0) {
              cVar13 = (char)uVar16;
              lVar12 = 0;
              puVar6 = puVar19;
              do {
                puVar17 = puVar6;
                lVar11 = lVar12;
                *(undefined4 *)((longlong)puVar19 + lVar11 * 2 + 4) =
                     *(undefined4 *)((longlong)puVar21 + lVar11);
                uVar16 = uVar16 + 1;
                lVar12 = lVar11 + 4;
                puVar6 = puVar17 + 1;
              } while (((byte)(((char)param_2 + '\a') - cVar13) & 7) << 2 != (int)lVar12);
              puVar25 = (undefined4 *)((longlong)puVar21 + lVar11);
              puVar19 = puVar17 + 1;
              puVar21 = (undefined4 *)((longlong)puVar21 + lVar12);
            }
            if (6 < uVar20) {
              iVar22 = iVar15 - uVar16;
              puVar17 = puVar19 + -1;
              do {
                puVar25 = puVar21;
                *(undefined4 *)((longlong)puVar17 + 0xc) = *puVar25;
                *(undefined4 *)((longlong)puVar17 + 0x14) = puVar25[1];
                *(undefined4 *)((longlong)puVar17 + 0x1c) = puVar25[2];
                *(undefined4 *)((longlong)puVar17 + 0x24) = puVar25[3];
                *(undefined4 *)((longlong)puVar17 + 0x2c) = puVar25[4];
                *(undefined4 *)((longlong)puVar17 + 0x34) = puVar25[5];
                *(undefined4 *)((longlong)puVar17 + 0x3c) = puVar25[6];
                *(undefined4 *)((longlong)puVar17 + 0x44) = puVar25[7];
                puVar21 = puVar25 + 8;
                puVar17 = puVar17 + 8;
                iVar22 = iVar22 + -8;
              } while (iVar22 != 0);
              puVar25 = puVar25 + 7;
            }
          }
          else {
            puVar21 = puVar21 + uVar24;
            uVar10 = 0;
            do {
              auVar2 = *(undefined1 (*) [16])(puVar25 + uVar10 + 1);
              auVar3 = *(undefined1 (*) [16])(puVar25 + uVar10 + 5);
              puVar7[uVar10 * 2 + 3] = auVar2._0_4_;
              uVar5 = extractps(auVar2,1);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 5) = uVar5;
              uVar5 = extractps(auVar2,2);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 7) = uVar5;
              uVar5 = extractps(auVar2,3);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 9) = uVar5;
              puVar7[uVar10 * 2 + 0xb] = auVar3._0_4_;
              uVar5 = extractps(auVar3,1);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 0xd) = uVar5;
              uVar5 = extractps(auVar3,2);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 0xf) = uVar5;
              uVar5 = extractps(auVar3,3);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 0x11) = uVar5;
              uVar10 = uVar10 + 8;
            } while (uVar24 != uVar10);
            puVar19 = puVar1 + uVar24;
            uVar16 = (int)uVar24 + 1;
            if (uVar23 + 1 != uVar24) goto LAB_01551120;
            puVar25 = puVar25 + uVar24;
            puVar17 = (undefined8 *)(puVar7 + uVar24 * 2);
          }
          *(undefined4 *)((longlong)puVar17 + 0xc) = *puVar21;
          puVar19 = (undefined8 *)(lVar4 + (longlong)(int)(iVar14 * (int)uVar18 | 2) * 4);
          puVar17 = puVar19;
          FUN_00e83640();
          fVar26 = (float)(**(code **)(DAT_02786500 + 0x10))();
          if (DAT_0239109c < fVar26) {
            (**(code **)(DAT_02786500 + 0x20))(DAT_0239109c / fVar26);
          }
          puVar25 = puVar25 + 2;
          puVar19[-1] = *(undefined8 *)((longlong)puVar19 + lVar8 * 4 + -8);
          *(undefined8 *)((longlong)puVar19 + lVar8 * 4) = *puVar19;
          uVar18 = uVar18 + 1;
        } while (uVar18 != local_a0);
      }
    }
  }
  FUN_00e83070();
  *unaff_RDI = local_58;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01553290 — 1225 bytes
// ============================================================

void FUN_01553290(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *unaff_RDI;
  bool bVar7;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if ((DAT_028ad180 == (undefined8 *)0x0) || (DAT_028ad189 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ad180 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028ad180 == puVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar7 = DAT_028ad180 != (undefined8 *)0x0;
        DAT_028ad180 = puVar5;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      if (DAT_028ad188 == '\0') {
        DAT_028ad188 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f60;
      if (DAT_027c6f60 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0277cf70;
      if (DAT_0277cf70 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f68;
      if (DAT_027c6f68 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027815c0;
      if (DAT_027815c0 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f70;
      if (DAT_027c6f70 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02775668;
      if (DAT_02775668 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f78;
      if (DAT_027c6f78 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028ad189 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ad189 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00c7e7b0();
  lVar3 = local_50;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_40 = (longlong *)lVar3;
  local_38 = '\0';
  cVar4 = FUN_00d23d70();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    lVar3 = DAT_027c6f80;
    local_60 = *param_2;
    local_58 = '\0';
    if (DAT_027c6f80 != 0) {
      FUN_00d50b00();
    }
    local_40 = (longlong *)lVar3;
    local_38 = '\0';
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    local_40 = plVar6;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    *unaff_RDI = plVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    local_80 = *param_2;
    local_78 = '\0';
    local_70 = *param_1;
    local_68 = '\0';
    FUN_00dacb30(&local_70,&local_80);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @0154f1a0 — 1134 bytes
// str: ""MUVoiceMapperVoiceOption""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0154f1a0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_025ef878;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
  if (DAT_027c4670 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c45c0 = FUN_00d4fe50();
      _DAT_027c45a8 = "MUVoiceMapperVoiceOption";
      _DAT_027c45b0 = 0x28;
      _DAT_027c45b8 = FUN_0154f040;
      _DAT_027c45c8 = 0;
      uRam00000000027c45d0 = 0;
      _DAT_027c45d8 = 0;
      uRam00000000027c45e0 = 0;
      _DAT_027c45e8 = 0;
      uRam00000000027c45f0 = 0;
      _DAT_027c45f8 = 0;
      uRam00000000027c4600 = 0;
      _DAT_027c4608 = 0;
      uRam00000000027c4610 = 0;
      _DAT_027c4618 = 0;
      uRam00000000027c4620 = 0;
      _DAT_027c4628 = 0;
      uRam00000000027c4630 = 0;
      _DAT_027c4638 = 0;
      uRam00000000027c4640 = 0;
      _DAT_027c4648 = 0;
      uRam00000000027c4650 = 0;
      _DAT_027c4658 = 0;
      _uRam00000000027c4660 = 0;
      _DAT_027c4668 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c4663 == '\0') {
    FUN_0154f640();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 2) = 0;
  if (DAT_027c4670 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c45c0 = FUN_00d4fe50();
      _DAT_027c45a8 = "MUVoiceMapperVoiceOption";
      _DAT_027c45b0 = 0x28;
      _DAT_027c45b8 = FUN_0154f040;
      _DAT_027c45c8 = 0;
      uRam00000000027c45d0 = 0;
      _DAT_027c45d8 = 0;
      uRam00000000027c45e0 = 0;
      _DAT_027c45e8 = 0;
      uRam00000000027c45f0 = 0;
      _DAT_027c45f8 = 0;
      uRam00000000027c4600 = 0;
      _DAT_027c4608 = 0;
      uRam00000000027c4610 = 0;
      _DAT_027c4618 = 0;
      uRam00000000027c4620 = 0;
      _DAT_027c4628 = 0;
      uRam00000000027c4630 = 0;
      _DAT_027c4638 = 0;
      uRam00000000027c4640 = 0;
      _DAT_027c4648 = 0;
      uRam00000000027c4650 = 0;
      _DAT_027c4658 = 0;
      _uRam00000000027c4660 = 0;
      _DAT_027c4668 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c4663 == '\0') {
    FUN_0154f7b0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = 0;
  if (DAT_027c4670 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c45c0 = FUN_00d4fe50();
      _DAT_027c45a8 = "MUVoiceMapperVoiceOption";
      _DAT_027c45b0 = 0x28;
      _DAT_027c45b8 = FUN_0154f040;
      _DAT_027c45c8 = 0;
      uRam00000000027c45d0 = 0;
      _DAT_027c45d8 = 0;
      uRam00000000027c45e0 = 0;
      _DAT_027c45e8 = 0;
      uRam00000000027c45f0 = 0;
      _DAT_027c45f8 = 0;
      uRam00000000027c4600 = 0;
      _DAT_027c4608 = 0;
      uRam00000000027c4610 = 0;
      _DAT_027c4618 = 0;
      uRam00000000027c4620 = 0;
      _DAT_027c4628 = 0;
      uRam00000000027c4630 = 0;
      _DAT_027c4638 = 0;
      uRam00000000027c4640 = 0;
      _DAT_027c4648 = 0;
      uRam00000000027c4650 = 0;
      _DAT_027c4658 = 0;
      _uRam00000000027c4660 = 0;
      _DAT_027c4668 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c4663 == '\0') {
    FUN_0154f920();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 3) = 0;
  if (DAT_027c4670 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c45c0 = FUN_00d4fe50();
      _DAT_027c45a8 = "MUVoiceMapperVoiceOption";
      _DAT_027c45b0 = 0x28;
      _DAT_027c45b8 = FUN_0154f040;
      _DAT_027c45c8 = 0;
      uRam00000000027c45d0 = 0;
      _DAT_027c45d8 = 0;
      uRam00000000027c45e0 = 0;
      _DAT_027c45e8 = 0;
      uRam00000000027c45f0 = 0;
      _DAT_027c45f8 = 0;
      uRam00000000027c4600 = 0;
      _DAT_027c4608 = 0;
      uRam00000000027c4610 = 0;
      _DAT_027c4618 = 0;
      uRam00000000027c4620 = 0;
      _DAT_027c4628 = 0;
      uRam00000000027c4630 = 0;
      _DAT_027c4638 = 0;
      uRam00000000027c4640 = 0;
      _DAT_027c4648 = 0;
      uRam00000000027c4650 = 0;
      _DAT_027c4658 = 0;
      _uRam00000000027c4660 = 0;
      _DAT_027c4668 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c4663 == '\0') {
    FUN_0154fa90();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = 0;
  if (DAT_027c4670 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c45c0 = FUN_00d4fe50();
      _DAT_027c45a8 = "MUVoiceMapperVoiceOption";
      _DAT_027c45b0 = 0x28;
      _DAT_027c45b8 = FUN_0154f040;
      _DAT_027c45c8 = 0;
      uRam00000000027c45d0 = 0;
      _DAT_027c45d8 = 0;
      uRam00000000027c45e0 = 0;
      _DAT_027c45e8 = 0;
      uRam00000000027c45f0 = 0;
      _DAT_027c45f8 = 0;
      uRam00000000027c4600 = 0;
      _DAT_027c4608 = 0;
      uRam00000000027c4610 = 0;
      _DAT_027c4618 = 0;
      uRam00000000027c4620 = 0;
      _DAT_027c4628 = 0;
      uRam00000000027c4630 = 0;
      _DAT_027c4638 = 0;
      uRam00000000027c4640 = 0;
      _DAT_027c4648 = 0;
      uRam00000000027c4650 = 0;
      _DAT_027c4658 = 0;
      _uRam00000000027c4660 = 0;
      _DAT_027c4668 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c4663 == '\0') {
    FUN_0154fc00();
    FUN_00e87980();
  }
  FUN_0154fd70();
  return;
}




// ============================================================
// @01552cd0 — 524 bytes
// ============================================================

void FUN_01552cd0(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  plVar4 = DAT_028ad170;
  if ((DAT_028ad170 == (longlong *)0x0) || (DAT_028ad179 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ad170 == (longlong *)0x0) {
      plVar4 = (longlong *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar4 + 0x18))();
      if (DAT_028ad170 == plVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028ad170 != (longlong *)0x0;
        DAT_028ad170 = plVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028ad178 == '\0') {
        DAT_028ad178 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f40;
      if (DAT_027c6f40 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1910();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f48;
      if (DAT_027c6f48 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1690();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f50;
      if (DAT_027c6f50 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f58;
      if (DAT_027c6f58 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1600();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028ad179 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ad179 = '\x01';
      FUN_00e8cb70();
    }
    plVar4 = DAT_028ad170;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_01552ec2;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01552ec2:
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



