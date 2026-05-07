// Function: FUN_013965b0
// Address: 013965b0
// Size: 1424 bytes
// Class: GNDate
// String references:
//   "GNDate"
//   "MUAudioFileSource"

uint64_t FUN_013965b0(void* param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  int64_t **pplVar10;
  int64_t *plVar11;
  int64_t **pplVar12;
  uint32_t uVar13;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x48) == 0) {
    uVar9 = 0;
    goto LAB_013969db;
  }
  (**(code **)(*g_028acd10 + 0x368))();
  uVar13 = FUN_01394a40();
  plVar8 = local_58;
  local_a0 = g_027bf478;
  if (g_027bf478 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_98 = '\x01';
  pplVar10 = &local_40;
  (**(code **)(*plVar8 + 0x400))(uVar13,&local_a0);
  plVar8 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    local_48 = (int64_t *)0x0;
    bVar2 = false;
  }
  else {
    local_90 = plVar8;
    local_88 = '\0';
    uVar13 = FUN_00ca94c0();
    plVar8 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    lVar3 = g_027bf468;
    if (plVar8 == (int64_t *)0x0) {
      bVar2 = false;
      local_48 = (int64_t *)0x0;
    }
    else {
      local_60 = plVar8;
      if (g_027bf468 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_80 = lVar3;
      local_78 = '\x01';
      pplVar12 = &local_40;
      FUN_000175c0(uVar13,&local_80);
      plVar8 = local_40;
      if ((g_026d02f0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_026d0240 = FUN_00d4fe50();
        g_026d0228 = "GNDate";
        g_026d0230 = 0x18;
        g_026d0238 = FUN_000378e0;
        g_026d0248 = 0;
        ram_00000000026d0250 = 0;
        g_026d0258 = 0;
        ram_00000000026d0260 = 0;
        g_026d0268 = 0;
        ram_00000000026d0270 = 0;
        g_026d0278 = 0;
        ram_00000000026d0280 = 0;
        g_026d0288 = 0;
        ram_00000000026d0290 = 0;
        g_026d0298 = 0;
        ram_00000000026d02a0 = 0;
        g_026d02a8 = 0;
        ram_00000000026d02b0 = 0;
        g_026d02b8 = 0;
        ram_00000000026d02c0 = 0;
        g_026d02c8 = 0;
        ram_00000000026d02d0 = 0;
        g_026d02d8 = 0;
        ram_00000000026d02e0 = 0;
        g_026d02e8 = 0;
        ___cxa_guard_release();
      }
      if (plVar8 == (int64_t *)0x0) {
LAB_01396725:
        pplVar12 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 == '\0') goto LAB_01396725;
      }
      plVar8 = *pplVar12;
      if (plVar8 == (int64_t *)0x0) {
        bVar2 = false;
        local_48 = (int64_t *)0x0;
      }
      else {
        local_48 = plVar8;
        if (*(char *)(pplVar12 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(pplVar12 + 1) = 0;
        }
        bVar2 = true;
      }
      param_1 = (void*)plVar8;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  plVar8 = *(int64_t **)(this_ptr + 0x38);
  local_40 = plVar8;
  local_38 = '\0';
  if ((g_026fdd70 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_026e3238 = FUN_00115af0();
    g_026e3220 = "MUAudioFileSource";
    g_026e3228 = 0xa0;
    param_1 = 0x136df0;
    g_026e3230 = FUN_00136df0;
    g_026e3240 = 0;
    ram_00000000026e3248 = 0;
    g_026e3250 = 0;
    ram_00000000026e3258 = 0;
    g_026e3260 = 0;
    ram_00000000026e3268 = 0;
    g_026e3270 = 0;
    ram_00000000026e3278 = 0;
    g_026e3280 = 0;
    ram_00000000026e3288 = 0;
    g_026e3290 = 0;
    ram_00000000026e3298 = 0;
    g_026e32a0 = 0;
    ram_00000000026e32a8 = 0;
    g_026e32b0 = 0;
    ram_00000000026e32b8 = 0;
    g_026e32c0 = 0;
    ram_00000000026e32c8 = 0;
    g_026e32d0 = 0;
    ram_00000000026e32d8 = 0;
    g_026e32e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar8 == (int64_t *)0x0) {
LAB_0139686c:
    pplVar10 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0139686c;
  }
  plVar11 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar10 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (int64_t *)0x0) {
    bVar1 = false;
    plVar11 = (int64_t *)0x0;
  }
  else {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    (**(code **)(*local_58 + 0x3c0))();
    plVar11 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar1 = false;
      plVar11 = (int64_t *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (local_48 == plVar11) {
    uVar9 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
  }
  else {
    uVar9 = 0;
    if ((local_48 != (int64_t *)0x0) && (plVar11 != (int64_t *)0x0)) {
      local_68 = '\0';
      local_70 = plVar11;
      uVar5 = (**(code **)(*local_48 + 0x50))();
      uVar9 = (uint64_t)uVar5;
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*g_028acd10 + 0x378))();
  if ((bVar1) && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar9 = uVar9 ^ 1;
  if ((bVar2) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_013969db:
  return uVar9 & 0xffffffff;
}

