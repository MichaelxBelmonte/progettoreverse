// Reconstructed implementation of MUTestViewController
// From MikeCore binary — reverse-engineered pseudocode

#include "MUTestViewController.h"

// ============================================================
// @018ad410 — 694 bytes
// str: ""MUTestViewController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018ad410(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar2 = DAT_027dbf18;
  if (*param_2 == 0) {
    lVar6 = 0;
    if (DAT_027dbf18 != 0) {
      FUN_00d50b00();
      lVar6 = *param_2;
    }
    if (lVar6 == lVar2) {
      if (((char)param_2[1] != '\0') || (lVar2 == 0)) {
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        goto LAB_018ad47f;
      }
    }
    else {
      *param_2 = lVar2;
      if (((char)param_2[1] != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
LAB_018ad47f:
  lVar2 = DAT_027dbf20;
  if (DAT_027dbf20 != 0) {
    FUN_00d50b00();
  }
  local_70 = 0;
  local_68 = '\0';
  local_60 = 0;
  local_58 = '\0';
  pplVar5 = &local_40;
  FUN_01e4fcf0(&local_60,&local_70);
  plVar1 = local_40;
  if ((DAT_02723108 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_02723058 = FUN_00015ff0();
    _DAT_02723040 = "MUTestViewController";
    _DAT_02723048 = 0x78;
    _DAT_02723050 = FUN_005fe3c0;
    _DAT_02723060 = 0;
    uRam0000000002723068 = 0;
    _DAT_02723070 = 0;
    uRam0000000002723078 = 0;
    _DAT_02723080 = 0;
    uRam0000000002723088 = 0;
    _DAT_02723090 = 0;
    uRam0000000002723098 = 0;
    _DAT_027230a0 = 0;
    uRam00000000027230a8 = 0;
    _DAT_027230b0 = 0;
    uRam00000000027230b8 = 0;
    _DAT_027230c0 = 0;
    uRam00000000027230c8 = 0;
    _DAT_027230d0 = 0;
    uRam00000000027230d8 = 0;
    _DAT_027230e0 = 0;
    uRam00000000027230e8 = 0;
    _DAT_027230f0 = 0;
    uRam00000000027230f8 = 0;
    _DAT_02723100 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_018ad509;
  }
  pplVar5 = (longlong **)&DAT_02802688;
LAB_018ad509:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01e56750();
  local_50 = *param_2;
  local_48 = '\0';
  FUN_01e5a050();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018ae240();
  (**(code **)(*plVar1 + 0x460))();
  *unaff_RDI = (longlong)plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @018acf50 — 674 bytes
// ============================================================

void FUN_018acf50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong *unaff_RSI;
  longlong local_c0;
  char local_b8;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar2 = local_40;
  lVar1 = DAT_027dbf00;
  if (DAT_027dbf00 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar2 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_00d3ed20();
    local_90 = DAT_027dbf08;
    if (DAT_027dbf08 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    FUN_000175c0(param_1,&local_90);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d3ed20();
    local_80 = DAT_027feca0;
    if (DAT_027feca0 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_000175c0(param_1,&local_80);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = plVar3;
    local_68 = '\0';
    FUN_018ad410(param_1,&local_70,param_3,param_4,0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  local_60 = *unaff_RSI;
  local_58 = '\0';
  FUN_00d530a0();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @018ac3f0 — 546 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018ac592) */
/* WARNING: Removing unreachable block (ram,0x018ac59b) */
/* WARNING: Removing unreachable block (ram,0x018ac525) */
/* WARNING: Removing unreachable block (ram,0x018ac52e) */
/* WARNING: Removing unreachable block (ram,0x018ac49d) */
/* WARNING: Removing unreachable block (ram,0x018ac4a9) */
/* WARNING: Removing unreachable block (ram,0x018ac511) */
/* WARNING: Removing unreachable block (ram,0x018ac51a) */
/* WARNING: Removing unreachable block (ram,0x018ac550) */
/* WARNING: Removing unreachable block (ram,0x018ac559) */
/* WARNING: Removing unreachable block (ram,0x018ac5a6) */
/* WARNING: Removing unreachable block (ram,0x018ac5af) */
/* WARNING: Removing unreachable block (ram,0x018ac5fb) */
/* WARNING: Removing unreachable block (ram,0x018ac608) */

void FUN_018ac3f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 *local_40;
  char local_38;
  
  local_b0 = *param_2;
  local_a8 = 0;
  FUN_018ac7a0(param_1,&local_b0);
  if ((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  FUN_000b6b40();
  if ((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  puVar1 = local_40;
  if (local_40 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar1 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_000b68d0();
  }
  FUN_00d235a0();
  FUN_018ac8a0();
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}



