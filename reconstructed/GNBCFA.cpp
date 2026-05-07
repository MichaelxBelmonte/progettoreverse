// Reconstructed implementation of GNBCFA
// From MikeCore binary — reverse-engineered pseudocode

#include "GNBCFA.h"

// ============================================================
// @00cc9d90 — 1902 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00cc9f2c) */
/* WARNING: Removing unreachable block (ram,0x00cc9f38) */

undefined4 FUN_00cc9d90(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *local_138;
  char local_130;
  undefined8 *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  undefined8 *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x18) == 0) {
    return 0;
  }
  plVar7 = (longlong *)(unaff_RDI + 0x18);
  cVar5 = FUN_00cc9bd0();
  local_58 = plVar7;
  if (cVar5 == '\0') goto LAB_00cca392;
  FUN_00dac670();
  cVar5 = FUN_00daa980();
  if (cVar5 != '\0') {
    FUN_00daa970();
    cVar5 = FUN_00daaf60();
    if (cVar5 == '\0') goto LAB_00cca392;
    FUN_00daa970();
  }
  cVar5 = FUN_00daac70();
  if (cVar5 == '\0') goto LAB_00cca392;
  FUN_00dac670();
  FUN_00daa9c0();
  local_48 = 0;
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  *plVar6 = (longlong)&DAT_0258cea8;
  *(undefined4 *)(plVar6 + 5) = 0;
  *(undefined1 *)((longlong)plVar6 + 0x2c) = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar6[0xf] = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0;
  plVar6[0x18] = 0;
  plVar6[0x19] = 0;
  plVar6[0x1a] = 0;
  (*DAT_0258cec0)();
  local_48 = '\x01';
  local_50 = plVar6;
  uVar8 = FUN_00e4b5a0();
  if (*param_4 != 0) {
    (**(code **)(*local_50 + 0x5e0))();
    local_c8 = (undefined8 *)*param_4;
    local_c0 = '\0';
    uVar8 = FUN_00ca1b70();
    if ((local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    puVar3 = DAT_02774ad0;
    if (DAT_02774ad0 != (undefined8 *)0x0) {
      uVar8 = FUN_00d50b00();
    }
    local_138 = puVar3;
    local_130 = '\x01';
    uVar8 = FUN_000175c0(uVar8,&local_138);
    plVar7 = local_58;
    puVar3 = local_c8;
    if (local_c0 == '\0') {
      if (((local_c8 != (undefined8 *)0x0) && (uVar8 = FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (undefined8 *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    else {
      local_c0 = '\0';
    }
    if ((local_130 != '\0') && (local_138 != (undefined8 *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if (puVar3 != (undefined8 *)0x0) {
      local_128 = puVar3;
      local_120 = '\0';
      (**(code **)(*local_50 + 0x600))();
      if ((local_120 != '\0') && (local_128 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_50 + 0x5e0))();
      puVar3 = DAT_02774ad0;
      if (DAT_02774ad0 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_c8 = puVar3;
      local_c0 = '\0';
      FUN_00ca13a0();
      if ((local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = FUN_00d50b20();
    }
  }
  local_118 = *param_1;
  local_110 = '\0';
  local_60 = 0;
  lVar1 = *plVar7;
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar1;
  uVar8 = FUN_00e45630(uVar8,&local_68);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 == '\0') {
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      FUN_00daa970();
      FUN_00daa9c0();
      FUN_00daa990();
    }
    lVar1 = DAT_02774ad8;
    if (DAT_02774ad8 != 0) {
      FUN_00d50b00();
    }
    lVar4 = DAT_02774ae0;
    local_108 = lVar1;
    local_100 = '\x01';
    if (DAT_02774ae0 != 0) {
      FUN_00d50b00();
    }
    plVar7 = DAT_02774ae8;
    local_f8 = lVar4;
    local_f0 = '\x01';
    local_38 = 0;
    if (DAT_02774ae8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_02774af0;
    local_40 = plVar7;
    local_38 = '\x01';
    local_70 = 0;
    if (DAT_02774af0 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar1;
    local_70 = '\x01';
    uVar9 = FUN_00cca9a0(&local_78,local_58,&local_50);
    FUN_00e972c0(uVar9,&local_c8);
    FUN_002d10d0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
LAB_00cca374:
    bVar2 = false;
  }
  else {
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      FUN_00daa970();
      FUN_00daa9c0();
      FUN_00daa990();
    }
    FUN_00dac670();
    FUN_00dac5e0();
    cVar5 = FUN_00daac70();
    bVar2 = true;
    if (cVar5 != '\0') {
      FUN_00dac5e0();
      goto LAB_00cca374;
    }
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    return uVar8;
  }
LAB_00cca392:
  if (*(longlong *)(unaff_RDI + 0x18) != 0) {
    FUN_00daa970();
    FUN_00daa9c0();
    FUN_00daa990();
  }
  lVar1 = DAT_02774ad8;
  if (DAT_02774ad8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_02774af8;
  local_e8 = lVar1;
  local_e0 = '\x01';
  if (DAT_02774af8 != 0) {
    FUN_00d50b00();
  }
  plVar7 = DAT_02774ae8;
  local_d8 = lVar4;
  local_d0 = '\x01';
  if (DAT_02774ae8 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_50 = plVar7;
  local_40 = (longlong *)*local_58;
  uVar8 = FUN_00083ea0(2,&local_40);
  FUN_00e972c0(uVar8,&local_c8);
  local_c8 = (undefined8 *)&DAT_0253d630;
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  local_c8 = &DAT_024c5048;
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  return 0;
}




// ============================================================
// @00ccbd90 — 986 bytes
// str: ""Cannot open %@ (%d).""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00ccbff0) */
/* WARNING: Removing unreachable block (ram,0x00ccbffc) */

void FUN_00ccbd90(longlong **param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  int local_38;
  
  plVar7 = (longlong *)*unaff_RSI;
  cVar8 = (char)unaff_RSI[1];
  if ((cVar8 == '\0') || (plVar7 == (longlong *)0x0)) {
    if (plVar7 == (longlong *)0x0) goto LAB_00ccbebb;
  }
  else {
    FUN_00d50b00();
  }
  do {
    cVar3 = (**(code **)(*plVar7 + 0x4c0))();
    if (cVar3 == '\0') goto LAB_00ccbfb0;
    (**(code **)(*plVar7 + 0x4c8))();
    plVar6 = local_58;
    if (local_58 == plVar7) {
      plVar6 = plVar7;
      if ((cVar8 == '\0') && (local_58 != (longlong *)0x0)) {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_00ccbe70;
        }
        goto LAB_00ccbdd9;
      }
joined_r0x00ccbe9e:
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (cVar8 == '\0') {
          cVar8 = '\x01';
        }
        else {
          FUN_00d50b20();
          plVar7 = plVar6;
LAB_00ccbe70:
          plVar6 = plVar7;
          cVar8 = '\x01';
        }
        goto joined_r0x00ccbe9e;
      }
      if (cVar8 != '\0') {
        FUN_00d50b20();
      }
LAB_00ccbdd9:
      local_50 = local_50 & 0xffffff00;
      cVar8 = '\x01';
    }
    plVar7 = plVar6;
  } while (plVar6 != (longlong *)0x0);
  plVar7 = (longlong *)0x0;
LAB_00ccbebb:
  lVar1 = DAT_027726e0;
  if (DAT_027726e0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
  local_50 = 2;
  local_58 = &DAT_024c5048;
  local_40 = 0;
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  local_48 = local_68;
  local_40 = '\x01';
  local_58 = (longlong *)&DAT_025df2a0;
  local_38 = 0;
  param_1 = &local_58;
  FUN_00cc7a20(param_1,"Cannot open %@ (%d).");
  FUN_00cc76c0();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_58 = &DAT_024c5048;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_00ccbfb0:
  FUN_00cde020();
  iVar4 = _open((char *)param_1,0x1a4);
  *(int *)(unaff_RDI + 0x18) = iVar4;
  lVar1 = DAT_027726e0;
  if (iVar4 == -1) {
    if (DAT_027726e0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
    piVar5 = ___error();
    iVar4 = *piVar5;
    local_50 = 2;
    local_58 = &DAT_024c5048;
    local_40 = 0;
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_48 = local_68;
    local_40 = '\x01';
    local_58 = (longlong *)&DAT_025df2a0;
    local_38 = iVar4;
    FUN_00cc7a20(&local_58,"Cannot open %@ (%d).");
    FUN_00cc76c0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x20) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((cVar8 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00ccc820 — 981 bytes
// str: ""Cannot open %@ (%d).""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00ccca7b) */
/* WARNING: Removing unreachable block (ram,0x00ccca87) */

void FUN_00ccc820(longlong **param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  int local_38;
  
  plVar7 = (longlong *)*unaff_RSI;
  cVar8 = (char)unaff_RSI[1];
  if ((cVar8 == '\0') || (plVar7 == (longlong *)0x0)) {
    if (plVar7 == (longlong *)0x0) goto LAB_00ccc94b;
  }
  else {
    FUN_00d50b00();
  }
  do {
    cVar3 = (**(code **)(*plVar7 + 0x4c0))();
    iVar4 = (int)param_2;
    if (cVar3 == '\0') goto LAB_00ccca40;
    (**(code **)(*plVar7 + 0x4c8))();
    plVar6 = local_58;
    if (local_58 == plVar7) {
      plVar6 = plVar7;
      if ((cVar8 == '\0') && (local_58 != (longlong *)0x0)) {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_00ccc900;
        }
        goto LAB_00ccc869;
      }
joined_r0x00ccc92e:
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (cVar8 == '\0') {
          cVar8 = '\x01';
        }
        else {
          FUN_00d50b20();
          plVar7 = plVar6;
LAB_00ccc900:
          plVar6 = plVar7;
          cVar8 = '\x01';
        }
        goto joined_r0x00ccc92e;
      }
      if (cVar8 != '\0') {
        FUN_00d50b20();
      }
LAB_00ccc869:
      local_50 = local_50 & 0xffffff00;
      cVar8 = '\x01';
    }
    plVar7 = plVar6;
  } while (plVar6 != (longlong *)0x0);
  plVar7 = (longlong *)0x0;
LAB_00ccc94b:
  lVar1 = DAT_027726e0;
  if (DAT_027726e0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
  local_50 = 2;
  local_58 = &DAT_024c5048;
  local_40 = 0;
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  local_48 = local_68;
  local_40 = '\x01';
  local_58 = (longlong *)&DAT_025df2a0;
  local_38 = 0;
  iVar4 = 0x200250f;
  param_1 = &local_58;
  FUN_00cc7a20();
  FUN_00cc76c0();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_58 = &DAT_024c5048;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_00ccca40:
  FUN_00cde020();
  iVar4 = _open((char *)param_1,iVar4);
  *(int *)(unaff_RDI + 0x18) = iVar4;
  lVar1 = DAT_027726e0;
  if (iVar4 == -1) {
    if (DAT_027726e0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
    piVar5 = ___error();
    iVar4 = *piVar5;
    local_50 = 2;
    local_58 = &DAT_024c5048;
    local_40 = 0;
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_48 = local_68;
    local_40 = '\x01';
    local_58 = (longlong *)&DAT_025df2a0;
    local_38 = iVar4;
    FUN_00cc7a20(&local_58,"Cannot open %@ (%d).");
    FUN_00cc76c0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x20) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((cVar8 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00ccb310 — 978 bytes
// str: ""Cannot open %@ (%d).""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00ccb568) */
/* WARNING: Removing unreachable block (ram,0x00ccb574) */

void FUN_00ccb310(longlong **param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  int local_38;
  
  plVar7 = (longlong *)*unaff_RSI;
  cVar8 = (char)unaff_RSI[1];
  if ((cVar8 == '\0') || (plVar7 == (longlong *)0x0)) {
    if (plVar7 == (longlong *)0x0) goto LAB_00ccb43b;
  }
  else {
    FUN_00d50b00();
  }
  do {
    cVar3 = (**(code **)(*plVar7 + 0x4c0))();
    iVar4 = (int)param_2;
    if (cVar3 == '\0') goto LAB_00ccb530;
    (**(code **)(*plVar7 + 0x4c8))();
    plVar6 = local_58;
    if (local_58 == plVar7) {
      plVar6 = plVar7;
      if ((cVar8 == '\0') && (local_58 != (longlong *)0x0)) {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_00ccb3f0;
        }
        goto LAB_00ccb359;
      }
joined_r0x00ccb41e:
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (cVar8 == '\0') {
          cVar8 = '\x01';
        }
        else {
          FUN_00d50b20();
          plVar7 = plVar6;
LAB_00ccb3f0:
          plVar6 = plVar7;
          cVar8 = '\x01';
        }
        goto joined_r0x00ccb41e;
      }
      if (cVar8 != '\0') {
        FUN_00d50b20();
      }
LAB_00ccb359:
      local_50 = local_50 & 0xffffff00;
      cVar8 = '\x01';
    }
    plVar7 = plVar6;
  } while (plVar6 != (longlong *)0x0);
  plVar7 = (longlong *)0x0;
LAB_00ccb43b:
  lVar1 = DAT_027726e0;
  if (DAT_027726e0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
  local_50 = 2;
  local_58 = &DAT_024c5048;
  local_40 = 0;
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  local_48 = local_68;
  local_40 = '\x01';
  local_58 = (longlong *)&DAT_025df2a0;
  local_38 = 0;
  iVar4 = 0x200250f;
  param_1 = &local_58;
  FUN_00cc7a20();
  FUN_00cc76c0();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_58 = &DAT_024c5048;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_00ccb530:
  FUN_00cde020();
  iVar4 = _open((char *)param_1,iVar4);
  *(int *)(unaff_RDI + 0x18) = iVar4;
  lVar1 = DAT_027726e0;
  if (iVar4 == -1) {
    if (DAT_027726e0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
    piVar5 = ___error();
    iVar4 = *piVar5;
    local_50 = 2;
    local_58 = &DAT_024c5048;
    local_40 = 0;
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_48 = local_68;
    local_40 = '\x01';
    local_58 = (longlong *)&DAT_025df2a0;
    local_38 = iVar4;
    FUN_00cc7a20(&local_58,"Cannot open %@ (%d).");
    FUN_00cc76c0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x20) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((cVar8 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00cc8de0 — 906 bytes
// str: ""class:%@""
// str: ""entity:%@""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00cc90a8) */
/* WARNING: Removing unreachable block (ram,0x00cc90b1) */
/* WARNING: Removing unreachable block (ram,0x00cc8fd7) */
/* WARNING: Removing unreachable block (ram,0x00cc8fe0) */
/* WARNING: Removing unreachable block (ram,0x00cc8f11) */
/* WARNING: Removing unreachable block (ram,0x00cc8f1a) */
/* WARNING: Removing unreachable block (ram,0x00cc8e63) */
/* WARNING: Removing unreachable block (ram,0x00cc8e6c) */
/* WARNING: Removing unreachable block (ram,0x00cc913f) */
/* WARNING: Removing unreachable block (ram,0x00cc914b) */

void FUN_00cc8de0(void)

{
  longlong lVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  longlong *local_70;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d4ffd0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = local_40;
  bVar2 = false;
  FUN_00d21140();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RSI[4];
  if (lVar1 != 0) {
    bVar2 = true;
    FUN_00d50b00();
    FUN_00d8cb40();
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = local_50;
    local_38 = '\0';
    FUN_00d21140();
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_70 = &DAT_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = unaff_RSI[5];
  if (lVar1 != 0) {
    bVar2 = true;
    FUN_00d50b00();
    FUN_00d8cb40();
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = local_50;
    local_38 = '\0';
    FUN_00d21140();
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_70 = &DAT_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RSI + 0x380))();
  if ((bVar2) && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*unaff_RSI + 0x380))();
    (**(code **)(*local_50 + 400))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d21140();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_027259e0;
  if (DAT_027259e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00ccf1e0 — 716 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00ccf402) */
/* WARNING: Removing unreachable block (ram,0x00ccf40b) */
/* WARNING: Removing unreachable block (ram,0x00ccf35f) */
/* WARNING: Removing unreachable block (ram,0x00ccf365) */
/* WARNING: Removing unreachable block (ram,0x00ccf36a) */
/* WARNING: Removing unreachable block (ram,0x00ccf36f) */
/* WARNING: Removing unreachable block (ram,0x00ccf3b0) */
/* WARNING: Removing unreachable block (ram,0x00ccf3b9) */
/* WARNING: Removing unreachable block (ram,0x00ccf3c1) */
/* WARNING: Removing unreachable block (ram,0x00ccf3ca) */
/* WARNING: Removing unreachable block (ram,0x00ccf3cf) */
/* WARNING: Removing unreachable block (ram,0x00ccf49a) */
/* WARNING: Removing unreachable block (ram,0x00ccf4a3) */
/* WARNING: Removing unreachable block (ram,0x00ccf2a1) */
/* WARNING: Removing unreachable block (ram,0x00ccf2aa) */

longlong * FUN_00ccf1e0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong local_78;
  char local_70;
  longlong local_48;
  char local_40;
  
  lVar1 = DAT_02704060;
  if (param_2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x20) + 0x10);
    lVar6 = (ulonglong)(param_2 - 1) * 0x23c;
    uVar3 = 0;
    do {
      uVar5 = uVar3;
      if (*(short *)(lVar1 + lVar6 + 0x24 + uVar5 * 2) == 0) break;
      uVar3 = uVar5 + 1;
    } while (uVar5 < 0x100);
    if ((int)(uVar5 + 1) == 1) {
      FUN_00d8ede0();
    }
    else {
      FUN_00d920f0(param_1,uVar5);
    }
    if (local_48 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    iVar4 = *(int *)(lVar1 + 0x20 + lVar6);
    while (lVar1 = DAT_02704060, iVar4 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x20) + 0x10);
      lVar6 = (ulonglong)(iVar4 - 1) * 0x23c;
      uVar3 = 0;
      do {
        uVar5 = uVar3;
        if (*(short *)(lVar1 + lVar6 + 0x24 + uVar5 * 2) == 0) break;
        uVar3 = uVar5 + 1;
      } while (uVar5 < 0x100);
      if ((int)(uVar5 + 1) == 1) {
        FUN_00d8ede0();
      }
      else {
        FUN_00d920f0(*(longlong *)(*unaff_RSI + 0x20),uVar5);
      }
      FUN_00d8ef00();
      if ((bVar2) || (local_48 == 0)) {
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        local_40 = '\0';
        bVar2 = true;
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      iVar4 = *(int *)(lVar1 + 0x20 + lVar6);
    }
    if (DAT_02704060 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8ef00();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}




// ============================================================
// @00cc8780 — 547 bytes
// ============================================================

void FUN_00cc8780(void)

{
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_b8;
  undefined8 *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
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
  
  if (*unaff_RSI != 0) {
    (**(code **)(*unaff_RDI + 0x380))();
    if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (local_b0 == (undefined8 *)0x0) {
      local_70 = *unaff_RSI;
      local_68 = '\0';
      (**(code **)(*unaff_RDI + 0x378))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*unaff_RDI + 0x380))();
      local_b8 = *unaff_RSI;
      FUN_00083ea0(2,&local_b8);
      FUN_01c0fd60();
      local_30 = local_50;
      local_28 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_28 = '\x01';
      FUN_00c6d890();
      local_40 = local_60;
      local_38 = 0;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_38 = '\x01';
      (**(code **)(*unaff_RDI + 0x378))();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_b0 = (undefined8 *)&DAT_0253d630;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      local_b0 = &DAT_024c5048;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @00cc95f0 — 531 bytes
// str: ""GNBCFA""
// ============================================================

void FUN_00cc95f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_0256d4f0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  FUN_00d500e0();
  lVar1 = *unaff_RSI;
  lVar3 = puVar2[2];
  if (lVar3 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    puVar2[2] = lVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x4e0))();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_00daa700();
  lVar1 = puVar2[3];
  lVar3 = lVar1;
  if (lVar1 == local_50) goto LAB_00cc9723;
  lVar3 = local_50;
  if (local_48 == '\0') {
    if (local_50 == 0) {
      lVar3 = 0;
      goto LAB_00cc96de;
    }
    FUN_00d50b00();
    lVar1 = puVar2[3];
    puVar2[3] = local_50;
  }
  else {
    local_48 = '\0';
LAB_00cc96de:
    puVar2[3] = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_50;
  }
LAB_00cc9723:
  if ((local_48 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2[3] != 0) {
    FUN_00daa970();
    FUN_00daa9c0();
    FUN_00daa990();
  }
  if (param_2 != 0) {
    FUN_00dac5e0();
  }
  puVar2[4] = param_2;
  if (puVar2[3] != 0) {
    FUN_00dab200(0,6);
    FUN_00daaf60();
    FUN_00daa9b0();
    FUN_00daaf60();
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00cce050 — 530 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00cce23f) */
/* WARNING: Removing unreachable block (ram,0x00cce248) */

void FUN_00cce050(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar4;
  longlong local_40;
  char local_38;
  
  if (param_2 != 0) {
    if (unaff_RSI[2] == 0) {
      if ((DAT_028a7340 == 0) || (DAT_028a7349 == '\0')) {
        FUN_00e8cb50();
        if (DAT_028a7340 == 0) {
          FUN_00c8e600();
          lVar2 = DAT_028a7340;
          if (DAT_028a7340 != local_40) {
            if (local_38 == '\0') {
              if (local_40 == 0) {
                lVar2 = 0;
              }
              else {
                FUN_00d50b00();
                lVar2 = local_40;
              }
            }
            else {
              local_38 = '\0';
              lVar2 = local_40;
            }
            bVar4 = DAT_028a7340 != 0;
            DAT_028a7340 = lVar2;
            if (bVar4) {
              FUN_00d50b20();
              lVar2 = local_40;
            }
          }
          if ((lVar2 != 0) && (DAT_028a7348 == '\0')) {
            DAT_028a7348 = '\x01';
            FUN_00e8cb90();
            lVar2 = local_40;
          }
          if ((local_38 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          DAT_028a7349 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028a7349 = '\x01';
          FUN_00e8cb70();
        }
      }
      uVar1 = *(undefined8 *)(DAT_028a7340 + 0x10);
      iVar3 = *(int *)(DAT_028a7340 + 0x18);
      do {
        if (param_2 < iVar3) {
          iVar3 = (int)param_2;
        }
        (**(code **)(*unaff_RSI + 0x388))(iVar3,uVar1);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_00cce24d;
          }
        }
        else if (local_40 != 0) {
LAB_00cce24d:
          *unaff_RDI = local_40;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        param_2 = param_2 - iVar3;
        if (param_2 == 0) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
          return;
        }
      } while( true );
    }
    iVar3 = (int)unaff_RSI[5] + (int)param_2;
    if (*(int *)(unaff_RSI[2] + 0x18) < iVar3) {
      FUN_00c8e340(iVar3,0);
    }
    ___bzero();
    iVar3 = (int)unaff_RSI[5] + (int)param_2;
    *(int *)(unaff_RSI + 5) = iVar3;
    if (*(int *)((longlong)unaff_RSI + 0x2c) < iVar3) {
      *(int *)((longlong)unaff_RSI + 0x2c) = iVar3;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}



