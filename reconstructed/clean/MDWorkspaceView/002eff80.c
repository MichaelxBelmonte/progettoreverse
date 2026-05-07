// Function: FUN_002eff80
// Address: 002eff80
// Size: 2184 bytes
// Class: MDWorkspaceView
// === MDWorkspaceView properties ===
//   bool            _isVertical
//   bool            _allowsChainedResize
//   GNCoord         _size
//   GNCoord         _paddingLineSize
//   GNBorderStyle   _borderStyle


void FUN_002eff80(void)

{
  code *pcVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t lVar4;
  void *pvVar5;
  char *pcVar6;
  uint64_t uVar7;
  char *pcVar8;
  int64_t *plVar9;
  void* pVar10;
  int64_t **pplVar11;
  int iVar12;
  bool bVar13;
  char local_c8;
  undefined7 uStack_c7;
  char local_c0;
  uint64_t local_b8;
  char *local_b0;
  char local_a8;
  char *local_a0;
  uint64_t local_98;
  int local_90;
  int64_t *local_88;
  char local_80 [8];
  int64_t *local_78;
  uint64_t local_70;
  int local_68;
  char *local_60;
  char *local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01beea30();
  pcVar6 = local_b0;
  if (local_a8 == '\0') {
    if (local_b0 != (char *)0x0) {
      FUN_00d50b00();
      if ((local_a8 != '\0') && (local_b0 != (char *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_002efff2;
    }
LAB_002f07b4:
    local_b8 = 0;
  }
  else {
    if (local_b0 == (char *)0x0) goto LAB_002f07b4;
LAB_002efff2:
    pcVar1 = g_02572370;
    local_a8 = '\0';
    local_b0 = (char *)0x0;
    local_60 = pcVar6;
    local_a0 = pcVar6;
    local_98 = 0xffffffff;
    local_90 = 0;
    local_98._4_4_ = 0;
    local_b8 = 0;
    local_58 = (char *)0x0;
    while( true ) {
      if (local_98._4_4_ != 0) {
        if (local_98._4_4_ < 1) {
          iVar12 = -local_98._4_4_;
        }
        else {
          iVar12 = (int)local_98 - local_98._4_4_;
          local_98 = CONCAT44(local_98._4_4_,iVar12);
          FUN_00d23690();
          local_90 = local_90 + local_98._4_4_;
          iVar12 = 0;
        }
        local_98 = CONCAT44(iVar12,(int)local_98);
      }
      lVar4 = (int64_t)(int)local_98;
      iVar12 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar12);
      if (*(int *)(local_a0 + 0xc) <= iVar12) break;
      local_b0 = *(char **)(*(int64_t *)(local_a0 + 0x10) + 8 + lVar4 * 8);
      FUN_01bc0990();
      plVar9 = local_88;
      if (local_80[0] == '\0') {
        if (local_88 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_80[0] != '\0') && (local_88 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_002f0138;
        }
      }
      else if (local_88 != (int64_t *)0x0) {
LAB_002f0138:
        local_80[0] = '\0';
        local_88 = (int64_t *)0x0;
        local_50 = plVar9;
        local_78 = plVar9;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_70._4_4_ = 0;
        while( true ) {
          if (local_70._4_4_ != 0) {
            if (local_70._4_4_ < 1) {
              iVar12 = -local_70._4_4_;
            }
            else {
              iVar12 = (int)local_70 - local_70._4_4_;
              local_70 = CONCAT44(local_70._4_4_,iVar12);
              FUN_00d23690();
              local_68 = local_68 + local_70._4_4_;
              iVar12 = 0;
            }
            local_70 = CONCAT44(iVar12,(int)local_70);
          }
          lVar4 = (int64_t)(int)local_70;
          iVar12 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar12);
          if (*(int *)((int64_t)local_78 + 0xc) <= iVar12) break;
          local_88 = *(int64_t **)(local_78[2] + 8 + lVar4 * 8);
          FUN_01bc60e0();
          plVar9 = local_48;
          FUN_000823a0();
          pplVar11 = (int64_t **)&g_02802688;
          if (plVar9 != (int64_t *)0x0) {
            (**(code **)(*plVar9 + 0x360))();
            cVar3 = FUN_00e85ea0();
            pplVar11 = &local_48;
            if (cVar3 == '\0') {
              pplVar11 = (int64_t **)&g_02802688;
            }
          }
          plVar9 = *pplVar11;
          local_c8 = *(char *)(pplVar11 + 1);
          pplVar11 = pplVar11 + 1;
          if (local_c8 == '\0') {
            pplVar11 = (int64_t **)&local_c8;
          }
          *(void*)pplVar11 = 0;
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar9 != (int64_t *)0x0) {
            pvVar5 = _pthread_getspecific((void*)pplVar11);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            plVar9 = local_48;
            if (local_40[0] == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_002f02c0;
              }
            }
            else if (local_48 != (int64_t *)0x0) {
LAB_002f02c0:
              if (*(int *)((int64_t)plVar9 + 0xc) != 0) {
                if (local_58 == (char *)0x0) {
                  pcVar6 = (char *)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *(void**)pcVar6 = &g_02572358;
                  uVar7 = (*pcVar1)();
                  local_b8 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
                  local_58 = pcVar6;
                }
                FUN_00d23310();
                plVar9 = local_48;
                local_38[0] = local_40[0];
                pcVar6 = local_40;
                if (local_40[0] == '\0') {
                  pcVar6 = local_38;
                }
                *pcVar6 = '\0';
                if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_38[0] == '\0') {
                  if (local_48 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38[0] = '\0';
                }
                local_40[0] = '\0';
                FUN_00d21140();
                if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar9 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
            if (local_c8 != '\0') {
              FUN_00d50b20();
            }
          }
        }
        FUN_000840d0();
        FUN_00d50b20();
      }
    }
    pcVar6 = local_a0;
    FUN_002e0650();
    FUN_00d50b20();
    if (local_58 != (char *)0x0) {
      local_a8 = '\0';
      local_b0 = (char *)0x0;
      local_a0 = local_58;
      local_90 = 0;
      local_98 = 0;
      if (*(int *)(local_58 + 0xc) < 1) {
        local_50 = (int64_t *)0x0;
        local_60 = (char *)0x0;
      }
      else {
        lVar4 = 0;
        local_60 = (char *)0x0;
        local_50 = (int64_t *)0x0;
        do {
          local_b0 = *(char **)(*(int64_t *)(local_58 + 0x10) + lVar4 * 8);
          pvVar5 = _pthread_getspecific((void*)pcVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          if (local_88 == (int64_t *)0x0) {
            bVar13 = false;
          }
          else {
            pvVar5 = _pthread_getspecific((void*)pcVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            bVar13 = local_48 != (int64_t *)0x0;
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_80[0] != '\0') && (local_88 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pVar10 = (void*)pcVar6;
          if (bVar13) {
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01327a50();
            FUN_00d23310();
            plVar9 = local_88;
            local_38[0] = local_80[0];
            pcVar6 = local_38;
            pcVar8 = local_80;
            if (local_80[0] == '\0') {
              pcVar8 = pcVar6;
            }
            *pcVar8 = '\0';
            if ((local_80[0] != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar5 = _pthread_getspecific((void*)pcVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            plVar2 = local_88;
            if ((local_80[0] != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_c0 != '\0') && (CONCAT71(uStack_c7,local_c8) != 0)) {
              FUN_00d50b20();
            }
            if (plVar9 == plVar2) {
              if (local_50 == (int64_t *)0x0) {
                plVar9 = (int64_t *)FUN_00e8fc40();
                FUN_00d4ff40();
                *plVar9 = (int64_t)&g_02572358;
                uVar7 = (*pcVar1)();
                local_60 = (char *)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
                local_50 = plVar9;
              }
              pvVar5 = _pthread_getspecific((void*)pcVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a280();
              FUN_00d470c0();
              plVar9 = local_48;
              if (local_40[0] == '\0') {
                if (local_48 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40[0] = '\0';
              }
              local_88 = plVar9;
              local_80[0] = '\0';
              FUN_00d235a0();
              if ((local_80[0] != '\0') && (local_88 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar9 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          lVar4 = lVar4 + 1;
          local_98 = CONCAT44(local_98._4_4_,(int)lVar4);
        } while ((int)lVar4 < *(int *)(local_58 + 0xc));
      }
      FUN_001159b0();
      bVar13 = false;
      cVar3 = (char)local_60;
      plVar9 = local_50;
      goto LAB_002f07f5;
    }
  }
  bVar13 = true;
  local_58 = (char *)0x0;
  cVar3 = '\0';
  plVar9 = (int64_t *)0x0;
LAB_002f07f5:
  FUN_01bf20d0();
  if ((cVar3 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_b8 != '\0' && !bVar13) {
    FUN_00d50b20();
  }
  return;
}

