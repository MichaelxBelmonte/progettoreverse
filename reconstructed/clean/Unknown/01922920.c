// Function: FUN_01922920
// Address: 01922920
// Size: 787 bytes
// Class: Unknown

void FUN_01922920(uint32_t param_1,uint32_t param_2)

{
  bool bVar1;
  char cVar2;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  int64_t *local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  FUN_01a58dc0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_01a58dc0();
    (**(code **)(*local_60 + 0xab8))(param_1);
    if (local_40 == 0) {
      bVar1 = true;
      lVar3 = 0;
    }
    else {
      lVar3 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = false;
      }
      else {
        local_38 = '\0';
        bVar1 = false;
      }
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      FUN_01a58dc0();
      (**(code **)(*local_60 + 0xad8))(param_1);
      if (local_40 == 0) {
        bVar1 = true;
        local_40 = 0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = false;
      }
      else {
        bVar1 = false;
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar1) {
        *(void*)(this_ptr + 1) = 0;
        lVar3 = *(int64_t *)(arg1 + 0x48);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar3;
        *(void*)(this_ptr + 1) = 1;
        if (local_40 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
    }
    else {
      FUN_01a58dc0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      uVar4 = FUN_01e437f0(param_1);
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = FUN_019764d0();
      cVar2 = FUN_00d05410(uVar4,uVar5,param_2);
      if (cVar2 != '\0') {
        *(void*)(this_ptr + 1) = 0;
        lVar3 = *(int64_t *)(arg1 + 0x48);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar3;
        *(void*)(this_ptr + 1) = 1;
        if (bVar1) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      uVar6 = FUN_01976510();
      cVar2 = FUN_00d05410(uVar4,uVar6,uVar5);
      if (cVar2 != '\0') {
        *(void*)(this_ptr + 1) = 0;
        lVar3 = *(int64_t *)(arg1 + 0x38);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar3;
        *(void*)(this_ptr + 1) = 1;
        if (bVar1) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      uVar5 = FUN_01976550();
      cVar2 = FUN_00d05410(uVar4,uVar5,uVar6);
      if (cVar2 != '\0') {
        *(void*)(this_ptr + 1) = 0;
        lVar3 = *(int64_t *)(arg1 + 0x40);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar3;
        *(void*)(this_ptr + 1) = 1;
        if (bVar1) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01a58d00(param_1);
  return;
}

