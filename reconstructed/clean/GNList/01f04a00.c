// Function: FUN_01f04a00
// Address: 01f04a00
// Size: 4997 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_01f04a00(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  code *pcVar5;
  int64_t *plVar6;
  char cVar7;
  byte bVar8;
  int64_t *plVar9;
  int64_t lVar10;
  void*puVar11;
  int64_t **pplVar12;
  int iVar13;
  int64_t lVar14;
  int64_t *arg1;
  void*this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar15;
  int64_t *local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  void*local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  int64_t *local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  uint64_t local_98;
  int local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  uint64_t local_70;
  int local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  local_138 = param_2;
  local_b8 = param_1;
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    lVar10 = *arg1;
    if (lVar10 != 0) {
      local_50[0] = 0;
      local_58 = (int64_t *)0x0;
      iStack_3c = 0;
      local_38 = 0;
      lVar14 = 0;
      local_48 = (int64_t *)lVar10;
      while (local_40 = (int)lVar14, local_40 < *(int *)(lVar10 + 0xc)) {
        plVar9 = *(int64_t **)(*(int64_t *)(lVar10 + 0x10) + lVar14 * 8);
        local_58 = plVar9;
        cVar7 = (**(code **)(*plVar9 + 0x618))();
        lVar14 = lVar14 + 1;
        if (cVar7 != '\0') {
          *(void*)(this_ptr + 1) = 0;
          FUN_00d50b00();
          *this_ptr = plVar9;
          *(void*)(this_ptr + 1) = 1;
          FUN_00018610();
          return this_ptr;
        }
      }
      FUN_00018610();
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  if (*param_1 != 0) goto LAB_01f04be3;
  FUN_00c880c0();
  plVar1 = local_58;
  plVar4 = local_b8;
  plVar9 = (int64_t *)*local_b8;
  if (plVar9 == local_58) {
    if (((char)local_b8[1] != '\0') || (local_58 == (int64_t *)0x0)) goto LAB_01f04bb5;
    if (local_50[0] == '\0') {
      FUN_00d50b00();
      goto LAB_01f04bb1;
    }
  }
  else {
    lVar10 = local_b8[1];
    if (local_50[0] == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *local_b8 = (int64_t)plVar1;
      if (((char)lVar10 != '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01f04bb1:
      *(void*)(plVar4 + 1) = 1;
LAB_01f04bb5:
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f04be3;
    }
    *local_b8 = (int64_t)local_58;
    if (((char)lVar10 != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(plVar4 + 1) = 1;
  local_50[0] = '\0';
LAB_01f04be3:
  plVar9 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  local_60 = plVar9;
  (**(code **)(*plVar9 + 0x18))();
  pcVar5 = g_02572370;
  do {
    if (*local_b8 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      break;
    }
    if ((int64_t *)*arg1 != (int64_t *)0x0) {
      local_50[0] = '\0';
      local_58 = (int64_t *)0x0;
      local_40 = -1;
      iStack_3c = 0;
      local_38 = 0;
      local_48 = (int64_t *)*arg1;
      while( true ) {
        if (iStack_3c != 0) {
          if (iStack_3c < 1) {
            iStack_3c = -iStack_3c;
          }
          else {
            local_40 = local_40 - iStack_3c;
            FUN_00d23690();
            local_38 = local_38 + iStack_3c;
            iStack_3c = 0;
          }
        }
        lVar10 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
        local_58 = *(int64_t **)(local_48[2] + 8 + lVar10 * 8);
        (**(code **)(*local_58 + 0x5d8))();
        plVar4 = local_88;
        FUN_00c7e7b0();
        plVar9 = local_b0;
        if (local_a8 == '\0') {
          if (local_b0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8 = '\0';
        }
        cVar7 = (**(code **)(*plVar4 + 0x50))();
        uVar15 = extraout_XMM0_Da;
        if (plVar9 != (int64_t *)0x0) {
          uVar15 = FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
        if (cVar7 != '\0') {
          local_1b8 = local_58;
          local_1b0 = '\0';
          FUN_01f067d0(uVar15,&local_1b8);
          if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00c7e7b0();
        plVar9 = local_b0;
        if (local_a8 == '\0') {
          if (local_b0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8 = '\0';
        }
        FUN_01f02a40();
        plVar4 = local_88;
        if ((local_80 == '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        local_c0 = plVar4;
        if (plVar9 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_c0 != (int64_t *)0x0) {
          puVar11 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar11 = &g_02572358;
          uVar15 = (*pcVar5)();
          if ((int64_t *)*local_138 == (int64_t *)0x0) {
LAB_01f054c6:
            local_170 = '\0';
            local_168 = local_58;
            local_160 = '\0';
            local_178 = puVar11;
            FUN_01f067d0(uVar15,&local_168);
            if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_170 != '\0') && (local_178 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_80 = '\0';
            local_88 = (int64_t *)0x0;
            local_70 = 0xffffffff;
            local_68 = 0;
            bVar2 = true;
            local_78 = (int64_t *)*local_138;
            while( true ) {
              lVar10 = (int64_t)(int)local_70;
              iVar13 = (int)local_70 + 1;
              local_70 = CONCAT44(local_70._4_4_,iVar13);
              if (*(int *)((int64_t)local_78 + 0xc) <= iVar13) break;
              local_88 = *(int64_t **)(local_78[2] + 8 + lVar10 * 8);
              local_1a8 = local_c0;
              local_1a0 = '\0';
              (**(code **)(*local_88 + 0x98))();
              plVar9 = local_b0;
              if (local_a8 == '\0') {
                if (local_b0 == (int64_t *)0x0) {
                  local_d8 = (int64_t *)0x0;
                  plVar9 = (int64_t *)0x0;
                }
                else {
                  FUN_00d50b00();
                  local_d8 = plVar9;
                  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                local_d8 = local_b0;
                local_a8 = '\0';
              }
              if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((g_027048b0 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
                g_026cd478 = FUN_00d4fe50();
                g_026cd460 = "GNList";
                g_026cd468 = 0x20;
                g_026cd470 = FUN_00018210;
                g_026cd480 = 0;
                ram_00000000026cd488 = 0;
                g_026cd490 = 0;
                g_026cd508 = 0;
                ram_00000000026cd510 = 0;
                g_026cd518 = 0;
                g_026cd51a = 6;
                g_026cd498 = 0;
                ram_00000000026cd4a0 = 0;
                g_026cd4a8 = 0;
                ram_00000000026cd4b0 = 0;
                g_026cd4b8 = 0;
                ram_00000000026cd4c0 = 0;
                g_026cd4c8 = 0;
                ram_00000000026cd4d0 = 0;
                g_026cd4d8 = 0;
                ram_00000000026cd4e0 = 0;
                g_026cd4e8 = 0;
                ram_00000000026cd4f0 = 0;
                g_026cd4f8 = 0;
                ram_00000000026cd500 = 0;
                g_026cd523 = 0;
                g_026cd51b = 0;
                ___cxa_guard_release();
              }
              pplVar12 = (int64_t **)&g_02802688;
              if (plVar9 != (int64_t *)0x0) {
                (**(code **)(*plVar9 + 0x360))();
                cVar7 = FUN_00e85ea0();
                pplVar12 = &local_d8;
                if (cVar7 == '\0') {
                  pplVar12 = (int64_t **)&g_02802688;
                }
              }
              plVar9 = local_d8;
              if (*pplVar12 == (int64_t *)0x0) {
                if (local_d8 == (int64_t *)0x0) {
                  bVar2 = false;
                  break;
                }
                (**(code **)(*local_58 + 0x5d8))();
                plVar4 = local_b0;
                if (local_a8 == '\0') {
                  if (local_b0 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_a8 = '\0';
                }
                cVar7 = FUN_00d50f90();
                if (plVar4 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar7 != '\0') {
                  local_188 = plVar9;
                  local_180 = '\0';
                  FUN_00d235a0();
                  if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01f053b0;
                }
                bVar3 = false;
                bVar2 = false;
LAB_01f053c3:
                FUN_00d50b20();
              }
              else {
                if (local_d8 != (int64_t *)0x0) {
                  local_a8 = '\0';
                  local_b0 = (int64_t *)0x0;
                  local_a0 = local_d8;
                  local_98 = 0xffffffff;
                  local_90 = 0;
                  local_98._4_4_ = 0;
                  while( true ) {
                    if (local_98._4_4_ != 0) {
                      if (local_98._4_4_ < 1) {
                        iVar13 = -local_98._4_4_;
                      }
                      else {
                        iVar13 = (int)local_98 - local_98._4_4_;
                        local_98 = CONCAT44(local_98._4_4_,iVar13);
                        FUN_00d23690();
                        local_90 = local_90 + local_98._4_4_;
                        iVar13 = 0;
                      }
                      local_98 = CONCAT44(iVar13,(int)local_98);
                    }
                    lVar10 = (int64_t)(int)local_98;
                    iVar13 = (int)local_98 + 1;
                    local_98 = CONCAT44(local_98._4_4_,iVar13);
                    if (*(int *)((int64_t)local_a0 + 0xc) <= iVar13) goto LAB_01f052c3;
                    local_b0 = *(int64_t **)(local_a0[2] + 8 + lVar10 * 8);
                    (**(code **)(*local_58 + 0x5d8))();
                    plVar4 = local_d0;
                    if (local_c8 == '\0') {
                      if (local_d0 != (int64_t *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_c8 = '\0';
                    }
                    cVar7 = FUN_00d50f90();
                    if (plVar4 != (int64_t *)0x0) {
                      FUN_00d50b20();
                    }
                    if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (cVar7 == '\0') break;
                    local_198 = local_b0;
                    local_190 = '\0';
                    FUN_00d235a0();
                    if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  bVar2 = false;
LAB_01f052c3:
                  FUN_00083b20();
                }
                if (bVar2) {
LAB_01f053b0:
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if (plVar9 != (int64_t *)0x0) goto LAB_01f053c3;
              }
              if (!bVar3) break;
              if (local_70._4_4_ != 0) {
                if (local_70._4_4_ < 1) {
                  iVar13 = -local_70._4_4_;
                }
                else {
                  local_70 = CONCAT44(local_70._4_4_,(int)local_70 - local_70._4_4_);
                  FUN_00d23690();
                  local_68 = local_68 + local_70._4_4_;
                  iVar13 = 0;
                }
                local_70 = CONCAT44(iVar13,(int)local_70);
              }
            }
            uVar15 = FUN_00083b20();
            if (bVar2) goto LAB_01f054c6;
          }
          if (puVar11 != (void*)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      FUN_00018610();
    }
    if (1 < *(int *)(*local_138 + 0xc)) {
      FUN_00c9fe20();
      plVar9 = local_58;
      local_b0 = (int64_t *)CONCAT71(local_b0._1_7_,local_50[0]);
      pplVar12 = (int64_t **)local_50;
      if (local_50[0] == '\0') {
        pplVar12 = &local_b0;
      }
      *(char *)pplVar12 = '\0';
      if ((local_50[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_b0 == '\0') {
        if (plVar9 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = (int64_t *)((uint64_t)local_b0 & 0xffffffffffffff00);
      }
      FUN_01f06880();
      plVar4 = local_88;
      if (local_80 == '\0') {
        if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
           (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_80 = '\0';
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar4 != (int64_t *)0x0) {
        local_50[0] = '\0';
        local_58 = (int64_t *)0x0;
        local_48 = plVar4;
        local_40 = -1;
        iStack_3c = 0;
        local_38 = 0;
        while( true ) {
          if (iStack_3c != 0) {
            if (iStack_3c < 1) {
              iStack_3c = -iStack_3c;
            }
            else {
              local_40 = local_40 - iStack_3c;
              FUN_00d23690();
              local_38 = local_38 + iStack_3c;
              iStack_3c = 0;
            }
          }
          lVar10 = (int64_t)local_40;
          local_40 = local_40 + 1;
          if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
          local_58 = *(int64_t **)(local_48[2] + 8 + lVar10 * 8);
          cVar7 = (**(code **)(*local_58 + 0x608))();
          if (cVar7 == '\0') {
            local_88 = local_58;
            local_80 = '\0';
            FUN_00ca13a0();
            if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00018610();
        FUN_00d50b20();
      }
    }
    FUN_00c9fe20();
    plVar9 = local_58;
    local_b0 = (int64_t *)CONCAT71(local_b0._1_7_,local_50[0]);
    pplVar12 = (int64_t **)local_50;
    if (local_50[0] == '\0') {
      pplVar12 = &local_b0;
    }
    *(char *)pplVar12 = '\0';
    if ((local_50[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_b0 == '\0') {
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_b0 = (int64_t *)((uint64_t)local_b0 & 0xffffffffffffff00);
    }
    FUN_01f06880();
    plVar4 = local_88;
    if (local_80 == '\0') {
      if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
         (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_80 = '\0';
    }
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      local_50[0] = '\0';
      local_58 = (int64_t *)0x0;
      local_48 = plVar4;
      local_40 = -1;
      iStack_3c = 0;
      local_38 = 0;
      while( true ) {
        if (iStack_3c != 0) {
          if (iStack_3c < 1) {
            iStack_3c = -iStack_3c;
          }
          else {
            local_40 = local_40 - iStack_3c;
            FUN_00d23690();
            local_38 = local_38 + iStack_3c;
            iStack_3c = 0;
          }
        }
        lVar10 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
        local_158 = *(int64_t **)(local_48[2] + 8 + lVar10 * 8);
        local_150 = '\0';
        local_58 = local_158;
        FUN_01f06970();
        plVar9 = local_88;
        if (local_80 == '\0') {
          if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
             (local_88 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_80 = '\0';
        }
        if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (int64_t *)0x0) {
          local_80 = '\0';
          local_88 = (int64_t *)0x0;
          local_78 = plVar9;
          local_70 = 0xffffffff;
          local_68 = 0;
          while( true ) {
            lVar10 = (int64_t)(int)local_70;
            iVar13 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar13);
            if (*(int *)((int64_t)local_78 + 0xc) <= iVar13) break;
            local_88 = *(int64_t **)(local_78[2] + 8 + lVar10 * 8);
            (**(code **)(*local_58 + 0x5e8))();
            if (local_b0 == (int64_t *)0x0) {
              bVar8 = 0;
            }
            else {
              (**(code **)(*local_58 + 0x5e8))();
              local_148 = local_88;
              local_140 = '\0';
              bVar8 = (**(code **)(*local_d0 + 0x368))();
              if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              bVar8 = bVar8 ^ 1;
            }
            if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (bVar8 != 0) {
              local_b0 = local_58;
              local_a8 = '\0';
              FUN_00ca13a0();
              if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              break;
            }
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ < 1) {
                iVar13 = -local_70._4_4_;
              }
              else {
                local_70 = CONCAT44(local_70._4_4_,(int)local_70 - local_70._4_4_);
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                iVar13 = 0;
              }
              local_70 = CONCAT44(iVar13,(int)local_70);
            }
          }
          FUN_00083b20();
          FUN_00d50b20();
        }
      }
      FUN_00018610();
    }
    if ((local_60 != (int64_t *)0x0) && (lVar10 = local_60[2], 0 < *(int *)(lVar10 + 0xc))) {
      lVar14 = 0;
      do {
        plVar9 = *(int64_t **)(*(int64_t *)(lVar10 + 0x10) + lVar14 * 8);
        (**(code **)(*plVar9 + 0x5e8))();
        plVar1 = local_58;
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          *(void*)(this_ptr + 1) = 0;
          FUN_00d50b00();
          *this_ptr = plVar9;
          *(void*)(this_ptr + 1) = 1;
          bVar2 = false;
          plVar9 = local_60;
          goto joined_r0x01f05d21;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)(lVar10 + 0xc));
    }
    FUN_00c9fe20();
    plVar9 = local_58;
    local_88 = (int64_t *)CONCAT71(local_88._1_7_,local_50[0]);
    pplVar12 = (int64_t **)local_50;
    if (local_50[0] == '\0') {
      pplVar12 = &local_88;
    }
    *(char *)pplVar12 = '\0';
    if ((local_50[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar13 = *(int *)((int64_t)plVar9 + 0xc);
    if ((char)local_88 != '\0') {
      FUN_00d50b20();
    }
    plVar9 = local_b8;
    if (iVar13 == 0) {
      local_c0 = plVar4;
      FUN_00c80a40();
      plVar6 = local_58;
      plVar4 = local_c0;
      plVar1 = (int64_t *)*plVar9;
      if (plVar1 == local_58) {
        if (((char)plVar9[1] != '\0') || (local_58 == (int64_t *)0x0)) goto LAB_01f05dc9;
        if (local_50[0] == '\0') {
          FUN_00d50b00();
          goto LAB_01f05dbe;
        }
LAB_01f05d77:
        *(void*)(local_b8 + 1) = 1;
      }
      else {
        lVar10 = plVar9[1];
        if (local_50[0] != '\0') {
          *plVar9 = (int64_t)local_58;
          if (((char)lVar10 != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01f05d77;
        }
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *local_b8 = (int64_t)plVar6;
        if (((char)lVar10 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01f05dbe:
        *(void*)(local_b8 + 1) = 1;
LAB_01f05dc9:
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar9 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar9 + 0x18))();
      bVar2 = true;
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00c9fe20();
      plVar9 = local_58;
      local_b0 = (int64_t *)CONCAT71(local_b0._1_7_,local_50[0]);
      pplVar12 = (int64_t **)local_50;
      if (local_50[0] == '\0') {
        pplVar12 = &local_b0;
      }
      *(char *)pplVar12 = '\0';
      if ((local_50[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      plVar1 = local_58;
      local_88 = (int64_t *)CONCAT71(local_88._1_7_,local_50[0]);
      pplVar12 = (int64_t **)local_50;
      if (local_50[0] == '\0') {
        pplVar12 = &local_88;
      }
      *(char *)pplVar12 = '\0';
      if ((local_50[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      if (((char)local_88 == '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      *this_ptr = plVar1;
      *(void*)(this_ptr + 1) = 1;
      if (((char)local_b0 != '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar2 = false;
      plVar9 = local_60;
    }
joined_r0x01f05d21:
    local_60 = plVar9;
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  } while (bVar2);
  if (local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

