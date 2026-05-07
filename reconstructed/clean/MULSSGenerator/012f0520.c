// Function: FUN_012f0520
// Address: 012f0520
// Size: 761 bytes
// Class: MULSSGenerator

int64_t * FUN_012f0520(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  void*puVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*puVar4;
  void *pvVar5;
  int64_t *in_RCX;
  int64_t *plVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t local_b8;
  char local_b0;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  uint64_t local_60;
  uint32_t local_58;
  
  plVar6 = in_RCX;
  if (*in_RCX == 0) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*g_02572370)();
    puVar1 = (void*)*in_RCX;
    if (puVar1 == puVar4) {
      if ((char)in_RCX[1] != '\0') {
        FUN_00d50b20();
        goto LAB_012f05c0;
      }
    }
    else {
      *in_RCX = (int64_t)puVar4;
      if (((char)in_RCX[1] != '\0') && (puVar1 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(in_RCX + 1) = 1;
  }
LAB_012f05c0:
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  FUN_0190a130();
  lVar3 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if (arg1 != 0) {
    FUN_00d50b20();
  }
  FUN_0190a380(param_1,param_2,param_3);
  local_70 = '\0';
  local_78 = lVar3;
  FUN_00d21140();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = *(int64_t *)(arg1 + 0xa8);
  if (lVar2 != 0) {
    local_70 = '\0';
    local_78 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = lVar2;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar7 = 0;
      do {
        local_78 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar7 * 8);
        pvVar5 = _pthread_getspecific((void*)plVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_88 = *in_RCX;
        local_80 = '\0';
        plVar6 = &local_88;
        FUN_012f0520(param_1,param_2,param_3);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
        local_60 = CONCAT44(local_60._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar2 + 0xc));
    }
    FUN_000be170();
  }
  *(void*)(this_ptr + 1) = 0;
  lVar2 = *in_RCX;
  if ((char)in_RCX[1] == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(in_RCX + 1) = 0;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

