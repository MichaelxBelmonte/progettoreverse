// Function: FUN_01de2960
// Address: 01de2960
// Size: 1068 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01de2d4b) */
/* WARNING: Removing unreachable block (ram,0x01de2d54) */
/* WARNING: Removing unreachable block (ram,0x01de2b84) */
/* WARNING: Removing unreachable block (ram,0x01de2b8d) */
/* WARNING: Removing unreachable block (ram,0x01de2aef) */
/* WARNING: Removing unreachable block (ram,0x01de2aff) */
/* WARNING: Removing unreachable block (ram,0x01de2b63) */
/* WARNING: Removing unreachable block (ram,0x01de2b6c) */
/* WARNING: Removing unreachable block (ram,0x01de2cd9) */
/* WARNING: Removing unreachable block (ram,0x01de2ce6) */
/* WARNING: Removing unreachable block (ram,0x01de2d6c) */
/* WARNING: Removing unreachable block (ram,0x01de2d75) */

undefined8 * FUN_01de2960(void)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 *local_48;
  longlong local_40;
  char local_38;
  
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  local_48 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_48 = &DAT_02572358;
  pcVar1 = DAT_02572370;
  (*DAT_02572370)();
  lVar4 = *(longlong *)(unaff_RSI + 0x238);
  if (*(int *)(lVar4 + 0xc) < 1) {
    lVar7 = 0;
    lVar5 = 0;
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar6 * 8);
      if (lVar5 != lVar4) {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        bVar8 = lVar5 != 0;
        lVar5 = lVar4;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      FUN_01dba5d0();
      if (local_40 == lVar7) {
LAB_01de2aad:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
LAB_01de2ac1:
        if (lVar7 == 0) goto LAB_01de2a00;
LAB_01de2aca:
        FUN_00d21140();
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          bVar8 = lVar7 != 0;
          lVar7 = local_40;
          if (bVar8) {
            FUN_00d50b20();
            goto LAB_01de2aad;
          }
          goto LAB_01de2ac1;
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        lVar7 = local_40;
        if (local_40 != 0) goto LAB_01de2aca;
LAB_01de2a00:
        lVar7 = 0;
      }
      lVar6 = lVar6 + 1;
      lVar4 = *(longlong *)(unaff_RSI + 0x238);
    } while (lVar6 < *(int *)(lVar4 + 0xc));
  }
  lVar4 = DAT_027f2a48;
  if (*(int *)((longlong)local_48 + 0xc) != 0) {
    if (DAT_027f2a48 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar4;
    local_38 = '\0';
    FUN_00ca0840();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*pcVar1)();
  if (local_48 == puVar3) {
    FUN_00d50b20();
  }
  else {
    FUN_00d50b20();
    local_48 = puVar3;
  }
  lVar4 = *(longlong *)(unaff_RSI + 0x160);
  if (0 < *(int *)(lVar4 + 0xc)) {
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar6 * 8);
      if (lVar5 != lVar4) {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        bVar8 = lVar5 != 0;
        lVar5 = lVar4;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      FUN_01dba5d0();
      if (local_40 == lVar7) {
LAB_01de2c9d:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
LAB_01de2cb1:
        if (lVar7 == 0) goto LAB_01de2bf0;
LAB_01de2cba:
        FUN_00d21140();
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          bVar8 = lVar7 != 0;
          lVar7 = local_40;
          if (bVar8) {
            FUN_00d50b20();
            goto LAB_01de2c9d;
          }
          goto LAB_01de2cb1;
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        lVar7 = local_40;
        if (local_40 != 0) goto LAB_01de2cba;
LAB_01de2bf0:
        lVar7 = 0;
      }
      lVar6 = lVar6 + 1;
      lVar4 = *(longlong *)(unaff_RSI + 0x160);
    } while (lVar6 < *(int *)(lVar4 + 0xc));
  }
  lVar4 = DAT_027f2a50;
  if (*(int *)((longlong)local_48 + 0xc) != 0) {
    if (DAT_027f2a50 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


