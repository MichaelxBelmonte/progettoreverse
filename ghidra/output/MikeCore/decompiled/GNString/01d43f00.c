// Function: FUN_01d43f00
// Address: 01d43f00
// Size: 1554 bytes
// Class: GNString
// String references:
//   "%@.%@.%I.%f"


undefined8 * FUN_01d43f00(float param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *in_RCX;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  longlong local_f0;
  undefined8 *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  undefined8 *local_98;
  char local_90;
  undefined8 *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined4 local_50;
  float local_4c;
  
  if ((DAT_028b8120 == (longlong *)0x0) || (DAT_028b8129 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b8120 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar5 + 0x18))();
      if (DAT_028b8120 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar10 = DAT_028b8120 != (longlong *)0x0;
        DAT_028b8120 = plVar5;
        if (bVar10) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b8128 == '\0') {
        DAT_028b8128 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      DAT_028b8129 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b8129 = '\x01';
      FUN_00e8cb70();
    }
  }
  local_f0 = *in_RCX;
  FUN_00083ea0(4,&local_f0);
  local_80 = (undefined8 *)&DAT_02680ea0;
  local_50 = param_2;
  local_4c = param_1;
  uVar11 = FUN_00d8cb40(param_1,&local_80);
  puVar3 = local_98;
  if (local_90 == '\0') {
    if (((local_98 != (undefined8 *)0x0) && (uVar11 = FUN_00d50b00(), local_90 != '\0')) &&
       (local_98 != (undefined8 *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
  }
  else {
    local_90 = '\0';
  }
  local_80 = (undefined8 *)&DAT_0253d630;
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar11 = FUN_00d50b20();
  }
  local_80 = &DAT_024c5048;
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar11 = FUN_00d50b20();
  }
  local_e8 = puVar3;
  local_e0 = '\0';
  FUN_000175c0(uVar11,&local_e8);
  puVar6 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (undefined8 *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02680b28;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    FUN_00d500e0();
    lVar8 = *in_RCX;
    lVar9 = puVar6[7];
    if (lVar9 != lVar8) {
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      puVar6[7] = lVar8;
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
    }
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_024a9998)();
    local_d8 = *unaff_RSI;
    local_d0 = '\0';
    uVar7 = FUN_00e1cfc0();
    lVar8 = (*(code *)PTR__objc_msgSend_024a9998)(SUB84((double)param_1,0),uVar7);
    plVar5 = (longlong *)puVar6[2];
    *plVar5 = lVar8;
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
      plVar5 = (longlong *)puVar6[2];
      lVar8 = *plVar5;
    }
    if (lVar8 == 0) {
      if (DAT_028b8130 == '\0') {
        uVar11 = FUN_00003030();
        _CFStringCreateWithCString(uVar11,0x600);
        uVar11 = _CFBundleGetBundleWithIdentifier();
        _CFBundleCopyResourceURLsOfType(uVar11,0);
        for (lVar8 = 0; lVar9 = _CFArrayGetCount(), lVar8 < lVar9; lVar8 = lVar8 + 1) {
          uVar11 = _CFArrayGetValueAtIndex();
          _CTFontManagerRegisterFontsForURL(uVar11,0);
        }
        _CFRelease();
        local_c8 = *unaff_RSI;
        local_c0 = '\0';
        uVar7 = FUN_00e1cfc0();
        lVar8 = (*(code *)PTR__objc_msgSend_024a9998)(SUB84((double)param_1,0),uVar7);
        plVar5 = (longlong *)puVar6[2];
        *plVar5 = lVar8;
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
          plVar5 = (longlong *)puVar6[2];
          lVar8 = *plVar5;
        }
        DAT_028b8130 = '\x01';
        if (lVar8 != 0) goto LAB_01d44274;
      }
      (*(code *)PTR__objc_release_024a99a0)();
    }
    else {
LAB_01d44274:
      *(undefined4 *)(plVar5 + 1) = param_2;
      (*(code *)PTR__objc_msgSend_024a9998)();
      lVar8 = (*(code *)PTR__objc_msgSend_024a9998)
                        ((byte)((char)param_2 << 7 | (byte)((char)param_2 * '@') >> 1) >> 6,
                         *(undefined8 *)puVar6[2]);
      *(longlong *)puVar6[2] = lVar8;
      if (lVar8 != 0) {
        (*(code *)PTR__objc_retain_024a99a8)();
        uVar11 = (*(code *)PTR__objc_release_024a99a0)();
        lVar8 = DAT_027eff18;
        if (*unaff_RSI != 0) {
          if (DAT_027eff18 != 0) {
            FUN_00d50b00();
          }
          local_b8 = lVar8;
          local_b0 = '\x01';
          cVar4 = FUN_00d90870();
          uVar11 = extraout_XMM0_Da;
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            uVar11 = FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            *(undefined4 *)((longlong)puVar6 + 0x2c) = 0x3f000000;
          }
        }
        local_a0 = '\0';
        local_80 = puVar3;
        local_78 = '\0';
        local_a8 = puVar6;
        FUN_00ca0840(uVar11,&local_80);
        if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01d440fc;
      }
      (*(code *)PTR__objc_release_024a99a0)();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    FUN_00d50b20();
  }
  else {
LAB_01d440fc:
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


