// Function: FUN_01b468c0
// Address: 01b468c0
// Size: 1465 bytes
// Class: MUScaleStretchTuningCtrl

void* FUN_01b468c0(float param_1,float param_2,float param_3)

{
  int64_t lVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  int64_t lVar9;
  int64_t lVar10;
  void*puVar11;
  void* in_ECX;
  void*this_ptr;
  int64_t *plVar12;
  int64_t *local_48;
  char local_40;
  
  pvVar8 = _pthread_getspecific(in_ECX);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(in_ECX);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar3 = (double)param_1;
  iVar7 = FUN_013f3690();
  lVar9 = local_48[2];
  lVar1 = *(int64_t *)(lVar9 + (int64_t)iVar7 * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
    lVar9 = local_48[2];
  }
  lVar9 = *(int64_t *)(lVar9 + 8 + (int64_t)iVar7 * 8);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(in_ECX);
  if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    in_ECX = (void*)lVar1;
  }
  dVar2 = (double)FUN_013faed0();
  bVar4 = true;
  if ((double)param_3 < dVar3 - dVar2) {
    pvVar8 = _pthread_getspecific(in_ECX);
    if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      in_ECX = (void*)lVar9;
    }
    dVar2 = (double)FUN_013faed0();
    if ((double)param_3 < dVar2 - dVar3) {
      puVar11 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      in_ECX = 0x25ddb28;
      *puVar11 = &g_025ddb28;
      puVar11[0xb] = 0;
      puVar11[7] = 0;
      puVar11[8] = 0;
      *(void*)((int64_t)puVar11 + 0x43) = 0;
      *(void*)((int64_t)puVar11 + 0x4b) = 0;
      (*g_025ddb40)();
      pvVar8 = _pthread_getspecific(in_ECX);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013fae90(SUB84(dVar3,0));
      pvVar8 = _pthread_getspecific(in_ECX);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013faee0(SUB84((double)param_2,0));
      pvVar8 = _pthread_getspecific(in_ECX);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2cf0();
      bVar4 = false;
      bVar5 = true;
      goto LAB_01b46b7d;
    }
  }
  bVar5 = false;
  puVar11 = (void*)0x0;
LAB_01b46b7d:
  FUN_01778a40();
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01778fe0();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(in_ECX);
  plVar12 = local_48;
  if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar12 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  cVar6 = (**(code **)(*plVar12 + 0x370))();
  if (cVar6 == '\0') {
    pvVar8 = _pthread_getspecific(in_ECX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f3080();
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    if ((bVar4) && (puVar11 != (void*)0x0)) {
      FUN_00d50b00();
    }
    *this_ptr = puVar11;
    *(void*)(this_ptr + 1) = 1;
    bVar5 = false;
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((bVar5) && (puVar11 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

