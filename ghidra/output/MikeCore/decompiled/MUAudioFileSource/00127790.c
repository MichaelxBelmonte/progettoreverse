// Function: FUN_00127790
// Address: 00127790
// Size: 5152 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Removing unreachable block (ram,0x00128315) */
/* WARNING: Removing unreachable block (ram,0x001289a7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00127790(pthread_key_t param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong **pplVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  pthread_key_t pVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 *puVar16;
  int iVar17;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 extraout_XMM0_Da;
  longlong *local_1b0;
  char local_1a8;
  longlong *local_1a0;
  char local_198;
  longlong *local_190;
  char local_188;
  longlong *local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  undefined8 *local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined8 local_98;
  int local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  char local_40 [8];
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_b8 = plVar4;
  FUN_00757c60();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  local_d0 = local_b0;
  if ((char)local_a8 == '\0') {
    if (((local_b0 != 0) && (FUN_00d50b00(), (char)local_a8 != '\0')) && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8._0_1_ = '\0';
  }
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
    FUN_00d50b20();
  }
  if (local_d0 != 0) {
    local_a8._0_1_ = '\0';
    local_b0 = 0;
    local_a0 = local_d0;
    local_98 = 0xffffffff;
    local_90 = 0;
    local_98._4_4_ = 0;
    while( true ) {
      if (local_98._4_4_ != 0) {
        if (local_98._4_4_ < 1) {
          iVar17 = -local_98._4_4_;
        }
        else {
          iVar17 = (int)local_98 - local_98._4_4_;
          local_98 = CONCAT44(local_98._4_4_,iVar17);
          FUN_00d23690();
          local_90 = local_90 + local_98._4_4_;
          iVar17 = 0;
        }
        local_98 = CONCAT44(iVar17,(int)local_98);
      }
      lVar6 = (longlong)(int)local_98;
      iVar17 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar17);
      if (*(int *)(local_a0 + 0xc) <= iVar17) break;
      lVar15 = *(longlong *)(local_a0 + 0x10);
      local_b0 = *(longlong *)(lVar15 + 8 + lVar6 * 8);
      plVar4 = (longlong *)FUN_00e8fc40();
      pVar13 = (pthread_key_t)lVar15;
      FUN_00022d50();
      (**(code **)(*plVar4 + 0x18))();
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      plVar7 = local_68;
      if (local_60[0] == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00127a30;
        }
      }
      else if (local_68 != (longlong *)0x0) {
LAB_00127a30:
        local_60[0] = '\0';
        local_68 = (longlong *)0x0;
        local_58 = plVar7;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        while( true ) {
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar17 = -local_50._4_4_;
            }
            else {
              iVar17 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar17);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar17 = 0;
            }
            local_50 = CONCAT44(iVar17,(int)local_50);
          }
          lVar6 = (longlong)(int)local_50;
          iVar17 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar17);
          if (*(int *)((longlong)local_58 + 0xc) <= iVar17) break;
          local_68 = *(longlong **)(local_58[2] + 8 + lVar6 * 8);
          pvVar5 = _pthread_getspecific((pthread_key_t)local_58[2]);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126ef70();
          plVar7 = (longlong *)CONCAT71(local_78._1_7_,(char)local_78);
          if ((DAT_026fdd70 == '\0') && (iVar17 = ___cxa_guard_acquire(), iVar17 != 0)) {
            _DAT_026e3238 = FUN_00115af0();
            DAT_026e3220 = "MUAudioFileSource";
            _DAT_026e3228 = 0xa0;
            _DAT_026e3230 = FUN_00136df0;
            _DAT_026e3240 = 0;
            uRam00000000026e3248 = 0;
            _DAT_026e3250 = 0;
            uRam00000000026e3258 = 0;
            _DAT_026e3260 = 0;
            uRam00000000026e3268 = 0;
            _DAT_026e3270 = 0;
            uRam00000000026e3278 = 0;
            _DAT_026e3280 = 0;
            uRam00000000026e3288 = 0;
            _DAT_026e3290 = 0;
            uRam00000000026e3298 = 0;
            _DAT_026e32a0 = 0;
            uRam00000000026e32a8 = 0;
            _DAT_026e32b0 = 0;
            uRam00000000026e32b8 = 0;
            _DAT_026e32c0 = 0;
            uRam00000000026e32c8 = 0;
            _DAT_026e32d0 = 0;
            uRam00000000026e32d8 = 0;
            _DAT_026e32e0 = 0;
            ___cxa_guard_release();
          }
          plVar14 = &DAT_02802688;
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x360))();
            cVar2 = FUN_00e85ea0();
            plVar14 = &local_78;
            if (cVar2 == '\0') {
              plVar14 = &DAT_02802688;
            }
          }
          plVar7 = (longlong *)*plVar14;
          if ((char)plVar14[1] == '\0') {
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(plVar14 + 1) = 0;
          }
          pVar13 = (pthread_key_t)plVar14;
          if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
            FUN_00d50b20();
          }
          if (plVar7 != (longlong *)0x0) {
            pvVar5 = _pthread_getspecific(pVar13);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_0124d450();
            if (cVar2 != '\0') {
              pvVar5 = _pthread_getspecific(pVar13);
              plVar14 = plVar7;
              if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                plVar14 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              uVar3 = (**(code **)(*plVar14 + 0x478))();
              lVar6 = CONCAT71(local_78._1_7_,(char)local_78);
              if ((local_70 != '\0') && (lVar6 != 0)) {
                uVar3 = FUN_00d50b20();
              }
              if (lVar6 != 0) {
                local_1a8 = '\0';
                local_1b0 = plVar7;
                FUN_00129760(uVar3,&local_1b0);
                lVar6 = CONCAT71(local_78._1_7_,(char)local_78);
                if (local_70 == '\0') {
                  if (((lVar6 != 0) && (FUN_00d50b00(), local_70 != '\0')) &&
                     (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_70 = '\0';
                }
                if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (lVar6 == 0) {
                  uVar3 = FUN_00d46530();
                  local_d8 = 0;
                  lVar6 = CONCAT71(local_78._1_7_,(char)local_78);
                  if (local_70 == '\0') {
                    if (lVar6 != 0) {
                      uVar3 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_70 = '\0';
                  }
                  local_d8 = '\x01';
                  local_188 = '\0';
                  local_190 = plVar7;
                  local_e0 = lVar6;
                  FUN_00129810(uVar3,&local_190);
                  if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_d8 != '\0') && (local_e0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  FUN_00d45870();
                  uVar3 = FUN_00d46530();
                  local_e8 = 0;
                  lVar6 = CONCAT71(local_78._1_7_,(char)local_78);
                  if (local_70 == '\0') {
                    if (lVar6 != 0) {
                      uVar3 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_70 = '\0';
                  }
                  local_e8 = '\x01';
                  local_198 = '\0';
                  local_1a0 = plVar7;
                  local_f0 = lVar6;
                  FUN_00129810(uVar3,&local_1a0);
                  if ((local_198 != '\0') && (local_1a0 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_e8 != '\0') && (local_f0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
              }
            }
            FUN_00d50b20();
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
      }
      uVar18 = 0xffffffff;
      uVar19 = 0;
      local_80 = plVar4;
      while( true ) {
        FUN_00ca1380();
        plVar4 = local_68;
        local_78._0_1_ = local_60[0];
        plVar7 = (longlong *)local_60;
        if (local_60[0] == '\0') {
          plVar7 = &local_78;
        }
        *(char *)plVar7 = '\0';
        if ((local_60[0] != '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        iVar17 = *(int *)((longlong)plVar4 + 0xc);
        if ((char)local_78 != '\0') {
          FUN_00d50b20();
        }
        plVar4 = local_80;
        if ((longlong)iVar17 <= (longlong)uVar19) break;
        if (uVar19 == 0) {
LAB_00127f20:
          uVar18 = uVar19 & 0xffffffff;
        }
        else {
          FUN_00ca1380();
          plVar4 = local_68;
          local_78._0_1_ = local_60[0];
          plVar7 = (longlong *)local_60;
          if (local_60[0] == '\0') {
            plVar7 = &local_78;
          }
          *(char *)plVar7 = '\0';
          if ((local_60[0] != '\0') && (plVar4 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar3 = FUN_00d45870();
          local_88 = (longlong *)CONCAT44(local_88._4_4_,uVar3);
          FUN_00ca1380();
          plVar7 = local_68;
          local_40[0] = local_60[0];
          pcVar8 = local_60;
          if (local_60[0] == '\0') {
            pcVar8 = local_40;
          }
          *pcVar8 = '\0';
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          iVar17 = FUN_00d45870();
          if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_78 != '\0') && (plVar4 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar17 < (int)local_88) goto LAB_00127f20;
        }
        uVar19 = uVar19 + 1;
      }
      if (-1 < (int)uVar18) {
        FUN_00c9fe20();
        plVar7 = local_68;
        local_78._0_1_ = local_60[0];
        plVar14 = (longlong *)local_60;
        if (local_60[0] == '\0') {
          plVar14 = &local_78;
        }
        *(char *)plVar14 = '\0';
        if ((local_60[0] != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar7 = *(longlong **)(plVar7[2] + uVar18 * 8);
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((char)local_78 != '\0') {
          FUN_00d50b20();
        }
        FUN_00ca1380();
        plVar14 = local_68;
        local_78._0_1_ = local_60[0];
        plVar9 = (longlong *)local_60;
        if (local_60[0] == '\0') {
          plVar9 = &local_78;
        }
        *(char *)plVar9 = '\0';
        if ((local_60[0] != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_60[0] = '\0';
        local_68 = plVar7;
        cVar2 = FUN_00d23d70();
        uVar3 = extraout_XMM0_Da;
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          uVar3 = FUN_00d50b20();
        }
        if (((char)local_78 != '\0') && (plVar14 != (longlong *)0x0)) {
          uVar3 = FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          local_178 = '\0';
          local_170 = local_b0;
          local_168 = '\0';
          local_180 = plVar7;
          FUN_001298c0(uVar3,&local_170);
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_c8 = plVar4;
  FUN_00c9fe20();
  lVar6 = local_b0;
  pplVar10 = &local_a8;
  if ((char)local_a8 == '\0') {
    pplVar10 = &local_68;
  }
  local_68 = (longlong *)CONCAT71(local_68._1_7_,(char)local_a8);
  *(undefined1 *)pplVar10 = 0;
  if (((char)local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_c0 = lVar6;
  if ((char)local_68 == '\0') {
    if (lVar6 == 0) goto LAB_00128bbf;
    FUN_00d50b00();
  }
  else if (lVar6 == 0) goto LAB_00128bbf;
  local_a8._0_1_ = '\0';
  local_b0 = 0;
  local_98 = 0xffffffff;
  local_90 = 0;
  local_a0 = local_c0;
  while( true ) {
    lVar6 = (longlong)(int)local_98;
    iVar17 = (int)local_98 + 1;
    local_98 = CONCAT44(local_98._4_4_,iVar17);
    if (*(int *)(local_a0 + 0xc) <= iVar17) break;
    lVar15 = *(longlong *)(local_a0 + 0x10);
    local_160 = *(longlong *)(lVar15 + 8 + lVar6 * 8);
    local_158 = '\0';
    local_d0 = local_160;
    local_b0 = local_160;
    FUN_00129970();
    plVar4 = local_68;
    pVar13 = (pthread_key_t)lVar15;
    if (local_60[0] == '\0') {
      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar13);
    plVar7 = plVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar7 + 0x478))();
    local_88 = local_68;
    plVar7 = local_68;
    if ((((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
        (FUN_00d50b00(), plVar7 = local_88, local_60[0] != '\0')) && (local_68 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    local_148 = '\0';
    local_150 = plVar7;
    uVar3 = FUN_00721510();
    local_80 = local_68;
    if (local_60[0] == '\0') {
      if (((local_68 != (longlong *)0x0) && (uVar3 = FUN_00d50b00(), local_60[0] != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        uVar3 = FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
    }
    if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
      uVar3 = FUN_00d50b20();
    }
    if (local_80 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      bVar1 = true;
    }
    else {
      puVar11 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &DAT_024d07b0;
      *(undefined8 *)((longlong)puVar11 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x24) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = 0;
      FUN_00d500e0();
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123b100();
      uVar12 = FUN_00b7a6d0();
      puVar11[3] = uVar12;
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123b100();
      uVar3 = FUN_00b88630();
      puVar16 = (undefined4 *)((longlong)puVar11 + 0xc);
      *puVar16 = uVar3;
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pVar13 = (pthread_key_t)puVar16;
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123b100();
      uVar3 = FUN_00b86c20();
      *(undefined4 *)(puVar11 + 2) = uVar3;
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123b100();
      uVar3 = FUN_00b86d10();
      *(undefined4 *)((longlong)puVar11 + 0x14) = uVar3;
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123b100();
      uVar12 = FUN_00b7a710();
      puVar11[4] = uVar12;
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_88 == local_80) {
        local_140 = local_88;
        local_138 = '\0';
        FUN_00720770();
        plVar7 = local_68;
        if (local_60[0] == '\0') {
          if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
             (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60[0] = '\0';
        }
        if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (longlong *)0x0) {
          pvVar5 = _pthread_getspecific(pVar13);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_130 = plVar7;
          local_128 = '\0';
          FUN_0123bf80();
          if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar7 = (longlong *)puVar11[5];
          if (plVar7 != local_88) {
            if (local_88 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            puVar11[5] = local_88;
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          goto LAB_00128918;
        }
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        bVar1 = true;
      }
      else {
        cVar2 = (**(code **)(*local_80 + 0x398))();
        plVar7 = (longlong *)puVar11[5];
        if (cVar2 == '\0') {
          if (plVar7 != local_80) {
            FUN_00d50b00();
            puVar11[5] = local_80;
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else if (plVar7 != local_80) {
          FUN_00d50b00();
          puVar11[5] = local_80;
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
LAB_00128918:
        uVar3 = FUN_00ca1380();
        plVar7 = local_68;
        local_78._0_1_ = local_60[0];
        plVar14 = (longlong *)local_60;
        if (local_60[0] == '\0') {
          plVar14 = &local_78;
        }
        *(char *)plVar14 = '\0';
        if ((local_60[0] != '\0') && (plVar7 != (longlong *)0x0)) {
          uVar3 = FUN_00d50b20();
        }
        if ((char)local_78 == '\0') {
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_00128981;
          }
        }
        else if (plVar7 != (longlong *)0x0) {
LAB_00128981:
          local_60[0] = '\0';
          local_68 = (longlong *)0x0;
          local_58 = plVar7;
          local_50 = 0xffffffff;
          local_48 = 0;
          while( true ) {
            lVar6 = (longlong)(int)local_50;
            iVar17 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar17);
            if (*(int *)((longlong)local_58 + 0xc) <= iVar17) break;
            local_68 = *(longlong **)(local_58[2] + 8 + lVar6 * 8);
            plVar7 = (longlong *)puVar11[5];
            local_f8 = 0;
            lVar6 = local_68[5];
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            local_f8 = '\x01';
            local_100 = lVar6;
            cVar2 = (**(code **)(*plVar7 + 0x50))();
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
            if (cVar2 != '\0') {
              FUN_00136e40();
              bVar1 = false;
              FUN_00d50b20();
              goto LAB_00128b60;
            }
            if (local_50._4_4_ != 0) {
              if (local_50._4_4_ < 1) {
                iVar17 = -local_50._4_4_;
              }
              else {
                local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
                FUN_00d23690();
                local_48 = local_48 + local_50._4_4_;
                iVar17 = 0;
              }
              local_50 = CONCAT44(iVar17,(int)local_50);
            }
          }
          FUN_00136e40();
          uVar3 = FUN_00d50b20();
        }
        local_118 = '\0';
        local_110 = local_d0;
        local_108 = '\0';
        local_120 = puVar11;
        FUN_00129a20(uVar3,&local_110);
        if ((local_108 != '\0') && (local_110 != 0)) {
          FUN_00d50b20();
        }
        bVar1 = false;
        if ((local_118 != '\0') && (local_120 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_00128b60:
      FUN_00d50b20();
      uVar3 = FUN_00d50b20();
    }
    if (local_88 != (longlong *)0x0) {
      uVar3 = FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_00d50b20();
    }
    if (bVar1) {
      FUN_000be170();
      FUN_00d50b20();
      if (local_c8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_00128c53;
    }
    iVar17 = local_98._4_4_;
    if (local_98._4_4_ != 0) {
      if (local_98._4_4_ < 1) {
        iVar17 = -local_98._4_4_;
      }
      else {
        local_98 = CONCAT44(local_98._4_4_,(int)local_98 - local_98._4_4_);
        FUN_00d23690(uVar3,local_98._4_4_);
        local_90 = local_90 + iVar17;
        iVar17 = 0;
      }
      local_98 = CONCAT44(iVar17,(int)local_98);
    }
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_00128bbf:
  (**(code **)(**(longlong **)(unaff_RSI + 0xc0) + 0x468))();
  lVar6 = local_b0;
  if (((char)local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    (**(code **)(**(longlong **)(unaff_RSI + 0xc0) + 0x4f8))();
  }
  *unaff_RDI = local_c8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_00128c53:
  if (local_b8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


