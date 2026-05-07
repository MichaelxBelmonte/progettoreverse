// Function: FUN_01d6ef90
// Address: 01d6ef90
// Size: 1318 bytes
// Class: GNMenuItem


/* WARNING: Removing unreachable block (ram,0x01d6f175) */
/* WARNING: Removing unreachable block (ram,0x01d6f181) */
/* WARNING: Removing unreachable block (ram,0x01d6f4a0) */
/* WARNING: Removing unreachable block (ram,0x01d6f4b0) */
/* WARNING: Removing unreachable block (ram,0x01d6f3cb) */
/* WARNING: Removing unreachable block (ram,0x01d6f3f0) */
/* WARNING: Removing unreachable block (ram,0x01d6f3cd) */
/* WARNING: Removing unreachable block (ram,0x01d6f3f2) */

void FUN_01d6ef90(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  uint uVar6;
  longlong **pplVar7;
  longlong local_d8;
  char local_d0;
  longlong local_a0;
  char local_98;
  int local_88;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar2 = unaff_RDI[0x45];
  if (-1 < (int)lVar2) {
    iVar4 = FUN_01d6fde0();
    if ((int)lVar2 < iVar4) {
      FUN_01d70140();
      plVar1 = local_58;
      if (local_50 == '\0') {
        if (local_58 == (longlong *)0x0) goto LAB_01d6f239;
        FUN_00d50b00();
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_58 == (longlong *)0x0) goto LAB_01d6f239;
      lVar2 = unaff_RDI[0x2b];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        (**(code **)(*unaff_RDI + 0x958))();
      }
      FUN_00d50b20();
    }
    goto LAB_01d6f239;
  }
  *(undefined4 *)(unaff_RDI + 0x45) = 0xffffffff;
  pplVar7 = &local_58;
  FUN_00e99c70();
  plVar1 = local_58;
  FUN_01d749e0();
  if (plVar1 == (longlong *)0x0) {
LAB_01d6f033:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01d6f033;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    FUN_00d8ede0();
    plVar1 = local_58;
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    (**(code **)(*unaff_RDI + 0x958))();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00e99fa0();
    plVar1 = local_58;
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    (**(code **)(*unaff_RDI + 0x958))();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01d6f239:
  FUN_01d5e2b0();
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) {
    return;
  }
  local_50 = 0;
  local_58 = (longlong *)0x0;
  local_48 = plVar1;
  local_38 = 0;
  local_40 = 0;
  if (0 < *(int *)((longlong)plVar1 + 0xc)) {
    uVar6 = 0;
    do {
      lVar2 = local_a0;
      local_58 = *(longlong **)(plVar1[2] + (ulonglong)uVar6 * 8);
      cVar3 = FUN_01d64c70();
      if (cVar3 == '\0') {
        FUN_01d66ab0();
      }
      else {
        FUN_01d66ab0();
        FUN_01d64cb0();
        FUN_01d5e2b0();
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (local_a0 != 0) {
          local_98 = '\0';
          local_a0 = 0;
          local_88 = -1;
          while( true ) {
            lVar5 = (longlong)local_88;
            local_88 = local_88 + 1;
            if (*(int *)(lVar2 + 0xc) <= local_88) break;
            local_a0 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 8 + lVar5 * 8);
            FUN_01d66ab0();
            cVar3 = FUN_01d65e30();
            if (cVar3 != '\0') {
              FUN_01d66ab0();
            }
          }
          FUN_002a0a30();
          FUN_00d50b20();
        }
      }
      uVar6 = uVar6 + 1;
      local_40 = CONCAT44(local_40._4_4_,uVar6);
    } while ((int)uVar6 < *(int *)((longlong)plVar1 + 0xc));
  }
  FUN_002a0a30();
  FUN_00d50b20();
  return;
}


