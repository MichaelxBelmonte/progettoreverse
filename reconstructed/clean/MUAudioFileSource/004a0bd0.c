// Function: FUN_004a0bd0
// Address: 004a0bd0
// Size: 993 bytes
// Class: MUAudioFileSource

void FUN_004a0bd0(void* param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void*puVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar5;
  void*puVar6;
  uint32_t uVar7;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_024e9f60;
  puVar1[0xd] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(void*)((int64_t)puVar1 + 0x51) = 0;
  *(void*)((int64_t)puVar1 + 0x59) = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar4 = *arg1;
    lVar5 = puVar1[8];
    puVar6 = puVar1;
    if (lVar5 == lVar4) goto LAB_004a0c93;
  }
  else {
    lVar4 = *arg1;
    lVar5 = ((void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4])[8];
    puVar6 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    if (lVar5 == lVar4) goto LAB_004a0c93;
  }
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  puVar6[8] = lVar4;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
LAB_004a0c93:
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01713990();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_012cb110();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_004a0530(uVar7,1);
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017139d0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_012cb110();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_004a0530(uVar7,1,param_3,param_4,1);
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

