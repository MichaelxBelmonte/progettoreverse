// Function: FUN_01b9dd50
// Address: 01b9dd50
// Size: 540 bytes
// Class: GNValue

void FUN_01b9dd50(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  void*arg1;
  int64_t this_ptr;
  uint32_t uVar2;
  uint32_t uVar3;
  int64_t local_38;
  char local_30;
  
  if ((*(int *)(this_ptr + 0x1f0) == 0) && (*(char *)(this_ptr + 0x1ec) == '\0')) {
    uVar2 = *(void*)(this_ptr + 0x170);
    *(void*)(this_ptr + 0x170) = 0;
    FUN_01d21c00();
    *(void*)(this_ptr + 0x170) = uVar2;
    lVar1 = g_027e5238;
  }
  else {
    FUN_01d21c00();
    lVar1 = g_027e5238;
  }
  g_027e5238 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d51a40();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    if (*(char *)(this_ptr + 0x1ec) == '\0') {
      uVar2 = FUN_01e3f820();
      uVar3 = FUN_01d526f0();
      uVar2 = FUN_00d05510(uVar2,param_2,uVar3);
      if (*(int *)(this_ptr + 0x1f0) == 0) {
        FUN_01d49110(uVar2,g_0239011c);
      }
      else {
        (**(code **)(*(int64_t *)*arg1 + 0x400))();
      }
    }
    FUN_00d50b20();
  }
  return;
}

