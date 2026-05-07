// Function: FUN_01ccc680
// Address: 01ccc680
// Size: 645 bytes
// Class: GNMultipleValue

void FUN_01ccc680(uint64_t param_1,void*param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *arg1;
  uint64_t local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  uint8_t local_98;
  int64_t local_90;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  uint32_t local_4c;
  int64_t *local_40;
  char local_38;
  
  local_4c = (uint32_t)param_1;
  local_b0 = *param_2;
  local_a8 = 0;
  FUN_01ccab60(param_1,&local_b0);
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  FUN_01cc98b0();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01ccc8eb;
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_01ccc8eb;
  lVar1 = local_40[5];
  FUN_00d50b20();
  if (lVar1 == 0) goto LAB_01ccc8eb;
  local_90 = lVar1;
  FUN_00d50b00();
  local_a0 = *param_2;
  local_98 = 0;
  FUN_01ccac20();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01ccc7aa;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_01ccc7aa:
    local_80 = *arg1;
    local_78 = '\0';
    (**(code **)(*local_40 + 0x378))();
    plVar2 = (int64_t *)*arg1;
    if (plVar2 == local_40) {
      if (((char)arg1[1] != '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01ccc84d;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01ccc846;
      }
LAB_01ccc866:
      *(void*)(arg1 + 1) = 1;
    }
    else {
      lVar1 = arg1[1];
      if (local_38 != '\0') {
        *arg1 = (int64_t)local_40;
        if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01ccc866;
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_40;
      if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01ccc846:
      *(void*)(arg1 + 1) = 1;
LAB_01ccc84d:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  local_70 = *arg1;
  local_68 = '\0';
  local_60 = local_40;
  local_58 = '\0';
  FUN_01d27780(local_4c,&local_60);
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01ccc8eb:
  FUN_00d50b20();
  return;
}

