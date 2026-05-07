// Function: FUN_01c21b20
// Address: 01c21b20
// Size: 1458 bytes
// Class: Unknown

void FUN_01c21b20(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  void*puVar6;
  int64_t lVar7;
  void *pvVar8;
  uint uVar9;
  int64_t **pplVar10;
  int64_t *plVar11;
  int iVar12;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *local_d8;
  uint8_t local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint64_t local_a0;
  int local_98;
  uint local_90;
  uint local_8c;
  int64_t *local_80;
  char local_78;
  int64_t *local_60;
  char local_58;
  int local_48;
  
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) == 0)) {
    FUN_01c22370(param_1,param_2 & 0xff);
  }
  else {
    local_8c = param_2;
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_02572358;
    (*g_02572370)();
    lVar1 = *arg1;
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        uVar9 = 0;
        do {
          plVar11 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar9 * 8);
          local_90 = uVar9;
          if (plVar11 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_d0 = 1;
          lVar7 = *(int64_t *)(this_ptr + 0x178);
          local_d8 = plVar11;
          if (lVar7 != 0) {
            FUN_00d50b00();
            local_b0 = 0;
            local_b8 = (int64_t *)0x0;
            local_a0 = 0xffffffff;
            local_98 = 0;
            local_a0._4_4_ = 0;
            local_a8 = lVar7;
            while( true ) {
              plVar4 = local_60;
              if (local_a0._4_4_ != 0) {
                if (local_a0._4_4_ < 1) {
                  iVar12 = -local_a0._4_4_;
                }
                else {
                  iVar12 = (int)local_a0 - local_a0._4_4_;
                  local_a0 = CONCAT44(local_a0._4_4_,iVar12);
                  FUN_00d23690();
                  local_98 = local_98 + local_a0._4_4_;
                  iVar12 = 0;
                }
                local_a0 = CONCAT44(iVar12,(int)local_a0);
              }
              lVar7 = (int64_t)(int)local_a0;
              iVar12 = (int)local_a0 + 1;
              local_a0 = CONCAT44(local_a0._4_4_,iVar12);
              if (*(int *)(local_a8 + 0xc) <= iVar12) break;
              local_b8 = *(int64_t **)(*(int64_t *)(local_a8 + 0x10) + 8 + lVar7 * 8);
              FUN_01c2d280();
              pplVar10 = (int64_t **)&g_02802688;
              if (plVar11 != (int64_t *)0x0) {
                (**(code **)(*plVar11 + 0x360))();
                cVar5 = FUN_00e85ea0();
                pplVar10 = &local_d8;
                if (cVar5 == '\0') {
                  pplVar10 = (int64_t **)&g_02802688;
                }
              }
              plVar2 = *pplVar10;
              cVar5 = *(char *)(pplVar10 + 1);
              if ((cVar5 == '\0') || (plVar2 == (int64_t *)0x0)) {
                if (plVar2 != (int64_t *)0x0) goto LAB_01c21d79;
                bVar3 = true;
              }
              else {
                FUN_00d50b00();
LAB_01c21d79:
                pvVar8 = _pthread_getspecific((void*)pplVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01783cd0();
                if (plVar11 == local_60) {
                  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else if (local_58 == '\0') {
                  if (local_60 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  local_d8 = local_60;
                  if (plVar11 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  local_d0 = 1;
                  plVar11 = local_60;
                }
                else {
                  local_d8 = local_60;
                  if (plVar11 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  local_d0 = 1;
                  plVar11 = local_60;
                }
                bVar3 = false;
              }
              local_c0 = '\0';
              local_c8 = plVar11;
              (**(code **)(*local_b8 + 0x370))();
              if (local_58 == '\0') {
                if (local_60 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (local_60 == (int64_t *)0x0) {
LAB_01c22063:
                if (cVar5 != '\0' && !bVar3) {
                  FUN_00d50b20();
                }
              }
              else {
                if (!bVar3) {
                  FUN_01c07800();
                  if (local_58 == '\0') {
                    if (local_60 != (int64_t *)0x0) {
                      FUN_00d50b00();
                      goto LAB_01c21f5f;
                    }
                  }
                  else if (local_60 != (int64_t *)0x0) {
LAB_01c21f5f:
                    local_58 = '\0';
                    local_60 = (int64_t *)0x0;
                    local_48 = -1;
                    while( true ) {
                      lVar7 = (int64_t)local_48;
                      local_48 = local_48 + 1;
                      if (*(int *)((int64_t)plVar4 + 0xc) <= local_48) break;
                      local_60 = *(int64_t **)(plVar4[2] + 8 + lVar7 * 8);
                      FUN_01bb96f0();
                      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (local_80 == plVar2) {
                        local_78 = '\0';
                        FUN_00d235a0();
                        local_80 = local_60;
                      }
                    }
                    FUN_01c2d490();
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                  goto LAB_01c22063;
                }
                local_58 = '\0';
                FUN_00d235a0();
                FUN_00d50b20();
              }
            }
            FUN_01c2d1e0();
            FUN_00d50b20();
          }
          if (plVar11 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          uVar9 = local_90 + 1;
        } while ((int)uVar9 < *(int *)(lVar1 + 0xc));
      }
      FUN_00083b20();
    }
    FUN_01c22370();
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

