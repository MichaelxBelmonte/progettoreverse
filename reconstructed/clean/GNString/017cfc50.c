// Function: FUN_017cfc50
// Address: 017cfc50
// Size: 548 bytes
// Class: GNString
// String references:
//   "%c"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_017cfc50(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int iVar4;
  void*this_ptr;
  int64_t lVar5;
  void*local_90;
  uint32_t local_88;
  uint8_t local_84;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  uint64_t local_50;
  uint32_t local_48;
  void*local_40;
  int64_t local_38;
  
  FUN_017d2720();
  lVar5 = local_68;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_017cfc92;
    }
  }
  else if (local_68 != 0) {
LAB_017cfc92:
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_025795a8;
    (*g_025795c0)();
    local_78 = g_027d3890;
    local_40 = puVar3;
    if (g_027d3890 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    FUN_00d91000(1,&local_78);
    lVar1 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d8c7a0();
    cVar2 = FUN_00d8ca70();
    if (lVar1 == 0) {
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      local_38 = lVar5;
      local_60 = '\0';
      local_68 = 0;
      local_58 = lVar1;
      local_48 = 0;
      local_50 = 0;
      iVar4 = *(int *)(lVar1 + 0xc);
      if (0 < iVar4) {
        lVar5 = 0;
        do {
          local_68 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
          if (((int)lVar5 != iVar4 + -1) || (cVar2 == ':')) {
            FUN_00d8c7a0();
            local_84 = FUN_00d8ca70();
            local_88 = 1;
            local_90 = &g_025732e0;
            FUN_00d94d80(&g_025732e0,&local_90);
          }
          lVar5 = lVar5 + 1;
          local_50 = CONCAT44(local_50._4_4_,(int)lVar5);
          iVar4 = *(int *)(lVar1 + 0xc);
        } while ((int)lVar5 < iVar4);
      }
      FUN_00018280();
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return this_ptr;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

