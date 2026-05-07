// Function: FUN_01eb2dc0
// Address: 01eb2dc0
// Size: 659 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


uint64_t FUN_01eb2dc0(uint64_t param_1,char param_2)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  int64_t *this_ptr;
  uint64_t uVar5;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar2 = g_027fe320;
  if (g_027fe320 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_40 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    uVar4 = FUN_01d123e0();
    uVar5 = (uint64_t)uVar4;
  }
  else {
    uVar5 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
    if (param_2 != '\0') {
      iVar1 = (int)this_ptr[0x39];
      if (iVar1 == 0) {
        (**(code **)(*this_ptr + 0xab0))();
        if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        (**(code **)(*this_ptr + 0xa18))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (int64_t *)0x0) {
          (**(code **)(*this_ptr + 0xa18))();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_01caeb20();
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*local_40 + 0x3b8))();
          FUN_00d50b20();
        }
      }
      else {
        if (iVar1 == 2) {
          FUN_01caea00();
          FUN_01caea40();
        }
        else {
          if (iVar1 != 1) goto LAB_01eb3041;
          FUN_01caea40();
        }
        (**(code **)(*this_ptr + 0x918))();
        FUN_01d11e80();
      }
    }
  }
LAB_01eb3041:
  return uVar5 & 0xffffffff;
}

