// Function: FUN_01ce4ab0
// Address: 01ce4ab0
// Size: 603 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01ce4ab0(uint32_t param_1,float param_2)

{
  float fVar1;
  uint64_t uVar2;
  int64_t lVar3;
  void*arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar5 [16];
  int64_t *local_78;
  char local_70;
  int64_t local_48;
  char local_40;
  uint32_t uVar4;
  
  lVar3 = this_ptr[0x3e];
  *(void*)(this_ptr + 0x3e) = 0x3f800000;
  FUN_01d91a10();
  *(int *)(this_ptr + 0x3e) = (int)lVar3;
  if ((char)this_ptr[0x40] != '\0') {
    *(float *)(this_ptr + 0x23) =
         *(float *)(this_ptr + 0x23) - *(float *)((int64_t)this_ptr + 0x114);
  }
  FUN_01d91a10(param_1);
  if ((char)this_ptr[0x40] != '\0') {
    *(float *)(this_ptr + 0x23) =
         *(float *)((int64_t)this_ptr + 0x114) + *(float *)(this_ptr + 0x23);
  }
  uVar2 = FUN_01e3f820();
  fVar1 = *(float *)(this_ptr + 0x23);
  lVar3 = this_ptr[0x40];
  FUN_01d48370();
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_78 + 0x3a0))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01d488d0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  param_2 = fVar1 - param_2;
  auVar5._8_4_ = extraout_XMM0_Dc;
  auVar5._0_8_ = uVar2;
  auVar5._12_4_ = extraout_XMM0_Dd;
  auVar5 = insertps(auVar5,ZEXT416((uint)param_2),0x10);
  uVar4 = auVar5._0_4_;
  if ((char)lVar3 == '\0') {
    auVar5 = insertps(auVar5,ZEXT416((uint)(fVar1 + param_2)),0x10);
    uVar4 = auVar5._0_4_;
  }
  (**(code **)(*(int64_t *)*arg1 + 0x368))(uVar4);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  FUN_01d48390();
  return;
}

