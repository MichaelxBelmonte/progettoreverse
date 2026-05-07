// Function: FUN_01d2c5c0
// Address: 01d2c5c0
// Size: 841 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01d2c613) */
/* WARNING: Removing unreachable block (ram,0x01d2c61f) */
/* WARNING: Removing unreachable block (ram,0x01d2c811) */
/* WARNING: Removing unreachable block (ram,0x01d2c81d) */

void FUN_01d2c5c0(void)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  char *pcVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  longlong *plVar8;
  longlong *local_80;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong **)(unaff_RDI + 0x20) == (longlong *)*unaff_RSI) {
    return;
  }
  if (((longlong *)*unaff_RSI != (longlong *)0x0) &&
     (cVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x50))(), cVar3 != '\0')) {
    return;
  }
  lVar5 = *(longlong *)(unaff_RDI + 0x28);
  if (*(int *)(lVar5 + 0xc) < 1) {
    bVar2 = false;
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar7 = 0;
    plVar8 = (longlong *)0x0;
    bVar2 = false;
    do {
      plVar1 = *(longlong **)(*(longlong *)(lVar5 + 0x10) + lVar7 * 8);
      if (plVar8 == plVar1) {
        if ((!bVar2) && (plVar8 != (longlong *)0x0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
          bVar2 = true;
          plVar8 = plVar1;
        }
        else {
          bVar2 = true;
          plVar8 = plVar1;
        }
      }
      cVar3 = (**(code **)(*plVar8 + 0x488))();
      if (cVar3 != '\0') {
        FUN_00d50b00();
        (**(code **)(*plVar8 + 0x4a8))();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
      lVar5 = *(longlong *)(unaff_RDI + 0x28);
    } while (lVar7 < *(int *)(lVar5 + 0xc));
  }
  FUN_019ba260();
  lVar5 = *unaff_RSI;
  if (lVar5 == local_48) {
    if (((char)unaff_RSI[1] == '\0') && (local_48 != 0)) {
      if (local_40[0] != '\0') goto LAB_01d2c7b0;
      FUN_00d50b00();
      goto LAB_01d2c7ec;
    }
  }
  else {
    lVar7 = unaff_RSI[1];
    if (local_40[0] != '\0') {
      *unaff_RSI = local_48;
      if (((char)lVar7 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
LAB_01d2c7b0:
      local_80 = unaff_RSI + 1;
      *(undefined1 *)local_80 = 1;
      goto LAB_01d2c807;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    *unaff_RSI = local_48;
    if (((char)lVar7 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
LAB_01d2c7ec:
    local_80 = unaff_RSI + 1;
    *(undefined1 *)local_80 = 1;
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_01d2c807:
  lVar5 = *unaff_RSI;
  local_40[0] = '\0';
  FUN_00d243f0();
  if ((local_40[0] != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(*(longlong *)(unaff_RDI + 0x20) + 0xc) == 0) {
    *(undefined4 *)(unaff_RDI + 0xa8) = 0xffffffff;
  }
  else {
    FUN_00d23340();
    pcVar6 = local_38;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (lVar5 != 0)) {
      FUN_00d50b00();
    }
    uVar4 = FUN_00d23d20();
    *(undefined4 *)(unaff_RDI + 0xa8) = uVar4;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01d2c360();
  if ((bVar2) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


