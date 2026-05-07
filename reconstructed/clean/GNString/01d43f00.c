// Function: FUN_01d43f00
// Address: 01d43f00
// Size: 1554 bytes
// Class: GNString
// String references:
//   "%@.%@.%I.%f"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_01d43f00(float param_1,uint32_t param_2)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  char cVar4;
  int64_t *plVar5;
  void*puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *in_RCX;
  int64_t *arg1;
  void*this_ptr;
  bool bVar10;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da;
  int64_t local_f0;
  void*local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  void*local_98;
  char local_90;
  void*local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint32_t local_50;
  float local_4c;
  
  if ((g_028b8120 == (int64_t *)0x0) || (g_028b8129 == '\0')) {
    FUN_00e8cb50();
    if (g_028b8120 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028b8120 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar10 = g_028b8120 != (int64_t *)0x0;
        g_028b8120 = plVar5;
        if (bVar10) {
          FUN_00d50b20();
        }
      }
      if (g_028b8128 == '\0') {
        g_028b8128 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      g_028b8129 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b8129 = '\x01';
      FUN_00e8cb70();
    }
  }
  local_f0 = *in_RCX;
  FUN_00083ea0(4,&local_f0);
  local_80 = (void*)&g_02680ea0;
  local_50 = param_2;
  local_4c = param_1;
  uVar11 = FUN_00d8cb40(param_1,&local_80);
  puVar3 = local_98;
  if (local_90 == '\0') {
    if (((local_98 != (void*)0x0) && (uVar11 = FUN_00d50b00(), local_90 != '\0')) &&
       (local_98 != (void*)0x0)) {
      uVar11 = FUN_00d50b20();
    }
  }
  else {
    local_90 = '\0';
  }
  local_80 = (void*)&g_0253d630;
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar11 = FUN_00d50b20();
  }
  local_80 = &g_024c5048;
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar11 = FUN_00d50b20();
  }
  local_e8 = puVar3;
  local_e0 = '\0';
  FUN_000175c0(uVar11,&local_e8);
  puVar6 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (void*)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  if ((local_e0 != '\0') && (local_e8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar6 == (void*)0x0) {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_02680b28;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *(void*)((int64_t)puVar6 + 0x24) = 0;
    *(void*)((int64_t)puVar6 + 0x2c) = 0;
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
    (*PTR__objc_msgSend_024a9998)();
    local_d8 = *arg1;
    local_d0 = '\0';
    uVar7 = FUN_00e1cfc0();
    lVar8 = (*PTR__objc_msgSend_024a9998)(SUB84((double)param_1,0),uVar7);
    plVar5 = (int64_t *)puVar6[2];
    *plVar5 = lVar8;
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
      plVar5 = (int64_t *)puVar6[2];
      lVar8 = *plVar5;
    }
    if (lVar8 == 0) {
      if (g_028b8130 == '\0') {
        uVar11 = FUN_00003030();
        _CFStringCreateWithCString(uVar11,0x600);
        uVar11 = _CFBundleGetBundleWithIdentifier();
        _CFBundleCopyResourceURLsOfType(uVar11,0);
        for (lVar8 = 0; lVar9 = _CFArrayGetCount(), lVar8 < lVar9; lVar8 = lVar8 + 1) {
          uVar11 = _CFArrayGetValueAtIndex();
          _CTFontManagerRegisterFontsForURL(uVar11,0);
        }
        _CFRelease();
        local_c8 = *arg1;
        local_c0 = '\0';
        uVar7 = FUN_00e1cfc0();
        lVar8 = (*PTR__objc_msgSend_024a9998)(SUB84((double)param_1,0),uVar7);
        plVar5 = (int64_t *)puVar6[2];
        *plVar5 = lVar8;
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
          plVar5 = (int64_t *)puVar6[2];
          lVar8 = *plVar5;
        }
        g_028b8130 = '\x01';
        if (lVar8 != 0) goto LAB_01d44274;
      }
      (*PTR__objc_release_024a99a0)();
    }
    else {
LAB_01d44274:
      *(void*)(plVar5 + 1) = param_2;
      (*PTR__objc_msgSend_024a9998)();
      lVar8 = (*PTR__objc_msgSend_024a9998)
                        ((byte)((char)param_2 << 7 | (byte)((char)param_2 * '@') >> 1) >> 6,
                         *(void*)puVar6[2]);
      *(int64_t *)puVar6[2] = lVar8;
      if (lVar8 != 0) {
        (*PTR__objc_retain_024a99a8)();
        uVar11 = (*PTR__objc_release_024a99a0)();
        lVar8 = g_027eff18;
        if (*arg1 != 0) {
          if (g_027eff18 != 0) {
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
            *(void*)((int64_t)puVar6 + 0x2c) = 0x3f000000;
          }
        }
        local_a0 = '\0';
        local_80 = puVar3;
        local_78 = '\0';
        local_a8 = puVar6;
        FUN_00ca0840(uVar11,&local_80);
        if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01d440fc;
      }
      (*PTR__objc_release_024a99a0)();
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    FUN_00d50b20();
  }
  else {
LAB_01d440fc:
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

