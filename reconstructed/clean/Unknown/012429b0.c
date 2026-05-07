// Function: FUN_012429b0
// Address: 012429b0
// Size: 1752 bytes
// Class: Unknown
// String references:
//   "M4_STEREO_%d-%d"
//   "M4_MONO_%d"

int64_t * FUN_012429b0(int64_t *param_1,uint64_t param_2,byte param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int64_t lVar7;
  void *pvVar8;
  void*puVar9;
  void*puVar10;
  void* pVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t *local_78;
  char local_70;
  int local_60;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  if (param_3 == 1) {
    local_40 = '\x01';
    local_48 = &g_024cc6f0;
    FUN_00d8cb40();
    local_38 = local_78;
    if (local_78 == (int64_t *)0x0) {
LAB_01242af2:
      local_38 = (int64_t *)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (local_70 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else if (param_3 == 2) {
    FUN_00d8cb40();
    local_38 = local_48;
    local_78 = local_48;
    if (local_48 == (int64_t *)0x0) goto LAB_01242af2;
    bVar1 = true;
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    bVar1 = false;
    local_38 = (int64_t *)0x0;
    local_78 = param_1;
  }
  uVar5 = (uint)param_3;
  if ((char)param_1 == '\0') {
    plVar13 = *(int64_t **)(arg1 + 0x38);
    if (plVar13 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01242b44;
    }
LAB_01242d3c:
    bVar3 = true;
    bVar2 = true;
    lVar7 = *(int64_t *)(arg1 + 0x50);
joined_r0x01242d38:
    if (lVar7 != 0) {
      FUN_00d50b00();
      bVar2 = bVar3;
    }
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar9[7] = 0;
    *puVar9 = &g_024cbc70;
    *(void*)(puVar9 + 8) = 0;
    FUN_00d500e0();
    pvVar8 = _pthread_getspecific((void*)local_78);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124a800();
    pvVar8 = _pthread_getspecific((void*)local_78);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012a51c0();
    if (uVar5 != 0) {
      uVar6 = 0;
      do {
        puVar10 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar10 = &g_024cc370;
        puVar10[7] = 0;
        puVar10[8] = 0;
        FUN_00d500e0();
        pvVar8 = _pthread_getspecific((void*)local_78);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123fae0();
        pvVar8 = _pthread_getspecific((void*)local_78);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123fa90();
        pvVar8 = _pthread_getspecific((void*)local_78);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123fb40();
        pvVar8 = _pthread_getspecific((void*)local_78);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01240230();
        FUN_00d50b20();
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
    }
    if ((char)param_1 == '\0') {
      FUN_01240690();
    }
    else {
      FUN_012407f0();
    }
    *this_ptr = (int64_t)puVar9;
    *(void*)(this_ptr + 1) = 1;
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (bVar2) goto LAB_0124309f;
  }
  else {
    plVar13 = *(int64_t **)(arg1 + 0x40);
    if (plVar13 == (int64_t *)0x0) goto LAB_01242d3c;
    FUN_00d50b00();
LAB_01242b44:
    local_60 = -1;
    do {
      do {
        lVar7 = (int64_t)local_60;
        local_60 = local_60 + 1;
        if (*(int *)((int64_t)plVar13 + 0xc) <= local_60) {
          FUN_000e2ec0();
          bVar3 = false;
          bVar2 = false;
          lVar7 = *(int64_t *)(arg1 + 0x50);
          local_78 = plVar13;
          goto joined_r0x01242d38;
        }
        lVar12 = plVar13[2];
        lVar7 = *(int64_t *)(lVar12 + 8 + lVar7 * 8);
        pvVar8 = _pthread_getspecific((void*)lVar12);
        pVar11 = (void*)lVar12;
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012a5230();
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        cVar4 = (**(code **)(*local_38 + 0x50))();
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      } while (cVar4 == '\0');
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_0124a860();
    } while (uVar6 != uVar5);
    *(void*)(this_ptr + 1) = 0;
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar7;
    *(void*)(this_ptr + 1) = 1;
    FUN_000e2ec0();
  }
  FUN_00d50b20();
LAB_0124309f:
  if ((bVar1) && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

