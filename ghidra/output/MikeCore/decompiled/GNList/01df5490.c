// Function: FUN_01df5490
// Address: 01df5490
// Size: 2224 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01df5c82) */
/* WARNING: Removing unreachable block (ram,0x01df5c92) */
/* WARNING: Removing unreachable block (ram,0x01df5b62) */
/* WARNING: Removing unreachable block (ram,0x01df5b6e) */
/* WARNING: Removing unreachable block (ram,0x01df5a25) */
/* WARNING: Removing unreachable block (ram,0x01df5a31) */
/* WARNING: Removing unreachable block (ram,0x01df5af2) */
/* WARNING: Removing unreachable block (ram,0x01df5afe) */
/* WARNING: Removing unreachable block (ram,0x01df5835) */
/* WARNING: Removing unreachable block (ram,0x01df583e) */
/* WARNING: Removing unreachable block (ram,0x01df56b2) */
/* WARNING: Removing unreachable block (ram,0x01df56be) */
/* WARNING: Removing unreachable block (ram,0x01df56f4) */
/* WARNING: Removing unreachable block (ram,0x01df56fd) */
/* WARNING: Removing unreachable block (ram,0x01df5c05) */
/* WARNING: Removing unreachable block (ram,0x01df5c12) */
/* WARNING: Removing unreachable block (ram,0x01df5b7c) */
/* WARNING: Removing unreachable block (ram,0x01df5b88) */

undefined4 FUN_01df5490(undefined8 param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined7 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *unaff_RDI;
  longlong lVar17;
  longlong *local_78;
  undefined4 local_64;
  longlong *local_58;
  char local_50;
  longlong local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar17 = DAT_027f2e80;
  if (DAT_027f2e80 != 0) {
    FUN_00d50b00();
  }
  cVar8 = (**(code **)(*local_40 + 0x50))();
  if (lVar17 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar8 != '\0') {
    (**(code **)(*unaff_RDI + 0x510))();
LAB_01df5681:
    uVar10 = FUN_01d827c0();
    return uVar10;
  }
  FUN_01cae990();
  lVar17 = DAT_027ef978;
  if (DAT_027ef978 != 0) {
    FUN_00d50b00();
  }
  cVar8 = (**(code **)(*local_40 + 0x50))();
  cVar9 = '\x01';
  if (cVar8 == '\0') {
    FUN_01cae990();
    lVar2 = DAT_02725a10;
    if (DAT_02725a10 != 0) {
      FUN_00d50b00();
    }
    cVar9 = (**(code **)(*local_58 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (lVar17 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar17 = DAT_027edfd0;
  if (cVar9 == '\0') goto LAB_01df5681;
  if (DAT_027edfd0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  local_78 = local_40;
  plVar12 = local_40;
  if (local_40 == (longlong *)0x0) {
    bVar5 = true;
    local_78 = (longlong *)0x0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar5 = false;
  }
  else {
    local_38 = '\0';
    bVar5 = false;
  }
  if (lVar17 != 0) {
    FUN_00d50b20();
  }
  if (local_78 == (longlong *)0x0) {
    return 0;
  }
  cVar8 = FUN_01d259f0();
  if (cVar8 == '\0') {
    local_64 = 0;
    goto LAB_01df5d2f;
  }
  FUN_01ccad60();
  if (local_40 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
LAB_01df5779:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar14 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_01df5779;
    }
  }
  FUN_01ed7190();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_019ba260();
  if (local_40 == (longlong *)0x0) {
    bVar7 = true;
    plVar15 = (longlong *)0x0;
  }
  else {
    plVar15 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar7 = false;
    }
    else {
      local_38 = '\0';
      bVar7 = false;
    }
  }
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar15 == (longlong *)0x0) {
    local_64 = 0;
  }
  else {
    iVar1 = *(int *)((longlong)plVar15 + 0xc);
    uVar13 = (undefined7)((ulonglong)plVar12 >> 8);
    local_64 = (undefined4)CONCAT71(uVar13,iVar1 != 0);
    if (((iVar1 != 0) && (param_2 != '\0')) &&
       (local_64 = (undefined4)CONCAT71(uVar13,1), 0 < iVar1)) {
      lVar17 = 0;
      bVar3 = false;
      bVar6 = false;
      local_48 = 0;
      plVar12 = (longlong *)0x0;
      do {
        lVar2 = *(longlong *)(plVar15[2] + lVar17 * 8);
        if (local_48 == lVar2) {
          lVar11 = local_48;
          bVar4 = bVar6;
          if ((!bVar6) && (lVar2 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          lVar11 = lVar2;
          if ((bVar6) && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar6 = bVar4;
        FUN_01edb1d0();
        if (local_40 == plVar12) {
          plVar16 = plVar12;
          bVar4 = bVar3;
          if ((!bVar3) && (local_40 != (longlong *)0x0)) {
            if (local_38 != '\0') goto LAB_01df59a1;
            FUN_00d50b00();
            bVar4 = true;
          }
LAB_01df5a00:
          bVar3 = bVar4;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar16 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar4 = true;
            if ((bVar3) && (plVar12 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01df5a00;
          }
          if ((bVar3) && (plVar12 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01df59a1:
          local_38 = '\0';
          bVar3 = true;
        }
        lVar2 = DAT_027edfd0;
        if (plVar16 == (longlong *)0x0) {
          FUN_002edd50();
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_01d2db80();
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (DAT_027edfd0 != 0) {
            FUN_00d50b00();
          }
          FUN_01ccab60();
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          FUN_00d4efa0();
          FUN_00c84370();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 != (longlong *)0x0) {
            (**(code **)(*plVar16 + 200))();
            FUN_00d50b20();
          }
        }
        lVar17 = lVar17 + 1;
        plVar12 = plVar16;
        local_48 = lVar11;
      } while (lVar17 < *(int *)((longlong)plVar15 + 0xc));
      if ((bVar3) && (plVar16 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar6) && (lVar11 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_40 != (longlong *)0x0) && (plVar14 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar7 && plVar15 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01df5d2f:
  if (bVar5) {
    return local_64;
  }
  FUN_00d50b20();
  return local_64;
}


