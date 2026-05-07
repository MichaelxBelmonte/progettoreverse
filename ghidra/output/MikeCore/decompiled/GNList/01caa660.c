// Function: FUN_01caa660
// Address: 01caa660
// Size: 1366 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01caaa00) */
/* WARNING: Removing unreachable block (ram,0x01caaa06) */
/* WARNING: Removing unreachable block (ram,0x01caaa0b) */
/* WARNING: Removing unreachable block (ram,0x01caa88a) */
/* WARNING: Removing unreachable block (ram,0x01caa7b3) */
/* WARNING: Removing unreachable block (ram,0x01caa7bc) */
/* WARNING: Removing unreachable block (ram,0x01caa6d9) */
/* WARNING: Removing unreachable block (ram,0x01caa6e2) */
/* WARNING: Removing unreachable block (ram,0x01caa7fb) */
/* WARNING: Removing unreachable block (ram,0x01caa804) */
/* WARNING: Removing unreachable block (ram,0x01caa8c5) */
/* WARNING: Removing unreachable block (ram,0x01caa8ce) */
/* WARNING: Removing unreachable block (ram,0x01caaa31) */
/* WARNING: Removing unreachable block (ram,0x01caaa34) */
/* WARNING: Removing unreachable block (ram,0x01caaa4e) */
/* WARNING: Removing unreachable block (ram,0x01caaaba) */
/* WARNING: Removing unreachable block (ram,0x01caaac7) */
/* WARNING: Removing unreachable block (ram,0x01caaadc) */
/* WARNING: Removing unreachable block (ram,0x01caaae8) */
/* WARNING: Removing unreachable block (ram,0x01caab2f) */
/* WARNING: Removing unreachable block (ram,0x01caab3f) */

ulonglong FUN_01caa660(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined7 uVar13;
  longlong local_c0;
  char local_b8;
  longlong local_58;
  ulonglong local_50;
  longlong local_40;
  char local_38;
  
  FUN_01ca8220();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027eda10;
  if (*param_2 != 0) {
    if (DAT_027eda10 != 0) {
      FUN_00d50b00();
    }
    cVar4 = FUN_00d23d70();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_0004b090();
      (**(code **)(*plVar6 + 0x18))();
      lVar7 = DAT_027eda10;
      if (DAT_027eda10 != 0) {
        FUN_00d50b00();
      }
      FUN_01ca7f90();
      if ((local_b8 == '\0') && (local_c0 != 0)) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar6 + 0x5f8))();
      if (lVar2 == 0) {
        uVar12 = 0;
        local_58 = 0;
      }
      else {
        FUN_00d50b00();
        uVar12 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        local_58 = lVar2;
      }
      if (local_c0 != 0) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (((local_58 == 0) || (*(int *)(local_58 + 0xc) == 0)) || (*(int *)(local_58 + 0xc) < 1)) {
        uVar12 = 0;
LAB_01caab8c:
        FUN_00d50b20();
      }
      else {
        lVar9 = 0;
        local_50 = 0;
        bVar1 = false;
        lVar7 = 0;
        lVar10 = 0;
        do {
          lVar8 = *(longlong *)(*(longlong *)(local_58 + 0x10) + lVar9 * 8);
          if (lVar10 == lVar8) {
            lVar11 = lVar10;
            bVar3 = bVar1;
            if ((!bVar1) && (lVar8 != 0)) {
              FUN_00d50b00();
              bVar3 = true;
            }
          }
          else {
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            lVar11 = lVar8;
            if ((bVar1) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
          bVar1 = bVar3;
          FUN_00c80cd0();
          uVar13 = (undefined7)(uVar12 >> 8);
          if (lVar2 == lVar7) {
            lVar8 = lVar7;
            uVar12 = local_50;
            if (((char)local_50 == '\0') && (lVar2 != 0)) {
              FUN_00d50b00();
              goto LAB_01caaab0;
            }
          }
          else {
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            uVar12 = CONCAT71(uVar13,1);
            lVar8 = lVar2;
            if (((char)local_50 != '\0') && (lVar7 != 0)) {
              FUN_00d50b20();
              lVar7 = lVar2;
LAB_01caaab0:
              lVar8 = lVar7;
              uVar12 = CONCAT71(uVar13,1);
            }
          }
          local_50 = uVar12 & 0xffffffff;
          if ((lVar8 != 0) &&
             ((uVar12 = CONCAT71((int7)(uVar12 >> 8),1), *param_2 == lVar8 ||
              (cVar4 = FUN_00c80ea0(), cVar4 != '\0')))) goto LAB_01caabba;
          lVar9 = lVar9 + 1;
          lVar7 = lVar8;
          lVar10 = lVar11;
        } while (lVar9 < *(int *)(local_58 + 0xc));
        uVar12 = 0;
LAB_01caabba:
        if ((bVar1) && (lVar11 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_50 != '\0') && (lVar8 != 0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (longlong *)0x0) goto LAB_01caab8c;
      }
      if ((lVar2 != 0) && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01caa82b;
    }
  }
  lVar2 = DAT_027eda18;
  if (DAT_027eda18 != 0) {
    FUN_00d50b00();
  }
  cVar4 = FUN_00d23d70();
  lVar7 = DAT_027eda20;
  if (cVar4 == '\0') {
    if (DAT_027eda20 != 0) {
      FUN_00d50b00();
    }
    uVar5 = FUN_00d23d70();
    uVar12 = (ulonglong)uVar5 ^ 1;
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    uVar12 = 0;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  uVar12 = uVar12 ^ 1;
LAB_01caa82b:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return uVar12 & 0xffffffff;
}


