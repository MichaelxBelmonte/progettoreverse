// Function: FUN_00dd57c0
// Address: 00dd57c0
// Size: 528 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00dd57c0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  uint8_t uVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  void*arg1;
  int64_t this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x380))();
  lVar2 = g_027652d0;
  plVar1 = (int64_t *)*arg1;
  if (cVar3 == '\0') {
    uVar4 = (**(code **)(*plVar1 + 0x420))();
    *(void*)(this_ptr + 0xc) = uVar4;
    iVar6 = FUN_00e82730();
    if (iVar6 < 9) {
      (**(code **)(*(int64_t *)*arg1 + 0x478))();
    }
    else {
      uVar7 = FUN_00e83010();
      *(void*)(this_ptr + 0x10) = uVar7;
      (**(code **)(*(int64_t *)*arg1 + 0x478))(*(int64_t *)*arg1,iVar6);
    }
    FUN_00dd5a80();
    return;
  }
  if (g_027652d0 != 0) {
    FUN_00d50b00();
  }
  uVar5 = (**(code **)(*plVar1 + 0x518))();
  *(char *)(this_ptr + 0xc) = (char)uVar5;
  if (lVar2 != 0) {
    FUN_00d50b20(uVar5);
    uVar5 = (uint)*(byte *)(this_ptr + 0xc);
  }
  iVar6 = FUN_00e82730(uVar5);
  lVar2 = g_027648d0;
  if (iVar6 < 9) {
    plVar1 = (int64_t *)*arg1;
    if (g_027648d0 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar2;
    local_58 = '\x01';
    (**(code **)(*plVar1 + 0x588))(&local_60,iVar6);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar7 = FUN_00e83010();
    *(void*)(this_ptr + 0x10) = uVar7;
    local_50 = g_027648d0;
    plVar1 = (int64_t *)*arg1;
    if (g_027648d0 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    (**(code **)(*plVar1 + 0x588))(&local_50,iVar6);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027815b8;
    plVar1 = (int64_t *)*arg1;
    if (g_027815b8 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar2;
    local_38 = '\x01';
    iVar6 = (**(code **)(*plVar1 + 0x520))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (iVar6 == 1) {
      FUN_00dd5a80();
    }
  }
  return;
}

