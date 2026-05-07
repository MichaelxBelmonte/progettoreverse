// Function: FUN_0039ab20
// Address: 0039ab20
// Size: 2564 bytes
// Class: MDEditorViewController


/* WARNING: Removing unreachable block (ram,0x0039aba9) */
/* WARNING: Removing unreachable block (ram,0x0039abb5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0039ab20(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  bool bVar8;
  double dVar9;
  undefined8 uVar10;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_d0 = *param_2;
  local_c8 = '\0';
  FUN_01d61e70(param_1,&local_d0);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  lVar7 = DAT_026e1810;
  if (DAT_026e1810 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar5 = (ulonglong)(dVar9 * DAT_023907c0);
  dVar9 = dVar9 * DAT_023907c0 - _DAT_023907c8;
  uVar10 = FUN_0071a120();
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((uVar10 = FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    uVar10 = FUN_00d50b20();
  }
  bVar4 = (byte)(((longlong)dVar9 & (longlong)uVar5 >> 0x3f | uVar5) / 3);
  local_50 = lVar7;
  local_48 = '\0';
  FUN_000175c0(uVar10,&local_50);
  lVar6 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    local_38 = '\0';
    local_40 = lVar6;
    bVar4 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar10 = FUN_00d50b20();
  if (lVar7 != 0) {
    uVar10 = FUN_00d50b20();
  }
  lVar7 = DAT_026de830;
  if ((lVar6 != 0 & bVar4) == 0) {
    if (DAT_026de830 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_c0 = lVar7;
    local_b8 = '\x01';
    uVar10 = FUN_01d5e6e0(uVar10,&local_c0);
    lVar7 = local_40;
    if (local_40 == 0) {
      bVar8 = true;
      lVar7 = 0;
      bVar1 = false;
    }
    else {
      if (local_38 == '\0') {
        uVar10 = FUN_00d50b00();
        bVar1 = true;
        bVar8 = false;
        if ((local_38 == '\0') || (bVar8 = false, local_40 == 0)) goto LAB_0039adce;
        uVar10 = FUN_00d50b20();
      }
      else {
        local_38 = '\0';
      }
      bVar1 = true;
      bVar8 = false;
    }
LAB_0039adce:
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (!bVar8) {
      uVar10 = FUN_01d66e50();
    }
    lVar6 = DAT_026fb858;
    if (DAT_026fb858 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_b0 = lVar6;
    local_a8 = '\x01';
    uVar10 = FUN_01d5e6e0(uVar10,&local_b0);
    lVar6 = local_40;
    if (local_40 == lVar7) {
      lVar6 = lVar7;
      if ((bool)(bVar8 & local_40 != 0)) {
        if (local_38 != '\0') goto LAB_0039ae6e;
        bVar1 = true;
        uVar10 = FUN_00d50b00();
      }
LAB_0039aec5:
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar10 = FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar10 = FUN_00d50b00();
        }
        bVar8 = (bool)(bVar1 & lVar7 != 0);
        bVar1 = true;
        if (bVar8) {
          uVar10 = FUN_00d50b20();
        }
        goto LAB_0039aec5;
      }
      bVar8 = lVar7 != 0;
      lVar7 = lVar6;
      if ((bool)(bVar1 & bVar8)) {
        uVar10 = FUN_00d50b20();
      }
LAB_0039ae6e:
      local_38 = '\0';
      bVar1 = true;
      lVar6 = lVar7;
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (lVar6 != 0) {
      uVar10 = FUN_01d66e50();
    }
    lVar7 = DAT_026fb860;
    if (DAT_026fb860 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_a0 = lVar7;
    local_98 = '\x01';
    uVar10 = FUN_01d5e6e0(uVar10,&local_a0);
    lVar7 = local_40;
    if (local_40 == lVar6) {
      lVar7 = lVar6;
      bVar8 = bVar1;
      if ((!bVar1) && (local_40 != 0)) {
        if (local_38 != '\0') goto LAB_0039af79;
        uVar10 = FUN_00d50b00();
        bVar8 = true;
      }
LAB_0039affb:
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar10 = FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar10 = FUN_00d50b00();
        }
        bVar8 = true;
        if ((bVar1) && (lVar6 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        goto LAB_0039affb;
      }
      if ((bVar1) && (lVar6 != 0)) {
        uVar10 = FUN_00d50b20();
      }
LAB_0039af79:
      local_38 = '\0';
      bVar8 = true;
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (lVar7 != 0) {
      uVar10 = FUN_01d66e50();
    }
    lVar6 = DAT_026deb68;
    if (DAT_026deb68 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_90 = lVar6;
    local_88 = '\x01';
    FUN_01d5e6e0(uVar10,&local_90);
    lVar6 = local_40;
    if (local_40 == lVar7) {
      lVar6 = lVar7;
      bVar1 = bVar8;
      if ((!bVar8) && (local_40 != 0)) {
        if (local_38 != '\0') goto LAB_0039b0ac;
        FUN_00d50b00();
        bVar1 = true;
      }
LAB_0039b11e:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar1 = true;
        if ((bVar8) && (lVar7 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0039b11e;
      }
      if ((bVar8) && (lVar7 != 0)) {
        FUN_00d50b20();
      }
LAB_0039b0ac:
      local_38 = '\0';
      bVar1 = true;
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((lVar6 != 0) && (FUN_01d66e50(), bVar1)) {
      FUN_00d50b20();
    }
  }
  lVar7 = DAT_02708e90;
  if (DAT_02708e90 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar5 = (ulonglong)(dVar9 * DAT_023907c0);
  dVar9 = dVar9 * DAT_023907c0 - _DAT_023907c8;
  uVar10 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  bVar4 = (byte)(((longlong)dVar9 & (longlong)uVar5 >> 0x3f | uVar5) / 3);
  local_50 = lVar7;
  local_48 = '\0';
  FUN_000175c0(uVar10,&local_50);
  lVar6 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    local_38 = '\0';
    local_40 = lVar6;
    bVar4 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar10 = FUN_00d50b20();
  if (lVar7 != 0) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = DAT_02704db0;
  lVar7 = DAT_026fb8b0;
  if ((lVar6 != 0 & bVar4) == 0) {
    if (DAT_026fb8b0 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_60 = lVar7;
    local_58 = '\x01';
    FUN_01d5e6e0(uVar10,&local_60);
    lVar7 = local_40;
    if (local_40 == 0) {
      bVar8 = true;
      lVar7 = 0;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar8 = false;
        if ((local_38 == '\0') || (local_40 == 0)) goto LAB_0039b442;
        FUN_00d50b20();
      }
      else {
        local_38 = '\0';
      }
      bVar8 = false;
    }
LAB_0039b442:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar8) {
      FUN_01d66e50();
    }
    if (!bVar8 && lVar7 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0039b504;
  }
  if (DAT_02704db0 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_80 = lVar2;
  local_78 = '\x01';
  uVar10 = FUN_01d5e6e0(uVar10,&local_80);
  lVar7 = local_40;
  if (local_40 == 0) {
    bVar8 = true;
    lVar7 = 0;
    bVar1 = false;
  }
  else {
    if (local_38 == '\0') {
      uVar10 = FUN_00d50b00();
      bVar1 = true;
      bVar8 = false;
      if ((local_38 == '\0') || (bVar8 = false, local_40 == 0)) goto LAB_0039b376;
      uVar10 = FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar1 = true;
    bVar8 = false;
  }
LAB_0039b376:
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  if (!bVar8) {
    uVar10 = FUN_01d66e50();
  }
  lVar6 = DAT_026fb898;
  if (DAT_026fb898 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_70 = lVar6;
  local_68 = '\x01';
  FUN_01d5e6e0(uVar10,&local_70);
  lVar6 = local_40;
  if (local_40 == lVar7) {
    lVar6 = lVar7;
    if ((bool)(bVar8 & local_40 != 0)) {
      if (local_38 != '\0') goto LAB_0039b413;
      bVar1 = true;
      FUN_00d50b00();
    }
LAB_0039b4bf:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      bVar8 = (bool)(bVar1 & lVar7 != 0);
      bVar1 = true;
      if (bVar8) {
        FUN_00d50b20();
      }
      goto LAB_0039b4bf;
    }
    bVar8 = lVar7 != 0;
    lVar7 = local_40;
    if ((bool)(bVar1 & bVar8)) {
      FUN_00d50b20();
    }
LAB_0039b413:
    local_38 = '\0';
    bVar1 = true;
    lVar6 = lVar7;
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar6 != 0) && (FUN_01d66e50(), bVar1)) {
    FUN_00d50b20();
  }
LAB_0039b504:
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


