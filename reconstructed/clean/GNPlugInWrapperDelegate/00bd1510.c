// Function: FUN_00bd1510
// Address: 00bd1510
// Size: 648 bytes
// Class: GNPlugInWrapperDelegate

void FUN_00bd1510(void)

{
  int iVar1;
  char cVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t local_38;
  char local_30;
  
  if (this_ptr[6] != 0) {
    (**(code **)(*this_ptr + 0x5f0))();
  }
  cVar2 = (**(code **)(*(int64_t *)this_ptr[5] + 0x390))();
  if (cVar2 != '\0') {
    (**(code **)(*this_ptr + 0x4d8))();
  }
  if (this_ptr[0xd] != 0) {
    FUN_00b34c40();
  }
  FUN_00b34cd0();
  FUN_00b32c10();
  (**(code **)(*g_028a5770 + 0x368))();
  lVar3 = this_ptr[5];
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00b69160();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00b690c0();
  iVar1 = *(int *)(local_38 + 0xc);
  if (local_30 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
    lVar3 = this_ptr[0xc];
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_00b680a0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50130();
  }
  if (this_ptr[0xc] != 0) {
    this_ptr[0xc] = 0;
    FUN_00d50b20();
  }
  lVar3 = this_ptr[0xb];
  if (lVar3 != g_028a5780) {
    FUN_00b68000();
    iVar1 = *(int *)(local_38 + 0xc);
    if (local_30 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 == 0) {
      lVar3 = this_ptr[0xb];
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_00d7a770();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50130();
    }
    lVar3 = this_ptr[0xb];
  }
  if (lVar3 != 0) {
    this_ptr[0xb] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*g_028a5770 + 0x378))();
  FUN_00d50130();
  if (this_ptr[5] != 0) {
    this_ptr[5] = 0;
    FUN_00d50b20();
  }
  FUN_00d50550();
  return;
}

