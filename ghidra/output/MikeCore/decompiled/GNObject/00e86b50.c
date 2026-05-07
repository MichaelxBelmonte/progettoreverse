// Function: FUN_00e86b50
// Address: 00e86b50
// Size: 1648 bytes
// Class: GNObject


/* WARNING: Removing unreachable block (ram,0x00e86d41) */
/* WARNING: Removing unreachable block (ram,0x00e87115) */
/* WARNING: Removing unreachable block (ram,0x00e8711e) */
/* WARNING: Removing unreachable block (ram,0x00e86c27) */
/* WARNING: Removing unreachable block (ram,0x00e86c30) */
/* WARNING: Removing unreachable block (ram,0x00e86c9c) */
/* WARNING: Removing unreachable block (ram,0x00e86ca8) */
/* WARNING: Removing unreachable block (ram,0x00e86deb) */
/* WARNING: Removing unreachable block (ram,0x00e86df7) */
/* WARNING: Removing unreachable block (ram,0x00e87085) */
/* WARNING: Removing unreachable block (ram,0x00e8708e) */
/* WARNING: Removing unreachable block (ram,0x00e86e72) */
/* WARNING: Removing unreachable block (ram,0x00e86e7f) */
/* WARNING: Removing unreachable block (ram,0x00e86b9f) */
/* WARNING: Removing unreachable block (ram,0x00e86ba8) */
/* WARNING: Removing unreachable block (ram,0x00e86cd4) */
/* WARNING: Removing unreachable block (ram,0x00e86cdd) */
/* WARNING: Removing unreachable block (ram,0x00e87157) */
/* WARNING: Removing unreachable block (ram,0x00e87167) */
/* WARNING: Removing unreachable block (ram,0x00e86d50) */
/* WARNING: Removing unreachable block (ram,0x00e86d70) */
/* WARNING: Removing unreachable block (ram,0x00e86d52) */
/* WARNING: Removing unreachable block (ram,0x00e86d72) */

undefined8 * FUN_00e86b50(void)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  bool bVar14;
  longlong *local_a0;
  char local_98;
  longlong *local_78;
  char local_70;
  int local_60;
  longlong *local_48;
  char local_40;
  
  plVar4 = local_78;
  uVar1 = *(uint *)(unaff_RSI + 8);
  FUN_00d894f0();
  if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (0 < (int)uVar1) {
    uVar13 = 0;
    do {
      FUN_00d7e190();
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_78 = local_48;
      local_70 = '\0';
      FUN_00d21140();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar13 = uVar13 + 1;
    } while (uVar1 != uVar13);
  }
  plVar5 = local_78;
  FUN_00d9b9b0();
  if (local_70 == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  if (local_78 == (longlong *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00d8c7a0();
  }
  do {
    iVar10 = iVar7;
    if ((iVar10 == 0) || (plVar4 == (longlong *)0x0)) break;
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_60 = -1;
    do {
      lVar8 = (longlong)local_60;
      local_60 = local_60 + 1;
      iVar9 = *(int *)((longlong)plVar4 + 0xc);
      if (iVar9 <= local_60) break;
      local_78 = *(longlong **)(plVar4[2] + 8 + lVar8 * 8);
      cVar6 = FUN_00d99ce0();
    } while (cVar6 == '\0');
    FUN_00018280();
    iVar7 = iVar10 + -1;
  } while (local_60 < iVar9);
  FUN_00d9b9e0();
  if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_78 != (longlong *)0x0) && (iVar7 = FUN_00d8c7a0(), iVar7 != 0)) {
    iVar9 = 0;
    do {
      cVar6 = FUN_00d99ce0();
      if (cVar6 == '\0') {
        bVar14 = iVar10 != 0;
        bVar2 = true;
        if (plVar4 == (longlong *)0x0) goto LAB_00e871a1;
        goto LAB_00e86ea4;
      }
      iVar9 = iVar9 + 1;
    } while (iVar7 != iVar9);
  }
  if (iVar10 != 0) {
    bVar14 = true;
    bVar2 = false;
    if (plVar4 != (longlong *)0x0) {
LAB_00e86ea4:
      for (lVar8 = 0; (int)lVar8 < *(int *)((longlong)plVar4 + 0xc); lVar8 = lVar8 + 1) {
        plVar12 = *(longlong **)(plVar4[2] + lVar8 * 8);
        if (plVar12 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar11 = plVar12;
        if (bVar14) {
          FUN_00d8f140();
          if (plVar12 == local_48) {
LAB_00e86f5e:
            plVar11 = plVar12;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            plVar11 = local_48;
            if (plVar12 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar12 = local_48;
              goto LAB_00e86f5e;
            }
          }
          else {
            plVar11 = local_48;
            if (plVar12 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        plVar12 = plVar11;
        if (bVar2) {
          FUN_00d8c7a0();
          FUN_00d97ce0();
          if (local_48 == plVar11) {
LAB_00e86fe7:
            plVar12 = plVar11;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar12 = local_48;
            if (local_40 == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if (plVar11 != (longlong *)0x0) {
                FUN_00d50b20();
                plVar11 = local_48;
                goto LAB_00e86fe7;
              }
            }
            else if (plVar11 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        lVar3 = DAT_02789050;
        if (DAT_02789050 != 0) {
          FUN_00d50b00();
        }
        cVar6 = (**(code **)(*plVar12 + 0x50))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        local_48 = DAT_02789058;
        if (cVar6 == '\0') {
          FUN_00e86820();
          if (local_98 == '\0') {
            if (local_a0 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_98 = '\0';
          }
          local_48 = local_a0;
          FUN_00d233f0();
          if (local_a0 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (DAT_02789058 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d233f0();
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        local_40 = '\0';
        FUN_00d50b20();
      }
      FUN_00018280();
    }
  }
LAB_00e871a1:
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


