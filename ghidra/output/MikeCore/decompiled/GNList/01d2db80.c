// Function: FUN_01d2db80
// Address: 01d2db80
// Size: 1307 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01d2dc17) */
/* WARNING: Removing unreachable block (ram,0x01d2dc23) */
/* WARNING: Removing unreachable block (ram,0x01d2dc86) */
/* WARNING: Removing unreachable block (ram,0x01d2dc92) */
/* WARNING: Removing unreachable block (ram,0x01d2de44) */
/* WARNING: Removing unreachable block (ram,0x01d2de50) */
/* WARNING: Removing unreachable block (ram,0x01d2e057) */
/* WARNING: Removing unreachable block (ram,0x01d2e063) */

void FUN_01d2db80(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_50;
  char local_48 [8];
  longlong local_40;
  char local_38 [8];
  
  if (*unaff_RSI == 0) {
    return;
  }
  if (*(int *)(*unaff_RSI + 0xc) == 0) {
    return;
  }
  if (*(char *)(unaff_RDI + 0x9a) == '\0') {
    return;
  }
  FUN_019ba260();
  if (local_50 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = local_50;
    if (local_48[0] == '\0') {
      FUN_00d50b00();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
    }
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x40);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      if (lVar9 == 0) {
        return;
      }
      goto LAB_01d2e0a7;
    }
  }
  FUN_00d23310();
  pcVar5 = local_38;
  if (local_48[0] != '\0') {
    pcVar5 = local_48;
  }
  local_38[0] = local_48[0];
  *pcVar5 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  iVar4 = FUN_00d237a0();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (iVar4 < 1) {
    lVar6 = *(longlong *)(unaff_RDI + 0x88);
joined_r0x01d2de9d:
    lVar7 = 0;
    if (lVar6 == 0) goto LAB_01d2dea3;
LAB_01d2dd6e:
    if (*(int *)(lVar9 + 0xc) < 1) {
      lVar6 = 0;
      local_40 = 0;
    }
    else {
      local_40 = 0;
      lVar8 = 0;
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + lVar8 * 8);
        if (lVar6 != lVar2) {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          bVar10 = lVar6 != 0;
          lVar6 = lVar2;
          if (bVar10) {
            FUN_00d50b20();
          }
        }
        plVar1 = *(longlong **)(unaff_RDI + 0x88);
        FUN_00d50b00();
        (**(code **)(*plVar1 + 0x510))();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(lVar9 + 0xc));
    }
  }
  else {
    lVar7 = *(longlong *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) + (ulonglong)(iVar4 - 1) * 8);
    if (lVar7 == 0) {
      lVar6 = *(longlong *)(unaff_RDI + 0x88);
      goto joined_r0x01d2de9d;
    }
    FUN_00d50b00();
    if (*(longlong *)(unaff_RDI + 0x88) != 0) goto LAB_01d2dd6e;
LAB_01d2dea3:
    lVar6 = *(longlong *)(unaff_RDI + 0x10);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    FUN_019ba260();
    local_40 = local_50;
    if (local_50 == 0) {
      local_40 = 0;
    }
    else if (local_48[0] == '\0') {
      FUN_00d50b00();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (0 < *(int *)(lVar9 + 0xc)) {
      lVar6 = 0;
      do {
        lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + lVar6 * 8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d23f50();
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar9 + 0xc));
    }
    FUN_01d2a8f0();
    lVar6 = 0;
  }
  FUN_01d2c1d0();
  plVar1 = *(longlong **)(unaff_RDI + 0x40);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x40))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  lVar9 = local_40;
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
LAB_01d2e0a7:
  FUN_00d50b20();
  return;
}


