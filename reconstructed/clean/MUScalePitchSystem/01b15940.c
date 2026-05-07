// Function: FUN_01b15940
// Address: 01b15940
// Size: 1883 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


uint64_t FUN_01b15940(void* param_1,char param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *plVar7;
  void *pvVar8;
  uint64_t unaff_RBX;
  uint64_t uVar9;
  int64_t this_ptr;
  float fVar10;
  uint32_t uVar11;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)(this_ptr + 0x315) == '\0') || (*(char *)(this_ptr + 0x316) == '\0'))
  goto LAB_01b15b3b;
  if (param_2 != '\0') {
    FUN_00d50b00();
    *(int *)(this_ptr + 0x2fc) = *(int *)(this_ptr + 0x2fc) + 1;
    uVar11 = g_023b26e8;
    if (NAN(*(float *)(this_ptr + 0x1dc))) {
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar11 = FUN_01742280();
    }
    *(void*)(this_ptr + 0x1dc) = uVar11;
    FUN_01af6500();
    FUN_00d50b20();
    uVar9 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    goto LAB_01b15b3d;
  }
  FUN_01caeae0();
  if (local_58 == '\0') {
    if (in_stack_ffffffffffffffa0 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01b15a3b;
    }
  }
  else if (in_stack_ffffffffffffffa0 != (int64_t *)0x0) {
LAB_01b15a3b:
    FUN_01ad3cb0();
    if ((local_58 == '\0') && (in_stack_ffffffffffffffa0 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    lVar6 = g_027e4590;
    local_70 = in_stack_ffffffffffffffa0;
    if ((*(int64_t *)(this_ptr + 0x1b0) == 0) || (in_stack_ffffffffffffffa0 == (int64_t *)0x0)) {
      if (g_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_027e3cd8;
      if (g_027e3cd8 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar2;
      local_110 = '\x01';
      local_108 = 0;
      local_100 = '\0';
      FUN_00d31230(&local_108,&local_118);
      local_90 = 0;
      if (local_58 == '\0') {
        if (in_stack_ffffffffffffffa0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_90 = '\x01';
      local_98 = in_stack_ffffffffffffffa0;
      FUN_01d64eb0();
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      uVar9 = 0;
      FUN_01d66ab0();
    }
    else {
      local_78 = (int64_t *)CONCAT44(local_78._4_4_,*(float *)(this_ptr + 0x1dc));
      if (NAN(*(float *)(this_ptr + 0x1dc))) {
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar11 = FUN_01742280();
        local_78 = (int64_t *)CONCAT44(local_78._4_4_,uVar11);
      }
      FUN_0173ba80();
      pvVar8 = _pthread_getspecific(param_1);
      plVar7 = in_stack_ffffffffffffffa0;
      if ((pvVar8 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar7 = (int64_t *)
                 in_stack_ffffffffffffffa0[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      iVar4 = (**(code **)(*plVar7 + 0x3a8))(local_78._0_4_);
      if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific(param_1);
      if ((pvVar8 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        param_1 = (void*)local_70;
      }
      fVar10 = (float)FUN_0173e3a0();
      iVar5 = FUN_00e7d780(fVar10 / g_023908e0);
      plVar7 = *(int64_t **)(this_ptr + 0x1b0);
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        plVar7 = *(int64_t **)(this_ptr + 0x1b0);
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      lVar6 = g_026e3bc8;
      if (g_026e3bc8 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar6;
      local_f0 = '\x01';
      local_e8 = 0;
      local_e0 = '\0';
      (**(code **)(*plVar7 + 0x3c0))(&local_f8,iVar4 - iVar5,&local_e8);
      if ((local_58 == '\0') && (in_stack_ffffffffffffffa0 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      local_78 = in_stack_ffffffffffffffa0;
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      uVar11 = (**(code **)(*plVar7 + 0x18))();
      lVar6 = g_027e3ce0;
      local_d0 = '\0';
      local_d8 = in_stack_ffffffffffffffa0;
      if (g_027e3ce0 != 0) {
        uVar11 = FUN_00d50b00();
      }
      FUN_00ca0840(uVar11,&stack0xffffffffffffffa0);
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = g_027e4590;
      if (g_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_027e3ce8;
      local_c8 = lVar2;
      local_c0 = '\x01';
      if (g_027e3ce8 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar3;
      local_b0 = '\x01';
      local_a0 = '\0';
      local_a8 = plVar7;
      FUN_00d31230(&local_a8,&local_b8);
      local_80 = 0;
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      local_88 = lVar6;
      FUN_01d64eb0();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d66ab0(*(void*)(this_ptr + 0x1dc));
      FUN_00d50b20();
      uVar9 = CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_01b15b3d;
  }
LAB_01b15b3b:
  uVar9 = 0;
LAB_01b15b3d:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return uVar9 & 0xffffffff;
}

