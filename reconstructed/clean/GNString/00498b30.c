// Function: FUN_00498b30
// Address: 00498b30
// Size: 866 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00498b30(void)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  int64_t this_ptr;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  uint64_t local_40;
  char local_38;
  
  FUN_00483b30();
  FUN_00486360();
  FUN_0047dd70();
  if (*(int64_t *)(this_ptr + 0x1c8) == 0) {
    return;
  }
  uVar7 = FUN_01d77960();
  local_80 = g_027086e8;
  if (g_027086e8 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_78 = '\x01';
  FUN_01d5e6e0(uVar7,&local_80);
  uVar5 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027086e0;
  if (uVar5 != 0) {
    local_58 = uVar5;
    if (g_027086e0 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar1;
    FUN_00e7d6f0();
    uVar7 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar7 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    local_50 = local_60;
    local_48 = '\0';
    FUN_000175c0(uVar7,&local_50);
    uVar6 = local_40;
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
    uVar4 = uVar5;
    if (uVar6 != 0) {
      local_38 = '\0';
      local_40 = uVar6;
      uVar3 = FUN_00c70bc0();
      uVar4 = (uint64_t)uVar3;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    uVar5 = local_58;
    if ((uVar6 != 0 & (byte)uVar4) == 0) {
      FUN_01d66e50();
    }
  }
  uVar7 = FUN_01d77960();
  local_70 = g_027087c8;
  if (g_027087c8 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_68 = '\x01';
  FUN_01d5e6e0(uVar7,&local_70);
  uVar4 = local_40;
  uVar6 = uVar5;
  if (uVar5 != local_40) {
    if (local_38 != '\0') {
      if (uVar5 != 0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      uVar6 = local_40;
      goto LAB_00498e32;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    uVar6 = uVar4;
    if (uVar5 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_00498e32:
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (uVar6 != 0) {
    cVar2 = FUN_007428a0();
    if (cVar2 == '\0') {
      FUN_01d66e50();
    }
    FUN_00d50b20();
  }
  return;
}

