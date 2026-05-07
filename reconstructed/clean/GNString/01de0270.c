// Function: FUN_01de0270
// Address: 01de0270
// Size: 975 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01de0270(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  uint uVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_d0;
  char local_c8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01d384c0();
  uVar9 = FUN_01e437f0();
  uVar9 = (**(code **)(*this_ptr + 0x9d8))(uVar9);
  if ((char)this_ptr[0x46] != '\0') {
    uVar10 = FUN_01d384d0();
    local_b0 = g_027f29d0;
    if (g_027f29d0 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_a8 = '\x01';
    FUN_01cacbe0(uVar10,&local_b0);
    lVar4 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027f2a38;
    if (lVar4 != 0) {
      if (g_027f2a38 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar2;
      local_38 = '\0';
      cVar5 = FUN_00c9ff50();
      uVar10 = extraout_XMM0_Da;
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      lVar3 = g_027f2a38;
      if (cVar5 == '\0') {
        uVar8 = 0;
      }
      else {
        if (g_027f2a38 != 0) {
          uVar10 = FUN_00d50b00();
        }
        local_a0 = lVar3;
        local_98 = '\x01';
        FUN_000175c0(uVar10,&local_a0);
        plVar7 = (int64_t *)FUN_00dd6dc0();
        uVar8 = CONCAT71((int7)((uint64_t)lVar3 >> 8),plVar7 == this_ptr);
        uVar10 = extraout_XMM0_Da_00;
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          uVar10 = FUN_00d50b20();
        }
      }
      if (lVar2 != 0) {
        uVar10 = FUN_00d50b20();
      }
      if ((char)uVar8 == '\0') {
        bVar1 = false;
      }
      else {
        local_90 = *arg1;
        local_88 = '\0';
        local_80 = lVar4;
        local_78 = '\0';
        uVar6 = (**(code **)(*this_ptr + 0x9d0))(uVar10,&local_80);
        uVar8 = (uint64_t)uVar6;
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        bVar1 = true;
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      if (bVar1) goto LAB_01de0628;
    }
  }
  if ((char)this_ptr[0x44] == '\0') {
    uVar6 = FUN_01d83480();
    uVar8 = (uint64_t)uVar6;
  }
  else {
    plVar7 = (int64_t *)this_ptr[0x3e];
    if (plVar7 == (int64_t *)0x0) {
      if (*(char *)((int64_t)this_ptr + 0x221) == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        FUN_01dd3ae0();
      }
    }
    else {
      FUN_00d50b00();
      FUN_01d384d0();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      uVar6 = (**(code **)(*plVar7 + 0x28))(uVar9,&local_50);
      uVar8 = (uint64_t)uVar6;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
LAB_01de0628:
  return uVar8 & 0xffffff01;
}

