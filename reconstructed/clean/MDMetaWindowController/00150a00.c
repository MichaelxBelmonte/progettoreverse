// Function: FUN_00150a00
// Address: 00150a00
// Size: 3241 bytes
// Class: MDMetaWindowController

void FUN_00150a00(uint64_t param_1,uint64_t param_2)

{
  double dVar1;
  int64_t *plVar2;
  int iVar3;
  void *pvVar4;
  uint64_t uVar5;
  char *pcVar6;
  void* in_ECX;
  int64_t *plVar7;
  uint unaff_ESI;
  int64_t *this_ptr;
  int64_t lVar8;
  char *pcVar9;
  bool bVar10;
  float fVar11;
  float in_XMM0_Dd;
  float fVar12;
  double dVar13;
  float fVar14;
  char local_128;
  undefined7 uStack_127;
  char local_120;
  int64_t local_118;
  char local_110;
  float local_108;
  float fStack_104;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  char local_e0;
  undefined7 uStack_df;
  char local_d8;
  int64_t *local_d0;
  uint64_t local_c8;
  float fStack_c0;
  float fStack_bc;
  uint64_t local_b0;
  float local_a4;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  uint32_t local_64;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  fVar14 = (float)((uint64_t)param_2 >> 0x20);
  local_f8 = (float)param_2;
  fStack_104 = (float)((uint64_t)param_1 >> 0x20);
  local_108 = (float)param_1;
  fStack_f4 = fVar14;
  if ((unaff_ESI & 4) != 0) {
    (**(code **)(*this_ptr + 0x948))();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    plVar2 = local_50;
    if (local_48[0] == '\0') {
      if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
         (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_c8 = (double)CONCAT44(local_c8._4_4_,(float)(double)plVar2[7]);
    if ((char)this_ptr[0x39] == '\0') {
      local_a4 = *(float *)((int64_t)this_ptr + 0x15c);
      FUN_01e3f820();
      dVar13 = (double)((fVar14 - fStack_f4) / *(float *)(this_ptr + 0x2c) + g_0239423c);
      fVar14 = (float)((uint64_t)dVar13 >> 0x20);
      FUN_014328b0(SUB84((double)(int)(((g_0239012c + local_f8) / local_a4) / (float)local_c8),0),
                   SUB84(dVar13,0));
      plVar2 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_50 = plVar2;
      local_48[0] = '\0';
      FUN_00d21140();
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 0x39) = 1;
    }
    local_f8 = *(float *)((int64_t)this_ptr + 0x15c);
    FUN_01e3f820();
    FUN_014328b0(SUB84((double)(int)(((g_0239012c + local_108) / local_f8) / (float)local_c8),0),
                 SUB84((double)((fVar14 - fStack_104) / *(float *)(this_ptr + 0x2c) + g_0239423c
                               ),0));
    plVar2 = local_60;
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_50 = plVar2;
    local_48[0] = '\0';
    FUN_00d21140();
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return;
  }
  fStack_fc = in_XMM0_Dd;
  FUN_01e3f820();
  this_ptr[0x36] =
       (int64_t)(double)((fVar14 - fStack_104) / *(float *)(this_ptr + 0x2c) + g_0239423c);
  fVar14 = 0.0;
  fVar12 = SUB84((double)*(float *)((int64_t)this_ptr + 0x15c),0);
  this_ptr[0x35] =
       (int64_t)
       ((double)(g_0239012c + local_108) / (double)*(float *)((int64_t)this_ptr + 0x15c));
  fVar11 = (float)FUN_01e436c0();
  dVar13 = ((double)fVar12 * g_023942d0 + (double)fVar11 + g_023942d8) /
           (double)*(float *)((int64_t)this_ptr + 0x15c);
  this_ptr[0x2e] = (int64_t)dVar13;
  local_c8 = dVar13;
  (**(code **)(*this_ptr + 0x948))();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  if (local_60 == (int64_t *)0x0) {
    bVar10 = false;
  }
  else {
    (**(code **)(*this_ptr + 0x948))();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01327a50();
    FUN_00d23310();
    plVar2 = local_50;
    local_40[0] = local_48[0];
    pcVar6 = local_40;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (int64_t *)0x0) {
      bVar10 = false;
    }
    else {
      (**(code **)(*this_ptr + 0x948))();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01327a50();
      FUN_00d23310();
      plVar2 = local_50;
      pcVar6 = local_38;
      pcVar9 = local_48;
      if (local_48[0] == '\0') {
        pcVar9 = pcVar6;
      }
      local_38[0] = local_48[0];
      *pcVar9 = '\0';
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      in_ECX = (void*)pcVar6;
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      bVar10 = CONCAT71(uStack_127,local_128) != 0;
      if ((local_120 != '\0') && (CONCAT71(uStack_127,local_128) != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (CONCAT71(uStack_df,local_e0) != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar10) goto LAB_0015159c;
  (**(code **)(*this_ptr + 0x948))();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  FUN_00d23310();
  plVar2 = local_50;
  local_a0 = local_48[0];
  pcVar6 = &local_a0;
  if (local_48[0] != '\0') {
    pcVar6 = local_48;
  }
  *pcVar6 = '\0';
  if ((local_48[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_013dfcb0();
  plVar7 = local_60;
  if (local_60 == (int64_t *)0x0) {
    local_64 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    plVar7 = (int64_t *)0x0;
  }
  else {
    if (local_58 == '\0') {
      FUN_00d50b00();
      local_64 = 0;
      if ((local_58 == '\0') || (local_60 == (int64_t *)0x0)) goto LAB_0015116d;
      FUN_00d50b20();
    }
    else {
      local_58 = '\0';
    }
    local_64 = 0;
  }
LAB_0015116d:
  if ((local_a0 != '\0') && (plVar2 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  local_70 = plVar7;
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if (local_60 == (int64_t *)0x0) {
    lVar8 = 0;
    local_b0 = 0;
    bVar10 = false;
  }
  else {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd790();
    FUN_00d23310();
    plVar2 = local_50;
    local_128 = local_48[0];
    pcVar6 = &local_128;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (int64_t *)0x0) {
      bVar10 = false;
      local_b0 = 0;
      lVar8 = 0;
      plVar7 = local_70;
    }
    else {
      local_d0 = plVar2;
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd790();
      FUN_00d23310();
      plVar2 = local_50;
      pcVar6 = &local_e0;
      pcVar9 = local_48;
      if (local_48[0] == '\0') {
        pcVar9 = pcVar6;
      }
      local_e0 = local_48[0];
      *pcVar9 = '\0';
      if ((local_48[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      in_ECX = (void*)pcVar6;
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_011ef8d0();
      plVar7 = local_70;
      lVar8 = local_80;
      if (local_80 == 0) {
        lVar8 = 0;
        local_b0 = 0;
        bVar10 = false;
joined_r0x001513ba:
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_78 == '\0') {
          uVar5 = FUN_00d50b00();
          local_b0 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          bVar10 = lVar8 != 0;
          goto joined_r0x001513ba;
        }
        local_78 = '\0';
        bVar10 = true;
        local_b0 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      }
      if ((local_e0 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
        FUN_00d50b20();
      }
      if (local_128 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar10) {
    local_c8 = (double)this_ptr[0x2e];
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_d0 = (int64_t *)FUN_0125a280();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd710();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar1 = (double)FUN_013de8d0();
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_c8 = (local_c8 + (double)local_d0) - dVar1;
    plVar7 = local_70;
  }
  if (((char)local_b0 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_64 == '\0' && plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0015159c:
  FUN_0006a0f0();
  (**(code **)(*local_50 + 0x3a8))(SUB84(local_c8,0));
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  fVar11 = (float)((uint64_t)dVar13 >> 0x20) - fStack_104;
  fStack_c0 = fVar14 - fStack_fc;
  local_c8 = (double)CONCAT44(fVar11,fVar11);
  fStack_bc = fStack_c0;
  FUN_01e3f820(fVar11,SUB84(dVar13,0) - local_108);
  *(int *)(this_ptr + 0x34) = (int)(((float)local_c8 / fVar11) * g_023941e0);
  FUN_0006c4d0(local_108,local_f8);
  iVar3 = (**(code **)(*(int64_t *)this_ptr[0x41] + 0x920))();
  if ((iVar3 != 0) || (iVar3 = (**(code **)(*(int64_t *)this_ptr[0x42] + 0x920))(), iVar3 != 0)) {
    if ((local_108 == local_f8) &&
       ((!NAN(local_108) && !NAN(local_f8) && (fStack_104 != fStack_f4)))) {
      (**(code **)(*this_ptr + 0x620))();
    }
  }
  return;
}

