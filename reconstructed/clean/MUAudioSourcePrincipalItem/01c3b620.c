// Function: FUN_01c3b620
// Address: 01c3b620
// Size: 1123 bytes
// Class: MUAudioSourcePrincipalItem

void FUN_01c3b620(void)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  void* pVar8;
  void*puVar9;
  int64_t lVar10;
  char *pcVar11;
  int iVar12;
  void*this_ptr;
  int64_t *plVar13;
  int64_t local_78;
  char local_70 [8];
  void*local_68;
  uint64_t local_60;
  int local_58;
  void*local_50;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar9 = &g_02572358;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  local_50 = puVar3;
  if ((void*)*this_ptr != (void*)0x0) {
    local_70[0] = '\0';
    local_78 = 0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = (void*)*this_ptr;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar12 = -local_60._4_4_;
        }
        else {
          iVar12 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar12);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar12 = 0;
        }
        local_60 = CONCAT44(iVar12,(int)local_60);
      }
      lVar4 = (int64_t)(int)local_60;
      iVar12 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar12);
      if (*(int *)(local_68 + 0xc) <= iVar12) break;
      lVar10 = *(int64_t *)(local_68 + 0x10);
      local_78 = *(int64_t *)(lVar10 + (lVar4 + 1) * 8);
      pvVar5 = _pthread_getspecific((void*)lVar10);
      pVar8 = (void*)lVar10;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268dd0();
      plVar6 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01c3b7a0;
        }
      }
      else if (local_48 != (int64_t *)0x0) {
LAB_01c3b7a0:
        local_40 = '\0';
        local_48 = plVar6;
        cVar2 = FUN_00d23d70();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          plVar6 = (int64_t *)FUN_00e8fc40();
          FUN_007ef010();
          (**(code **)(*plVar6 + 0x18))();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          puVar3 = local_50;
          plVar13 = (int64_t *)plVar6[2];
          if (plVar13 != local_48) {
            if (local_40 == '\0') {
              if (local_48 == (int64_t *)0x0) {
                plVar7 = (int64_t *)0x0;
                goto LAB_01c3b84c;
              }
              FUN_00d50b00();
              plVar1 = (int64_t *)plVar6[2];
              plVar6[2] = (int64_t)local_48;
              plVar13 = local_48;
            }
            else {
              local_40 = '\0';
              plVar7 = local_48;
LAB_01c3b84c:
              plVar6[2] = (int64_t)plVar7;
              plVar1 = plVar13;
              plVar13 = plVar7;
            }
            pVar8 = (void*)plVar1;
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar13 = local_48;
            }
          }
          if ((local_40 != '\0') && (plVar13 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          plVar13 = (int64_t *)plVar6[3];
          plVar7 = plVar13;
          if (plVar13 != local_48) {
            if (local_40 == '\0') {
              if (local_48 == (int64_t *)0x0) {
                plVar7 = (int64_t *)0x0;
                goto LAB_01c3b8f0;
              }
              FUN_00d50b00();
              plVar13 = (int64_t *)plVar6[3];
              plVar6[3] = (int64_t)local_48;
              plVar7 = local_48;
            }
            else {
              local_40 = '\0';
              plVar7 = local_48;
LAB_01c3b8f0:
              plVar6[3] = (int64_t)plVar7;
            }
            if (plVar13 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar7 = local_48;
            }
          }
          if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_40 = '\0';
          local_48 = plVar6;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    puVar9 = local_68;
    FUN_001159b0();
  }
  if (*(int *)((int64_t)puVar3 + 0xc) != 0) {
    FUN_00d23310();
    pVar8 = (void*)CONCAT71((int7)((uint64_t)puVar9 >> 8),local_70[0]);
    pcVar11 = local_38;
    if (local_70[0] != '\0') {
      pcVar11 = local_70;
    }
    local_38[0] = local_70[0];
    *pcVar11 = '\0';
    if ((local_70[0] != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013df480();
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0138b6e0();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

