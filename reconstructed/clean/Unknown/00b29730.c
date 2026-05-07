// Function: FUN_00b29730
// Address: 00b29730
// Size: 823 bytes
// Class: Unknown

void FUN_00b29730(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  double dVar4;
  int64_t local_28;
  char local_20;
  
  FUN_00b341c0();
  FUN_00b33130();
  FUN_00c8e690();
  if ((local_20 == '\0') && (local_28 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar1 = this_ptr[0x12];
  if (lVar1 == local_28) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x12] = local_28;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00b33130();
  FUN_00c8e690();
  if ((local_20 == '\0') && (local_28 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar1 = this_ptr[0x13];
  if (lVar1 == local_28) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x13] = local_28;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x12] != 0) {
    ___bzero();
  }
  if (this_ptr[0x13] != 0) {
    ___bzero();
  }
  if ((char)this_ptr[0x14] != '\0') {
    FUN_00b33130();
    dVar4 = (double)FUN_00b335d0();
    lVar1 = FUN_00b26f20(dVar4 - g_023907c8,5);
    this_ptr[0x16] = lVar1;
    (**(code **)(*this_ptr + 0x3a8))();
    FUN_00b33130();
    FUN_00c8e690();
    if ((local_20 == '\0') && (local_28 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    lVar1 = this_ptr[0x15];
    if (lVar1 == local_28) {
      if (local_28 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      this_ptr[0x15] = local_28;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if (this_ptr[0x17] == 0) {
    return;
  }
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  lVar1 = this_ptr[0x18];
  this_ptr[0x18] = (int64_t)puVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x3a8))();
  GNFastFourierTransformer_create();
  lVar1 = this_ptr[0x19];
  lVar3 = lVar1;
  if (lVar1 == local_28) goto LAB_00b29a4a;
  lVar3 = local_28;
  if (local_20 == '\0') {
    if (local_28 == 0) {
      lVar3 = 0;
      goto LAB_00b29a03;
    }
    FUN_00d50b00();
    lVar1 = this_ptr[0x19];
    this_ptr[0x19] = local_28;
  }
  else {
    local_20 = '\0';
LAB_00b29a03:
    this_ptr[0x19] = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_28;
  }
LAB_00b29a4a:
  if ((local_20 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  return;
}

