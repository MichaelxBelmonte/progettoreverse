// Function: FUN_01d8d8e0
// Address: 01d8d8e0
// Size: 1227 bytes
// Class: GNString
// String references:
//   "%@ is not able to be resized"
//   "%@ is not able to be resized due to the windows min content size."
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d8d8e0(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  bool bVar4;
  int64_t lVar5;
  int64_t lVar6;
  char cVar7;
  int64_t *this_ptr;
  float fVar8;
  float fVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint8_t auVar12 [16];
  float fVar13;
  float fVar14;
  float local_118;
  float fStack_114;
  void*local_68;
  uint32_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint8_t local_31;
  
  fVar14 = (float)((uint64_t)param_2 >> 0x20);
  fVar13 = (float)param_2;
  local_31 = (**(code **)(*this_ptr + 0x578))();
  (**(code **)(*this_ptr + 0x570))();
  fVar1 = *(float *)((int64_t)this_ptr + 0x114);
  fVar2 = *(float *)(this_ptr + 0x23);
  FUN_01e3cf70();
  fVar9 = *(float *)((int64_t)this_ptr + 0x114);
  fVar8 = *(float *)(this_ptr + 0x23);
  *(float *)((int64_t)this_ptr + 0x114) = fVar1;
  *(float *)(this_ptr + 0x23) = fVar2;
  lVar5 = g_027f1438;
  lVar3 = this_ptr[3];
  if (lVar3 == 0) {
    if (g_027f1438 != 0) {
      FUN_00d50b00();
    }
    uVar10 = (**(code **)(*this_ptr + 400))();
    local_58 = local_48;
    local_60 = 1;
    local_68 = &g_024c5048;
    local_50 = 0;
    if (local_48 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_50 = '\x01';
    FUN_00cc7b40(uVar10,&local_68);
    local_68 = &g_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    bVar4 = true;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    bVar4 = false;
  }
  FUN_01e3f820();
  uVar10 = FUN_01e59080();
  fVar8 = fVar8 - fVar2;
  if ((((fVar8 != 0.0) || (NAN(fVar8))) &&
      (cVar7 = FUN_01e5c7d0(), lVar5 = g_027f1438, cVar7 != '\0')) &&
     (fStack_114 = (float)((uint64_t)uVar10 >> 0x20), fVar8 + fVar14 < fStack_114)) {
    if (g_027f1438 != 0) {
      FUN_00d50b00();
    }
    uVar11 = (**(code **)(*this_ptr + 400))();
    lVar6 = local_48;
    local_60 = 1;
    local_68 = &g_024c5048;
    local_50 = 0;
    if (local_48 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_58 = lVar6;
    local_50 = '\x01';
    FUN_00cc7b40(uVar11,&local_68);
    local_68 = &g_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  fVar9 = fVar9 - fVar1;
  if ((((fVar9 != g_0239424c) || (NAN(fVar9) || NAN(g_0239424c))) &&
      (cVar7 = FUN_01e5c720(), lVar5 = g_027f1438, cVar7 != '\0')) &&
     (local_118 = (float)uVar10, fVar9 + fVar13 < local_118)) {
    if (g_027f1438 != 0) {
      FUN_00d50b00();
    }
    uVar10 = (**(code **)(*this_ptr + 400))();
    lVar6 = local_48;
    local_60 = 1;
    local_68 = &g_024c5048;
    local_50 = 0;
    if (local_48 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_58 = lVar6;
    local_50 = '\x01';
    FUN_00cc7b40(uVar10,&local_68);
    local_68 = &g_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  cVar7 = FUN_01e4ce30();
  auVar12 = insertps(ZEXT416((uint)(fVar9 + fVar13)),ZEXT416((uint)(fVar8 + fVar14)),0x10);
  if (cVar7 == '\0') {
    FUN_01e5bc80();
  }
  else {
    FUN_01e59fd0(auVar12._0_8_);
  }
  (**(code **)(*this_ptr + 0x570))();
  if (lVar3 != 0 && !bVar4) {
    FUN_00d50b20();
  }
  return;
}

