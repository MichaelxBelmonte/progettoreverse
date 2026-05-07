// Function: FUN_01f94cb0
// Address: 01f94cb0
// Size: 4453 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNString"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_01f94cb0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int64_t **pplVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  void*this_ptr;
  uint uVar11;
  undefined7 uVar14;
  uint64_t uVar12;
  uint64_t uVar13;
  bool bVar15;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar16;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  int64_t *local_d8;
  int64_t *local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b0;
  void*local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  uint64_t local_88;
  int local_80;
  int64_t *local_78;
  int64_t *local_70;
  char local_68;
  uint64_t local_60;
  uint64_t local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  byte local_32;
  byte local_31;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  local_1a0 = g_027e92b0;
  local_1b0 = *param_2;
  local_1a8 = '\0';
  local_a8 = puVar3;
  if (g_027e92b0 != 0) {
    FUN_00d50b00();
  }
  local_198 = '\x01';
  FUN_01f14340(&local_1a0,&local_1b0);
  plVar9 = local_a0;
  if (local_98 == '\0') {
    if (((local_a0 != (int64_t *)0x0) && (FUN_00d50b00(), local_98 != '\0')) &&
       (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_98 = '\0';
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_01f95d52;
  }
  FUN_00d23310();
  plVar9 = local_a0;
  local_68 = local_98 != '\0';
  local_70 = local_a0;
  if ((bool)local_68) {
    local_98 = '\0';
  }
  if ((g_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
    puVar3 = local_a8;
  }
  if (plVar9 == (int64_t *)0x0) {
LAB_01f94e8b:
    pplVar4 = &g_02802688;
    plVar9 = g_02802688;
    if (g_02802690 != '\0') goto LAB_01f94e9b;
LAB_01f94eae:
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01f94e8b;
    pplVar4 = &local_70;
    plVar9 = local_70;
    if (local_68 == '\0') goto LAB_01f94eae;
LAB_01f94e9b:
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    bVar15 = true;
    local_50 = (int64_t *)0x0;
    local_40 = 0;
    plVar9 = (int64_t *)0x0;
    local_60 = 0;
    local_48 = (int64_t *)0x0;
    local_58 = 0;
  }
  else {
    local_e0 = plVar9;
    local_d8 = param_2;
    FUN_01f93720();
    local_190 = local_e0;
    local_188 = '\0';
    cVar2 = (**(code **)(*local_a0 + 0x50))();
    if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_98 != '\0') {
      FUN_00d50b20();
    }
    lVar1 = g_02801460;
    lVar6 = g_02801458;
    if (cVar2 == '\0') {
      local_170 = *local_d8;
      local_168 = '\0';
      if (g_02801460 != 0) {
        FUN_00d50b00();
      }
      local_160 = lVar1;
      local_158 = '\x01';
      uVar7 = FUN_01f14340(&local_160);
      plVar5 = local_a0;
      uVar16 = extraout_XMM0_Da_00;
      if (local_a0 == (int64_t *)0x0) {
        bVar15 = true;
        plVar5 = (int64_t *)0x0;
        local_60 = 0;
      }
      else {
        if (local_98 == '\0') {
          uVar7 = FUN_00d50b00();
          bVar15 = false;
          local_60 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
          uVar16 = extraout_XMM0_Da_01;
          if ((local_98 == '\0') || (local_a0 == (int64_t *)0x0)) goto LAB_01f95134;
          uVar16 = FUN_00d50b20();
        }
        else {
          local_98 = '\0';
          local_60 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
        }
        bVar15 = false;
      }
LAB_01f95134:
      if ((local_158 != '\0') && (local_160 != 0)) {
        uVar16 = FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        uVar16 = FUN_00d50b20();
      }
      if (bVar15) goto LAB_01f9517a;
      local_98 = '\0';
      local_a0 = (int64_t *)0x0;
      local_90 = plVar5;
      local_88 = 0xffffffff;
      local_80 = 0;
      local_58 = 0;
      local_48 = (int64_t *)0x0;
      local_40 = 0;
      local_78 = plVar5;
      local_50 = (int64_t *)0x0;
      while( true ) {
        lVar6 = (int64_t)(int)local_88;
        iVar8 = (int)local_88 + 1;
        local_88 = CONCAT44(local_88._4_4_,iVar8);
        if (*(int *)((int64_t)local_90 + 0xc) <= iVar8) break;
        plVar9 = *(int64_t **)(local_90[2] + 8 + lVar6 * 8);
        local_a0 = plVar9;
        if ((g_027048b0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
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
          puVar3 = local_a8;
          plVar5 = local_78;
        }
        pplVar4 = &g_02802688;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar4 = &local_a0;
          if (cVar2 == '\0') {
            pplVar4 = &g_02802688;
          }
        }
        plVar9 = local_50;
        plVar10 = local_a0;
        if (*pplVar4 == (int64_t *)0x0) {
        }
        else {
          if (local_98 == '\0') {
            if (local_a0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_98 = '\0';
          }
          local_d0 = plVar10;
          uVar11 = *(uint *)((int64_t)plVar10 + 0xc);
          uVar13 = (uint64_t)uVar11;
          if (0 < (int)uVar11) {
            do {
              uVar11 = uVar11 - 1;
              local_50 = plVar9;
              plVar5 = *(int64_t **)(local_d0[2] + (uint64_t)uVar11 * 8);
              if (plVar5 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_b0 = plVar5;
              if ((g_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
                g_026d5e58 = FUN_00d4fe50();
                g_026d5e40 = "GNString";
                g_026d5e48 = 0x40;
                g_026d5e50 = FUN_0005d920;
                g_026d5e60 = 0;
                ram_00000000026d5e68 = 0;
                g_026d5e70 = 0;
                ram_00000000026d5e78 = 0;
                g_026d5e80 = 0;
                ram_00000000026d5e88 = 0;
                g_026d5e90 = 0;
                ram_00000000026d5e98 = 0;
                g_026d5ea0 = 0;
                ram_00000000026d5ea8 = 0;
                g_026d5eb0 = 0;
                ram_00000000026d5eb8 = 0;
                g_026d5ec0 = 0;
                ram_00000000026d5ec8 = 0;
                g_026d5ed0 = 0;
                ram_00000000026d5ed8 = 0;
                g_026d5ee0 = 0;
                ram_00000000026d5ee8 = 0;
                g_026d5ef0 = 0;
                ram_00000000026d5ef8 = 0;
                g_026d5f00 = 0;
                ___cxa_guard_release();
              }
              pplVar4 = &g_02802688;
              if (plVar5 != (int64_t *)0x0) {
                (**(code **)(*plVar5 + 0x360))();
                cVar2 = FUN_00e85ea0();
                pplVar4 = &local_b0;
                if (cVar2 == '\0') {
                  pplVar4 = &g_02802688;
                }
              }
              plVar10 = local_50;
              plVar5 = local_b0;
              if (*pplVar4 == (int64_t *)0x0) {
joined_r0x01f95a29:
                plVar9 = plVar10;
                if (plVar5 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                break;
              }
              if (uVar13 == *(uint *)((int64_t)local_d0 + 0xc)) {
                local_150 = local_b0;
                local_148 = '\0';
                FUN_00cddf30();
                local_c8 = local_f0;
                local_c0 = 0;
                if (local_e8 == '\0') {
                  if (local_f0 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_e8 = '\0';
                }
                local_c0 = '\x01';
                FUN_00cd2540();
                plVar10 = local_48;
                uVar14 = (undefined7)((uint64_t)plVar9 >> 8);
                if (local_70 == local_48) {
                  if (((byte)local_58 == '\0') && (local_48 != (int64_t *)0x0)) {
                    if (local_68 != '\0') goto LAB_01f95526;
                    uVar12 = CONCAT71(uVar14,1);
                    FUN_00d50b00();
                  }
                  else {
                    uVar12 = local_58 & 0xffffffff;
                  }
LAB_01f95690:
                  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  plVar10 = local_70;
                  if (local_68 == '\0') {
                    if (local_70 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    uVar12 = CONCAT71(uVar14,1);
                    if (((byte)local_58 != '\0') && (local_48 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_01f95690;
                  }
                  if (((byte)local_58 != '\0') && (local_48 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_01f95526:
                  local_68 = '\0';
                  uVar12 = CONCAT71(uVar14,1);
                }
                if ((local_c0 != '\0') && (local_c8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_e8 != '\0') && (local_f0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar10 == (int64_t *)0x0) {
                  local_32 = (byte)uVar12;
                  local_48 = (int64_t *)0x0;
                  local_58 = uVar12 & 0xff;
                  plVar10 = local_50;
                  goto joined_r0x01f95a29;
                }
                local_58 = uVar12 & 0xffffffff;
                local_48 = plVar10;
                plVar9 = local_50;
              }
              else if (uVar11 == 0) {
                local_140 = local_b0;
                local_138 = '\0';
                FUN_00cd0bc0(pplVar4,&local_140);
                plVar9 = local_70;
                if (local_70 == local_50) {
                  plVar9 = local_50;
                  if (((byte)local_40 == '\0') && (local_50 != (int64_t *)0x0)) {
                    if (local_68 != '\0') goto LAB_01f955ed;
                    FUN_00d50b00();
LAB_01f95865:
                    local_40 = CONCAT71(local_40._1_7_,1);
                    plVar9 = local_50;
                  }
joined_r0x01f95928:
                  local_50 = plVar9;
                  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_68 == '\0') {
                    if (local_70 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    if ((byte)local_40 == '\0') {
                      local_40 = CONCAT71(local_40._1_7_,1);
                    }
                    else {
                      if (local_50 != (int64_t *)0x0) {
                        FUN_00d50b20();
                        local_50 = plVar9;
                        goto LAB_01f95865;
                      }
                      local_40 = CONCAT71(local_40._1_7_,1);
                    }
                    goto joined_r0x01f95928;
                  }
                  if (((byte)local_40 != '\0') && (local_50 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_01f955ed:
                  local_68 = '\0';
                  local_40 = CONCAT71(local_40._1_7_,1);
                }
                if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar9 == (int64_t *)0x0) {
                  local_40 = local_40 & 0xff;
                  plVar9 = (int64_t *)0x0;
                }
                else {
                  local_128 = '\0';
                  local_130 = plVar9;
                  FUN_00d21140();
                  if ((local_128 == '\0') || (local_130 == (int64_t *)0x0)) {
                    goto LAB_01f95843;
                  }
                  FUN_00d50b20();
                  local_40 = local_40 & 0xff;
                }
              }
              else {
                local_120 = local_b0;
                local_118 = '\0';
                FUN_00cd0bc0(pplVar4,&local_120);
                plVar9 = local_70;
                if (local_70 == plVar10) {
                  plVar9 = plVar10;
                  local_31 = (byte)local_40;
                  if (((byte)local_40 == 0) && (local_70 != (int64_t *)0x0)) {
                    if (local_68 != '\0') goto LAB_01f95552;
                    local_31 = 1;
                    FUN_00d50b00();
                  }
LAB_01f9571e:
                  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_68 == '\0') {
                    if (local_70 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    local_31 = 1;
                    if (((byte)local_40 != '\0') && (plVar10 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_01f9571e;
                  }
                  if (((byte)local_40 != 0) && (plVar10 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_01f95552:
                  local_68 = '\0';
                  local_31 = 1;
                }
                if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar9 == (int64_t *)0x0) {
                  local_32 = (byte)local_58;
                  local_40 = CONCAT71((int7)(local_58 >> 8),local_31);
                  plVar10 = (int64_t *)0x0;
                  goto joined_r0x01f95a29;
                }
                local_108 = '\0';
                local_110 = plVar9;
                FUN_00cd2540();
                plVar10 = local_48;
                if (local_70 == local_48) {
                  if (((byte)local_58 == 0) && (local_70 != (int64_t *)0x0)) {
                    if (local_68 != '\0') goto LAB_01f957ae;
                    local_32 = 1;
                    FUN_00d50b00();
                  }
                  else {
                    local_32 = (byte)local_58;
                  }
LAB_01f957fc:
                  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  plVar10 = local_70;
                  if (local_68 == '\0') {
                    if (local_70 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    local_32 = 1;
                    if (((byte)local_58 != '\0') && (local_48 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_01f957fc;
                  }
                  if (((byte)local_58 != 0) && (local_48 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_01f957ae:
                  local_68 = '\0';
                  local_32 = 1;
                }
                if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar10 == (int64_t *)0x0) {
                  local_48 = (int64_t *)0x0;
                  local_40 = (uint64_t)local_31;
                  local_58 = (uint64_t)local_32;
                  plVar10 = plVar9;
                  goto joined_r0x01f95a29;
                }
                local_58 = (uint64_t)local_32;
                local_48 = plVar10;
                local_40._0_1_ = local_31;
LAB_01f95843:
                local_40 = (uint64_t)(byte)local_40;
              }
              if (plVar5 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              bVar15 = 1 < (int64_t)uVar13;
              uVar13 = uVar13 - 1;
            } while (bVar15);
          }
          FUN_00d50b20();
          local_50 = plVar9;
          puVar3 = local_a8;
          plVar5 = local_78;
        }
        if (local_88._4_4_ != 0) {
          if (local_88._4_4_ < 1) {
            iVar8 = -local_88._4_4_;
          }
          else {
            iVar8 = (int)local_88 - local_88._4_4_;
            local_88._4_4_ = (int)((uint64_t)local_88 >> 0x20);
            local_88 = CONCAT44(local_88._4_4_,iVar8);
            FUN_00d23690();
            local_80 = local_80 + local_88._4_4_;
            iVar8 = 0;
          }
          local_88 = CONCAT44(iVar8,(int)local_88);
        }
      }
      uVar16 = FUN_00083b20();
    }
    else {
      if (g_02801458 != 0) {
        FUN_00d50b00();
      }
      local_180 = lVar6;
      local_178 = '\x01';
      plVar5 = (int64_t *)FUN_01cac500();
      if (plVar5 == (int64_t *)0x0) {
        local_60 = 0;
        uVar16 = extraout_XMM0_Da;
      }
      else {
        local_60 = CONCAT71((int7)((uint64_t)plVar5 >> 8),1);
        uVar16 = FUN_00d50b00();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        uVar16 = FUN_00d50b20();
      }
      if (plVar5 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
      }
      else {
        local_98 = '\0';
        local_a0 = plVar5;
        uVar16 = FUN_00d214d0(uVar16,*(void*)((int64_t)puVar3 + 0xc));
        if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
      }
LAB_01f9517a:
      local_48 = (int64_t *)0x0;
      local_58 = 0;
      local_40 = 0;
      local_50 = (int64_t *)0x0;
    }
    lVar1 = g_026fcec0;
    lVar6 = *local_d8;
    if (g_026fcec0 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_100 = lVar1;
    local_f8 = '\x01';
    uVar7 = FUN_01cac990(uVar16,&local_100);
    plVar9 = local_a0;
    uVar14 = (undefined7)((uint64_t)lVar6 >> 8);
    uVar16 = extraout_XMM0_Da_02;
    if (local_a0 == plVar5) {
      plVar9 = plVar5;
      if (((char)local_60 == '\0') && (local_a0 != (int64_t *)0x0)) {
        if (local_98 != '\0') goto LAB_01f95be6;
        uVar13 = CONCAT71(uVar14,1);
        uVar16 = FUN_00d50b00();
      }
      else {
        uVar13 = local_60 & 0xffffffff;
      }
LAB_01f95c45:
      if ((local_98 == '\0') || (local_a0 == (int64_t *)0x0)) {
        local_60 = uVar13 & 0xffffffff;
      }
      else {
        uVar16 = FUN_00d50b20();
        local_60 = uVar13 & 0xffffffff;
      }
    }
    else {
      if (local_98 == '\0') {
        if (local_a0 != (int64_t *)0x0) {
          uVar16 = FUN_00d50b00();
        }
        uVar13 = CONCAT71(uVar14,1);
        if (((char)local_60 != '\0') && (plVar5 != (int64_t *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        goto LAB_01f95c45;
      }
      if (((char)local_60 != '\0') && (plVar5 != (int64_t *)0x0)) {
        uVar7 = FUN_00d50b20();
        uVar16 = extraout_XMM0_Da_03;
      }
LAB_01f95be6:
      local_98 = '\0';
      local_60 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      local_98 = '\0';
      local_a0 = plVar9;
      FUN_00d214d0(uVar16,*(void*)((int64_t)puVar3 + 0xc));
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    bVar15 = *(int *)((int64_t)puVar3 + 0xc) == 0;
    if (bVar15) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      *this_ptr = puVar3;
      *(void*)(this_ptr + 1) = 1;
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (((byte)local_58 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((byte)local_40 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar15) {
    return this_ptr;
  }
LAB_01f95d52:
  FUN_00d50b20();
  return this_ptr;
}

