// Function: FUN_0165e460
// Address: 0165e460
// Size: 518 bytes
// Class: MULSSGenerator

int FUN_0165e460(uint64_t param_1,void*param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void* pVar6;
  void*puVar7;
  char *pcVar8;
  uint8_t local_58 [12];
  uint32_t local_4c;
  int64_t in_stack_ffffffffffffffb8;
  char local_40 [8];
  char local_38 [8];
  
  puVar7 = local_58;
  FUN_0165cae0(puVar7);
  pVar6 = (void*)CONCAT71((int7)((uint64_t)puVar7 >> 8),local_40[0]);
  pcVar8 = local_38;
  if (local_40[0] != '\0') {
    pcVar8 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar8 = '\0';
  if ((local_40[0] != '\0') && (in_stack_ffffffffffffffb8 != 0)) {
    FUN_00d50b20();
  }
  if (in_stack_ffffffffffffffb8 == 0) {
    if (param_2 != (void*)0x0) {
      FUN_00e7bdb0();
      uVar4 = FUN_00e7c8b0();
      *param_2 = uVar4;
    }
    iVar1 = FUN_00e7cea0();
    iVar2 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    iVar2 = iVar2 >> 2;
  }
  else {
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e7b970();
    if (param_2 != (void*)0x0) {
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123ffa0();
      FUN_00e7bdb0();
      uVar4 = FUN_00e7c8b0();
      *param_2 = uVar4;
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_4c = FUN_0123ffa0();
    FUN_00e7c3c0();
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      in_stack_ffffffffffffffb8 =
           *(int64_t *)
            (in_stack_ffffffffffffffb8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
    iVar1 = *(int *)(in_stack_ffffffffffffffb8 + 0x44);
    iVar2 = FUN_00e7cea0();
    iVar2 = iVar2 + iVar1;
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return iVar2;
}

