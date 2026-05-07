// Function: FUN_0007a0d0
// Address: 0007a0d0
// Size: 4875 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"
//   "GNSoundFile"
//   "MDDocumentViewController"
//   "GNString"
//   "GNDictionary"

uint32_t FUN_0007a0d0(double param_1,int64_t *param_2,uint32_t param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint32_t uVar7;
  void*puVar8;
  int64_t lVar9;
  void *pvVar10;
  uint64_t uVar11;
  void* pVar12;
  int64_t *in_RCX;
  int64_t **pplVar13;
  int64_t *plVar14;
  int64_t *arg1;
  int64_t *plVar15;
  uint64_t uVar16;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint64_t extraout_XMM0_Qa_05;
  double local_1c0 [2];
  uint8_t local_1b0;
  uint64_t local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  void*local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  uint32_t local_ec;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  uint64_t local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  local_38 = param_2;
  FUN_01d384d0();
  plVar15 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_0010f340();
  local_88 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  if (plVar15 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  local_ec = param_3;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar15 = (int64_t *)*arg1;
  cVar5 = (char)arg1[1];
  if ((cVar5 != '\0') && (plVar15 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_98 = plVar15;
  local_90 = cVar5;
  if (g_028032a0 != 0) {
    cVar5 = '\0';
    if (plVar15 == (int64_t *)0x0) {
      plVar14 = (int64_t *)0x0;
    }
    else {
      do {
        if ((g_026d8470 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
          g_026fe6b8 = FUN_00015ff0();
          g_026fe6a0 = "MDDocumentViewController";
          g_026fe6a8 = 0x100;
          g_026fe6b0 = FUN_00082e10;
          g_026fe6c0 = 0;
          ram_00000000026fe6c8 = 0;
          g_026fe6d0 = 0;
          g_026fe748 = 0;
          ram_00000000026fe750 = 0;
          g_026fe758 = 0;
          g_026fe75a = 1;
          g_026fe6d8 = 0;
          ram_00000000026fe6e0 = 0;
          g_026fe6e8 = 0;
          ram_00000000026fe6f0 = 0;
          g_026fe6f8 = 0;
          ram_00000000026fe700 = 0;
          g_026fe708 = 0;
          ram_00000000026fe710 = 0;
          g_026fe718 = 0;
          ram_00000000026fe720 = 0;
          g_026fe728 = 0;
          ram_00000000026fe730 = 0;
          g_026fe738 = 0;
          ram_00000000026fe740 = 0;
          g_026fe763 = 0;
          g_026fe75b = 0;
          ___cxa_guard_release();
        }
        pplVar13 = (int64_t **)&g_02802688;
        if (plVar15 != (int64_t *)0x0) {
          (**(code **)(*plVar15 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar13 = &local_98;
          if (cVar4 == '\0') {
            pplVar13 = (int64_t **)&g_02802688;
          }
        }
        plVar14 = *pplVar13;
        if (plVar14 == (int64_t *)0x0) {
          plVar14 = (int64_t *)0x0;
        }
        else {
          cVar5 = *(char *)(pplVar13 + 1);
          if (cVar5 != '\0') {
            FUN_00d50b00();
          }
        }
        plVar3 = local_98;
        (**(code **)(*local_98 + 0x370))();
        plVar15 = local_80;
        cVar4 = local_90;
        if (local_80 == plVar3) {
          plVar15 = plVar3;
          if (local_90 != '\0') goto LAB_0007a30c;
          if (local_78 == '\0') {
            FUN_00d50b00();
            goto LAB_0007a305;
          }
LAB_0007a2f9:
          local_90 = '\x01';
        }
        else {
          if (local_78 != '\0') {
            local_98 = local_80;
            if (local_90 != '\0') {
              FUN_00d50b20();
            }
            goto LAB_0007a2f9;
          }
          if (local_80 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_98 = plVar15;
          if (cVar4 != '\0') {
            FUN_00d50b20();
          }
LAB_0007a305:
          local_90 = '\x01';
LAB_0007a30c:
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      } while ((plVar15 != (int64_t *)0x0) && (plVar14 == (int64_t *)0x0));
    }
    FUN_0035c4c0(param_1);
    local_1a0 = *local_38;
    local_198 = '\0';
    FUN_0035c4f0();
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    lVar9 = g_028032a0;
    if (g_028032a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00700e90();
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if (g_028032a0 != 0) {
      g_028032a0 = 0;
      FUN_00d50b20();
    }
    local_50 = (int64_t *)0x0;
    local_58 = 0;
    if ((cVar5 == '\0') || (plVar14 == (int64_t *)0x0)) {
      uVar7 = 1;
    }
    else {
      FUN_00d50b20();
      uVar7 = 1;
      local_58 = 0;
      local_50 = (int64_t *)0x0;
    }
    goto LAB_0007b33c;
  }
  if (plVar15 == (int64_t *)0x0) {
    local_58 = 0;
    local_50 = (int64_t *)0x0;
  }
  else {
    uVar11 = 0;
    do {
      FUN_00082eb0();
      pplVar13 = (int64_t **)&g_02802688;
      if (plVar15 != (int64_t *)0x0) {
        (**(code **)(*plVar15 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar13 = &local_98;
        if (cVar4 == '\0') {
          pplVar13 = (int64_t **)&g_02802688;
        }
      }
      local_50 = *pplVar13;
      if (*pplVar13 == (int64_t *)0x0) {
        local_50 = (int64_t *)0x0;
        local_58 = uVar11;
      }
      else {
        local_58 = (uint64_t)*(byte *)(pplVar13 + 1);
        if (*(byte *)(pplVar13 + 1) != 0) {
          FUN_00d50b00();
        }
      }
      (**(code **)(*plVar15 + 0x370))();
      plVar14 = local_80;
      if (plVar15 == local_80) {
        if ((cVar5 != '\0') || (plVar15 == (int64_t *)0x0)) goto LAB_0007a580;
        plVar14 = plVar15;
        if (local_78 == '\0') {
          FUN_00d50b00();
          goto LAB_0007a573;
        }
LAB_0007a523:
        local_90 = '\x01';
        cVar5 = '\x01';
        plVar15 = plVar14;
      }
      else {
        if (local_78 != '\0') {
          local_98 = local_80;
          if ((cVar5 != '\0') && (plVar15 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0007a523;
        }
        if (local_80 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_98 = plVar14;
        if ((cVar5 != '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_0007a573:
        local_90 = '\x01';
        cVar5 = '\x01';
        plVar15 = plVar14;
LAB_0007a580:
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    } while ((plVar15 != (int64_t *)0x0) &&
            (uVar11 = local_58 & 0xffffffff, local_50 == (int64_t *)0x0));
  }
  cVar5 = FUN_0010f8e0();
  if (cVar5 != '\0') {
    FUN_0010db00();
    plVar15 = local_80;
    if ((((local_78 == '\0') && (local_80 != (int64_t *)0x0)) && (FUN_00d50b00(), local_78 != '\0')
        ) && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    uVar16 = (*g_02572370)();
    if (plVar15 != (int64_t *)0x0) {
      local_78 = '\0';
      local_80 = (int64_t *)0x0;
      local_70 = plVar15;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_68._4_4_ = 0;
      while( true ) {
        if (local_68._4_4_ != 0) {
          if (local_68._4_4_ < 1) {
            iVar6 = -local_68._4_4_;
          }
          else {
            iVar6 = (int)local_68 - local_68._4_4_;
            local_68 = CONCAT44(local_68._4_4_,iVar6);
            uVar16 = FUN_00d23690();
            local_60 = local_60 + local_68._4_4_;
            iVar6 = 0;
          }
          local_68 = CONCAT44(iVar6,(int)local_68);
        }
        lVar9 = (int64_t)(int)local_68;
        iVar6 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar6);
        if (*(int *)((int64_t)local_70 + 0xc) <= iVar6) break;
        plVar14 = *(int64_t **)(local_70[2] + 8 + lVar9 * 8);
        local_80 = plVar14;
        if ((g_026d8478 == '\0') &&
           (iVar6 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Qa_02, iVar6 != 0)) {
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
        pplVar13 = (int64_t **)&g_02802688;
        if (plVar14 != (int64_t *)0x0) {
          (**(code **)(*plVar14 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar13 = &local_80;
          uVar16 = extraout_XMM0_Qa;
          if (cVar5 == '\0') {
            pplVar13 = (int64_t **)&g_02802688;
          }
        }
        plVar3 = local_80;
        plVar14 = *pplVar13;
        if (plVar14 == (int64_t *)0x0) {
          if ((g_026fdd40 == '\0') &&
             (iVar6 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Qa_03, iVar6 != 0)) {
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
          pplVar13 = (int64_t **)&g_02802688;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar13 = (int64_t **)&g_02802688;
            uVar16 = extraout_XMM0_Qa_00;
            if (cVar5 != '\0') {
              if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
              cVar5 = FUN_00e8db60();
              pplVar13 = &local_80;
              uVar16 = extraout_XMM0_Qa_01;
              if (cVar5 == '\0') {
                pplVar13 = (int64_t **)&g_02802688;
              }
            }
          }
          if (*(char *)(pplVar13 + 1) == '\0') {
            if (*pplVar13 != (int64_t *)0x0) {
              uVar16 = FUN_00d50b00();
              goto LAB_0007a926;
            }
          }
          else {
            *(void*)(pplVar13 + 1) = 0;
            if (*pplVar13 != (int64_t *)0x0) {
LAB_0007a926:
              lVar9 = g_026d8408;
              if (g_026d8408 != 0) {
                uVar16 = FUN_00d50b00();
              }
              local_190 = lVar9;
              local_188 = '\x01';
              FUN_000175c0(uVar16,&local_190);
              plVar14 = local_48;
              if ((g_026fde10 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
              pplVar13 = (int64_t **)&g_02802688;
              if (plVar14 != (int64_t *)0x0) {
                (**(code **)(*plVar14 + 0x360))();
                cVar5 = FUN_00e85ea0();
                pplVar13 = &local_48;
                if (cVar5 == '\0') {
                  pplVar13 = (int64_t **)&g_02802688;
                }
              }
              plVar14 = *pplVar13;
              if (*(char *)(pplVar13 + 1) == '\0') {
                if (plVar14 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(void*)(pplVar13 + 1) = 0;
              }
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_188 != '\0') && (local_190 != 0)) {
                FUN_00d50b20();
              }
              if (plVar14 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              uVar16 = FUN_00d50b20();
            }
          }
        }
        else {
          if (*(char *)(pplVar13 + 1) == '\0') {
            FUN_00d50b00();
          }
          else {
            *(void*)(pplVar13 + 1) = 0;
          }
          FUN_00b875e0();
          local_40 = '\0';
          local_48 = plVar14;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar16 = FUN_00d50b20();
        }
      }
      FUN_00083b20();
    }
    local_178 = '\0';
    local_170 = *local_38;
    local_168 = '\0';
    local_180 = puVar8;
    uVar7 = FUN_0075edc0(param_1,&local_170);
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar8 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (plVar15 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_0007b33c;
  }
  local_78 = '\0';
  local_80 = (int64_t *)0x0;
  puVar8 = &local_1a8;
  uVar7 = FUN_00110420(puVar8,local_1c0,&local_80);
  pVar12 = (void*)puVar8;
  if ((char)uVar7 != '\0') {
    if (*local_38 == 0) {
      (**(code **)(*local_50 + 0x628))();
      pvVar10 = _pthread_getspecific(pVar12);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_148 = '\0';
      local_150 = 0;
      local_140 = 0;
      local_138 = '\0';
      FUN_004a41a0(&local_140,&local_150,0);
      plVar3 = local_38;
      plVar14 = local_48;
      plVar15 = (int64_t *)*local_38;
      if (plVar15 == local_48) {
        if (((char)local_38[1] != '\0') || (local_48 == (int64_t *)0x0)) goto LAB_0007b3b5;
        if (local_40 == '\0') {
          FUN_00d50b00();
          goto LAB_0007b3b1;
        }
LAB_0007b063:
        *(void*)(plVar3 + 1) = 1;
        local_40 = '\0';
      }
      else {
        lVar9 = local_38[1];
        if (local_40 != '\0') {
          *local_38 = (int64_t)local_48;
          if (((char)lVar9 != '\0') && (plVar15 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0007b063;
        }
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *local_38 = (int64_t)plVar14;
        if (((char)lVar9 != '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_0007b3b1:
        *(void*)(plVar3 + 1) = 1;
LAB_0007b3b5:
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar9 = FUN_00dd6dc0();
    if (lVar9 == *in_RCX) {
      uVar11 = FUN_01d384b0();
      if ((uVar11 & 0x14) == 0) {
        uVar11 = FUN_01d384b0();
        if ((uVar11 & 1) != 0) goto LAB_0007ad82;
      }
      else {
        FUN_00110e00();
        plVar15 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_1b0 = 1;
        FUN_0007bcd0(local_1a8,param_1 - local_1c0[0]);
        if (plVar15 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
LAB_0007ad82:
      FUN_01be80e0();
      cVar5 = (**(code **)(*local_48 + 0x3c8))();
      uVar16 = extraout_XMM0_Qa_04;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        plVar15 = (int64_t *)0x0;
        bVar2 = false;
      }
      else {
        pplVar13 = &local_48;
        FUN_01be8160();
        plVar15 = local_48;
        uVar16 = FUN_00083c20();
        if (plVar15 == (int64_t *)0x0) {
LAB_0007ae02:
          pplVar13 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar15 + 0x360))();
          cVar5 = FUN_00e85ea0();
          uVar16 = extraout_XMM0_Qa_05;
          if (cVar5 == '\0') goto LAB_0007ae02;
        }
        plVar15 = *pplVar13;
        if (plVar15 == (int64_t *)0x0) {
          bVar2 = false;
        }
        else if (*(char *)(pplVar13 + 1) == '\0') {
          bVar2 = true;
          uVar16 = FUN_00d50b00();
        }
        else {
          *(void*)(pplVar13 + 1) = 0;
          bVar2 = true;
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
      }
      lVar9 = *local_38;
      if (lVar9 == 0) {
        cVar5 = (char)local_38[1];
LAB_0007b19d:
        plVar14 = local_38;
        if ((cVar5 == '\0') && (lVar9 != 0)) goto LAB_0007b1ae;
        if (lVar9 != 0) {
          uVar16 = FUN_00d50b20();
        }
      }
      else {
        uVar16 = FUN_00d50b00();
        lVar1 = *local_38;
        cVar5 = (char)local_38[1];
        if (lVar1 == lVar9) goto LAB_0007b19d;
        *local_38 = lVar9;
        if ((cVar5 != '\0') && (lVar1 != 0)) {
          uVar16 = FUN_00d50b20();
        }
LAB_0007b1ae:
        *(void*)(local_38 + 1) = 1;
        plVar14 = local_38;
      }
      local_130 = *plVar14;
      local_128 = '\0';
      local_120 = *in_RCX;
      local_118 = '\0';
      local_108 = '\0';
      local_110 = local_120;
      FUN_00111ab0(uVar16,&local_110);
      plVar14 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_f8 = '\0';
      local_100 = plVar15;
      FUN_00113760(local_1a8,param_1 - local_1c0[0]);
      if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar2) && (plVar15 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0007b33c:
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_88 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar7;
}

