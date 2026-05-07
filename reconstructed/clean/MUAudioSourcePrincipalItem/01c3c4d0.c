// Function: FUN_01c3c4d0
// Address: 01c3c4d0
// Size: 2128 bytes
// Class: MUAudioSourcePrincipalItem

void FUN_01c3c4d0(void)

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
  int64_t **pplVar11;
  int iVar12;
  void*this_ptr;
  int64_t local_98;
  int64_t *local_90;
  void*local_88;
  uint64_t local_80;
  int local_78;
  void*local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar9 = &g_02572358;
  *puVar3 = &g_02572358;
  local_70 = puVar3;
  (*g_02572370)();
  if ((void*)*this_ptr != (void*)0x0) {
    local_90._0_1_ = '\0';
    local_98 = 0;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_80._4_4_ = 0;
    local_88 = (void*)*this_ptr;
    while( true ) {
      if (local_80._4_4_ != 0) {
        if (local_80._4_4_ < 1) {
          iVar12 = -local_80._4_4_;
        }
        else {
          iVar12 = (int)local_80 - local_80._4_4_;
          local_80 = CONCAT44(local_80._4_4_,iVar12);
          FUN_00d23690();
          local_78 = local_78 + local_80._4_4_;
          iVar12 = 0;
        }
        local_80 = CONCAT44(iVar12,(int)local_80);
      }
      lVar4 = (int64_t)(int)local_80;
      iVar12 = (int)local_80 + 1;
      local_80 = CONCAT44(local_80._4_4_,iVar12);
      if (*(int *)(local_88 + 0xc) <= iVar12) break;
      lVar10 = *(int64_t *)(local_88 + 0x10);
      local_98 = *(int64_t *)(lVar10 + (lVar4 + 1) * 8);
      pvVar5 = _pthread_getspecific((void*)lVar10);
      pVar8 = (void*)lVar10;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268dd0();
      plVar6 = local_68;
      if (local_60 == '\0') {
        if (local_68 == (int64_t *)0x0) goto LAB_01c3c730;
        FUN_00d50b00();
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01c3c650:
        local_60 = '\0';
        local_68 = plVar6;
        cVar2 = FUN_00d23d70();
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
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
          plVar1 = (int64_t *)plVar6[2];
          plVar7 = plVar1;
          if (plVar1 != local_68) {
            if (local_60 == '\0') {
              if (local_68 == (int64_t *)0x0) {
                plVar7 = (int64_t *)0x0;
                goto LAB_01c3c709;
              }
              FUN_00d50b00();
              plVar1 = (int64_t *)plVar6[2];
              plVar6[2] = (int64_t)local_68;
              plVar7 = local_68;
            }
            else {
              local_60 = '\0';
              plVar7 = local_68;
LAB_01c3c709:
              plVar6[2] = (int64_t)plVar7;
            }
            pVar8 = (void*)plVar1;
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar7 = local_68;
            }
          }
          if ((local_60 != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          plVar1 = (int64_t *)plVar6[3];
          plVar7 = plVar1;
          if (plVar1 != local_68) {
            if (local_60 == '\0') {
              if (local_68 == (int64_t *)0x0) {
                plVar7 = (int64_t *)0x0;
                goto LAB_01c3cb6d;
              }
              FUN_00d50b00();
              plVar1 = (int64_t *)plVar6[3];
              plVar6[3] = (int64_t)local_68;
              plVar7 = local_68;
            }
            else {
              local_60 = '\0';
              plVar7 = local_68;
LAB_01c3cb6d:
              plVar6[3] = (int64_t)plVar7;
            }
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar7 = local_68;
            }
          }
          if ((local_60 != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_60 = '\0';
          local_68 = plVar6;
          FUN_00d21140();
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      else {
        if (local_68 != (int64_t *)0x0) goto LAB_01c3c650;
LAB_01c3c730:
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012ebc80();
        plVar6 = local_68;
        if (local_60 == '\0') {
          if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
             (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60 = '\0';
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (int64_t *)0x0) {
          if (*(int *)((int64_t)plVar6 + 0xc) != 0) {
            local_60 = '\0';
            local_68 = (int64_t *)0x0;
            local_58 = plVar6;
            local_50 = 0xffffffff;
            local_48 = 0;
            local_50._4_4_ = 0;
            while( true ) {
              if (local_50._4_4_ != 0) {
                if (local_50._4_4_ < 1) {
                  iVar12 = -local_50._4_4_;
                }
                else {
                  iVar12 = (int)local_50 - local_50._4_4_;
                  local_50 = CONCAT44(local_50._4_4_,iVar12);
                  FUN_00d23690();
                  local_48 = local_48 + local_50._4_4_;
                  iVar12 = 0;
                }
                local_50 = CONCAT44(iVar12,(int)local_50);
              }
              lVar4 = (int64_t)(int)local_50;
              iVar12 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar12);
              if (*(int *)((int64_t)local_58 + 0xc) <= iVar12) break;
              lVar10 = local_58[2];
              local_68 = *(int64_t **)(lVar10 + (lVar4 + 1) * 8);
              local_38 = '\0';
              local_40 = local_68;
              cVar2 = FUN_00d23d70();
              pVar8 = (void*)lVar10;
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
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
                plVar1 = (int64_t *)plVar6[2];
                plVar7 = plVar1;
                if (plVar1 != local_40) {
                  if (local_38 == '\0') {
                    if (local_40 == (int64_t *)0x0) {
                      plVar7 = (int64_t *)0x0;
                      goto LAB_01c3c954;
                    }
                    FUN_00d50b00();
                    plVar1 = (int64_t *)plVar6[2];
                    plVar6[2] = (int64_t)local_40;
                    plVar7 = local_40;
                  }
                  else {
                    local_38 = '\0';
                    plVar7 = local_40;
LAB_01c3c954:
                    plVar6[2] = (int64_t)plVar7;
                  }
                  pVar8 = (void*)plVar1;
                  if (plVar1 != (int64_t *)0x0) {
                    FUN_00d50b20();
                    plVar7 = local_40;
                  }
                }
                if ((local_38 != '\0') && (plVar7 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar5 = _pthread_getspecific(pVar8);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e7c0();
                plVar1 = (int64_t *)plVar6[3];
                plVar7 = plVar1;
                if (plVar1 != local_40) {
                  if (local_38 == '\0') {
                    if (local_40 == (int64_t *)0x0) {
                      plVar7 = (int64_t *)0x0;
                      goto LAB_01c3c9ff;
                    }
                    FUN_00d50b00();
                    plVar1 = (int64_t *)plVar6[3];
                    plVar6[3] = (int64_t)local_40;
                    plVar7 = local_40;
                  }
                  else {
                    local_38 = '\0';
                    plVar7 = local_40;
LAB_01c3c9ff:
                    plVar6[3] = (int64_t)plVar7;
                  }
                  if (plVar1 != (int64_t *)0x0) {
                    FUN_00d50b20();
                    plVar7 = local_40;
                  }
                }
                if ((local_38 != '\0') && (plVar7 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                local_38 = '\0';
                local_40 = plVar6;
                FUN_00d21140();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            FUN_001159b0();
          }
          FUN_00d50b20();
        }
      }
    }
    puVar9 = local_88;
    FUN_001159b0();
  }
  if (*(int *)((int64_t)local_70 + 0xc) != 0) {
    FUN_00d23310();
    pVar8 = (void*)CONCAT71((int7)((uint64_t)puVar9 >> 8),(char)local_90);
    pplVar11 = &local_40;
    if ((char)local_90 != '\0') {
      pplVar11 = &local_90;
    }
    local_40 = (int64_t *)CONCAT71(local_40._1_7_,(char)local_90);
    *(void*)pplVar11 = 0;
    if (((char)local_90 != '\0') && (local_98 != 0)) {
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
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_40 != '\0') {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

