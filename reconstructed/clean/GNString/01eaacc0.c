// Function: FUN_01eaacc0
// Address: 01eaacc0
// Size: 1349 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01eaacc0(void)

{
  char cVar1;
  uint32_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  void*puVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  float fVar9;
  float extraout_XMM0_Db;
  uint8_t local_120 [8];
  uint64_t local_118;
  uint64_t uStack_110;
  int64_t local_108;
  double *pdStack_100;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  uint64_t local_c0;
  void*local_b8;
  code *local_b0;
  int64_t local_a8;
  double local_a0;
  uint64_t local_98;
  double local_90;
  int64_t local_88;
  int64_t local_80;
  void*local_78;
  char local_70;
  int64_t local_68;
  int64_t local_60;
  void*local_58;
  char local_50;
  double *local_48;
  void*local_40;
  
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  FUN_01ea9950();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_01ebf700();
  local_40 = local_58;
  if ((local_50 == '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  local_98 = _CTFramesetterCreateWithAttributedString();
  lVar3 = _CFAttributedStringGetLength();
  do {
    fVar9 = (float)FUN_01f15df0();
    *(double *)(*(int64_t *)(this_ptr + 0x38) + 0x18) = (double)fVar9;
    FUN_01f15df0();
    *(double *)(*(int64_t *)(this_ptr + 0x38) + 0x20) = (double)extraout_XMM0_Db;
    cVar1 = FUN_01f15ea0();
    if (cVar1 == '\0') {
      *(double **)(*(int64_t *)(this_ptr + 0x38) + 0x18) = g_027fe2f8;
    }
    cVar1 = FUN_01f15ec0();
    if (cVar1 == '\0') {
      lVar6 = *(int64_t *)(this_ptr + 0x38);
      local_48 = g_027fe2f8;
      *(double **)(lVar6 + 0x20) = g_027fe2f8;
    }
    else {
      lVar6 = *(int64_t *)(this_ptr + 0x38);
      local_48 = *(double **)(lVar6 + 0x20);
    }
    local_60 = *(int64_t *)(lVar6 + 0x18);
    uVar4 = _CGPathCreateMutable();
    local_118 = 0;
    uStack_110 = 0;
    local_108 = local_60;
    pdStack_100 = local_48;
    _CGPathAddRect();
    lVar6 = lVar3;
    lVar5 = _CTFramesetterCreateFrame(uVar4,lVar3,0);
    _CFRelease();
    _CTFrameGetVisibleStringRange();
    if (lVar6 < lVar3) {
      _CFRelease();
      g_027fe2f8 = (double *)((double)g_027fe2f8 + (double)g_027fe2f8);
      lVar5 = 0;
    }
  } while (lVar5 == 0);
  local_68 = lVar5;
  FUN_00d216c0();
  FUN_01f15e70();
  uVar4 = _CTFrameGetLines();
  lVar3 = _CFArrayGetCount();
  if (lVar3 != 0) {
    lVar6 = FUN_00e83010();
    _CTFrameGetLineOrigins(lVar6,0);
    local_c0 = uVar4;
    local_88 = lVar3;
    local_80 = lVar6;
    if (0 < lVar3) {
      local_b0 = g_026b7098;
      local_a8 = lVar3 + -1;
      local_48 = (double *)(lVar6 + 8);
      lVar3 = 0;
      local_b8 = &g_026b7080;
      do {
        local_60 = lVar3;
        uVar4 = _CFArrayGetValueAtIndex();
        local_90 = (double)_CTLineGetTypographicBounds(local_120,&local_e0);
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = local_b8;
        *(void*)((int64_t)puVar7 + 0xc) = 0;
        *(void*)((int64_t)puVar7 + 0x14) = 0;
        *(void*)((int64_t)puVar7 + 0x1c) = 0;
        *(void*)((int64_t)puVar7 + 0x24) = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        (*local_b0)();
        _CTLineGetStringRange();
        *(float *)((int64_t)puVar7 + 0xc) = (float)local_48[-1];
        lVar3 = *(int64_t *)(this_ptr + 0x38);
        *(float *)((int64_t)puVar7 + 0x14) = (float)*(double *)(lVar3 + 0x18);
        local_d8 = *(double *)(lVar3 + 0x20);
        local_d0 = *local_48;
        local_c8 = local_a0;
        fVar9 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x40) + 0x390))();
        *(float *)(puVar7 + 2) = fVar9 * (float)local_60 + (float)(local_d8 - (local_d0 + local_c8))
        ;
        *(float *)(puVar7 + 3) = (float)(local_a0 + local_e0);
        if (local_a8 != local_60) {
          local_90 = *(double *)(*(int64_t *)(this_ptr + 0x38) + 0x18);
        }
        *(float *)((int64_t)puVar7 + 0x14) = (float)local_90;
        *(float *)((int64_t)puVar7 + 0x1c) = (float)local_a0;
        *(float *)(puVar7 + 4) = (float)local_e0;
        uVar8 = FUN_00e7b4e0();
        *(void*)((int64_t)puVar7 + 0x24) = uVar8;
        *(void*)(puVar7[6] + 0x20) = uVar4;
        _CFRetain();
        lVar3 = puVar7[6];
        *(void*)(lVar3 + 0x10) = 0;
        *(double *)(lVar3 + 0x18) = *local_48;
        local_50 = '\0';
        local_58 = puVar7;
        FUN_00d21140();
        lVar3 = local_60;
        if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_70 = '\0';
        local_78 = puVar7;
        FUN_01f15e00();
        if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        lVar3 = lVar3 + 1;
        local_48 = local_48 + 2;
      } while (local_88 != lVar3);
    }
    FUN_00e83070();
  }
  _CFRelease();
  _CFRelease();
  *(void*)(this_ptr + 0x18) = 0;
  uVar2 = FUN_00d8c7a0();
  *(void*)(this_ptr + 0x1c) = uVar2;
  if (local_40 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

