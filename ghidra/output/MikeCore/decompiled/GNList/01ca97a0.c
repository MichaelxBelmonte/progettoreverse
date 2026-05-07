// Function: FUN_01ca97a0
// Address: 01ca97a0
// Size: 1714 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01ca9cab) */
/* WARNING: Removing unreachable block (ram,0x01ca9cb7) */
/* WARNING: Removing unreachable block (ram,0x01ca99f7) */
/* WARNING: Removing unreachable block (ram,0x01ca9a00) */
/* WARNING: Removing unreachable block (ram,0x01ca9967) */
/* WARNING: Removing unreachable block (ram,0x01ca9970) */
/* WARNING: Removing unreachable block (ram,0x01ca9a3c) */
/* WARNING: Removing unreachable block (ram,0x01ca9a41) */
/* WARNING: Removing unreachable block (ram,0x01ca9bbf) */
/* WARNING: Removing unreachable block (ram,0x01ca9bcb) */
/* WARNING: Removing unreachable block (ram,0x01ca9d9b) */
/* WARNING: Removing unreachable block (ram,0x01ca9da7) */
/* WARNING: Removing unreachable block (ram,0x01ca9a97) */
/* WARNING: Removing unreachable block (ram,0x01ca9aa0) */
/* WARNING: Removing unreachable block (ram,0x01ca9cf0) */
/* WARNING: Removing unreachable block (ram,0x01ca9c00) */
/* WARNING: Removing unreachable block (ram,0x01ca9ba8) */
/* WARNING: Removing unreachable block (ram,0x01ca9bb1) */
/* WARNING: Removing unreachable block (ram,0x01ca9c94) */
/* WARNING: Removing unreachable block (ram,0x01ca9c9d) */
/* WARNING: Removing unreachable block (ram,0x01ca9d84) */
/* WARNING: Removing unreachable block (ram,0x01ca9d8d) */

void FUN_01ca97a0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong lVar9;
  longlong *plVar10;
  longlong local_c8;
  char local_c0;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00049200();
  (**(code **)(*plVar4 + 0x18))();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*pcVar3)();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*pcVar3)();
  lVar8 = *unaff_RSI;
  if (*(int *)(lVar8 + 0xc) < 1) {
    bVar2 = false;
    plVar10 = (longlong *)0x0;
  }
  else {
    lVar9 = 0;
    plVar10 = (longlong *)0x0;
    bVar2 = false;
    do {
      plVar1 = *(longlong **)(*(longlong *)(lVar8 + 0x10) + lVar9 * 8);
      if (plVar10 == plVar1) {
        if ((!bVar2) && (plVar10 != (longlong *)0x0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b20();
          bVar2 = true;
          plVar10 = plVar1;
        }
        else {
          bVar2 = true;
          plVar10 = plVar1;
        }
      }
      FUN_00d4efa0();
      FUN_00c7e7b0();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_00d235a0();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      FUN_00dd6a00();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_00d21140();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar10 + 0x60))();
      if (local_68 != 0) {
        (**(code **)(*plVar10 + 0x60))();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_00d21140();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      local_40 = '\0';
      local_48 = local_68;
      lVar9 = lVar9 + 1;
      lVar8 = *unaff_RSI;
    } while (lVar9 < *(int *)(lVar8 + 0xc));
  }
  (**(code **)(*plVar4 + 0x5f0))();
  lVar8 = DAT_027eda10;
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
    lVar8 = DAT_027eda10;
  }
  DAT_027eda10 = lVar8;
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  FUN_01ca79b0();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar4 + 0x5f0))();
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  lVar8 = DAT_027eda18;
  if (DAT_027eda18 != 0) {
    FUN_00d50b00();
  }
  FUN_01ca79b0();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar4 + 0x5f0))();
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  lVar8 = DAT_027eda20;
  if (DAT_027eda20 != 0) {
    FUN_00d50b00();
  }
  FUN_01ca79b0();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  lVar8 = DAT_027eda28;
  if (*param_2 != 0) {
    if (DAT_027eda28 != 0) {
      FUN_00d50b00();
    }
    FUN_01caa390();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if ((bVar2) && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


