// Function: FUN_01c5c070
// Address: 01c5c070
// Size: 516 bytes
// Class: Unknown

void FUN_01c5c070(void)

{
  int64_t lVar1;
  char cVar2;
  void*arg1;
  int64_t this_ptr;
  int iVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t extraout_XMM0_Da;
  uint64_t local_88;
  uint8_t local_80;
  
  FUN_01c4b180();
  if ((local_80 == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  FUN_01c4ae30();
  if ((local_80 == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  FUN_01c41970();
  lVar1 = *(int64_t *)(this_ptr + 0x200);
  if (lVar1 != 0) {
    uVar4 = FUN_00d50b00();
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar3 = 0;
      do {
        uVar5 = FUN_01c5be20(uVar4,iVar3);
        cVar2 = FUN_00d054a0();
        uVar4 = extraout_XMM0_Da;
        if (cVar2 != '\0') {
          cVar2 = FUN_01c82ad0();
          if (cVar2 == '\0') {
            FUN_01d488d0();
          }
          else {
            FUN_01d488d0();
          }
          uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x3b0))(uVar5);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar1 + 0xc));
    }
    FUN_01c79df0();
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

