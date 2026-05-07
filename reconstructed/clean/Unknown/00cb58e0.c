// Function: FUN_00cb58e0
// Address: 00cb58e0
// Size: 3598 bytes
// Class: Unknown
// String references:
//   "Edit %@"

void FUN_00cb58e0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void *pvVar6;
  void* pVar7;
  int64_t **pplVar8;
  int iVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar10;
  bool bVar11;
  int64_t local_200;
  uint8_t local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  uint8_t local_1d8;
  int64_t local_1d0;
  uint8_t local_1c8;
  int64_t *local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  int64_t *local_d0;
  char local_c8;
  uint64_t local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  uint64_t local_88;
  int local_80;
  int64_t *local_70;
  int64_t *local_60;
  uint local_58 [2];
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  char local_38 [8];
  
  plVar5 = local_60;
  cVar2 = (**(code **)(*(int64_t *)*param_2 + 0x370))();
  if (cVar2 == '\0') goto LAB_00cb5f15;
  local_1b8 = *arg1;
  local_1b0 = '\0';
  local_1a8 = *param_2;
  local_1a0 = '\0';
  cVar2 = (**(code **)(*this_ptr + 0x408))();
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') goto LAB_00cb5f15;
  cVar2 = FUN_00d77de0();
  if (cVar2 == '\0') {
    (**(code **)(*(int64_t *)*arg1 + 0x210))();
    if ((char)local_58[0] == '\0') {
      if (local_60 == (int64_t *)0x0) goto LAB_00cb5f15;
      FUN_00d50b00();
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_60 == (int64_t *)0x0) goto LAB_00cb5f15;
    local_118 = local_60;
    local_110 = '\0';
    (**(code **)(*this_ptr + 0x3d0))();
    if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_00cb5f15;
  }
  (**(code **)(*(int64_t *)*arg1 + 0x210))();
  if (((char)local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_d8 = local_60;
  if (*(int *)((int64_t)local_60 + 0xc) < 0x401) {
    local_c0 = 0;
    local_70 = (int64_t *)0x0;
  }
  else {
    local_198 = local_60;
    local_190 = '\0';
    FUN_00cb53b0(1,1);
    local_70 = local_60;
    if (local_60 == (int64_t *)0x0) {
      local_70 = (int64_t *)0x0;
      local_c0 = 0;
    }
    else if ((char)local_58[0] == '\0') {
      uVar3 = FUN_00d50b00();
      local_c0 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = local_58[0] & 0xffffff00;
      local_c0 = CONCAT71((int7)((uint64_t)local_60 >> 8),1);
    }
    if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d23340();
  pplVar8 = &local_a0;
  if ((char)local_58[0] != '\0') {
    pplVar8 = (int64_t **)local_58;
  }
  local_a0 = (int64_t *)CONCAT71(local_a0._1_7_,(char)local_58[0]);
  *(void*)pplVar8 = 0;
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_1c0 = param_2;
  if ((char)local_a0 == '\0') {
    if (local_60 == (int64_t *)0x0) goto LAB_00cb5df4;
    FUN_00d50b00();
LAB_00cb5bc9:
    local_58[0] = local_58[0] & 0xffffff00;
    local_60 = (int64_t *)0x0;
    local_50 = plVar5;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar9 = -local_48._4_4_;
        }
        else {
          iVar9 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar9 = 0;
        }
        local_48 = CONCAT44(iVar9,(int)local_48);
      }
      lVar4 = (int64_t)(int)local_48;
      iVar9 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar9);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar9) break;
      local_60 = *(int64_t **)(local_50[2] + 8 + lVar4 * 8);
      local_98 = '\0';
      local_a0 = local_60;
      cVar2 = FUN_00e3a2e0();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        local_180 = '\0';
        local_188 = local_60;
        (**(code **)(*this_ptr + 0x3d0))();
        if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00083b20();
    lVar4 = plVar5[2];
    if (local_70 == (int64_t *)0x0) {
      if (0 < *(int *)(lVar4 + 0xc)) {
        lVar10 = 0;
        do {
          lVar1 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar10 * 8);
          local_150 = '\0';
          local_158 = lVar1;
          cVar2 = FUN_00d24090();
          if (cVar2 == '\0') {
            local_140 = '\0';
            local_148 = lVar1;
            cVar2 = (**(code **)(*this_ptr + 0x3b0))();
            if ((local_140 != '\0') && (local_148 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            cVar2 = '\0';
          }
          if ((local_150 != '\0') && (local_158 != 0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            local_130 = '\0';
            local_138 = lVar1;
            (**(code **)(*this_ptr + 0x3e0))();
            if ((local_130 != '\0') && (local_138 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)(lVar4 + 0xc));
      }
    }
    else if (0 < *(int *)(lVar4 + 0xc)) {
      lVar10 = 0;
      do {
        local_60 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + lVar10 * 8);
        local_58[0] = local_58[0] & 0xffffff00;
        cVar2 = FUN_00e3a2e0();
        if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          local_170 = '\0';
          local_178 = local_60;
          cVar2 = (**(code **)(*this_ptr + 0x3b0))();
          if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            local_160 = '\0';
            local_168 = local_60;
            (**(code **)(*this_ptr + 0x3e0))();
            if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(lVar4 + 0xc));
    }
  }
  else {
    if (local_60 != (int64_t *)0x0) goto LAB_00cb5bc9;
LAB_00cb5df4:
    local_58[0] = local_58[0] & 0xffffff00;
    local_60 = (int64_t *)0x0;
    local_50 = plVar5;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar9 = -local_48._4_4_;
        }
        else {
          iVar9 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar9 = 0;
        }
        local_48 = CONCAT44(iVar9,(int)local_48);
      }
      lVar4 = (int64_t)(int)local_48;
      iVar9 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar9);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar9) break;
      local_60 = *(int64_t **)(local_50[2] + 8 + lVar4 * 8);
      local_120 = '\0';
      local_128 = local_60;
      (**(code **)(*this_ptr + 0x3d0))();
      if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00083b20();
  }
  FUN_00d23740();
  param_2 = local_1c0;
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_c0 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_d8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00cb5f15:
  if (((this_ptr[0x12] != 0) && ((char)this_ptr[0x1c] != '\0')) && ((int)this_ptr[0x1a] == 0)) {
    local_200 = *param_2;
    local_1f8 = 0;
    FUN_00cb6da0(2,&local_200);
    plVar5 = (int64_t *)(**(code **)(*(int64_t *)*arg1 + 0x188))();
    if (((plVar5 != (int64_t *)0x0) && (*plVar5 != 0)) &&
       (cVar2 = (**(code **)(*(int64_t *)*param_2 + 0x370))(), cVar2 != '\0')) {
      local_108 = *param_2;
      local_100 = '\0';
      cVar2 = (**(code **)(*(int64_t *)*arg1 + 0x2b8))();
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        (**(code **)(*(int64_t *)*arg1 + 0x210))();
        pplVar8 = (int64_t **)local_38;
        if ((char)local_58[0] != '\0') {
          pplVar8 = (int64_t **)local_58;
        }
        local_38[0] = (char)local_58[0];
        *(void*)pplVar8 = 0;
        if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_60 != (int64_t *)0x0) {
          if ((int64_t *)*plVar5 != (int64_t *)0x0) {
            local_58[0] = local_58[0] & 0xffffff00;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_48._4_4_ = 0;
            local_50 = (int64_t *)*plVar5;
            while( true ) {
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar9 = -local_48._4_4_;
                }
                else {
                  iVar9 = (int)local_48 - local_48._4_4_;
                  local_48 = CONCAT44(local_48._4_4_,iVar9);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar9 = 0;
                }
                local_48 = CONCAT44(iVar9,(int)local_48);
              }
              iVar9 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar9);
              if (*(int *)((int64_t)local_50 + 0xc) <= iVar9) break;
              pVar7 = (void*)local_50[2];
              FUN_00e17bc0();
              if (local_a0 == (int64_t *)0x0) {
                bVar11 = true;
              }
              else {
                FUN_00e17bc0();
                if (local_b8 == (int64_t *)0x0) {
                  bVar11 = false;
                }
                else {
                  FUN_00e17bc0();
                  bVar11 = local_1f0 == *param_2;
                  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (bVar11) {
                cVar2 = FUN_00d77de0();
                if (cVar2 == '\0') {
                  FUN_00e8b690();
                  (**(code **)(*local_60 + 0x360))();
                  cVar2 = FUN_00e85ea0();
                  plVar5 = local_60;
                  if (cVar2 == '\0') {
                    plVar5 = g_02802688;
                  }
                  if (plVar5 != (int64_t *)0x0) {
                    pvVar6 = _pthread_getspecific(pVar7);
                    if (pvVar6 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_00e8bda0();
                  }
                }
                else {
                  local_98 = '\0';
                  local_a0 = (int64_t *)0x0;
                  local_90 = local_60;
                  local_88 = 0xffffffff;
                  local_80 = 0;
                  local_88._4_4_ = 0;
                  while( true ) {
                    if (local_88._4_4_ != 0) {
                      if (local_88._4_4_ < 1) {
                        iVar9 = -local_88._4_4_;
                      }
                      else {
                        iVar9 = (int)local_88 - local_88._4_4_;
                        local_88 = CONCAT44(local_88._4_4_,iVar9);
                        FUN_00d23690();
                        local_80 = local_80 + local_88._4_4_;
                        iVar9 = 0;
                      }
                      local_88 = CONCAT44(iVar9,(int)local_88);
                    }
                    lVar4 = (int64_t)(int)local_88;
                    iVar9 = (int)local_88 + 1;
                    local_88 = CONCAT44(local_88._4_4_,iVar9);
                    if (*(int *)((int64_t)local_90 + 0xc) <= iVar9) break;
                    plVar5 = *(int64_t **)(local_90[2] + 8 + lVar4 * 8);
                    local_b8 = plVar5;
                    local_a0 = plVar5;
                    FUN_00e8b690();
                    pplVar8 = &g_02802688;
                    if (plVar5 != (int64_t *)0x0) {
                      (**(code **)(*plVar5 + 0x360))();
                      cVar2 = FUN_00e85ea0();
                      pplVar8 = &local_b8;
                      if (cVar2 == '\0') {
                        pplVar8 = &g_02802688;
                      }
                    }
                    if (*pplVar8 != (int64_t *)0x0) {
                      pvVar6 = _pthread_getspecific((void*)pplVar8);
                      if (pvVar6 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_00e8bda0();
                    }
                  }
                  FUN_00e8cae0();
                }
              }
            }
            FUN_00cc12b0();
          }
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  if ((((*(char *)((int64_t)this_ptr + 0xe1) != '\0') && (this_ptr[8] != 0)) &&
      (cVar2 = FUN_00db3680(), cVar2 == '\0')) &&
     ((cVar2 = FUN_00db3920(), cVar2 != '\0' && (cVar2 = FUN_00d74560(), cVar2 == '\0')))) {
    local_f8 = *param_2;
    local_f0 = '\0';
    cVar2 = (**(code **)(*(int64_t *)*arg1 + 0x358))();
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_00d74470();
      plVar5 = local_b8;
      local_58[0] = 1;
      local_48 = local_48 & 0xffffffffffffff00;
      if (local_b8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar5;
      local_48 = CONCAT71(local_48._1_7_,1);
      FUN_00d8cb40();
      local_d0 = local_a0;
      local_c8 = 0;
      if (local_98 == '\0') {
        if (local_a0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_c8 = '\x01';
      FUN_00db31b0();
      if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  cVar2 = FUN_00d74560();
  if (cVar2 == '\0') {
    local_e8 = *param_2;
    local_e0 = '\0';
    cVar2 = (**(code **)(*(int64_t *)*arg1 + 0x350))();
    if ((cVar2 == '\0') || (this_ptr[0x26] == 0)) {
      bVar11 = false;
    }
    else {
      bVar11 = *(char *)((int64_t)this_ptr + 0xe1) != '\0';
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if (bVar11) {
      local_1e0 = *arg1;
      local_1d8 = 0;
      local_1d0 = *param_2;
      local_1c8 = 0;
      FUN_00cb7af0();
    }
  }
  return;
}

