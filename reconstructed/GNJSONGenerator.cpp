// Reconstructed implementation of GNJSONGenerator
// From MikeCore binary — reverse-engineered pseudocode

#include "GNJSONGenerator.h"

// ============================================================
// @00e4d840 — 846 bytes
// str: ""\t""
// str: ""function""
// str: ""file""
// str: ""/Users/celemony/hudson/workspace/Melodyne_10_mac/AppWork/GNFoundation/Source/GNJSONGenerator.cpp""
// str: ""line""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00e4d840(undefined4 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  char *pcVar6;
  char *unaff_RBX;
  ulonglong uVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar8;
  undefined *puVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined *local_a8;
  char local_a0 [8];
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  undefined4 local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  int local_44;
  undefined *local_40;
  char local_38 [8];
  
  lVar1 = DAT_02786b60;
  if (*unaff_RSI == 0) {
    if (DAT_02786b60 != 0) {
      param_1 = FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    local_a0[0] = '\x06';
    local_a0[1] = '\0';
    local_a0[2] = '\0';
    local_a0[3] = '\0';
    local_98 = "function";
    local_90 = "bool GNJSONGenerator::appendAsString(GNArg<GNObject>, GNInt)";
    local_88 = "file";
    local_80 = 
    "/Users/celemony/hudson/workspace/Melodyne_10_mac/AppWork/GNFoundation/Source/GNJSONGenerator.cpp"
    ;
    local_78 = "line";
    local_a8 = &DAT_0258d950;
    local_70 = 0xd4;
    FUN_00e97360(param_1,&local_a8);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    uVar7 = 0;
  }
  else {
    FUN_00d4efa0();
    pcVar6 = local_38;
    if (local_a0[0] != '\0') {
      pcVar6 = local_a0;
    }
    local_38[0] = local_a0[0];
    *pcVar6 = '\0';
    if ((local_a0[0] != '\0') && (local_a8 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    puVar9 = local_a8;
    if ((DAT_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
      local_40 = local_a8;
      _DAT_026d5e58 = FUN_00d4fe50();
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e60 = 0;
      uRam00000000026d5e68 = 0;
      _DAT_026d5e70 = 0;
      uRam00000000026d5e78 = 0;
      _DAT_026d5e80 = 0;
      uRam00000000026d5e88 = 0;
      _DAT_026d5e90 = 0;
      uRam00000000026d5e98 = 0;
      _DAT_026d5ea0 = 0;
      uRam00000000026d5ea8 = 0;
      _DAT_026d5eb0 = 0;
      uRam00000000026d5eb8 = 0;
      _DAT_026d5ec0 = 0;
      uRam00000000026d5ec8 = 0;
      _DAT_026d5ed0 = 0;
      uRam00000000026d5ed8 = 0;
      _DAT_026d5ee0 = 0;
      uRam00000000026d5ee8 = 0;
      _DAT_026d5ef0 = 0;
      uRam00000000026d5ef8 = 0;
      _DAT_026d5f00 = 0;
      ___cxa_guard_release();
      puVar9 = local_40;
    }
    puVar5 = (undefined *)FUN_00e86210();
    if (puVar5 == puVar9) {
      uVar3 = FUN_00e4ca00(extraout_XMM0_Da,param_2);
      uVar7 = (ulonglong)uVar3;
    }
    else {
      FUN_00053ac0();
      puVar5 = (undefined *)FUN_00e86210();
      if (puVar5 == puVar9) {
        if (param_2 < 0) {
          param_2 = -param_2;
        }
        else if ((char)unaff_RDI[3] != '\0') {
          if (param_2 == 0) {
            param_2 = 0;
          }
          else {
            unaff_RBX = "\t";
            local_44 = param_2;
            local_40 = puVar9;
            iVar8 = param_2;
            do {
              uVar4 = FUN_00e7dde0();
              FUN_00d8db70(extraout_XMM0_Da_01,uVar4);
              iVar8 = iVar8 + -1;
              puVar9 = local_40;
              param_2 = local_44;
            } while (iVar8 != 0);
          }
        }
        uVar4 = FUN_00d8db40();
        cVar2 = FUN_00e4cc70(uVar4,param_2);
        if (cVar2 == '\0') {
          uVar7 = 0;
        }
        else {
          uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
          FUN_00d8db40();
        }
      }
      else {
        local_58 = *unaff_RSI;
        local_50 = '\0';
        uVar3 = (**(code **)(*unaff_RDI + 0x390))(extraout_XMM0_Da_00,param_2);
        uVar7 = (ulonglong)uVar3;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((local_38[0] != '\0') && (puVar9 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
  }
  return uVar7 & 0xffffffff;
}




// ============================================================
// @00e4cf10 — 830 bytes
// str: ""\t""
// str: "",\n""
// str: ""{\n""
// str: ""function""
// str: ""file""
// ============================================================

undefined8 FUN_00e4cf10(undefined8 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar4;
  longlong local_a8;
  undefined1 local_a0;
  undefined *local_90;
  uint local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = DAT_02786b48;
  if (*unaff_RSI == 0) {
    if (DAT_02786b48 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar1;
    local_48 = '\x01';
    local_88 = 6;
    local_80 = "function";
    local_78 = "bool GNJSONGenerator::appendDictionary(GNArg<GNDictionary<>>, GNInt)";
    local_70 = "file";
    local_68 = 
    "/Users/celemony/hudson/workspace/Melodyne_10_mac/AppWork/GNFoundation/Source/GNJSONGenerator.cpp"
    ;
    local_60 = "line";
    local_90 = &DAT_0258d8a8;
    local_58 = 0x6e;
    FUN_00e97360();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
LAB_00e4d1db:
    uVar3 = 0;
  }
  else {
    if (param_2 < 0) {
      param_2 = -param_2;
    }
    else if (*(char *)(unaff_RDI + 0x18) != '\0') {
      iVar4 = param_2;
      if (param_2 == 0) {
        param_2 = 0;
      }
      else {
        do {
          FUN_00e7dde0();
          FUN_00d8db70();
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    FUN_00d8db40();
    if (*unaff_RSI != 0) {
      local_88 = local_88 & 0xffffff00;
      local_90 = (undefined *)0x0;
      local_80 = *(char **)(*unaff_RSI + 0x10);
      local_78 = (char *)((ulonglong)local_78 & 0xffffffff00000000);
      if (0 < *(int *)((longlong)local_80 + 0xc)) {
        iVar4 = 0;
        do {
          local_90 = *(undefined **)(*(longlong *)((longlong)local_80 + 0x10) + (longlong)iVar4 * 8)
          ;
          FUN_012d5b70((longlong)iVar4,&local_90);
          lVar1 = local_40;
          if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_a8 = lVar1;
          local_a0 = 0;
          cVar2 = FUN_00e4d6e0(param_2 + 1,&local_a8);
          if (cVar2 == '\0') {
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if (((char)local_88 != '\0') && (local_90 != (undefined *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00e4d1db;
          }
          if ((int)local_78 == *(int *)((longlong)local_80 + 0xc) + -1) {
            if (*(char *)(unaff_RDI + 0x18) != '\0') {
              FUN_00d8db40();
            }
          }
          else if (*(char *)(unaff_RDI + 0x18) == '\0') {
            FUN_00d8db40();
          }
          else {
            FUN_00d8db40();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          iVar4 = (int)local_78 + 1;
          local_78 = (char *)CONCAT44(local_78._4_4_,iVar4);
        } while (iVar4 < *(int *)((longlong)local_80 + 0xc));
        if (((char)local_88 != '\0') && (local_90 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((-1 < param_2) && (*(char *)(unaff_RDI + 0x18) != '\0')) {
      for (; param_2 != 0; param_2 = param_2 + -1) {
        FUN_00e7dde0();
        FUN_00d8db70();
      }
    }
    FUN_00d8db40();
    uVar3 = 1;
  }
  return uVar3;
}




// ============================================================
// @00e4d310 — 645 bytes
// str: ""\t""
// str: "",\n""
// str: ""function""
// str: ""file""
// str: ""/Users/celemony/hudson/workspace/Melodyne_10_mac/AppWork/GNFoundation/Source/GNJSONGenerator.cpp""
// ============================================================

undefined8 FUN_00e4d310(undefined8 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar4;
  
  lVar1 = DAT_02786b58;
  if (*unaff_RSI == 0) {
    if (DAT_02786b58 != 0) {
      FUN_00d50b00();
    }
    FUN_00e97360();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
LAB_00e4d58c:
    uVar3 = 0;
  }
  else {
    if (param_2 < 0) {
      param_2 = -param_2;
    }
    else if (*(char *)(unaff_RDI + 0x18) != '\0') {
      iVar4 = param_2;
      if (param_2 == 0) {
        param_2 = 0;
      }
      else {
        do {
          FUN_00e7dde0();
          FUN_00d8db70();
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    FUN_00d8db40();
    lVar1 = *unaff_RSI;
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar4 = 0;
        do {
          cVar2 = FUN_00e4c4b0();
          if (cVar2 == '\0') {
            FUN_00083b20();
            goto LAB_00e4d58c;
          }
          if (iVar4 == *(int *)(lVar1 + 0xc) + -1) {
            if (*(char *)(unaff_RDI + 0x18) != '\0') {
              FUN_00d8db40();
            }
          }
          else if (*(char *)(unaff_RDI + 0x18) == '\0') {
            FUN_00d8db40();
          }
          else {
            FUN_00d8db40();
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(lVar1 + 0xc));
      }
      FUN_00083b20();
    }
    if ((-1 < param_2) && (*(char *)(unaff_RDI + 0x18) != '\0')) {
      for (; param_2 != 0; param_2 = param_2 + -1) {
        FUN_00e7dde0();
        FUN_00d8db70();
      }
    }
    FUN_00d8db40();
    uVar3 = 1;
  }
  return uVar3;
}




// ============================================================
// @00e4cc70 — 529 bytes
// str: ""\t""
// str: ""function""
// str: ""file""
// str: ""/Users/celemony/hudson/workspace/Melodyne_10_mac/AppWork/GNFoundation/Source/GNJSONGenerator.cpp""
// str: ""line""
// ============================================================

undefined8 FUN_00e4cc70(undefined8 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined *local_90;
  uint local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  undefined *local_40;
  char local_38;
  
  lVar1 = DAT_02786b70;
  if (*unaff_RSI == 0) {
    if (DAT_02786b70 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar1;
    local_48 = '\x01';
    local_88 = 6;
    local_80 = "function";
    local_78 = "bool GNJSONGenerator::appendNumber(GNArg<GNNumber>, GNInt)";
    local_70 = "file";
    local_68 = 
    "/Users/celemony/hudson/workspace/Melodyne_10_mac/AppWork/GNFoundation/Source/GNJSONGenerator.cpp"
    ;
    local_60 = "line";
    local_90 = &DAT_0258d9c0;
    local_58 = 0x109;
    FUN_00e97360(param_1,&local_90);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    return 0;
  }
  cVar2 = FUN_00dd6e50();
  if (cVar2 == 'f') {
    FUN_00d459e0();
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_RDI + 0x370);
  }
  else {
    if (cVar2 != 'd') {
      if (cVar2 == 'b') {
        uVar4 = FUN_00e4dd60();
        return uVar4;
      }
      if ((-1 < param_2) && ((char)unaff_RDI[3] != '\0')) {
        for (; param_2 != 0; param_2 = param_2 + -1) {
          uVar3 = FUN_00e7dde0();
          FUN_00d8db70(param_1,uVar3);
        }
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
      local_40 = local_90;
      local_38 = 0;
      if ((char)local_88 == '\0') {
        if (local_90 != (undefined *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = local_88 & 0xffffff00;
      }
      local_38 = '\x01';
      FUN_00d8dbf0();
      if ((local_38 != '\0') && (local_40 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_88 != '\0') && (local_90 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      return 1;
    }
    FUN_00d45bc0();
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_RDI + 0x378);
  }
                    /* WARNING: Could not recover jumptable at 0x00e4cdad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)();
  return uVar4;
}



