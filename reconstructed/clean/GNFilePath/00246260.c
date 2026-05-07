// Function: FUN_00246260
// Address: 00246260
// Size: 3181 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"
//   "GNSoundFile"
//   "GNString"
//   "GNDictionary"

uint64_t FUN_00246260(void)

{
  bool bVar1;
  int64_t *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int64_t *plVar6;
  int64_t lVar7;
  void *pvVar8;
  void* pVar9;
  int64_t *plVar10;
  int64_t **pplVar11;
  int64_t *plVar12;
  int iVar13;
  int64_t *this_ptr;
  int64_t *plVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  int64_t local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int local_bc;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  int64_t *local_90;
  int64_t *local_80;
  char local_78 [8];
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *plVar17;
  char local_38;
  
  cVar3 = FUN_00245720();
  if (cVar3 != '\0') {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_58 = '\0';
    plVar14 = this_ptr;
    plVar17 = this_ptr;
    do {
      (**(code **)(*plVar14 + 0x370))();
      plVar10 = local_80;
      if (local_80 == plVar14) {
        if (((local_58 == '\0') && (local_80 != (int64_t *)0x0)) &&
           (plVar10 = plVar14, local_78[0] != '\0')) goto LAB_00246317;
      }
      else {
        plVar17 = plVar10;
        if (local_78[0] == '\0') {
          if (local_58 == '\0') {
            pcVar5 = &local_58;
          }
          else {
            FUN_00d50b20();
            pcVar5 = &local_58;
          }
        }
        else {
          if (local_58 != '\0') {
            FUN_00d50b20();
          }
LAB_00246317:
          local_58 = '\x01';
          pcVar5 = local_78;
        }
        *pcVar5 = '\0';
        plVar14 = plVar10;
      }
      if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00082eb0();
      plVar10 = &g_02802688;
      if (plVar14 != (int64_t *)0x0) {
        (**(code **)(*plVar14 + 0x360))();
        cVar3 = FUN_00e85ea0();
        plVar10 = (int64_t *)&stack0xffffffffffffffc0;
        if (cVar3 == '\0') {
          plVar10 = &g_02802688;
        }
      }
      if (*plVar10 != 0) {
        if ((local_58 == '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        break;
      }
    } while (plVar14 != (int64_t *)0x0);
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar14 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)this_ptr[0x12] + 0x988))();
      FUN_00d23310();
      plVar10 = local_80;
      pcVar5 = &local_58;
      if (local_78[0] != '\0') {
        pcVar5 = local_78;
      }
      local_58 = local_78[0];
      *pcVar5 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 == '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_38 != '\0') && (plVar17 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 == (int64_t *)0x0) {
        plVar12 = (int64_t *)0x0;
      }
      else {
        FUN_01d384d0();
        local_b0 = 0;
        if (local_38 == '\0') {
          if (plVar17 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_b0 = '\x01';
        local_b8 = plVar17;
        FUN_0010f340();
        local_90 = local_80;
        if (local_78[0] == '\0') {
          if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
             (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_78[0] = '\0';
        }
        if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (plVar17 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        cVar3 = FUN_0010f8e0();
        if (cVar3 == '\0') {
LAB_00246eb5:
          plVar12 = (int64_t *)0x0;
        }
        else {
          FUN_0010db00();
          plVar12 = local_80;
          if ((((local_78[0] == '\0') && (local_80 != (int64_t *)0x0)) &&
              (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_98 = plVar12;
          local_bc = *(int *)((int64_t)plVar12 + 0xc);
          if (local_bc < 1) {
LAB_00246ea7:
            FUN_00d50b20();
          }
          else {
            FUN_01d384c0();
            uVar15 = FUN_00244970();
            plVar6 = (int64_t *)FUN_00e8fc40();
            FUN_00022d50();
            uVar16 = (**(code **)(*plVar6 + 0x18))();
            local_78[0] = '\0';
            local_80 = (int64_t *)0x0;
            local_70 = local_98;
            local_68 = 0xffffffff;
            local_60 = 0;
            local_68._4_4_ = 0;
            while( true ) {
              if (local_68._4_4_ != 0) {
                if (local_68._4_4_ < 1) {
                  iVar13 = -local_68._4_4_;
                }
                else {
                  iVar13 = (int)local_68 - local_68._4_4_;
                  local_68 = CONCAT44(local_68._4_4_,iVar13);
                  uVar16 = FUN_00d23690();
                  local_60 = local_60 + local_68._4_4_;
                  iVar13 = 0;
                }
                local_68 = CONCAT44(iVar13,(int)local_68);
              }
              lVar7 = (int64_t)(int)local_68;
              iVar13 = (int)local_68 + 1;
              local_68 = CONCAT44(local_68._4_4_,iVar13);
              if (*(int *)((int64_t)local_70 + 0xc) <= iVar13) break;
              plVar12 = *(int64_t **)(local_70[2] + 8 + lVar7 * 8);
              local_80 = plVar12;
              if ((g_026d8478 == '\0') &&
                 (iVar13 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Da_02, iVar13 != 0)) {
                g_026f9358 = FUN_00d4fe50();
                g_026f9340 = "GNSoundFile";
                g_026f9348 = 0x98;
                g_026f9350 = FUN_00083bc0;
                g_026f9360 = 0;
                ram_00000000026f9368 = 0;
                g_026f9370 = 0;
                g_026f93e8 = 0;
                ram_00000000026f93f0 = 0;
                g_026f93f8 = 0;
                g_026f93fa = 3;
                g_026f9378 = 0;
                ram_00000000026f9380 = 0;
                g_026f9388 = 0;
                ram_00000000026f9390 = 0;
                g_026f9398 = 0;
                ram_00000000026f93a0 = 0;
                g_026f93a8 = 0;
                ram_00000000026f93b0 = 0;
                g_026f93b8 = 0;
                ram_00000000026f93c0 = 0;
                g_026f93c8 = 0;
                ram_00000000026f93d0 = 0;
                g_026f93d8 = 0;
                ram_00000000026f93e0 = 0;
                g_026f9403 = 0;
                g_026f93fb = 0;
                uVar16 = ___cxa_guard_release();
              }
              pplVar11 = (int64_t **)&g_02802688;
              if (plVar12 != (int64_t *)0x0) {
                (**(code **)(*plVar12 + 0x360))();
                cVar3 = FUN_00e85ea0();
                pplVar11 = &local_80;
                uVar16 = extraout_XMM0_Da;
                if (cVar3 == '\0') {
                  pplVar11 = (int64_t **)&g_02802688;
                }
              }
              plVar2 = local_80;
              plVar12 = *pplVar11;
              if (*(char *)(pplVar11 + 1) == '\0') {
                if (plVar12 != (int64_t *)0x0) {
                  FUN_00d50b00();
                  goto LAB_002466d1;
                }
LAB_00246850:
                if ((g_026fdd40 == '\0') &&
                   (iVar13 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Da_03, iVar13 != 0)) {
                  g_026cd0e8 = FUN_00d4fe50();
                  g_026cd0d0 = "GNDictionary";
                  g_026cd0d8 = 0x28;
                  g_026cd0e0 = FUN_00022d20;
                  g_026cd0f0 = 0;
                  ram_00000000026cd0f8 = 0;
                  g_026cd100 = 0;
                  g_026cd178 = 0;
                  ram_00000000026cd180 = 0;
                  g_026cd188 = 0;
                  g_026cd18a = 6;
                  g_026cd108 = 0;
                  ram_00000000026cd110 = 0;
                  g_026cd118 = 0;
                  ram_00000000026cd120 = 0;
                  g_026cd128 = 0;
                  ram_00000000026cd130 = 0;
                  g_026cd138 = 0;
                  ram_00000000026cd140 = 0;
                  g_026cd148 = 0;
                  ram_00000000026cd150 = 0;
                  g_026cd158 = 0;
                  ram_00000000026cd160 = 0;
                  g_026cd168 = 0;
                  ram_00000000026cd170 = 0;
                  g_026cd193 = 0;
                  g_026cd18b = 0;
                  uVar16 = ___cxa_guard_release();
                }
                pplVar11 = (int64_t **)&g_02802688;
                if (plVar2 != (int64_t *)0x0) {
                  (**(code **)(*plVar2 + 0x360))();
                  cVar3 = FUN_00e85ea0();
                  pplVar11 = (int64_t **)&g_02802688;
                  uVar16 = extraout_XMM0_Da_00;
                  if (cVar3 != '\0') {
                    if ((g_026fd0c0 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
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
                    cVar3 = FUN_00e8db60();
                    pplVar11 = &local_80;
                    uVar16 = extraout_XMM0_Da_01;
                    if (cVar3 == '\0') {
                      pplVar11 = (int64_t **)&g_02802688;
                    }
                  }
                }
                if (*(char *)(pplVar11 + 1) == '\0') {
                  if (*pplVar11 == (int64_t *)0x0) {
LAB_00246ab7:
                    bVar1 = true;
                    goto LAB_002466dc;
                  }
                  uVar16 = FUN_00d50b00();
                }
                else {
                  *(void*)(pplVar11 + 1) = 0;
                  if (*pplVar11 == (int64_t *)0x0) goto LAB_00246ab7;
                }
                lVar7 = g_026d8408;
                if (g_026d8408 != 0) {
                  uVar16 = FUN_00d50b00();
                }
                local_130 = lVar7;
                local_128 = '\x01';
                FUN_000175c0(uVar16,&local_130);
                if ((g_026fde10 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
                  g_026d1818 = FUN_00d4fe50();
                  g_026d1800 = "GNFilePath";
                  g_026d1808 = 0x40;
                  g_026d1810 = FUN_00041050;
                  g_026d1820 = 0;
                  ram_00000000026d1828 = 0;
                  g_026d1830 = 0;
                  ram_00000000026d1838 = 0;
                  g_026d1840 = 0;
                  ram_00000000026d1848 = 0;
                  g_026d1850 = 0;
                  ram_00000000026d1858 = 0;
                  g_026d1860 = 0;
                  ram_00000000026d1868 = 0;
                  g_026d1870 = 0;
                  ram_00000000026d1878 = 0;
                  g_026d1880 = 0;
                  ram_00000000026d1888 = 0;
                  g_026d1890 = 0;
                  ram_00000000026d1898 = 0;
                  g_026d18a0 = 0;
                  ram_00000000026d18a8 = 0;
                  g_026d18b0 = 0;
                  ram_00000000026d18b8 = 0;
                  g_026d18c0 = 0;
                  ___cxa_guard_release();
                }
                plVar12 = &g_02802688;
                if (plVar17 != (int64_t *)0x0) {
                  (**(code **)(*plVar17 + 0x360))();
                  cVar3 = FUN_00e85ea0();
                  plVar12 = (int64_t *)&stack0xffffffffffffffc0;
                  if (cVar3 == '\0') {
                    plVar12 = &g_02802688;
                  }
                }
                lVar7 = *plVar12;
                if ((char)plVar12[1] == '\0') {
                  if (lVar7 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  *(void*)(plVar12 + 1) = 0;
                }
                if ((local_38 != '\0') && (plVar17 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                if (lVar7 != 0) {
                  FUN_00d50b20();
                }
                uVar16 = FUN_00d50b20();
              }
              else {
                *(void*)(pplVar11 + 1) = 0;
                if (plVar12 == (int64_t *)0x0) goto LAB_00246850;
LAB_002466d1:
                FUN_00b875e0();
                bVar1 = false;
LAB_002466dc:
                pVar9 = (void*)pplVar11;
                FUN_00b88600();
                uVar16 = (**(code **)(*(int64_t *)CONCAT71(uStack_57,local_58) + 0x390))();
                if (local_38 == '\0') {
                  if (plVar17 != (int64_t *)0x0) {
                    uVar16 = FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
                  uVar16 = FUN_00d50b20();
                }
                if (local_60 + (int)local_68 == 0) {
                  local_118 = '\0';
                  local_108 = '\0';
                  local_120 = plVar10;
                  local_110 = plVar12;
                  uVar16 = FUN_002474e0(uVar16,&local_110);
                  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
                    uVar16 = FUN_00d50b20();
                  }
                  if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
                    uVar16 = FUN_00d50b20();
                  }
                }
                else {
                  (**(code **)(*plVar14 + 0x628))();
                  pvVar8 = _pthread_getspecific(pVar9);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_f8 = '\0';
                  local_e8 = '\0';
                  local_100 = plVar17;
                  local_f0 = plVar10;
                  uVar16 = FUN_004a41a0(&local_f0,&local_100,0);
                  local_a0 = 0;
                  if (local_38 == '\0') {
                    if (plVar17 != (int64_t *)0x0) {
                      uVar16 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  local_a0 = '\x01';
                  local_d8 = '\0';
                  local_e0 = plVar12;
                  local_a8 = plVar17;
                  uVar16 = FUN_002474e0(uVar16,&local_e0);
                  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                    uVar16 = FUN_00d50b20();
                  }
                  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                    uVar16 = FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (plVar17 != (int64_t *)0x0)) {
                    uVar16 = FUN_00d50b20();
                  }
                  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
                    uVar16 = FUN_00d50b20();
                  }
                  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
                    uVar16 = FUN_00d50b20();
                  }
                  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
                    uVar16 = FUN_00d50b20();
                  }
                }
                if (plVar17 != (int64_t *)0x0) {
                  uVar16 = FUN_00d50b20();
                }
                if (!bVar1) {
                  uVar16 = FUN_00d50b20();
                }
              }
            }
            FUN_00083b20();
            local_c8 = '\0';
            local_d0 = plVar6;
            uVar4 = FUN_00767640(uVar15);
            plVar12 = (int64_t *)(uint64_t)uVar4;
            if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar6 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (local_98 != (int64_t *)0x0) goto LAB_00246ea7;
          }
          if (local_bc < 1) goto LAB_00246eb5;
        }
        if (local_90 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_00246ed8;
    }
  }
  plVar12 = (int64_t *)0x0;
LAB_00246ed8:
  return (uint64_t)plVar12 & 0xffffff01;
}

