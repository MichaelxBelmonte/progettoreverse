// Function: FUN_01cca020
// Address: 01cca020
// Size: 1209 bytes
// Class: GNDictionary


/* WARNING: Removing unreachable block (ram,0x01cca09d) */
/* WARNING: Removing unreachable block (ram,0x01cca0a6) */
/* WARNING: Removing unreachable block (ram,0x01cca25c) */
/* WARNING: Removing unreachable block (ram,0x01cca265) */

void FUN_01cca020(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Da;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  char local_a8;
  undefined8 *local_a0;
  char local_98;
  undefined8 *local_40;
  char local_38;
  
  uVar4 = (**(code **)(*unaff_RDI + 0x448))();
  if (local_d8 == 0) {
    bVar3 = 1;
  }
  else {
    (**(code **)(*unaff_RDI + 0x448))();
    local_40 = (undefined8 *)*unaff_RSI;
    local_38 = '\0';
    bVar3 = FUN_00d23d70();
    uVar4 = extraout_XMM0_Da;
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    bVar3 = bVar3 ^ 1;
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  if (bVar3 != 0) {
    return;
  }
  local_e8 = *unaff_RSI;
  local_e0 = 0;
  local_b8 = param_2;
  FUN_01cc98b0(uVar4,&local_e8);
  if (local_38 == '\0') {
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_01cca14b;
    }
LAB_01cca1c3:
    local_40 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_40 = &DAT_02673140;
    local_40[2] = 0;
    local_40[3] = 0;
    local_40[4] = 0;
    local_40[5] = 0;
    *(undefined4 *)(local_40 + 6) = 0;
    uVar4 = FUN_00d500e0();
    if (param_3 != '\0') {
      local_a8 = '\0';
      local_b0 = local_40;
      FUN_00d649d0(uVar4,unaff_RDI + 2);
      if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar4 = FUN_00d21140();
    if (param_3 == '\0') {
LAB_01cca410:
      lVar1 = *local_b8;
      lVar2 = local_40[2];
      if (lVar2 != lVar1) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_40[2] = lVar1;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      *(undefined4 *)(local_40 + 6) = 0xffffffff;
      lVar1 = *unaff_RSI;
      lVar2 = local_40[3];
      if (lVar2 != lVar1) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_40[3] = lVar1;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if (local_40[5] == 0) {
        local_40[5] = *param_1;
        FUN_00d50b00();
        FUN_01d26050();
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_01cca47e;
    }
    local_98 = '\0';
    local_a0 = local_40;
    FUN_00d64e50(uVar4,unaff_RDI + 2);
    if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == (undefined8 *)0x0) goto LAB_01cca1c3;
LAB_01cca14b:
    if (local_40[5] != *param_1) {
      if (param_3 != '\0') {
        FUN_00d50b00();
        FUN_01d262d0();
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d64850();
        local_40[5] = 0;
        FUN_00d64910();
        goto LAB_01cca2bd;
      }
      FUN_00d50b00();
      FUN_01d261f0();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_40[5] = 0;
      goto LAB_01cca410;
    }
    if (param_3 == '\0') goto LAB_01cca410;
  }
LAB_01cca2bd:
  lVar1 = *local_b8;
  FUN_00d64850();
  lVar2 = local_40[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40[2] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  FUN_00d64910();
  lVar1 = *unaff_RSI;
  FUN_00d64850();
  lVar2 = local_40[3];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40[3] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_40[5] == 0) {
    lVar1 = *param_1;
    FUN_00d64850();
    local_40[5] = lVar1;
    FUN_00d64910();
    FUN_00d50b00();
    FUN_01d260c0();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01cca47e:
  FUN_00d50b20();
  return;
}


