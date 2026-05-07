// Function: FUN_019f5e40
// Address: 019f5e40
// Size: 803 bytes
// Class: MUAudioSourceAttackItem
// String references:
//   "MUAudioSourceAttackItem"

uint64_t FUN_019f5e40(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  uint64_t uVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  double dVar10;
  double dVar11;
  
  plVar1 = (int64_t *)*this_ptr;
  if ((g_02790f20 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_0272f7c8 = FUN_007ef2d0();
    g_0272f7b0 = "MUAudioSourceAttackItem";
    g_0272f7b8 = 0xe8;
    param_1 = 0x7ef270;
    g_0272f7c0 = FUN_007ef270;
    g_0272f7d0 = 0;
    ram_000000000272f7d8 = 0;
    g_0272f7e0 = 0;
    ram_000000000272f7e8 = 0;
    g_0272f7f0 = 0;
    ram_000000000272f7f8 = 0;
    g_0272f800 = 0;
    ram_000000000272f808 = 0;
    g_0272f810 = 0;
    ram_000000000272f818 = 0;
    g_0272f820 = 0;
    ram_000000000272f828 = 0;
    g_0272f830 = 0;
    ram_000000000272f838 = 0;
    g_0272f840 = 0;
    ram_000000000272f848 = 0;
    g_0272f850 = 0;
    ram_000000000272f858 = 0;
    g_0272f860 = 0;
    ram_000000000272f868 = 0;
    g_0272f870 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_019f5e89:
    this_ptr = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_019f5e89;
  }
  lVar2 = *this_ptr;
  lVar4 = this_ptr[1];
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = (int64_t *)*arg1;
  if ((g_02790f20 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_0272f7c8 = FUN_007ef2d0();
    g_0272f7b0 = "MUAudioSourceAttackItem";
    g_0272f7b8 = 0xe8;
    param_1 = 0x7ef270;
    g_0272f7c0 = FUN_007ef270;
    g_0272f7d0 = 0;
    ram_000000000272f7d8 = 0;
    g_0272f7e0 = 0;
    ram_000000000272f7e8 = 0;
    g_0272f7f0 = 0;
    ram_000000000272f7f8 = 0;
    g_0272f800 = 0;
    ram_000000000272f808 = 0;
    g_0272f810 = 0;
    ram_000000000272f818 = 0;
    g_0272f820 = 0;
    ram_000000000272f828 = 0;
    g_0272f830 = 0;
    ram_000000000272f838 = 0;
    g_0272f840 = 0;
    ram_000000000272f848 = 0;
    g_0272f850 = 0;
    ram_000000000272f858 = 0;
    g_0272f860 = 0;
    ram_000000000272f868 = 0;
    g_0272f870 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_019f5ede:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_019f5ede;
  }
  lVar3 = *arg1;
  lVar5 = arg1[1];
  if (((char)lVar5 != '\0') && (lVar3 != 0)) {
    FUN_00d50b00();
  }
  if (lVar2 == lVar3) {
    uVar9 = 0;
  }
  else if (lVar2 == 0) {
    uVar9 = 1;
  }
  else {
    if (lVar3 == 0) {
      uVar9 = 0xffffffff;
      goto joined_r0x019f5fcd;
    }
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_014bb640();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_014bb640();
    uVar9 = 0xffffffff;
    if (0.0 <= dVar10 - dVar11) {
      uVar9 = (uint64_t)(0.0 < dVar10 - dVar11);
    }
  }
  if (((char)lVar5 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
joined_r0x019f5fcd:
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return uVar9;
}

