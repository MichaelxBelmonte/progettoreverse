// Function: FUN_011f64f0
// Address: 011f64f0
// Size: 1351 bytes
// Class: MUPulseAssignmentTarget

void FUN_011f64f0(double param_1)

{
  int iVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  char cVar4;
  uint uVar5;
  int extraout_var;
  void *pvVar6;
  uint64_t uVar7;
  void* in_ECX;
  int64_t lVar8;
  void*arg1;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint8_t auVar14 [16];
  double local_68;
  int64_t local_50;
  char local_48;
  
  (**(code **)(*(int64_t *)*arg1 + 0x38))();
  dVar10 = (double)(**(code **)(*(int64_t *)*arg1 + 0x18))();
  dVar11 = (double)(**(code **)(*(int64_t *)*arg1 + 0x28))();
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c99c0();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_68 = g_02390108;
  if (g_02390108 <= dVar11 - dVar10) {
    local_68 = dVar11 - dVar10;
  }
  dVar11 = (double)FUN_016c25f0();
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar12 = (double)FUN_016c9380(dVar10 + local_68);
  iVar9 = 0;
  dVar13 = (double)FUN_00e7c860();
  param_1 = (dVar12 * dVar13) / param_1;
  if (g_024110e8 <= param_1) {
    uVar5 = *(int *)(*(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8) + 0xc) == 3 ^ 3;
    dVar12 = (double)uVar5;
    iVar9 = 1;
    if (dVar12 < param_1) {
      iVar9 = 1;
      do {
        uVar5 = uVar5 * 2;
        iVar9 = iVar9 + 1;
        dVar12 = (double)(int)uVar5;
      } while (dVar12 < param_1);
    }
    iVar9 = iVar9 - (uint)((double)((uint64_t)((double)(uVar5 >> 1) - param_1) & g_023908f0) <
                          (double)((uint64_t)(dVar12 - param_1) & _UNK_023908f8));
  }
  iVar1 = *(int *)(local_50 + 0xc);
  while (iVar1 <= iVar9) {
    FUN_011f7510();
    iVar1 = *(int *)(local_50 + 0xc);
  }
  lVar8 = (int64_t)iVar9;
  lVar2 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + lVar8 * 8);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  dVar13 = (double)FUN_00e7c860();
  dVar12 = (double)FUN_00e7c860();
  dVar12 = (dVar11 - dVar13) / dVar12;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar12;
  auVar14 = roundsd(ZEXT816(0),auVar14,9);
  FUN_011f78b0(dVar12 - auVar14._0_8_);
  uVar7 = FUN_00e7bcc0();
  FUN_00e7b820();
  FUN_00e7bac0();
  FUN_00e7b820();
  if ((uVar7 >> 0x20 != 0) && (extraout_var != 0)) {
    while (cVar4 = FUN_00e7c020(), cVar4 == '\0') {
      local_68 = local_68 * g_024110e8;
      pvVar6 = _pthread_getspecific((void*)lVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_016c25f0(dVar10 + local_68);
      dVar13 = (double)FUN_00e7c860();
      dVar11 = (double)FUN_00e7c860();
      dVar11 = (dVar12 - dVar13) / dVar11;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = dVar11;
      auVar14 = roundsd(ZEXT816(0),auVar3,9);
      FUN_011f78b0(dVar11 - auVar14._0_8_);
      uVar7 = FUN_00e7bcc0();
      FUN_00e7b820();
      FUN_00e7bac0();
      FUN_00e7b820();
      if ((uVar7 >> 0x20 == 0) || (extraout_var == 0)) break;
    }
  }
  (**(code **)(*(int64_t *)*arg1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  return;
}

