// Function: FUN_01e59140
// Address: 01e59140
// Size: 537 bytes
// Class: GNStringTable

void FUN_01e59140(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  double dVar1;
  void*puVar2;
  uint64_t uVar3;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint8_t auVar7 [16];
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  _objc_alloc();
  puVar2 = PTR__objc_msgSend_024a9998;
  dVar1 = (double)(float)((uint64_t)*(void*)(this_ptr + 0x88) >> 0x20);
  uVar5 = 0;
  uVar6 = 0;
  auVar7._8_4_ = SUB84(dVar1,0);
  auVar7._0_8_ = (double)(float)*(void*)(this_ptr + 0x88);
  auVar7._12_4_ = (int)((uint64_t)dVar1 >> 0x20);
  uVar3 = (*PTR__objc_msgSend_024a9998)();
  (*puVar2)(extraout_XMM0_Da,0x12,param_3,param_4,uVar5,uVar6,auVar7);
  uVar4 = (*puVar2)();
  uVar4 = (*puVar2)(uVar4,uVar3);
  local_50 = 0;
  local_58 = *(int64_t *)(this_ptr + 0x18);
  if (local_58 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_50 = '\x01';
  (*PTR__objc_msgSend_024a9998)(uVar4,&local_58);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d90850();
  local_48 = *(int64_t *)(this_ptr + 0x18);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  FUN_01d470d0();
  local_30 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_30 = '\x01';
  local_38 = local_68;
  FUN_01d8cde0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (*PTR__objc_release_024a99a0)();
  FUN_00d50b00();
  uVar4 = FUN_01d8c690();
  if (this_ptr != 0) {
    uVar4 = FUN_00d50b20();
  }
  (*PTR__objc_msgSend_024a9998)(uVar4,uVar3);
  return;
}

