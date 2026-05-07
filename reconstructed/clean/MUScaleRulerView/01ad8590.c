// Function: FUN_01ad8590
// Address: 01ad8590
// Size: 1565 bytes
// Class: MUScaleRulerView

void FUN_01ad8590(void)

{
  byte bVar1;
  void*puVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int iVar5;
  void*puVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  void* pVar10;
  char unaff_SIL;
  int64_t *this_ptr;
  bool bVar11;
  float fVar12;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01a1d6e0();
  lVar8 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 == 0) {
    return;
  }
  FUN_01a1d6e0();
  (**(code **)(*local_58 + 0xe30))();
  lVar8 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((lVar8 == 0) || (lVar9 = lVar8, *(int *)(lVar8 + 0xc) == 0)) {
    FUN_01a1d6e0();
    (**(code **)(*local_58 + 0xe70))();
    lVar9 = local_40;
    if (lVar8 == local_40) {
LAB_01ad86b5:
      lVar9 = lVar8;
      if (local_38 != '\0') {
LAB_01ad86bb:
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        if (lVar8 != 0) {
          FUN_00d50b20();
          lVar8 = lVar9;
          goto LAB_01ad86b5;
        }
        if (local_38 == '\0') goto LAB_01ad86c9;
        goto LAB_01ad86bb;
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
    }
LAB_01ad86c9:
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar9 == 0) {
      return;
    }
  }
  if (*(int *)(lVar9 + 0xc) == 0) goto LAB_01ad8b6a;
  local_48 = CONCAT44(local_48._4_4_,(int)this_ptr[0x30]);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  puVar2 = (void*)this_ptr[0x3a];
  if (puVar2 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x3a] = (int64_t)puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  local_50 = '\0';
  local_58 = (int64_t *)0x0;
  bVar1 = *(byte *)((int64_t)this_ptr + 0x1d9);
  local_70 = 0;
  lVar8 = this_ptr[0x3a];
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  pVar10 = (void*)bVar1;
  local_78 = lVar8;
  FUN_01759fb0(*(void*)((int64_t)this_ptr + 0x1dc),(float)local_48 * g_02420c90,&local_78
               ,(char)this_ptr[0x37]);
  lVar8 = this_ptr[0x36];
  lVar9 = lVar8;
  if (lVar8 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar9 = 0;
        goto LAB_01ad8817;
      }
      FUN_00d50b00();
      lVar8 = this_ptr[0x36];
      this_ptr[0x36] = local_40;
      lVar9 = local_40;
    }
    else {
      local_38 = '\0';
      lVar9 = local_40;
LAB_01ad8817:
      this_ptr[0x36] = lVar9;
    }
    pVar10 = (void*)lVar8;
    if (lVar8 != 0) {
      FUN_00d50b20();
      lVar9 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = local_58;
  plVar3 = (int64_t *)this_ptr[0x39];
  if (plVar3 != local_58) {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    this_ptr[0x39] = (int64_t)plVar4;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01ad3cb0();
  lVar8 = local_40;
  local_48 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01ad8901;
    }
    bVar11 = true;
  }
  else {
LAB_01ad8901:
    bVar11 = lVar8 == 0;
    if ((this_ptr[0x36] != 0) && (lVar8 != 0)) {
      pvVar7 = _pthread_getspecific(pVar10);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar10 = (void*)local_48;
      }
      fVar12 = (float)FUN_0173e3a0();
      iVar5 = FUN_00e7d780(fVar12 / g_023908e0);
      if (iVar5 == 0) {
        bVar11 = false;
      }
      else {
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0174dc60();
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173ecc0((float)iVar5 * g_023908e0);
        bVar11 = false;
      }
    }
  }
  if (unaff_SIL != '\0') {
    FUN_01ad3320();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((int)this_ptr[0x32] != -1000000) {
      *(void*)(this_ptr + 0x32) = 0xfff0bdc0;
      (**(code **)(*this_ptr + 0x620))();
    }
    *(void*)((int64_t)this_ptr + 0x1da) = 1;
    local_60 = 0;
    lVar8 = this_ptr[0x36];
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_68 = lVar8;
    FUN_0173b120();
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_40 = local_88;
    local_38 = '\0';
    FUN_01ad60d0(1,1);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar11) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01ad8b6a:
  FUN_00d50b20();
  return;
}

