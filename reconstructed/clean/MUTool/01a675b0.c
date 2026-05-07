// Function: FUN_01a675b0
// Address: 01a675b0
// Size: 812 bytes
// Class: MUTool

void FUN_01a675b0(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  uint64_t uVar6;
  char *pcVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  if (*(int64_t *)(arg1 + 0x1f8) == 0) {
    bVar1 = false;
    lVar8 = 0;
  }
  else if (param_1 >> 0x20 == 0) {
    pvVar4 = _pthread_getspecific((void*)param_1);
    pVar5 = (void*)param_1;
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01252670(0,1,0,0);
    lVar8 = local_58;
    pcVar7 = local_38;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 == 0) {
      bVar2 = false;
      bVar1 = false;
    }
    else {
      bVar2 = true;
      bVar1 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_40 != '\0') && (bVar1 = bVar2, local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar6 = param_1;
    pvVar4 = _pthread_getspecific((void*)param_1);
    pVar5 = (void*)uVar6;
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012521f0(param_1,0,0,0);
    lVar8 = local_58;
    pcVar7 = local_38;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 == 0) {
      bVar2 = false;
      bVar1 = false;
    }
    else {
      bVar2 = true;
      bVar1 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_40 != '\0') && (bVar1 = bVar2, local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_0171b9c0();
  local_78 = *param_2;
  local_70 = '\0';
  local_60 = '\0';
  local_68 = lVar8;
  FUN_0171c6b0(&local_68,&local_78);
  lVar3 = local_58;
  *(void*)(this_ptr + 1) = 0;
  if (local_50[0] == '\0') {
    if (local_58 == 0) {
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
    local_50[0] = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return;
}

