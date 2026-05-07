// Function: FUN_013f82a0
// Address: 013f82a0
// Size: 925 bytes
// Class: MUDataPointFunction

void* FUN_013f82a0(double param_1,double param_2)

{
  bool bVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  byte bVar6;
  void* in_ECX;
  int64_t *plVar7;
  void*this_ptr;
  uint64_t unaff_R15;
  undefined7 uVar8;
  int64_t local_40;
  char local_38;
  
  plVar2 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar2 + 0x18))();
  pvVar3 = _pthread_getspecific(in_ECX);
  plVar7 = plVar2;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar7 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar7 + 0x408))();
  lVar4 = local_40;
  if (local_40 == 0) {
    bVar6 = 1;
    lVar4 = 0;
    uVar8 = 0;
    bVar1 = false;
  }
  else {
    uVar8 = (undefined7)((uint64_t)unaff_R15 >> 8);
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar6 = 0;
      bVar1 = true;
    }
    else {
      bVar6 = 0;
      bVar1 = true;
    }
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013fae90(0);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faee0(0);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b30();
  pvVar3 = _pthread_getspecific(in_ECX);
  plVar7 = plVar2;
  if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar7 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar7 + 0x408))();
  if (local_40 == lVar4) {
    if ((bool)(bVar6 & lVar4 != 0)) {
      bVar1 = true;
      if (local_38 != '\0') goto LAB_013f8534;
      FUN_00d50b00();
      goto LAB_013f8505;
    }
  }
  else {
    if (local_38 != '\0') {
      bVar6 = bVar1 & lVar4 != 0;
      in_ECX = (void*)CONCAT71(uVar8,bVar6);
      bVar1 = true;
      lVar4 = local_40;
      if (bVar6 == 1) {
        FUN_00d50b20();
      }
      goto LAB_013f8534;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    bVar6 = bVar1 & lVar4 != 0;
    in_ECX = (void*)CONCAT71(uVar8,bVar6);
    bVar1 = true;
    lVar4 = local_40;
    if (bVar6 != 1) goto LAB_013f8534;
    FUN_00d50b20();
LAB_013f8505:
    bVar1 = true;
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_013f8534:
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013fae90(param_2);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faee0(param_1 * param_2);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b30();
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar1) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

