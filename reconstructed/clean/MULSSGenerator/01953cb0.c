// Function: FUN_01953cb0
// Address: 01953cb0
// Size: 1082 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

uint32_t FUN_01953cb0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t **pplVar9;
  int iVar10;
  int64_t this_ptr;
  int iVar11;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_98;
  char local_90;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  char local_40;
  uint32_t local_34;
  
  local_34 = 0;
  if (*(int64_t *)(this_ptr + 0x540) == 0) {
    return 0;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  lVar2 = local_70;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 == 0) {
    return local_34;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  lVar2 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_68 = '\0';
    local_70 = 0;
    local_60 = lVar2;
    local_58 = 0xffffffff;
    local_50 = 0;
    while( true ) {
      lVar6 = (int64_t)(int)local_58;
      iVar11 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar11);
      iVar10 = *(int *)(local_60 + 0xc);
      if (iVar10 <= iVar11) break;
      lVar8 = *(int64_t *)(local_60 + 0x10);
      local_80 = *(int64_t *)(lVar8 + 8 + lVar6 * 8);
      local_78 = '\0';
      local_70 = local_80;
      FUN_01941c70(lVar8,&local_80);
      pvVar5 = _pthread_getspecific((void*)lVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_012e78c0();
      plVar1 = local_48;
      if ((g_0270c820 == '\0') &&
         (iVar4 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_00, iVar4 != 0)) {
        g_027e77e8 = FUN_0015ef90();
        g_027e77d0 = "MULSSGenerator";
        g_027e77d8 = 0x70;
        g_027e77e0 = FUN_0015ef30;
        g_027e77f0 = 0;
        ram_00000000027e77f8 = 0;
        g_027e7800 = 0;
        ram_00000000027e7808 = 0;
        g_027e7810 = 0;
        ram_00000000027e7818 = 0;
        g_027e7820 = 0;
        ram_00000000027e7828 = 0;
        g_027e7830 = 0;
        ram_00000000027e7838 = 0;
        g_027e7840 = 0;
        ram_00000000027e7848 = 0;
        g_027e7850 = 0;
        ram_00000000027e7858 = 0;
        g_027e7860 = 0;
        ram_00000000027e7868 = 0;
        g_027e7870 = 0;
        ram_00000000027e7878 = 0;
        g_027e7880 = 0;
        ram_00000000027e7888 = 0;
        g_027e7890 = 0;
        uVar12 = ___cxa_guard_release();
      }
      pplVar9 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar9 = &local_48;
        uVar12 = extraout_XMM0_Da;
        if (cVar3 == '\0') {
          pplVar9 = (int64_t **)&g_02802688;
        }
      }
      plVar1 = *pplVar9;
      if (*(char *)(pplVar9 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar9 + 1) = 0;
      }
      pVar7 = (void*)pplVar9;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_34 = FUN_012c6b70();
        FUN_00d50b20();
        break;
      }
      iVar10 = local_58._4_4_;
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar10 = -local_58._4_4_;
        }
        else {
          local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
          FUN_00d23690(uVar12,local_58._4_4_);
          local_50 = local_50 + iVar10;
          iVar10 = 0;
        }
        local_58 = CONCAT44(iVar10,(int)local_58);
      }
    }
    FUN_000be170();
    if (iVar11 < iVar10) goto LAB_019540d4;
  }
  local_34 = 0;
LAB_019540d4:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return local_34;
}

