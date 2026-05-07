// Function: FUN_00b24c20
// Address: 00b24c20
// Size: 2437 bytes
// Class: MDMetaWindowController


bool FUN_00b24c20(void)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong unaff_RDI;
  bool bVar14;
  undefined8 uVar15;
  double dVar16;
  double extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined8 *local_d0;
  undefined1 local_c8;
  double local_c0;
  double local_b8;
  int local_ac;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  int local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 *local_78;
  uint local_70;
  undefined8 *local_68;
  int local_60;
  uint uStack_5c;
  int local_58;
  char local_49;
  undefined8 *local_48;
  char local_40;
  char local_35;
  undefined4 local_34;
  
  local_80 = DAT_023d58c0;
  local_88 = DAT_023d58b8;
  local_34 = 0;
  iVar3 = _AudioObjectGetPropertyDataSize(0,0,&local_34);
  if (iVar3 != 0) {
    return false;
  }
  puVar6 = (uint *)FUN_00e83010();
  iVar3 = _AudioObjectGetPropertyData(0,0,&local_34,puVar6);
  if (iVar3 != 0) {
LAB_00b24c9c:
    FUN_00e83070();
    return false;
  }
  uVar1 = *puVar6;
  uVar7 = (ulonglong)uVar1;
  if (uVar7 == 0) {
    FUN_00e83070();
    iVar3 = 0;
  }
  else {
    if (uVar1 < 9) {
      lVar11 = 0;
      iVar3 = 0;
    }
    else {
      uVar12 = 8;
      if ((ulonglong)(uVar1 & 7) != 0) {
        uVar12 = (ulonglong)(uVar1 & 7);
      }
      lVar11 = uVar7 - uVar12;
      puVar13 = puVar6 + 0x1e;
      iVar3 = 0;
      iVar4 = 0;
      iVar5 = 0;
      iVar17 = 0;
      iVar18 = 0;
      iVar19 = 0;
      iVar20 = 0;
      iVar21 = 0;
      lVar8 = lVar11;
      do {
        iVar3 = iVar3 + puVar13[-0x1c];
        iVar4 = iVar4 + puVar13[-0x18];
        iVar5 = iVar5 + puVar13[-0x14];
        iVar17 = iVar17 + puVar13[-0x10];
        iVar18 = iVar18 + puVar13[-0xc];
        iVar19 = iVar19 + puVar13[-8];
        iVar20 = iVar20 + puVar13[-4];
        iVar21 = iVar21 + *puVar13;
        puVar13 = puVar13 + 0x20;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
      iVar3 = iVar21 + iVar17 + iVar19 + iVar4 + iVar20 + iVar5 + iVar18 + iVar3;
    }
    lVar8 = uVar7 - lVar11;
    puVar6 = puVar6 + lVar11 * 4 + 2;
    do {
      iVar3 = iVar3 + *puVar6;
      puVar6 = puVar6 + 4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    FUN_00e83070();
    if (0 < iVar3) {
      local_78 = (undefined8 *)0x696e707473746d23;
      local_70 = 0;
      local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffff00000000);
      iVar4 = _AudioObjectGetPropertyDataSize(0,0,&local_48);
      if (iVar4 != 0) {
        return false;
      }
      if ((int)local_48 == 0) {
        return false;
      }
      puVar9 = (undefined4 *)FUN_00e83010();
      iVar4 = _AudioObjectGetPropertyData(0,0,&local_48,puVar9);
      if (iVar4 != 0) goto LAB_00b24c9c;
      *(undefined4 *)(unaff_RDI + 0xe8) = *puVar9;
      FUN_00e83070();
    }
  }
  local_88 = CONCAT44(0x6f757470,(undefined4)local_88);
  iVar4 = _AudioObjectGetPropertyDataSize(0,0,&local_34);
  if (iVar4 != 0) {
    return false;
  }
  puVar6 = (uint *)FUN_00e83010();
  iVar4 = _AudioObjectGetPropertyData(0,0,&local_34,puVar6);
  if (iVar4 != 0) goto LAB_00b24c9c;
  uVar1 = *puVar6;
  uVar7 = (ulonglong)uVar1;
  if (uVar7 == 0) {
    FUN_00e83070();
    iVar4 = 0;
  }
  else {
    if (uVar1 < 9) {
      lVar11 = 0;
      iVar4 = 0;
    }
    else {
      uVar12 = 8;
      if ((ulonglong)(uVar1 & 7) != 0) {
        uVar12 = (ulonglong)(uVar1 & 7);
      }
      lVar11 = uVar7 - uVar12;
      puVar13 = puVar6 + 0x1e;
      iVar4 = 0;
      iVar5 = 0;
      iVar17 = 0;
      iVar18 = 0;
      iVar19 = 0;
      iVar20 = 0;
      iVar21 = 0;
      iVar22 = 0;
      lVar8 = lVar11;
      do {
        iVar4 = iVar4 + puVar13[-0x1c];
        iVar5 = iVar5 + puVar13[-0x18];
        iVar17 = iVar17 + puVar13[-0x14];
        iVar18 = iVar18 + puVar13[-0x10];
        iVar19 = iVar19 + puVar13[-0xc];
        iVar20 = iVar20 + puVar13[-8];
        iVar21 = iVar21 + puVar13[-4];
        iVar22 = iVar22 + *puVar13;
        puVar13 = puVar13 + 0x20;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
      iVar4 = iVar22 + iVar18 + iVar20 + iVar5 + iVar21 + iVar17 + iVar19 + iVar4;
    }
    lVar8 = uVar7 - lVar11;
    puVar6 = puVar6 + lVar11 * 4 + 2;
    do {
      iVar4 = iVar4 + *puVar6;
      puVar6 = puVar6 + 4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    FUN_00e83070();
    if (0 < iVar4) {
      local_78 = (undefined8 *)0x6f75747073746d23;
      local_70 = 0;
      local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffff00000000);
      iVar5 = _AudioObjectGetPropertyDataSize(0,0,&local_48);
      if (iVar5 != 0) {
        return false;
      }
      if ((int)local_48 == 0) {
        return false;
      }
      puVar9 = (undefined4 *)FUN_00e83010();
      iVar5 = _AudioObjectGetPropertyData(0,0,&local_48,puVar9);
      if (iVar5 != 0) goto LAB_00b24c9c;
      *(undefined4 *)(unaff_RDI + 0xec) = *puVar9;
      FUN_00e83070();
    }
  }
  local_88 = 0x6f75747066737a23;
  local_34 = 0x10;
  iVar5 = _AudioObjectGetPropertyData(0,0,&local_34,&local_c0);
  if (iVar5 != 0) {
    return false;
  }
  puVar10 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &DAT_02572358;
  (*DAT_02572370)();
  uVar15 = FUN_00b19fa0();
  puVar2 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (undefined8 *)0x0) {
      uVar15 = FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_78 = puVar2;
  local_70 = local_70 & 0xffffff00;
  FUN_00d214d0(uVar15,*(undefined4 *)((longlong)puVar10 + 0xc));
  if (((char)local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_70 = local_70 & 0xffffff00;
  local_78 = (undefined8 *)0x0;
  local_60 = -1;
  uStack_5c = 0;
  local_58 = 0;
  local_68 = puVar10;
  while( true ) {
    if (uStack_5c != 0) {
      if ((int)uStack_5c < 1) {
        uStack_5c = -uStack_5c;
      }
      else {
        local_60 = local_60 - uStack_5c;
        FUN_00d23690(uStack_5c,uStack_5c);
        local_58 = local_58 + uStack_5c;
        uStack_5c = 0;
      }
    }
    lVar8 = (longlong)local_60;
    local_60 = local_60 + 1;
    if (*(int *)((longlong)local_68 + 0xc) <= local_60) break;
    local_78 = *(undefined8 **)(local_68[2] + 8 + lVar8 * 8);
    dVar16 = (double)FUN_00d45bc0();
    if ((dVar16 < local_c0) || (local_b8 < dVar16)) {
      uStack_5c = ~uStack_5c;
    }
  }
  FUN_00136b80();
  if (*(int *)(unaff_RDI + 0xd0) != *(int *)(unaff_RDI + 0xd4)) {
    local_88 = CONCAT44(0x696e7074,(undefined4)local_88);
    iVar5 = _AudioObjectGetPropertyData(0,0,&local_34,&local_c0);
    bVar14 = false;
    if (iVar5 != 0) goto LAB_00b2528d;
    local_70 = local_70 & 0xffffff00;
    local_78 = (undefined8 *)0x0;
    local_60 = -1;
    uStack_5c = 0;
    local_58 = 0;
    dVar16 = extraout_XMM0_Qa;
    local_68 = puVar10;
    while( true ) {
      if (uStack_5c != 0) {
        if ((int)uStack_5c < 1) {
          uStack_5c = -uStack_5c;
        }
        else {
          local_60 = local_60 - uStack_5c;
          FUN_00d23690(dVar16,uStack_5c);
          local_58 = local_58 + uStack_5c;
          uStack_5c = 0;
        }
      }
      lVar8 = (longlong)local_60;
      local_60 = local_60 + 1;
      if (*(int *)((longlong)local_68 + 0xc) <= local_60) break;
      local_78 = *(undefined8 **)(local_68[2] + 8 + lVar8 * 8);
      dVar16 = (double)FUN_00d45bc0();
      if ((dVar16 < local_c0) || (local_b8 < dVar16)) {
        uStack_5c = ~uStack_5c;
      }
    }
    FUN_00136b80();
  }
  local_88 = 0x6f7574706673697a;
  local_34 = 4;
  iVar5 = _AudioObjectGetPropertyData(0,0,&local_34,&local_ac);
  if (iVar5 == 0) {
    local_8c = local_ac;
    iVar5 = _AudioObjectIsPropertySettable(extraout_XMM0_Qa_00,&local_49);
    if (iVar5 == 0) {
      if (local_49 == '\0') {
        FUN_00d216c0();
        FUN_00d470c0((double)local_8c);
        puVar2 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_78 = puVar2;
        local_70 = local_70 & 0xffffff00;
        FUN_00d21140();
        if (((char)local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar2 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_35 = '\0';
      local_98 = (undefined8 *)CONCAT44(local_98._4_4_,*(undefined4 *)(unaff_RDI + 0xd0));
      local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,*(undefined4 *)(unaff_RDI + 0xd4));
      FUN_00b19680();
      local_a8 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_c8 = 1;
      local_d0 = local_a8;
      uVar15 = FUN_00b21ea0(&local_35,(ulonglong)local_98 & 0xffffffff,&local_d0);
      puVar2 = local_78;
      if (((char)local_70 == '\0') && (local_78 != (undefined8 *)0x0)) {
        uVar15 = FUN_00d50b00();
      }
      local_98 = puVar2;
      if (local_a8 != (undefined8 *)0x0) {
        uVar15 = FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
      bVar14 = false;
      if (local_98 != (undefined8 *)0x0) {
        if (*(int *)((longlong)local_98 + 0xc) != 0) {
          if (local_35 != '\0') {
            iVar3 = 0;
          }
          FUN_00d242c0(uVar15,0);
          local_88 = 0x6f75747073666d74;
          local_34 = 0x28;
          iVar5 = _AudioObjectGetPropertyData(0,0,&local_34,&local_78);
          bVar14 = iVar5 == 0;
          if (bVar14) {
            local_a0 = local_78;
            local_40 = '\0';
            local_48 = puVar10;
            FUN_00d243f0();
            if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            local_48 = local_98;
            local_40 = '\0';
            FUN_00d243f0();
            if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((*(double *)(unaff_RDI + 0x18) != (double)local_a0) ||
               (NAN(*(double *)(unaff_RDI + 0x18)) || NAN((double)local_a0))) {
              FUN_00b19d80();
              *(undefined8 **)(unaff_RDI + 0x18) = local_a0;
              FUN_00b19de0();
            }
            if (*(int *)(unaff_RDI + 0xc) != local_8c) {
              FUN_00b1a670();
              *(int *)(unaff_RDI + 0xc) = local_8c;
              FUN_00b1a6d0();
            }
            *(int *)(unaff_RDI + 0x100) = iVar4;
            *(int *)(unaff_RDI + 0x104) = iVar3;
            if (*(int *)(unaff_RDI + 0xa0) != iVar3) {
              FUN_00b1ae00();
              *(undefined4 *)(unaff_RDI + 0xa0) = *(undefined4 *)(unaff_RDI + 0x104);
              FUN_00b1ae40();
              iVar4 = *(int *)(unaff_RDI + 0x100);
            }
            if (*(int *)(unaff_RDI + 0xa4) != iVar4) {
              FUN_00b1b060();
              *(undefined4 *)(unaff_RDI + 0xa4) = *(undefined4 *)(unaff_RDI + 0x100);
              FUN_00b1b0a0();
            }
            *(undefined1 *)(unaff_RDI + 0x110) = 0;
          }
        }
        FUN_00d50b20();
      }
      goto LAB_00b2528d;
    }
  }
  bVar14 = false;
LAB_00b2528d:
  if (puVar10 != (undefined8 *)0x0) {
    FUN_00d50b20();
    return bVar14;
  }
  return bVar14;
}


