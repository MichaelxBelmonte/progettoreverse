// Function: FUN_00d98db0
// Address: 00d98db0
// Size: 1032 bytes
// Class: Unknown

int64_t * FUN_00d98db0(uint64_t param_1,int64_t *param_2,char param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void*puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    iVar4 = *(int *)(lVar1 + 0x20);
    if (iVar4 == -1) {
      if (*(int64_t *)(lVar1 + 0x10) == 0) goto LAB_00d98e3d;
      iVar4 = FUN_00e7dde0();
    }
    if ((iVar4 != 0) &&
       ((param_3 != '\0' || (cVar3 = (**(code **)(*(int64_t *)*param_2 + 0x50))(), cVar3 == '\0')))
       ) {
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_025795a8;
      FUN_00d500e0();
      if ((*(int *)(arg1 + 0x20) == -1) && (*(int64_t *)(arg1 + 0x10) != 0)) {
        FUN_00e7dde0();
      }
      uVar6 = FUN_00e7b4e0();
      FUN_00d50b00();
      local_40 = arg1;
      if (param_3 != '\0') {
        FUN_00d99300();
        if (local_58 == arg1) {
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
          }
          else {
            FUN_00d50b20();
          }
        }
        FUN_00d99300();
        lVar1 = *param_2;
        if (lVar1 == local_58) {
          if (((char)param_2[1] != '\0') || (local_58 == 0)) {
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_00d98ff2;
          }
          if (local_50 == '\0') {
            FUN_00d50b00();
          }
        }
        else {
          lVar2 = param_2[1];
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            *param_2 = local_58;
            if (((char)lVar2 != '\0') && (lVar1 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            *param_2 = local_58;
            if (((char)lVar2 != '\0') && (lVar1 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        *(void*)(param_2 + 1) = 1;
      }
LAB_00d98ff2:
      FUN_00e7b4e0();
      uVar6 = uVar6 >> 0x20;
      while( true ) {
        uVar7 = FUN_00d906a0();
        if ((int)uVar7 == -1) break;
        FUN_00e7b4e0();
        FUN_00d8e3d0();
        if ((local_50 == '\0') && (local_58 != 0)) {
          FUN_00d50b00();
        }
        FUN_00d8dbf0();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        FUN_00d8dbf0();
        iVar4 = *(int *)(arg1 + 0x20);
        if (iVar4 == -1) {
          if (*(int64_t *)(arg1 + 0x10) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_00e7dde0();
          }
        }
        uVar6 = (uint64_t)(uint)(iVar4 - ((int)((uint64_t)uVar7 >> 0x20) + (int)uVar7));
      }
      if (0 < (int)uVar6) {
        FUN_00d8e3d0();
        if ((local_50 == '\0') && (local_58 != 0)) {
          FUN_00d50b00();
        }
        FUN_00d8dbf0();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
      }
      *(byte *)((int64_t)puVar5 + 0x24) = *(byte *)((int64_t)puVar5 + 0x24) & 0xfe;
      *this_ptr = (int64_t)puVar5;
      *(void*)(this_ptr + 1) = 1;
      if (local_40 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
  }
LAB_00d98e3d:
  *(void*)(this_ptr + 1) = 0;
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = arg1;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

