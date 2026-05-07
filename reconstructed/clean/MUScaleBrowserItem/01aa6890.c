// Function: FUN_01aa6890
// Address: 01aa6890
// Size: 602 bytes
// Class: MUScaleBrowserItem

void FUN_01aa6890(void* param_1)

{
  void *pvVar1;
  int64_t *this_ptr;
  uint32_t uVar2;
  uint64_t unaff_R13;
  int64_t lVar3;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  uint32_t local_48;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[5] == 0) {
    return;
  }
  FUN_017a57b0();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_017a7c70();
  lVar3 = local_40;
  if (local_40 == 0) {
    uVar2 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
    lVar3 = 0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar2 = 0;
      if ((local_38 == '\0') || (local_40 == 0)) goto LAB_01aa6977;
      FUN_00d50b20();
    }
    uVar2 = 0;
  }
LAB_01aa6977:
  FUN_00d50b20();
  if (lVar3 != 0) {
    local_48 = uVar2;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    uVar2 = local_48;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_78 = (int64_t *)0x0;
    local_70 = '\0';
    local_68 = (int64_t *)0x0;
    local_60 = '\0';
    FUN_012cc0c0(&local_68,&local_78,1,0);
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_50 = '\0';
    local_58 = lVar3;
    (**(code **)(*this_ptr + 0x370))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar2 == '\0') {
      FUN_00d50b20();
    }
  }
  return;
}

