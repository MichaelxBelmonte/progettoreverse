// Function: FUN_006097d0
// Address: 006097d0
// Size: 527 bytes
// Class: MDMetaWindowController

void FUN_006097d0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar4 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar5 [16];
  int64_t local_28;
  char local_20;
  
  FUN_003b3c10();
  *(void*)(this_ptr + 0x3e) = 1;
  lVar2 = g_027032c0;
  if (g_027032c0 != 0) {
    FUN_00d50b00();
  }
  FUN_01d51a40();
  lVar1 = this_ptr[0x3c];
  lVar3 = lVar1;
  if (lVar1 != local_28) {
    lVar3 = local_28;
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar3 = 0;
        goto LAB_00609831;
      }
      FUN_00d50b00();
      lVar1 = this_ptr[0x3c];
      this_ptr[0x3c] = local_28;
    }
    else {
      local_20 = '\0';
LAB_00609831:
      this_ptr[0x3c] = lVar3;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar3 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  *(void*)((int64_t)this_ptr + 0x1ec) = 0x43c80000;
  *(void*)(this_ptr + 0x3d) = 0x101;
  (**(code **)(*this_ptr + 0x948))();
  (**(code **)(*this_ptr + 0x918))();
  auVar4._0_8_ = (**(code **)(*this_ptr + 0x938))();
  auVar4._8_8_ = extraout_XMM0_Qb;
  auVar4 = blendps(auVar4,ZEXT816(0),2);
  auVar5 = blendps(in_XMM1,ZEXT816(0),2);
  (**(code **)(*this_ptr + 0x940))(auVar4._0_8_,auVar5._0_8_);
  (**(code **)(*this_ptr + 0x928))();
  *(void*)((int64_t)this_ptr + 500) = 0xffffffff00000000;
  lVar2 = g_02703f90;
  if (g_02703f90 != 0) {
    FUN_00d50b00();
  }
  FUN_01d51a40();
  lVar1 = this_ptr[0x43];
  lVar3 = lVar1;
  if (lVar1 == local_28) goto LAB_006099a7;
  lVar3 = local_28;
  if (local_20 == '\0') {
    if (local_28 == 0) {
      lVar3 = 0;
      goto LAB_00609960;
    }
    FUN_00d50b00();
    lVar1 = this_ptr[0x43];
    this_ptr[0x43] = local_28;
  }
  else {
    local_20 = '\0';
LAB_00609960:
    this_ptr[0x43] = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_28;
  }
LAB_006099a7:
  if ((local_20 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}

