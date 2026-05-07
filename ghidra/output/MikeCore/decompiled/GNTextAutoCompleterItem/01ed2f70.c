// Function: FUN_01ed2f70
// Address: 01ed2f70
// Size: 2224 bytes
// Class: GNTextAutoCompleterItem


void FUN_01ed2f70(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint7 uVar9;
  longlong lVar8;
  longlong *plVar10;
  void *pvVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *unaff_RSI;
  int iVar17;
  longlong *unaff_RDI;
  uint uVar18;
  undefined7 uVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  uint uVar24;
  undefined8 uVar23;
  undefined8 extraout_XMM0_Qa;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  uint local_c4;
  int local_c0;
  uint local_bc;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  char local_50;
  ulonglong local_48;
  longlong local_40;
  longlong local_38;
  
  local_58 = *unaff_RSI;
  local_50 = '\0';
  iVar6 = FUN_00d23d20();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (iVar6 == -1) {
    return;
  }
  lVar20 = (longlong)iVar6;
  lVar21 = *(longlong *)(unaff_RDI[0x58] + 0x10);
  if (*(char *)(lVar21 + 4 + lVar20 * 8) == '\0') {
    return;
  }
  if (*(char *)(lVar21 + 5 + lVar20 * 8) != '\0') {
    return;
  }
  uVar18 = *(uint *)(unaff_RDI[0x58] + 0x18);
  uVar13 = 0;
  if (7 < (int)uVar18) {
    uVar25 = uVar18 >> 3;
    if (uVar18 < 0x48) {
      uVar12 = 0;
      uVar13 = 0;
    }
    else {
      uVar12 = 8;
      if ((ulonglong)(uVar25 & 7) != 0) {
        uVar12 = (ulonglong)(uVar25 & 7);
      }
      uVar12 = uVar25 - uVar12;
      uVar18 = 0;
      uVar24 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar13 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
      do {
        piVar1 = (int *)(lVar21 + uVar13 * 8);
        iVar7 = *piVar1;
        iVar17 = piVar1[2];
        piVar1 = (int *)(lVar21 + 0x10 + uVar13 * 8);
        iVar3 = *piVar1;
        iVar4 = piVar1[2];
        uVar18 = (uint)((int)uVar18 < iVar7) * iVar7 | ((int)uVar18 >= iVar7) * uVar18;
        uVar24 = (uint)((int)uVar24 < iVar17) * iVar17 | ((int)uVar24 >= iVar17) * uVar24;
        uVar26 = (uint)((int)uVar26 < iVar3) * iVar3 | ((int)uVar26 >= iVar3) * uVar26;
        uVar27 = (uint)((int)uVar27 < iVar4) * iVar4 | ((int)uVar27 >= iVar4) * uVar27;
        piVar1 = (int *)(lVar21 + 0x20 + uVar13 * 8);
        iVar7 = *piVar1;
        iVar17 = piVar1[2];
        piVar1 = (int *)(lVar21 + 0x30 + uVar13 * 8);
        iVar3 = *piVar1;
        iVar4 = piVar1[2];
        uVar28 = (uint)((int)uVar28 < iVar7) * iVar7 | ((int)uVar28 >= iVar7) * uVar28;
        uVar29 = (uint)((int)uVar29 < iVar17) * iVar17 | ((int)uVar29 >= iVar17) * uVar29;
        uVar30 = (uint)((int)uVar30 < iVar3) * iVar3 | ((int)uVar30 >= iVar3) * uVar30;
        uVar31 = (uint)((int)uVar31 < iVar4) * iVar4 | ((int)uVar31 >= iVar4) * uVar31;
        uVar13 = uVar13 + 8;
      } while (uVar12 != uVar13);
      uVar18 = ((int)uVar18 < (int)uVar28) * uVar28 | ((int)uVar18 >= (int)uVar28) * uVar18;
      uVar24 = ((int)uVar24 < (int)uVar29) * uVar29 | ((int)uVar24 >= (int)uVar29) * uVar24;
      uVar26 = ((int)uVar26 < (int)uVar30) * uVar30 | ((int)uVar26 >= (int)uVar30) * uVar26;
      uVar27 = ((int)uVar27 < (int)uVar31) * uVar31 | ((int)uVar27 >= (int)uVar31) * uVar27;
      uVar18 = ((int)uVar26 < (int)uVar18) * uVar18 | ((int)uVar26 >= (int)uVar18) * uVar26;
      uVar24 = ((int)uVar27 < (int)uVar24) * uVar24 | ((int)uVar27 >= (int)uVar24) * uVar27;
      uVar13 = (ulonglong)
               (((int)uVar24 < (int)uVar18) * uVar18 | ((int)uVar24 >= (int)uVar18) * uVar24);
    }
    do {
      uVar18 = *(uint *)(lVar21 + uVar12 * 8);
      if ((int)uVar13 < (int)uVar18) {
        uVar13 = (ulonglong)uVar18;
      }
      uVar12 = uVar12 + 1;
    } while (uVar25 != uVar12);
  }
  plVar10 = (longlong *)unaff_RDI[0x55];
  if (plVar10 != (longlong *)0x0) {
    uVar23 = FUN_00d50b00();
    local_118 = *unaff_RSI;
    local_110 = '\0';
    (**(code **)(*plVar10 + 0x18))(uVar23,&local_118);
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar10 = (longlong *)unaff_RDI[0x54];
  FUN_00d50b00();
  local_108 = *unaff_RSI;
  local_100 = '\0';
  (**(code **)(*plVar10 + 0x18))(&local_108);
  lVar21 = local_58;
  local_bc = (uint)uVar13;
  if (local_58 == 0) {
    uVar14 = (undefined4)CONCAT71((int7)(uVar13 >> 8),1);
    lVar21 = 0;
  }
  else {
    if (local_50 == '\0') {
      FUN_00d50b00();
      uVar14 = 0;
      if ((local_50 == '\0') || (local_58 == 0)) goto LAB_01ed31ba;
      FUN_00d50b20();
    }
    else {
      local_50 = '\0';
    }
    uVar14 = 0;
  }
LAB_01ed31ba:
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  iVar7 = *(int *)(*(longlong *)(unaff_RDI[0x58] + 0x10) + lVar20 * 8);
  *(undefined1 *)(*(longlong *)(unaff_RDI[0x58] + 0x10) + 5 + lVar20 * 8) = 1;
  uVar18 = *(uint *)(lVar21 + 0xc);
  uVar9 = (uint7)(uint3)(uVar18 >> 8);
  local_70 = lVar21;
  local_64 = uVar14;
  if ((int)uVar18 < 1) {
    local_48 = CONCAT71(uVar9,1);
    local_60 = 0;
    local_40 = 0;
    local_38 = 0;
  }
  else {
    local_c0 = iVar6 + 1;
    lVar21 = lVar20 * 8 + 8;
    lVar20 = (ulonglong)uVar18 + 1;
    local_48 = CONCAT71(uVar9,1);
    local_38 = 0;
    local_40 = 0;
    local_60 = 0;
    do {
      lVar15 = local_40;
      uVar18 = uVar18 - 1;
      lVar8 = *(longlong *)(local_70 + 0x10);
      lVar16 = *(longlong *)(lVar8 + (ulonglong)uVar18 * 8);
      if (local_40 == lVar16) {
        if (((char)local_60 == '\0') && (lVar16 != 0)) {
          local_60 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar16 != 0) {
          lVar8 = FUN_00d50b00();
        }
        bVar22 = (char)local_60 != '\0';
        local_60 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
        lVar15 = lVar16;
        if ((bVar22) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      local_f0 = '\0';
      local_f8 = lVar15;
      local_40 = lVar15;
      FUN_00d23370();
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      plVar2 = (longlong *)unaff_RDI[0x54];
      local_88 = 0;
      FUN_00d50b00();
      local_88 = '\x01';
      local_e8 = local_40;
      local_e0 = '\0';
      plVar10 = &local_e8;
      local_90 = unaff_RDI;
      uVar23 = (**(code **)(*plVar2 + 0x18))(plVar10,&local_90);
      lVar16 = local_38;
      lVar8 = local_58;
      uVar19 = (undefined7)((ulonglong)unaff_RDI >> 8);
      if (local_58 == local_38) {
        lVar8 = local_38;
        if (((char)local_48 == '\0') && (local_58 != 0)) {
          if (local_50 == '\0') {
            uVar23 = FUN_00d50b00();
            goto LAB_01ed3410;
          }
          goto LAB_01ed33b4;
        }
        uVar13 = local_48 & 0xffffffff;
joined_r0x01ed33fb:
        if ((local_50 != '\0') && (local_58 != 0)) {
          uVar23 = FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != 0) {
            uVar23 = FUN_00d50b00();
          }
          uVar13 = CONCAT71(uVar19,1);
          if (((char)local_48 != '\0') && (lVar16 != 0)) {
            uVar23 = FUN_00d50b20();
            lVar16 = lVar8;
LAB_01ed3410:
            uVar13 = CONCAT71(uVar19,1);
            lVar8 = lVar16;
          }
          goto joined_r0x01ed33fb;
        }
        if (((char)local_48 != '\0') && (local_38 != 0)) {
          uVar23 = FUN_00d50b20();
        }
LAB_01ed33b4:
        local_50 = '\0';
        uVar13 = CONCAT71(uVar19,1);
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        uVar23 = FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        uVar23 = FUN_00d50b20();
      }
      local_c4 = uVar18;
      if (lVar8 == 0) {
        local_38 = 0;
        uVar13 = uVar13 & 0xffffffff;
      }
      else {
        local_38 = lVar8;
        if ((*(int *)(lVar8 + 0xc) == 0) &&
           (cVar5 = (**(code **)(*unaff_RDI + 0xa40))(), uVar23 = extraout_XMM0_Qa, cVar5 == '\0'))
        {
          if ((char)uVar13 == '\0') {
            local_38 = 0;
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            local_38 = 0;
            uVar23 = FUN_00d50b20();
          }
        }
        else {
          uVar13 = uVar13 & 0xffffffff;
        }
      }
      lVar8 = unaff_RDI[0x54];
      lVar16 = unaff_RDI[0x58];
      iVar17 = *(int *)(lVar16 + 0x18);
      FUN_00c8e340(uVar23,1);
      bVar22 = local_38 != 0;
      lVar16 = *(longlong *)(lVar16 + 0x10);
      local_48 = uVar13;
      _memmove(plVar10,(void *)(longlong)(iVar17 - (int)lVar21),param_3);
      *(ulonglong *)(lVar16 + lVar21) = (ulonglong)CONCAT14(bVar22 && lVar8 != 0,iVar7 + 1);
      lVar20 = lVar20 + -1;
      uVar18 = local_c4;
    } while (1 < lVar20);
  }
  lVar21 = unaff_RDI[0x34];
  *(undefined4 *)(unaff_RDI + 0x30) = *(undefined4 *)(unaff_RDI[0x57] + 0xc);
  if ((lVar21 != 0) && (iVar7 = *(int *)(lVar21 + 0x18), 3 < iVar7)) {
    pvVar11 = *(void **)(lVar21 + 0x10);
    lVar20 = 0;
    bVar22 = false;
    do {
      iVar17 = *(int *)((longlong)pvVar11 + lVar20 * 4);
      if (iVar6 < iVar17) {
        *(int *)((longlong)pvVar11 + lVar20 * 4) = iVar17 + *(int *)(local_70 + 0xc);
        iVar7 = *(int *)(lVar21 + 0x18);
        bVar22 = true;
      }
      lVar20 = lVar20 + 1;
      iVar17 = iVar7 + 3;
      if (-1 < iVar7) {
        iVar17 = iVar7;
      }
    } while (lVar20 < iVar17 >> 2);
    if (bVar22) {
      uVar23 = FUN_00d50b00();
      FUN_00c8e340(uVar23,0);
      _memcpy(pvVar11,(void *)(longlong)*(int *)(lVar21 + 0x18),param_3);
      FUN_00d50b20();
    }
  }
  lVar20 = local_40;
  uVar14 = local_64;
  lVar21 = local_70;
  iVar7 = (int)unaff_RDI[0x36];
  if ((iVar7 != -1) && (iVar6 < iVar7)) {
    *(int *)(unaff_RDI + 0x36) = iVar7 + *(int *)(local_70 + 0xc);
  }
  FUN_01dcfdb0();
  uVar18 = *(uint *)(unaff_RDI[0x58] + 0x18);
  uVar25 = 0;
  if (7 < (int)uVar18) {
    uVar24 = uVar18 >> 3;
    lVar8 = *(longlong *)(unaff_RDI[0x58] + 0x10);
    if (uVar18 < 0x48) {
      uVar13 = 0;
      uVar25 = 0;
    }
    else {
      uVar13 = 8;
      if ((ulonglong)(uVar24 & 7) != 0) {
        uVar13 = (ulonglong)(uVar24 & 7);
      }
      uVar13 = uVar24 - uVar13;
      uVar18 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar12 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
      do {
        piVar1 = (int *)(lVar8 + uVar12 * 8);
        iVar6 = *piVar1;
        iVar7 = piVar1[2];
        piVar1 = (int *)(lVar8 + 0x10 + uVar12 * 8);
        iVar17 = *piVar1;
        iVar3 = piVar1[2];
        uVar18 = (uint)((int)uVar18 < iVar6) * iVar6 | ((int)uVar18 >= iVar6) * uVar18;
        uVar25 = (uint)((int)uVar25 < iVar7) * iVar7 | ((int)uVar25 >= iVar7) * uVar25;
        uVar26 = (uint)((int)uVar26 < iVar17) * iVar17 | ((int)uVar26 >= iVar17) * uVar26;
        uVar27 = (uint)((int)uVar27 < iVar3) * iVar3 | ((int)uVar27 >= iVar3) * uVar27;
        piVar1 = (int *)(lVar8 + 0x20 + uVar12 * 8);
        iVar6 = *piVar1;
        iVar7 = piVar1[2];
        piVar1 = (int *)(lVar8 + 0x30 + uVar12 * 8);
        iVar17 = *piVar1;
        iVar3 = piVar1[2];
        uVar28 = (uint)((int)uVar28 < iVar6) * iVar6 | ((int)uVar28 >= iVar6) * uVar28;
        uVar29 = (uint)((int)uVar29 < iVar7) * iVar7 | ((int)uVar29 >= iVar7) * uVar29;
        uVar30 = (uint)((int)uVar30 < iVar17) * iVar17 | ((int)uVar30 >= iVar17) * uVar30;
        uVar31 = (uint)((int)uVar31 < iVar3) * iVar3 | ((int)uVar31 >= iVar3) * uVar31;
        uVar12 = uVar12 + 8;
      } while (uVar13 != uVar12);
      uVar18 = ((int)uVar18 < (int)uVar28) * uVar28 | ((int)uVar18 >= (int)uVar28) * uVar18;
      uVar25 = ((int)uVar25 < (int)uVar29) * uVar29 | ((int)uVar25 >= (int)uVar29) * uVar25;
      uVar26 = ((int)uVar26 < (int)uVar30) * uVar30 | ((int)uVar26 >= (int)uVar30) * uVar26;
      uVar27 = ((int)uVar27 < (int)uVar31) * uVar31 | ((int)uVar27 >= (int)uVar31) * uVar27;
      uVar18 = ((int)uVar26 < (int)uVar18) * uVar18 | ((int)uVar26 >= (int)uVar18) * uVar26;
      uVar25 = ((int)uVar27 < (int)uVar25) * uVar25 | ((int)uVar27 >= (int)uVar25) * uVar27;
      uVar25 = ((int)uVar25 < (int)uVar18) * uVar18 | ((int)uVar25 >= (int)uVar18) * uVar25;
    }
    do {
      uVar18 = *(uint *)(lVar8 + uVar13 * 8);
      if ((int)uVar25 < (int)uVar18) {
        uVar25 = uVar18;
      }
      uVar13 = uVar13 + 1;
    } while (uVar24 != uVar13);
  }
  if (uVar25 != local_bc) {
    FUN_01dcb680();
  }
  plVar10 = (longlong *)unaff_RDI[0x55];
  if (plVar10 != (longlong *)0x0) {
    local_78 = 0;
    uVar23 = FUN_00d50b00();
    local_78 = '\x01';
    local_d8 = *unaff_RSI;
    local_d0 = '\0';
    local_80 = unaff_RDI;
    (**(code **)(*plVar10 + 0x28))(uVar23,&local_d8);
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0xa20))();
  (**(code **)(*unaff_RDI + 0x620))();
  if (((char)local_60 != '\0') && (lVar20 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar14 == '\0' && lVar21 != 0) {
    FUN_00d50b20();
  }
  return;
}


