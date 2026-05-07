// Function: FUN_012a4a40
// Address: 012a4a40
// Size: 1317 bytes
// Class: MUPulseAssignmentTarget
// String references:
//   "MUPulseAssignmentTarget"

void FUN_012a4a40(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  char cVar4;
  int64_t lVar5;
  void *pvVar6;
  void* pVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int iVar10;
  int64_t **pplVar11;
  uint64_t *arg1;
  bool bVar12;
  uint64_t uVar13;
  int64_t local_e0;
  char local_d8;
  int64_t local_c0;
  char local_b8;
  int64_t local_90;
  char local_88;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  uint64_t local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50 [8];
  uint64_t local_48;
  uint64_t local_40;
  int local_38;
  
  if (*(int *)(*arg1 + 0xc) != 0) {
    uVar8 = param_1;
    FUN_00d23310();
    plVar2 = local_58;
    local_80 = local_50[0] != '\0';
    local_68 = local_58;
    if ((bool)local_80) {
      local_50[0] = '\0';
    }
    FUN_0006e1c0();
    uVar3 = local_48;
    plVar1 = g_02802688;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar1 = local_68;
      if (cVar4 == '\0') {
        plVar1 = g_02802688;
      }
      uVar3 = local_48;
      if (local_80 != '\0') {
        FUN_00d50b20();
        uVar3 = local_48;
      }
    }
    if ((plVar1 != (int64_t *)0x0) && (local_48 = *arg1, local_48 != 0)) {
      local_50[0] = '\0';
      local_58 = (int64_t *)0x0;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_70 = param_1;
      while( true ) {
        lVar5 = (int64_t)(int)local_40;
        iVar10 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar10);
        if (*(int *)(local_48 + 0xc) <= iVar10) break;
        lVar9 = *(int64_t *)(local_48 + 0x10);
        local_58 = *(int64_t **)(lVar9 + 8 + lVar5 * 8);
        pvVar6 = _pthread_getspecific((void*)lVar9);
        pVar7 = (void*)lVar9;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if (local_68 == (int64_t *)0x0) {
          bVar12 = true;
        }
        else {
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          bVar12 = CONCAT71(uStack_7f,local_80) == 0;
          if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar12) {
          FUN_001159b0();
          return;
        }
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar10 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar10 = 0;
          }
          local_40 = CONCAT44(iVar10,(int)local_40);
        }
      }
      uVar8 = local_48;
      FUN_001159b0();
      param_1 = local_70;
      uVar3 = local_48;
    }
    local_48 = uVar3;
    FUN_00d23310();
    plVar2 = local_58;
    pVar7 = (void*)CONCAT71((int7)(uVar8 >> 8),local_50[0]);
    pplVar11 = &local_68;
    if (local_50[0] != '\0') {
      pplVar11 = (int64_t **)local_50;
    }
    local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_50[0]);
    *(char *)pplVar11 = '\0';
    if ((local_50[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_0272fca8 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
      g_027902e0 = "MUPulseAssignmentTarget";
      g_027902f0 = 0;
      g_027902e8 = 0;
      ___cxa_guard_release();
    }
    if (plVar2 == (int64_t *)0x0) {
      lVar5 = 0;
    }
    else {
      uVar13 = (**(code **)(*plVar2 + 0x360))();
      lVar5 = FUN_00e86120(uVar13,1);
    }
    local_70 = (**(code **)(*(int64_t *)((int64_t)plVar2 + lVar5) + 0x18))();
    if ((char)local_68 != '\0') {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123fd00();
    pVar7 = 0;
    uVar13 = FUN_016cb9d0(local_70,1);
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016ca840(&local_58,uVar13,0,0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    local_90 = *param_2;
    local_88 = '\0';
    FUN_011f4d10(param_1,&local_90,local_58,param_1 >> 0x20 == 0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

