// Function: FUN_00b3ce60
// Address: 00b3ce60
// Size: 629 bytes
// Class: GNAudioProcessor

void FUN_00b3ce60(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *local_38;
  char local_30;
  
  if (this_ptr[0x27] == *arg1) {
    return;
  }
  if ((int64_t *)this_ptr[0x28] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x28] + 0x4d0))();
    FUN_00d50130();
    if (this_ptr[0x28] != 0) {
      this_ptr[0x28] = 0;
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  lVar2 = this_ptr[0x27];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x27] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((int64_t *)*arg1 == (int64_t *)0x0) {
    return;
  }
  (**(code **)(*(int64_t *)*arg1 + 0x4e0))();
  plVar3 = (int64_t *)this_ptr[0x28];
  plVar4 = plVar3;
  if (plVar3 == local_38) goto LAB_00b3cf70;
  plVar4 = local_38;
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      goto LAB_00b3cf25;
    }
    FUN_00d50b00();
    plVar3 = (int64_t *)this_ptr[0x28];
    this_ptr[0x28] = (int64_t)local_38;
  }
  else {
    local_30 = '\0';
LAB_00b3cf25:
    this_ptr[0x28] = (int64_t)plVar4;
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar4 = local_38;
  }
LAB_00b3cf70:
  if ((local_30 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr[0x28] == 0) {
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00afe870();
    (**(code **)(*plVar4 + 0x18))();
    plVar3 = (int64_t *)this_ptr[0x28];
    if (plVar3 == plVar4) {
      FUN_00d50b20();
    }
    else {
      this_ptr[0x28] = (int64_t)plVar4;
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)this_ptr[0x28] + 0x5c8))();
  }
  FUN_01e53c20();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38 == (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x28] + 0x4c0))();
  }
  FUN_01e53c20();
  (**(code **)(*local_38 + 0x4d8))();
  (**(code **)(*this_ptr + 0x4e8))(param_2);
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)this_ptr[0x28];
  FUN_00d50b00();
  FUN_01e3f820();
  (**(code **)(*plVar3 + 0x4c8))();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

