// Function: FUN_01365ec0
// Address: 01365ec0
// Size: 1054 bytes
// Class: Unknown

void FUN_01365ec0(double param_1,double param_2,double param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  void*puVar5;
  void* in_ECX;
  void* pVar6;
  char in_DL;
  int64_t *plVar7;
  int64_t arg1;
  void*this_ptr;
  double dVar8;
  double dVar9;
  uint64_t in_XMM0_Qb;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar12 [16];
  uint64_t in_XMM2_Qb;
  int64_t local_c8;
  char local_c0;
  uint8_t local_60 [8];
  uint8_t local_58;
  void*local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar7 = *(int64_t **)(arg1 + 0x38);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    plVar7 = *(int64_t **)(arg1 + 0x38);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  dVar8 = (double)(**(code **)(*plVar7 + 0x370))();
  if (param_1 - param_2 < 0.0) {
LAB_01366038:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  plVar7 = *(int64_t **)(arg1 + 0x38);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    plVar7 = *(int64_t **)(arg1 + 0x38);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  dVar9 = (double)(**(code **)(*plVar7 + 0x398))();
  if (dVar9 <= param_1 + param_3) goto LAB_01366038;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_007ef480();
  *puVar5 = &g_025e6260;
  pVar6 = 0x25e66c0;
  puVar5[7] = &g_025e66c0;
  puVar5[0x1c] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  *(void*)(puVar5 + 0x1b) = 0;
  (*g_025e6278)();
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar9 = (param_3 + param_2) * dVar8;
  auVar12._8_8_ = in_XMM1_Qb & _UNK_023945b8;
  auVar10._8_8_ = _UNK_023945b8 & in_XMM2_Qb;
  auVar12._0_8_ =
       (double)((uint64_t)(param_2 * dVar8) & g_023945b0 | g_0240d3d8) + param_2 * dVar8;
  auVar10._0_8_ = (double)(g_023945b0 & (uint64_t)dVar9 | g_0240d3d8) + dVar9;
  auVar12 = roundsd(auVar12,auVar12,0xb);
  auVar10 = roundsd(auVar10,auVar10,0xb);
  pVar6 = (void*)(int64_t)auVar10._0_8_;
  auVar11._8_8_ = _UNK_023945b8 & in_XMM0_Qb | _UNK_023945c8;
  auVar11._0_8_ =
       (double)(g_023945b0 & (uint64_t)(param_1 * dVar8) | g_023945c0) + param_1 * dVar8;
  auVar10 = roundsd(auVar11,auVar11,0xb);
  FUN_014bad20(auVar10._0_8_,(int64_t)auVar12._0_8_);
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bae10();
  FUN_01329030();
  FUN_0134b100();
  if (in_DL == '\0') goto LAB_01366267;
  local_48 = '\0';
  local_50 = puVar5;
  FUN_0135dd30();
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = 1;
  pVar6 = 1;
  FUN_01355320(1,local_60,0);
  if ((local_c0 == '\0') && (local_c8 != 0)) {
    FUN_00d50b00();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((*(int64_t *)(arg1 + 0x1f8) == 0) && (*(int64_t *)(arg1 + 0x200) == 0)) &&
     (*(int64_t *)(arg1 + 0x148) != 0)) {
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_0141bab0();
    if (iVar2 != 3) goto LAB_01366229;
LAB_01366235:
    if (*(int *)(local_c8 + 0xc) != 0) {
      FUN_013357a0();
    }
  }
  else {
LAB_01366229:
    cVar1 = FUN_01334f30();
    if (cVar1 != '\0') goto LAB_01366235;
    if (local_c8 == 0) goto LAB_01366267;
  }
  FUN_00d50b20();
LAB_01366267:
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

