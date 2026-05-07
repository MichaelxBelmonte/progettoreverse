// Function: FUN_002d1ba0
// Address: 002d1ba0
// Size: 1059 bytes
// Class: MDProjectAudioSource
// String references:
//   "MDProjectAudioSource"
// === MDProjectAudioSource properties ===
//   MDProjectAudioSourceLocation _location
//   MDProjectAudioSourceStatus _status


bool FUN_002d1ba0(void)

{
  char cVar1;
  void*puVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  int64_t **pplVar6;
  int iVar7;
  void*arg1;
  int64_t *plVar8;
  int64_t *plVar9;
  uint32_t uVar10;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  (**(code **)(*(int64_t *)*arg1 + 0x3f8))();
  plVar8 = local_80;
  if ((((local_78 == '\0') && (local_80 != (int64_t *)0x0)) && (FUN_00d50b00(), local_78 != '\0'))
     && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  uVar10 = (*g_02572370)();
  if (plVar8 != (int64_t *)0x0) {
    local_78 = '\0';
    local_80 = (int64_t *)0x0;
    local_38 = plVar8;
    local_70 = plVar8;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar7 = -local_68._4_4_;
        }
        else {
          iVar7 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar7);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar7 = 0;
        }
        local_68 = CONCAT44(iVar7,(int)local_68);
      }
      lVar3 = (int64_t)(int)local_68;
      iVar7 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar7);
      if (*(int *)((int64_t)local_70 + 0xc) <= iVar7) break;
      plVar8 = *(int64_t **)(local_70[2] + 8 + lVar3 * 8);
      local_58 = plVar8;
      local_80 = plVar8;
      if ((g_026fd0a8 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        g_026fcff8 = FUN_00d4fe50();
        g_026fcfe0 = "MDProjectAudioSource";
        g_026fcfe8 = 0x28;
        g_026fcff0 = FUN_002d5b80;
        g_026fd000 = 0;
        ram_00000000026fd008 = 0;
        g_026fd010 = 0;
        g_026fd088 = 0;
        ram_00000000026fd090 = 0;
        g_026fd098 = 0;
        g_026fd09a = 1;
        g_026fd018 = 0;
        ram_00000000026fd020 = 0;
        g_026fd028 = 0;
        ram_00000000026fd030 = 0;
        g_026fd038 = 0;
        ram_00000000026fd040 = 0;
        g_026fd048 = 0;
        ram_00000000026fd050 = 0;
        g_026fd058 = 0;
        ram_00000000026fd060 = 0;
        g_026fd068 = 0;
        ram_00000000026fd070 = 0;
        g_026fd078 = 0;
        ram_00000000026fd080 = 0;
        g_026fd0a3 = 0;
        g_026fd09b = 0;
        ___cxa_guard_release();
      }
      pplVar6 = (int64_t **)&g_02802688;
      if (plVar8 != (int64_t *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar6 = &local_58;
        if (cVar1 == '\0') {
          pplVar6 = (int64_t **)&g_02802688;
        }
      }
      plVar8 = local_80;
      if (*pplVar6 != (int64_t *)0x0) {
        if (local_80[3] == 0) {
          plVar9 = (int64_t *)local_80[2];
          pvVar4 = _pthread_getspecific((void*)pplVar6);
          pVar5 = (void*)pplVar6;
          if (pvVar4 != (void *)0x0) {
            plVar9 = (int64_t *)plVar8[2];
            lVar3 = FUN_00e8b990();
            if (lVar3 != 0) {
              plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar9 + 0x478))();
        }
        else {
          FUN_00b88600();
          pVar5 = (void*)pplVar6;
        }
        plVar8 = local_58;
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = local_80;
        if (plVar8 != (int64_t *)0x0) {
          if (local_80[3] == 0) {
            plVar8 = (int64_t *)local_80[2];
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              plVar8 = (int64_t *)plVar9[2];
              lVar3 = FUN_00e8b990();
              if (lVar3 != 0) {
                plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
              }
            }
            (**(code **)(*plVar8 + 0x478))();
          }
          else {
            FUN_00b88600();
          }
          plVar8 = local_58;
          local_40 = 0;
          if (local_50 == '\0') {
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_40 = '\x01';
          local_48 = plVar8;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    uVar10 = FUN_002d74d0();
    plVar8 = local_38;
  }
  lVar3 = g_026fcec0;
  iVar7 = *(int *)((int64_t)puVar2 + 0xc);
  if (iVar7 != 0) {
    if (g_026fcec0 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_90 = lVar3;
    local_88 = '\x01';
    FUN_01cac7f0(uVar10,&local_90);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return iVar7 != 0;
}

