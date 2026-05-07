// Function: FUN_0151a950
// Address: 0151a950
// Size: 1105 bytes
// Class: MUPercussivePitchSystem

void* FUN_0151a950(void)

{
  int iVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  void*puVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t arg1;
  void*this_ptr;
  int iVar8;
  int64_t local_90;
  char local_88;
  int64_t in_stack_ffffffffffffff98;
  char local_60;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  lVar7 = *(int64_t *)(arg1 + 0x50);
  if (lVar7 == 0) {
    if (*(int64_t *)(arg1 + 0x58) != 0) {
      pvVar3 = _pthread_getspecific((void*)puVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505930();
      if (local_60 == '\0') {
        if (in_stack_ffffffffffffff98 == 0) goto LAB_0151ad9b;
        FUN_00d50b00();
      }
      else if (in_stack_ffffffffffffff98 == 0) goto LAB_0151ad9b;
      if (0 < *(int *)(in_stack_ffffffffffffff98 + 0xc)) {
        iVar1 = 0;
        do {
          pvVar3 = _pthread_getspecific((void*)puVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cb110();
          if (local_88 == '\0') {
            if (local_90 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          FUN_00d21140();
          if (local_90 != 0) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(in_stack_ffffffffffffff98 + 0xc));
      }
      FUN_01507540();
      FUN_00d50b20();
    }
  }
  else {
    pvVar3 = _pthread_getspecific((void*)puVar6);
    if (pvVar3 != (void *)0x0) {
      lVar7 = *(int64_t *)(arg1 + 0x50);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    lVar7 = *(int64_t *)(lVar7 + 0x48);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    iVar1 = FUN_00d23d20();
    FUN_00d50b20();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific((void*)puVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0151a950();
    if (arg1 != 0) {
      FUN_00d50b00();
      puVar5 = (void*)(int64_t)iVar1;
      for (iVar8 = 0; iVar8 < *(int *)(arg1 + 0xc); iVar8 = iVar8 + 1) {
        pvVar3 = _pthread_getspecific((void*)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        if (iVar1 < *(int *)(local_40 + 0xc)) {
          local_40 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + (int64_t)puVar5 * 8);
          puVar6 = puVar5;
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          local_38 = '\0';
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
LAB_0151ad9b:
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

