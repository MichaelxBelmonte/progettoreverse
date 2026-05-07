// Function: FUN_0165cae0
// Address: 0165cae0
// Size: 962 bytes
// Class: MULSSGenerator

int64_t * FUN_0165cae0(int64_t *param_1,uint64_t param_2,int64_t *param_3,void*param_4)

{
  char cVar1;
  void *pvVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t *this_ptr;
  void*puVar11;
  void*local_res8;
  int64_t local_a0;
  uint64_t local_98;
  void*local_90;
  uint32_t local_7c;
  int64_t local_78;
  int iStack_5c;
  uint64_t local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar9 = &local_a0;
  if (param_3 != (int64_t *)0x0) {
    plVar9 = param_3;
  }
  puVar11 = &local_98;
  if (param_4 != (void*)0x0) {
    puVar11 = param_4;
  }
  local_90 = &local_7c;
  if (local_res8 != (void*)0x0) {
    local_90 = local_res8;
  }
  local_7c = 0xffffffff;
  pvVar2 = _pthread_getspecific((void*)local_90);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01252670(plVar9,1,puVar11,local_90);
  lVar7 = local_50;
  plVar10 = (int64_t *)local_48;
  local_38[0] = local_48[0];
  plVar3 = plVar10;
  if (local_48[0] == '\0') {
    plVar3 = (int64_t *)local_38;
  }
  *(void*)plVar3 = 0;
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_40[0] = local_38[0] != '\0';
  plVar3 = (int64_t *)local_38;
  if (!(bool)local_40[0]) {
    plVar3 = (int64_t *)local_40;
  }
  *(void*)plVar3 = 0;
  if ((local_38[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 == 0) {
    lVar7 = FUN_00e7bdb0();
    *param_1 = lVar7;
    lVar7 = FUN_00e7bdb0();
    *plVar9 = lVar7;
    uVar8 = FUN_00e7bdb0();
    *puVar11 = uVar8;
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 0;
    return this_ptr;
  }
  lVar4 = FUN_0165be20();
  local_50 = (uint64_t)local_50._4_4_ << 0x20;
  iStack_5c = (int)((uint64_t)param_2 >> 0x20);
  if (((iStack_5c == 0) || (cVar1 = FUN_00e7c650(), cVar1 != '\0')) &&
     (*(int *)((int64_t)puVar11 + 4) != 0)) {
    local_48[0] = '\0';
    local_50 = 0;
    local_78 = lVar7;
    do {
      pvVar2 = _pthread_getspecific((void*)plVar10);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      plVar10 = plVar9;
      cVar1 = FUN_01253c10(plVar9,&local_50,puVar11,local_90);
      lVar7 = local_50;
      if (cVar1 == '\0') {
LAB_0165cdf8:
        local_38[0] = '\0';
        *param_1 = lVar4;
        *this_ptr = local_78;
        *(void*)(this_ptr + 1) = 0;
        lVar7 = local_78;
        goto joined_r0x0165ce1d;
      }
      pvVar2 = _pthread_getspecific((void*)plVar10);
      lVar6 = local_50;
      if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar7 = lVar6, lVar5 != 0)) {
        lVar7 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
      if (((iStack_5c != 0) && (*(int *)(lVar7 + 0x4c) != 0)) &&
         (cVar1 = FUN_00e7c020(), cVar1 != '\0')) goto LAB_0165cdf8;
      lVar7 = local_50;
      pvVar2 = _pthread_getspecific((void*)plVar10);
      lVar4 = local_50;
      if ((pvVar2 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar7 = lVar4, lVar6 != 0)) {
        lVar7 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      if ((((iStack_5c != 0) && (*(int *)(lVar7 + 0x4c) != 0)) &&
          (cVar1 = FUN_00e7c000(), cVar1 != '\0')) || (*(int *)((int64_t)puVar11 + 4) == 0))
      goto LAB_0165ce21;
      local_78 = local_50;
      lVar4 = *plVar9;
    } while( true );
  }
  *param_1 = lVar4;
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = lVar7;
  if (local_40[0] == '\0') {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    *(void*)(this_ptr + 1) = 1;
    local_40[0] = '\0';
  }
LAB_0165ce82:
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_0165ce21:
  local_38[0] = '\0';
  *param_1 = *plVar9;
  plVar9 = this_ptr + 1;
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = local_50;
  if (local_48[0] != '\0') {
    *(void*)plVar9 = 1;
    plVar9 = (int64_t *)local_48;
  }
  *(void*)plVar9 = 0;
  lVar7 = local_78;
joined_r0x0165ce1d:
  local_78 = lVar7;
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_0165ce82;
}

