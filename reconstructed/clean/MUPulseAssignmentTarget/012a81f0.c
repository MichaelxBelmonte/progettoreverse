// Function: FUN_012a81f0
// Address: 012a81f0
// Size: 571 bytes
// Class: MUPulseAssignmentTarget

uint64_t FUN_012a81f0(uint64_t param_1,uint32_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint64_t uVar4;
  void*arg1;
  int64_t *this_ptr;
  double dVar6;
  double dVar7;
  uint64_t uVar8;
  int64_t local_40;
  char local_38 [8];
  char local_30 [8];
  int64_t lVar5;
  
  dVar6 = (double)(**(code **)(*this_ptr + 0x5f0))();
  dVar7 = (double)(**(code **)(*this_ptr + 0x5e0))();
  if (dVar6 <= dVar7) {
    if (dVar6 < dVar7) {
      if (*(int *)(this_ptr[0x1e] + 0xc) != 0) {
        uVar8 = FUN_00d23310();
        pcVar3 = local_30;
        if (local_38[0] != '\0') {
          pcVar3 = local_38;
        }
        local_30[0] = local_38[0];
        *pcVar3 = '\0';
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_30[0] == '\0') && (local_40 != 0)) {
          uVar8 = FUN_00d50b00();
        }
        uVar2 = FUN_012a7870(uVar8,param_2);
        uVar4 = (uint64_t)uVar2;
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        goto LAB_012a8419;
      }
      lVar5 = this_ptr[0x1d];
      if (lVar5 != 0) {
        uVar8 = FUN_00d50b00();
        cVar1 = FUN_012a7870(uVar8,param_2);
        FUN_00d50b20();
        goto LAB_012a8410;
      }
    }
  }
  else {
    if (*(int *)(this_ptr[0x1e] + 0xc) != 0) {
      uVar8 = FUN_00d23310();
      pcVar3 = local_30;
      if (local_38[0] != '\0') {
        pcVar3 = local_38;
      }
      local_30[0] = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        uVar8 = FUN_00d50b20();
      }
      if ((local_30[0] == '\0') && (local_40 != 0)) {
        uVar8 = FUN_00d50b00();
      }
      uVar2 = FUN_012a7870(uVar8,param_2);
      uVar4 = (uint64_t)uVar2;
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      goto LAB_012a8419;
    }
    lVar5 = this_ptr[0x1d];
    if (lVar5 != 0) {
      uVar8 = FUN_00d50b00();
      cVar1 = FUN_012a7870(uVar8,param_2,param_3,param_4,*arg1,0);
      FUN_00d50b20();
LAB_012a8410:
      uVar4 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
      if (cVar1 != '\0') goto LAB_012a8419;
    }
  }
  uVar4 = 0;
LAB_012a8419:
  return uVar4 & 0xffffffff;
}

