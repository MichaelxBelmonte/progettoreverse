// Function: FUN_01dc0220
// Address: 01dc0220
// Size: 882 bytes
// Class: GNValue

void FUN_01dc0220(uint64_t param_1,float param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint8_t uVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t local_90;
  char local_88;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  int64_t *local_40;
  char local_38;
  
  uVar7 = FUN_01e3f820();
  (**(code **)(*this_ptr + 0x640))();
  local_50 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar4 = (**(code **)(*this_ptr + 0x920))();
  uVar3 = (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*local_50 + 0x3f0))((float)uVar7,param_2,uVar4,uVar3);
  plVar6 = (int64_t *)this_ptr[0x30];
  if (plVar6 == (int64_t *)0x0) {
    uVar5 = (**(code **)(*local_50 + 0x370))();
    plVar6 = local_40;
    if (local_40 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
      local_48 = 0;
    }
    else {
      local_48 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar5 = FUN_00d50b00();
    local_48 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
  }
  FUN_01d48a10();
  FUN_01cfbc00();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  (**(code **)(*this_ptr + 0x960))();
  local_58 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_58 = '\x01';
  local_60 = local_90;
  FUN_01d44870(param_2 + g_023b8b2c,&local_60);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar1 + 0x3f0))
            (g_02394298 + (float)uVar7,(float)((uint64_t)uVar7 >> 0x20) + g_023b36a0);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (((char)local_48 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

