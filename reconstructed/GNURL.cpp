// Reconstructed implementation of GNURL
// From MikeCore binary — reverse-engineered pseudocode

#include "GNURL.h"

// ============================================================
// @00dba5e0 — 2256 bytes
// ============================================================

void FUN_00dba5e0(void)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong lVar6;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  longlong local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar4 = *(longlong *)(unaff_RSI + 0x20);
  if (lVar4 != 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    FUN_00d50b00();
LAB_00dba611:
    *unaff_RDI = lVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  lVar4 = *(longlong *)(unaff_RSI + 0x20);
  *(longlong **)(unaff_RSI + 0x20) = plVar2;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = DAT_027837c0;
  if (DAT_027837c0 != 0) {
    FUN_00d50b00();
  }
  iVar1 = FUN_00d90650();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (iVar1 == -1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar4 = *(longlong *)(unaff_RSI + 0x20);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    goto LAB_00dba611;
  }
  FUN_00d8f140();
  lVar4 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = DAT_02704060;
  if (DAT_02704060 != 0) {
    FUN_00d50b00();
  }
  iVar1 = FUN_00d90650();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = lVar4;
  if (iVar1 != -1) {
    FUN_00d97ce0();
    lVar6 = local_48;
    lVar5 = lVar4;
    if (lVar4 != local_48) {
      if (local_40[0] != '\0') {
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        goto LAB_00dba7dc;
      }
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      lVar5 = lVar6;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    lVar6 = lVar5;
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_00dba7dc:
  iVar1 = FUN_00d8c7a0();
  lVar4 = DAT_02781680;
  if (iVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar4 = *(longlong *)(unaff_RSI + 0x20);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    goto LAB_00dbae9a;
  }
  local_68 = lVar6;
  if (DAT_02781680 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar4;
  local_118 = '\x01';
  FUN_00d91000(1,&local_120);
  lVar4 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = lVar4;
  FUN_00d23340();
  lVar4 = local_48;
  local_38[0] = local_40[0];
  pcVar3 = local_40;
  if (local_40[0] == '\0') {
    pcVar3 = local_38;
  }
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = DAT_027d3890;
  if (DAT_027d3890 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar6;
  local_108 = '\x01';
  FUN_00d91000(1,&local_110);
  local_50 = CONCAT71(uStack_5f,local_60);
  if (local_58 == '\0') {
    if (((local_50 != 0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  lVar4 = local_48;
  local_60 = local_40[0];
  pcVar3 = local_40;
  if (local_40[0] == '\0') {
    pcVar3 = &local_60;
  }
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = 0;
  local_100 = DAT_027861f0;
  if (local_60 == '\0') {
    if (lVar4 != 0) {
      FUN_00d50b00();
      local_100 = DAT_027861f0;
    }
  }
  else {
    local_60 = '\0';
  }
  local_a0 = '\x01';
  local_a8 = lVar4;
  DAT_027861f0 = local_100;
  if (local_100 != 0) {
    local_a0 = '\x01';
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  FUN_00cd2930();
  lVar4 = local_b0;
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(local_50 + 0xc) == 2) {
    FUN_00d23340();
    lVar4 = local_48;
    pcVar3 = &local_60;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    local_60 = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    local_90 = 0;
    local_f0 = DAT_02763508;
    if (local_60 == '\0') {
      if (lVar4 != 0) {
        FUN_00d50b00();
        local_f0 = DAT_02763508;
      }
    }
    else {
      local_60 = '\0';
    }
    local_90 = '\x01';
    local_98 = lVar4;
    DAT_02763508 = local_f0;
    if (local_f0 != 0) {
      local_90 = '\x01';
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    FUN_00cd2930();
    lVar4 = local_b0;
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar6 = local_68;
  if (*(int *)(lVar4 + 0xc) == 2) {
    FUN_00d23310();
    lVar4 = local_48;
    pcVar3 = local_38;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar6 = DAT_027d3890;
    if (DAT_027d3890 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar6;
    local_d8 = '\x01';
    FUN_00d91000(1,&local_e0);
    lVar6 = CONCAT71(uStack_5f,local_60);
    if (local_50 == lVar6) {
LAB_00dbac6d:
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = lVar6;
      if (local_58 == '\0') {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        goto LAB_00dbac6d;
      }
      FUN_00d50b20();
      local_58 = '\0';
      local_50 = lVar6;
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    lVar4 = local_48;
    local_60 = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = &local_60;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    local_80 = 0;
    local_d0 = DAT_026f6f98;
    if (local_60 == '\0') {
      if (lVar4 != 0) {
        FUN_00d50b00();
        local_d0 = DAT_026f6f98;
      }
    }
    else {
      local_60 = '\0';
    }
    local_80 = '\x01';
    local_88 = lVar4;
    DAT_026f6f98 = local_d0;
    if (local_d0 != 0) {
      local_80 = '\x01';
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    FUN_00cd2930();
    lVar4 = local_50;
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    lVar6 = local_68;
    if (*(int *)(lVar4 + 0xc) == 2) {
      FUN_00d23340();
      pcVar3 = local_40;
      if (local_40[0] == '\0') {
        pcVar3 = &local_60;
      }
      local_60 = local_40[0];
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_70 = 0;
      if (local_60 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      lVar4 = DAT_027837e8;
      local_70 = '\x01';
      local_78 = local_48;
      if (DAT_027837e8 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar4;
      local_b8 = '\x01';
      FUN_00cd2930();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      lVar6 = local_68;
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar4 = *(longlong *)(unaff_RSI + 0x20);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  FUN_00d50b20();
LAB_00dbae9a:
  if (lVar6 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00dbe290 — 1493 bytes
// str: ""%@=\"%@\"""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00dbe825) */
/* WARNING: Removing unreachable block (ram,0x00dbe831) */
/* WARNING: Removing unreachable block (ram,0x00dbe654) */
/* WARNING: Removing unreachable block (ram,0x00dbe664) */

longlong * FUN_00dbe290(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *unaff_RDI;
  longlong lVar3;
  longlong *local_110 [2];
  undefined1 local_100;
  undefined1 local_f0;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_02781680;
  if (*param_1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar3 = *param_2;
    if ((char)param_2[1] != '\0') {
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
      return unaff_RDI;
    }
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  local_98 = param_2;
  if (DAT_02781680 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_00d90870();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_02783b00;
  if (cVar2 == '\0') {
    if (DAT_02783b00 != 0) {
      FUN_00d50b00();
    }
    FUN_00dbdbc0();
    param_1 = (longlong *)*param_1;
    cVar2 = FUN_00d8ca70();
    if (cVar2 == '@') {
      FUN_00d8f140();
    }
    else {
      local_78 = 0;
      if (param_1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_78 = '\x01';
      local_80 = param_1;
    }
    local_a0 = local_90;
    local_110[0] = local_80;
    FUN_00083ea0(2,local_110);
    FUN_00d8cb40();
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_100 = 1;
    FUN_00dbe120();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_70 = (longlong *)&DAT_0253d630;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &DAT_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      return unaff_RDI;
    }
    FUN_00d50b20();
    return unaff_RDI;
  }
  param_1 = (longlong *)*param_1;
  cVar2 = FUN_00d8ca70();
  if (cVar2 == '@') {
    FUN_00d8f140();
    param_1 = local_70;
    if (local_68 != '\0') goto LAB_00dbe45c;
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00dbe460;
    }
    param_1 = (longlong *)0x0;
    if (param_3 == '\0') goto LAB_00dbe6ab;
LAB_00dbe469:
    lVar3 = DAT_027f2f20;
    if (DAT_027f2f20 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*param_1 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_02783b08;
    if (cVar2 != '\0') {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      lVar3 = *local_98;
      if ((char)local_98[1] == '\0') {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        *unaff_RDI = lVar3;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        *unaff_RDI = lVar3;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        *(undefined1 *)(local_98 + 1) = 0;
      }
      goto LAB_00dbe848;
    }
    if (DAT_02783b08 == 0) {
LAB_00dbe6c1:
      lVar3 = 0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = 0;
    if (param_1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
LAB_00dbe45c:
    local_68 = '\0';
LAB_00dbe460:
    if (param_3 != '\0') goto LAB_00dbe469;
LAB_00dbe6ab:
    lVar3 = DAT_02783b10;
    if (DAT_02783b10 == 0) goto LAB_00dbe6c1;
    FUN_00d50b00();
  }
  FUN_00dbdbc0();
  local_80 = local_90;
  local_a0 = param_1;
  FUN_00083ea0(2,&local_a0);
  FUN_00d8cb40();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_f0 = 1;
  FUN_00dbe120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_70 = (longlong *)&DAT_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &DAT_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (param_1 == (longlong *)0x0) {
    return unaff_RDI;
  }
LAB_00dbe848:
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @00db9d10 — 1334 bytes
// str: ""GNURL::initWithStringValue: failed with string value:%@""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00db9ff0) */
/* WARNING: Removing unreachable block (ram,0x00db9ffc) */
/* WARNING: Removing unreachable block (ram,0x00dba22f) */
/* WARNING: Removing unreachable block (ram,0x00dba23c) */

void FUN_00db9d10(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  
  sVar4 = FUN_00d8cbc0();
  lVar2 = DAT_027837c0;
  if (sVar4 == 0x2f) {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_025795a8;
    (*DAT_025795c0)();
    puVar1 = *(undefined8 **)(unaff_RDI + 0x10);
    if (puVar1 == puVar6) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x10) = puVar6;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    sVar4 = FUN_00d8cbc0();
    lVar2 = DAT_027837b8;
    if (sVar4 == 0x2f) {
      if (DAT_027837b8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027d3890;
      if (DAT_027d3890 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (DAT_027837b8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027837c0;
      if (DAT_027837c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027837c8;
      if (DAT_027837c8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d8dbf0();
  }
  else {
    if (DAT_027837c0 != 0) {
      FUN_00d50b00();
    }
    iVar5 = FUN_00d90650();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (iVar5 == -1) {
      iVar5 = FUN_00d8c7a0();
      if (2 < iVar5) {
        FUN_00d8e3d0();
        lVar2 = DAT_027837d0;
        if (DAT_027837d0 != 0) {
          FUN_00d50b00();
        }
        iVar5 = FUN_00d92590();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (iVar5 == 0) {
          puVar6 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &DAT_025795a8;
          (*DAT_025795c0)();
          puVar1 = *(undefined8 **)(unaff_RDI + 0x10);
          if (puVar1 == puVar6) {
            FUN_00d50b20();
          }
          else {
            *(undefined8 **)(unaff_RDI + 0x10) = puVar6;
            if (puVar1 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          lVar2 = DAT_027837d8;
          if (DAT_027837d8 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8dbf0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          lVar2 = DAT_027837c0;
          if (DAT_027837c0 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8dbf0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          FUN_00d8dbf0();
          return;
        }
      }
      lVar2 = DAT_027837e0;
      if (DAT_027837e0 != 0) {
        FUN_00d50b00();
      }
      lVar3 = *unaff_RSI;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar2 = *unaff_RSI;
      lVar3 = *(longlong *)(unaff_RDI + 0x10);
      if (lVar3 != lVar2) {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        *(longlong *)(unaff_RDI + 0x10) = lVar2;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}




// ============================================================
// @00dbebd0 — 775 bytes
// str: ""=\"""
// str: ""\"""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00dbee35) */
/* WARNING: Removing unreachable block (ram,0x00dbee3e) */
/* WARNING: Removing unreachable block (ram,0x00dbedfa) */
/* WARNING: Removing unreachable block (ram,0x00dbee03) */
/* WARNING: Removing unreachable block (ram,0x00dbee76) */
/* WARNING: Removing unreachable block (ram,0x00dbee7f) */

void FUN_00dbebd0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RDI;
  longlong local_a8;
  char local_a0;
  
  if ((*param_3 == 0) || (iVar6 = FUN_00d8c7a0(), iVar6 < 1)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    puVar7 = (undefined8 *)*param_2;
    if (*(char *)(param_2 + 1) != '\0') {
      *unaff_RDI = puVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
      return;
    }
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    goto LAB_00dbee9b;
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025795a8;
  (*DAT_025795c0)();
  lVar4 = DAT_0277c878;
  plVar1 = (longlong *)*param_1;
  if (DAT_0277c878 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = DAT_02783b18;
  if (cVar5 != '\0') {
    if (DAT_02783b18 != 0) {
      FUN_00d50b00();
    }
    FUN_00dbdbc0();
    lVar2 = *param_1;
    if (lVar2 == local_a8) {
      if (((char)param_1[1] == '\0') && (local_a8 != 0)) {
        if (local_a0 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_00dbedbf;
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar3 = param_1[1];
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
        *param_1 = local_a8;
        if (((char)lVar3 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_1 = local_a8;
        if (((char)lVar3 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_00dbedbf:
      *(undefined1 *)(param_1 + 1) = 1;
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d8dbf0();
  FUN_00d8db40();
  FUN_00d8dbf0();
  FUN_00d8db40();
  FUN_00d8dbf0();
  FUN_00d8db40();
  FUN_00d8c7d0();
LAB_00dbee9b:
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00dbb5a0 — 607 bytes
// ============================================================

uint FUN_00dbb5a0(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  FUN_00dba5e0();
  local_88 = DAT_02763508;
  if (DAT_02763508 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  FUN_01de4130(param_1,&local_88);
  plVar1 = local_38;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    local_78 = plVar1;
    local_70 = '\0';
    uVar3 = FUN_00c716c0();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (uVar3 < 0x10000) goto LAB_00dbb7bd;
  }
  FUN_00dba530();
  plVar1 = local_38;
  local_68 = DAT_027837f0;
  if (DAT_027837f0 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  cVar2 = (**(code **)(*plVar1 + 0x50))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar3 = 0x1bb;
  if (cVar2 == '\0') {
    FUN_00dba530();
    plVar1 = local_38;
    local_58 = DAT_027837d8;
    if (DAT_027837d8 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    cVar2 = (**(code **)(*plVar1 + 0x50))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar3 = 0x50;
    if (cVar2 == '\0') {
      FUN_00dba530();
      plVar1 = local_38;
      local_48 = DAT_027837f8;
      if (DAT_027837f8 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\x01';
      cVar2 = (**(code **)(*plVar1 + 0x50))();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar3 = 0x15;
      if (cVar2 == '\0') {
        uVar3 = 0;
      }
    }
  }
LAB_00dbb7bd:
  return uVar3 & 0xffff;
}




// ============================================================
// @00dbd3b0 — 534 bytes
// str: ""com.celemony.SecTrustEvaluate.%I""
// ============================================================

ulonglong FUN_00dbd3b0(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  undefined8 *local_90;
  undefined4 local_88;
  int local_84;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  int local_1c;
  
  local_38 = 0;
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = lVar1;
  FUN_00e1cfc0();
  _SecPolicyCreateSSL();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  _SecTrustSetPolicies();
  _CFRelease();
  local_1c = 0;
  local_84 = _SecTrustEvaluate();
  local_70 = DAT_02783870;
  if (local_84 == 0) {
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((local_1c == 1) || (local_1c == 4)) goto LAB_00dbd5b8;
    if (DAT_02783870 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_02783878;
    local_68 = '\x01';
    if (DAT_02783878 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar1;
    local_58 = '\x01';
    FUN_00e972c0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_88 = 1;
    local_90 = &DAT_024cc6f0;
    FUN_00d8cb40(&DAT_024cc6f0,&local_90);
    local_30 = local_50;
    local_28 = 0;
    local_80 = DAT_02783868;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
        local_80 = DAT_02783868;
      }
    }
    else {
      local_48 = '\0';
    }
    local_28 = '\x01';
    DAT_02783868 = local_80;
    if (local_80 != 0) {
      local_28 = '\x01';
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00e972c0();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar2 = 0;
LAB_00dbd5b8:
  return uVar2 & 0xffffffff;
}



