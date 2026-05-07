// Function: FUN_005565f0
// Address: 005565f0
// Size: 1397 bytes
// Class: MDTimeGridController

void* FUN_005565f0(uint64_t param_1,void*param_2)

{
  void*this_ptr;
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar3 [16];
  int64_t local_78;
  char local_70;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*(int64_t *)*param_2 + 0x370))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  uVar2 = FUN_01d43d10();
  local_58 = (float)uVar2;
  fStack_54 = (float)((uint64_t)uVar2 >> 0x20);
  fStack_50 = (float)extraout_XMM0_Qb;
  fStack_4c = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
  auVar3._0_4_ = local_58 + g_023b5550;
  auVar3._4_4_ = fStack_54 + _UNK_023b5554;
  auVar3._8_4_ = fStack_50 + _UNK_023b5558;
  auVar3._12_4_ = fStack_4c + _UNK_023b555c;
  auVar3 = roundps(auVar3,auVar3,10);
  FUN_01d4ed90(auVar3._0_8_,g_02390124);
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d52700();
  FUN_01d52740();
  FUN_01d48a10();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  FUN_01cfbc00();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_01d488d0();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  (**(code **)(*local_40 + 0x3f8))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  FUN_01d526d0();
  plVar1 = (int64_t *)0x0;
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = local_40;
  }
  FUN_01d4ed90();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d52700();
  FUN_01d52740();
  FUN_01d48a10();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  FUN_01cfbc00();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_01d488d0();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  (**(code **)(*local_40 + 0x3f8))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  FUN_01d526d0();
  FUN_01d52660();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  if ((local_40 == (int64_t *)0x0) && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = plVar1;
  *(void*)(this_ptr + 1) = 1;
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

