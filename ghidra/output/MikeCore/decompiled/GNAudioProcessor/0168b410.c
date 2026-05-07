// Function: FUN_0168b410
// Address: 0168b410
// Size: 7607 bytes
// Class: GNAudioProcessor
// String references:
//   "GNAudioProcessor"
//   "GNPlugInHostTrack"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0168b410(code *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  void *pvVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  int iVar10;
  char *pcVar11;
  longlong **pplVar12;
  longlong *plVar13;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar14;
  undefined1 local_1d0 [8];
  undefined1 local_1c8;
  undefined1 local_1c0 [8];
  undefined1 local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong *local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  char local_c0;
  undefined7 uStack_bf;
  char local_b8;
  longlong *local_a8;
  char local_a0 [8];
  longlong *local_98;
  undefined8 local_90;
  int local_88;
  longlong *local_78;
  char local_70;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  int local_40;
  longlong *local_38;
  
  FUN_00d3ecc0();
  plVar13 = local_60;
  local_1b0 = DAT_027e3b30;
  if (DAT_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_1a8 = '\x01';
  cVar5 = (**(code **)(*plVar13 + 0x50))();
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537fd0();
    plVar13 = local_60;
    if (local_58 == '\0') {
      if (local_60 == (longlong *)0x0) goto LAB_0168cb76;
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_60 == (longlong *)0x0) goto LAB_0168cb76;
    local_58 = '\0';
    local_60 = (longlong *)0x0;
    local_50 = plVar13;
    local_40 = 0;
    local_48 = 0;
    iStack_44 = 0;
    if (0 < *(int *)((longlong)plVar13 + 0xc)) {
      do {
        uVar4 = local_48;
        plVar2 = local_a8;
        local_60 = *(longlong **)(plVar13[2] + (ulonglong)local_48 * 8);
        pvVar6 = _pthread_getspecific(local_48);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0164fea0();
        if (local_a0[0] == '\0') {
          if (local_a8 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0168bd70;
          }
        }
        else if (local_a8 != (longlong *)0x0) {
LAB_0168bd70:
          local_a0[0] = '\0';
          local_a8 = (longlong *)0x0;
          local_98 = plVar2;
          local_90 = 0xffffffff;
          local_88 = 0;
          while( true ) {
            lVar7 = (longlong)(int)local_90;
            iVar10 = (int)local_90 + 1;
            local_90 = CONCAT44(local_90._4_4_,iVar10);
            if (*(int *)((longlong)local_98 + 0xc) <= iVar10) break;
            local_a8 = *(longlong **)(local_98[2] + 8 + lVar7 * 8);
            pvVar6 = _pthread_getspecific((pthread_key_t)local_98[2]);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016557b0();
            if (local_90._4_4_ != 0) {
              if (local_90 < 0) {
                iVar10 = -local_90._4_4_;
              }
              else {
                local_90 = CONCAT44(local_90._4_4_,(int)local_90 - local_90._4_4_);
                FUN_00d23690();
                local_88 = local_88 + local_90._4_4_;
                iVar10 = 0;
              }
              local_90 = CONCAT44(iVar10,(int)local_90);
            }
          }
          FUN_00277f20();
          FUN_00d50b20();
        }
        local_48 = uVar4 + 1;
      } while ((int)local_48 < *(int *)((longlong)plVar13 + 0xc));
    }
    FUN_0049cc10();
    FUN_00d50b20();
    goto LAB_0168cb76;
  }
  FUN_00d3ecc0();
  plVar13 = local_60;
  local_1a0 = DAT_0277d8e0;
  if (DAT_0277d8e0 != 0) {
    FUN_00d50b00();
  }
  local_198 = '\x01';
  cVar5 = (**(code **)(*plVar13 + 0x50))();
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    if (*(char *)(unaff_RDI + 0x75) != '\0') {
      FUN_0167b310();
      *(undefined1 *)(unaff_RDI + 0x75) = 0;
    }
    if (*(char *)(unaff_RDI + 0x76) != '\0') {
      *(undefined1 *)(unaff_RDI + 0x76) = 0;
      if (*(longlong **)(unaff_RDI + 0x78) == (longlong *)0x0) {
        bVar3 = false;
        local_38 = (longlong *)0x0;
        plVar13 = *(longlong **)(unaff_RDI + 0x68);
      }
      else {
        local_58 = '\0';
        local_60 = (longlong *)0x0;
        local_48 = 0xffffffff;
        iStack_44 = 0;
        local_40 = 0;
        bVar3 = false;
        local_38 = (longlong *)0x0;
        local_50 = *(longlong **)(unaff_RDI + 0x78);
        while( true ) {
          if (iStack_44 != 0) {
            if (iStack_44 < 1) {
              iStack_44 = -iStack_44;
            }
            else {
              local_48 = local_48 - iStack_44;
              FUN_00d23690();
              local_40 = local_40 + iStack_44;
              iStack_44 = 0;
            }
          }
          lVar7 = (longlong)(int)local_48;
          local_48 = local_48 + 1;
          if (*(int *)((longlong)local_50 + 0xc) <= (int)local_48) break;
          lVar9 = local_50[2];
          local_60 = *(longlong **)(lVar9 + 8 + lVar7 * 8);
          pvVar6 = _pthread_getspecific((pthread_key_t)lVar9);
          pVar8 = (pthread_key_t)lVar9;
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c9180();
          FUN_00b68bb0();
          if (local_a8 == (longlong *)0x0) {
            cVar5 = '\0';
          }
          else {
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012c9180();
            FUN_00b68bb0();
            cVar5 = FUN_00d45ad0();
            if ((local_b8 != '\0') && (CONCAT71(uStack_bf,local_c0) != 0)) {
              FUN_00d50b20();
            }
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar5 != '\0') {
            if (local_38 == (longlong *)0x0) {
              pvVar6 = _pthread_getspecific(pVar8);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012c8f20();
              local_e8 = 0;
              if (local_70 == '\0') {
                if (local_78 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_70 = '\0';
              }
              local_e8 = '\x01';
              local_f0 = local_78;
              FUN_000ba510();
              local_38 = local_a8;
              if (local_a8 == (longlong *)0x0) {
                local_38 = (longlong *)0x0;
              }
              else if (local_a0[0] == '\0') {
                FUN_00d50b00();
                bVar3 = true;
                if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_a0[0] = '\0';
                bVar3 = true;
              }
              if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar6 = _pthread_getspecific(pVar8);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012c9180();
              FUN_00b68e30();
              if (local_a8 == (longlong *)0x0) {
                cVar5 = '\0';
              }
              else {
                pvVar6 = _pthread_getspecific(pVar8);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012c9180();
                FUN_00b68e30();
                cVar5 = FUN_00d45ad0();
                if ((local_b8 != '\0') && (CONCAT71(uStack_bf,local_c0) != 0)) {
                  FUN_00d50b20();
                }
                if ((local_f8 != '\0') && (local_100 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar5 == '\0') {
                pvVar6 = _pthread_getspecific(pVar8);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012c8f20();
                if (local_70 == '\0') {
                  if (local_78 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_70 = '\0';
                }
                local_a8 = local_78;
                local_a0[0] = '\0';
                FUN_00d21140();
                if ((local_a0[0] != '\0') && (local_78 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_78 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                pvVar6 = _pthread_getspecific(pVar8);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar14 = FUN_012c8f20();
                if (local_70 == '\0') {
                  if (local_78 != (longlong *)0x0) {
                    uVar14 = FUN_00d50b00();
                  }
                }
                else {
                  local_70 = '\0';
                }
                local_a8 = local_78;
                local_a0[0] = '\0';
                FUN_00d23370(uVar14,0);
                if ((local_a0[0] != '\0') && (local_78 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_78 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
        }
        FUN_01714b60();
        plVar13 = *(longlong **)(unaff_RDI + 0x68);
      }
      if (plVar13 != (longlong *)0x0) {
        local_58 = '\0';
        local_60 = (longlong *)0x0;
        local_40 = 0;
        local_48 = 0;
        iStack_44 = 0;
        local_50 = plVar13;
        if (0 < *(int *)((longlong)plVar13 + 0xc)) {
          lVar7 = 0;
          do {
            local_60 = *(longlong **)(plVar13[2] + lVar7 * 8);
            local_190 = 0;
            local_188 = '\0';
            local_180 = local_38;
            local_178 = '\0';
            uVar14 = FUN_00e7b500((int)DAT_023908c8,0);
            FUN_016914e0(uVar14,&local_180);
            if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_188 != '\0') && (local_190 != 0)) {
              FUN_00d50b20();
            }
            lVar7 = lVar7 + 1;
            local_48 = (uint)lVar7;
          } while ((int)local_48 < *(int *)((longlong)plVar13 + 0xc));
        }
        FUN_016be7c0();
      }
      if ((bVar3) && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_0168cb76;
  }
  FUN_00d3ecc0();
  plVar13 = local_60;
  local_170 = DAT_0270b7b0;
  if (DAT_0270b7b0 != 0) {
    FUN_00d50b00();
  }
  local_168 = '\x01';
  cVar5 = (**(code **)(*plVar13 + 0x50))();
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    FUN_00d3ecc0();
    plVar13 = local_60;
    local_150 = DAT_0270b7c0;
    if (DAT_0270b7c0 != 0) {
      FUN_00d50b00();
    }
    local_148 = '\x01';
    cVar5 = (**(code **)(*plVar13 + 0x50))();
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') {
      FUN_00d3ecc0();
      plVar13 = local_60;
      local_140 = DAT_0270b7d0;
      if (DAT_0270b7d0 != 0) {
        FUN_00d50b00();
      }
      local_138 = '\x01';
      cVar5 = (**(code **)(*plVar13 + 0x50))();
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        FUN_00d3ecc0();
        plVar13 = local_60;
        local_130 = DAT_02763340;
        if (DAT_02763340 != 0) {
          FUN_00d50b00();
        }
        local_128 = '\x01';
        cVar5 = (**(code **)(*plVar13 + 0x50))();
        if ((local_128 != '\0') && (local_130 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar5 == '\0') {
          FUN_00d3ecc0();
          plVar13 = local_60;
          local_120 = DAT_02763350;
          if (DAT_02763350 != 0) {
            FUN_00d50b00();
          }
          local_118 = '\x01';
          cVar5 = (**(code **)(*plVar13 + 0x50))();
          if ((local_118 != '\0') && (local_120 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar5 == '\0') goto LAB_0168cb76;
          pplVar12 = &local_60;
          FUN_00d3ecf0();
          plVar13 = local_60;
          if ((DAT_02766820 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
            _DAT_02766770 = FUN_00d4fe50();
            _DAT_02766758 = "GNPlugInHostTrack";
            _DAT_02766760 = 0x50;
            param_1 = FUN_00bdbf20;
            _DAT_02766768 = FUN_00bdbf20;
            _DAT_02766778 = 0;
            uRam0000000002766780 = 0;
            _DAT_02766788 = 0;
            _DAT_02766800 = 0;
            uRam0000000002766808 = 0;
            _DAT_02766810 = 0;
            DAT_02766812 = 1;
            _DAT_02766790 = 0;
            uRam0000000002766798 = 0;
            _DAT_027667a0 = 0;
            uRam00000000027667a8 = 0;
            _DAT_027667b0 = 0;
            uRam00000000027667b8 = 0;
            _DAT_027667c0 = 0;
            uRam00000000027667c8 = 0;
            _DAT_027667d0 = 0;
            uRam00000000027667d8 = 0;
            _DAT_027667e0 = 0;
            uRam00000000027667e8 = 0;
            _DAT_027667f0 = 0;
            uRam00000000027667f8 = 0;
            DAT_0276681b = 0;
            _DAT_02766813 = 0;
            ___cxa_guard_release();
          }
          if (plVar13 == (longlong *)0x0) {
LAB_0168c752:
            pplVar12 = (longlong **)&DAT_02802688;
          }
          else {
            (**(code **)(*plVar13 + 0x360))();
            cVar5 = FUN_00e85ea0();
            if (cVar5 == '\0') goto LAB_0168c752;
          }
          plVar13 = *pplVar12;
          if (*(char *)(pplVar12 + 1) == '\0') {
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar12 + 1) = 0;
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar2 = *(longlong **)(unaff_RDI + 0x78);
          if (plVar2 != (longlong *)0x0) {
            local_58 = '\0';
            local_60 = (longlong *)0x0;
            iStack_44 = 0;
            local_40 = 0;
            lVar7 = 0;
            local_50 = plVar2;
            do {
              local_48 = (uint)lVar7;
              if (*(int *)((longlong)plVar2 + 0xc) <= (int)local_48) goto LAB_0168cd9d;
              local_60 = *(longlong **)(plVar2[2] + lVar7 * 8);
              pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012c9180();
              if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              lVar7 = lVar7 + 1;
            } while (local_a8 != plVar13);
            *(undefined1 *)(unaff_RDI + 0x76) = 1;
LAB_0168cd9d:
            FUN_01714b60();
          }
          if (plVar13 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_0168cb76;
        }
        pplVar12 = &local_60;
        FUN_00d3ecf0();
        plVar13 = local_60;
        if ((DAT_02766820 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
          _DAT_02766770 = FUN_00d4fe50();
          _DAT_02766758 = "GNPlugInHostTrack";
          _DAT_02766760 = 0x50;
          param_1 = FUN_00bdbf20;
          _DAT_02766768 = FUN_00bdbf20;
          _DAT_02766778 = 0;
          uRam0000000002766780 = 0;
          _DAT_02766788 = 0;
          _DAT_02766800 = 0;
          uRam0000000002766808 = 0;
          _DAT_02766810 = 0;
          DAT_02766812 = 1;
          _DAT_02766790 = 0;
          uRam0000000002766798 = 0;
          _DAT_027667a0 = 0;
          uRam00000000027667a8 = 0;
          _DAT_027667b0 = 0;
          uRam00000000027667b8 = 0;
          _DAT_027667c0 = 0;
          uRam00000000027667c8 = 0;
          _DAT_027667d0 = 0;
          uRam00000000027667d8 = 0;
          _DAT_027667e0 = 0;
          uRam00000000027667e8 = 0;
          _DAT_027667f0 = 0;
          uRam00000000027667f8 = 0;
          DAT_0276681b = 0;
          _DAT_02766813 = 0;
          ___cxa_guard_release();
        }
        if (plVar13 == (longlong *)0x0) {
LAB_0168c3bf:
          pplVar12 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar13 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_0168c3bf;
        }
        plVar13 = *pplVar12;
        if (*(char *)(pplVar12 + 1) == '\0') {
          if (plVar13 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar12 + 1) = 0;
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar2 = *(longlong **)(unaff_RDI + 0x78);
        if (plVar2 != (longlong *)0x0) {
          local_58 = '\0';
          local_60 = (longlong *)0x0;
          iStack_44 = 0;
          local_40 = 0;
          lVar7 = 0;
          local_50 = plVar2;
          local_38 = plVar13;
          do {
            local_48 = (uint)lVar7;
            if (*(int *)((longlong)plVar2 + 0xc) <= (int)local_48) goto LAB_0168ce1e;
            local_60 = *(longlong **)(plVar2[2] + lVar7 * 8);
            pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012c9180();
            if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pVar8 = (pthread_key_t)param_1;
            lVar7 = lVar7 + 1;
          } while (local_a8 != local_38);
          if ((*(char *)(unaff_RDI + 0x72) == '\0') && (*(char *)(unaff_RDI + 0x75) == '\0')) {
            *(undefined1 *)(unaff_RDI + 0x75) = 1;
            FUN_0167b270();
          }
          pvVar6 = _pthread_getspecific(pVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00b686a0();
          local_c8 = 0;
          if (local_a0[0] == '\0') {
            if (local_a8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0[0] = '\0';
          }
          local_c8 = '\x01';
          local_d0 = local_a8;
          FUN_012c7f30();
          if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_0168ce1e:
          FUN_01714b60();
          plVar13 = local_38;
        }
        if (plVar13 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_0168cb76;
      }
      pplVar12 = &local_60;
      FUN_00d3ecf0();
      plVar13 = local_60;
      if ((DAT_02766820 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
        _DAT_02766770 = FUN_00d4fe50();
        _DAT_02766758 = "GNPlugInHostTrack";
        _DAT_02766760 = 0x50;
        param_1 = FUN_00bdbf20;
        _DAT_02766768 = FUN_00bdbf20;
        _DAT_02766778 = 0;
        uRam0000000002766780 = 0;
        _DAT_02766788 = 0;
        _DAT_02766800 = 0;
        uRam0000000002766808 = 0;
        _DAT_02766810 = 0;
        DAT_02766812 = 1;
        _DAT_02766790 = 0;
        uRam0000000002766798 = 0;
        _DAT_027667a0 = 0;
        uRam00000000027667a8 = 0;
        _DAT_027667b0 = 0;
        uRam00000000027667b8 = 0;
        _DAT_027667c0 = 0;
        uRam00000000027667c8 = 0;
        _DAT_027667d0 = 0;
        uRam00000000027667d8 = 0;
        _DAT_027667e0 = 0;
        uRam00000000027667e8 = 0;
        _DAT_027667f0 = 0;
        uRam00000000027667f8 = 0;
        DAT_0276681b = 0;
        _DAT_02766813 = 0;
        ___cxa_guard_release();
      }
      if (plVar13 == (longlong *)0x0) {
LAB_0168c060:
        pplVar12 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar13 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_0168c060;
      }
      plVar13 = *pplVar12;
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar13 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar12 + 1) = 0;
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar2 = *(longlong **)(unaff_RDI + 0x78);
      if (plVar2 != (longlong *)0x0) {
        local_58 = '\0';
        local_60 = (longlong *)0x0;
        iStack_44 = 0;
        local_40 = 0;
        lVar7 = 0;
        local_50 = plVar2;
        local_38 = plVar13;
        do {
          local_48 = (uint)lVar7;
          if (*(int *)((longlong)plVar2 + 0xc) <= (int)local_48) goto LAB_0168cca1;
          local_60 = *(longlong **)(plVar2[2] + lVar7 * 8);
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c9180();
          if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pVar8 = (pthread_key_t)param_1;
          lVar7 = lVar7 + 1;
        } while (local_a8 != local_38);
        if ((*(char *)(unaff_RDI + 0x72) == '\0') && (*(char *)(unaff_RDI + 0x75) == '\0')) {
          *(undefined1 *)(unaff_RDI + 0x75) = 1;
          FUN_0167b270();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00b68420();
        if (local_a8 != (longlong *)0x0) {
          FUN_00b68420();
          FUN_00d45870();
        }
        FUN_012c7e50();
        if (((local_a8 != (longlong *)0x0) && (local_70 != '\0')) && (local_78 != (longlong *)0x0))
        {
          FUN_00d50b20();
        }
        if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_0168cca1:
        FUN_01714b60();
        plVar13 = local_38;
      }
      if (plVar13 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_0168cb76;
    }
    pplVar12 = &local_60;
    FUN_00d3ecf0();
    plVar13 = local_60;
    if ((DAT_02766820 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
      _DAT_02766770 = FUN_00d4fe50();
      _DAT_02766758 = "GNPlugInHostTrack";
      _DAT_02766760 = 0x50;
      param_1 = FUN_00bdbf20;
      _DAT_02766768 = FUN_00bdbf20;
      _DAT_02766778 = 0;
      uRam0000000002766780 = 0;
      _DAT_02766788 = 0;
      _DAT_02766800 = 0;
      uRam0000000002766808 = 0;
      _DAT_02766810 = 0;
      DAT_02766812 = 1;
      _DAT_02766790 = 0;
      uRam0000000002766798 = 0;
      _DAT_027667a0 = 0;
      uRam00000000027667a8 = 0;
      _DAT_027667b0 = 0;
      uRam00000000027667b8 = 0;
      _DAT_027667c0 = 0;
      uRam00000000027667c8 = 0;
      _DAT_027667d0 = 0;
      uRam00000000027667d8 = 0;
      _DAT_027667e0 = 0;
      uRam00000000027667e8 = 0;
      _DAT_027667f0 = 0;
      uRam00000000027667f8 = 0;
      DAT_0276681b = 0;
      _DAT_02766813 = 0;
      ___cxa_guard_release();
    }
    if (plVar13 == (longlong *)0x0) {
LAB_0168bf54:
      pplVar12 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_0168bf54;
    }
    plVar13 = *pplVar12;
    if (*(char *)(pplVar12 + 1) == '\0') {
      if (plVar13 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar12 + 1) = 0;
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = *(longlong **)(unaff_RDI + 0x78);
    if (plVar2 != (longlong *)0x0) {
      local_58 = '\0';
      local_60 = (longlong *)0x0;
      iStack_44 = 0;
      local_40 = 0;
      lVar7 = 0;
      local_50 = plVar2;
      local_38 = plVar13;
      do {
        local_48 = (uint)lVar7;
        if (*(int *)((longlong)plVar2 + 0xc) <= (int)local_48) goto LAB_0168c96d;
        local_60 = *(longlong **)(plVar2[2] + lVar7 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c9180();
        if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pVar8 = (pthread_key_t)param_1;
        lVar7 = lVar7 + 1;
      } while (local_a8 != local_38);
      if ((*(char *)(unaff_RDI + 0x72) == '\0') && (*(char *)(unaff_RDI + 0x75) == '\0')) {
        *(undefined1 *)(unaff_RDI + 0x75) = 1;
        FUN_0167b270();
      }
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00b68190();
      local_d8 = 0;
      if (local_a0[0] == '\0') {
        if (local_a8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0[0] = '\0';
      }
      local_d8 = '\x01';
      local_e0 = local_a8;
      FUN_012c7b60();
      if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_0168c96d:
      FUN_01714b60();
      plVar13 = local_38;
    }
    if (plVar13 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_0168cb76;
  }
  pplVar12 = &local_60;
  FUN_00d3ecf0();
  plVar13 = local_60;
  if ((DAT_02723170 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
    _DAT_0270ba18 = FUN_00d4fe50();
    DAT_0270ba00 = "GNAudioProcessor";
    _DAT_0270ba08 = 0x90;
    param_1 = FUN_00370f50;
    _DAT_0270ba10 = FUN_00370f50;
    _DAT_0270ba20 = 0;
    uRam000000000270ba28 = 0;
    _DAT_0270ba30 = 0;
    uRam000000000270ba38 = 0;
    _DAT_0270ba40 = 0;
    uRam000000000270ba48 = 0;
    _DAT_0270ba50 = 0;
    uRam000000000270ba58 = 0;
    _DAT_0270ba60 = 0;
    uRam000000000270ba68 = 0;
    _DAT_0270ba70 = 0;
    uRam000000000270ba78 = 0;
    _DAT_0270ba80 = 0;
    uRam000000000270ba88 = 0;
    _DAT_0270ba90 = 0;
    uRam000000000270ba98 = 0;
    _DAT_0270baa0 = 0;
    uRam000000000270baa8 = 0;
    _DAT_0270bab0 = 0;
    uRam000000000270bab8 = 0;
    _DAT_0270bac0 = 0;
    ___cxa_guard_release();
  }
  if (plVar13 == (longlong *)0x0) {
LAB_0168bc4e:
    pplVar12 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0168bc4e;
  }
  plVar13 = *pplVar12;
  if (*(char *)(pplVar12 + 1) == '\0') {
    if (plVar13 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar12 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00b34cb0();
  plVar2 = local_60;
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00b34cb0();
    (**(code **)(*local_a8 + 0x90))();
    plVar2 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
      (**(code **)(*local_a8 + 0x10))();
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x50);
    if (plVar1 != (longlong *)0x0) {
      local_58 = '\0';
      local_60 = (longlong *)0x0;
      iStack_44 = 0;
      local_40 = 0;
      lVar7 = 0;
      local_50 = plVar1;
      local_38 = plVar13;
      do {
        local_48 = (uint)lVar7;
        if (*(int *)((longlong)plVar1 + 0xc) <= (int)local_48) goto LAB_0168cb4a;
        local_60 = *(longlong **)(plVar1[2] + lVar7 * 8);
        FUN_0168f670();
        if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
      } while (local_a8 != local_38);
      FUN_0168e8e0();
      FUN_00d23310();
      pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_a0[0]);
      pcVar11 = &local_c0;
      if (local_a0[0] != '\0') {
        pcVar11 = local_a0;
      }
      local_c0 = local_a0[0];
      *pcVar11 = '\0';
      if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 == '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_a8 != (longlong *)0x0) {
        if ((*(char *)(unaff_RDI + 0x72) == '\0') && (*(char *)(unaff_RDI + 0x75) == '\0')) {
          *(undefined1 *)(unaff_RDI + 0x75) = 1;
          FUN_0167b270();
        }
        local_160 = plVar2;
        local_158 = '\0';
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016573a0();
        if (local_70 == '\0') {
          if (local_78 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_1b8 = 1;
        uVar14 = FUN_0168a170(local_1c0,&local_160);
        if ((local_a0[0] == '\0') && (local_a8 != (longlong *)0x0)) {
          uVar14 = FUN_00d50b00();
        }
        if (local_78 != (longlong *)0x0) {
          uVar14 = FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
        if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
        local_1c8 = 0;
        FUN_0168a900(uVar14,local_1d0);
        if (local_a8 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
LAB_0168cb4a:
      FUN_016be7c0();
      plVar13 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0168cb76:
  local_110 = *unaff_RSI;
  local_108 = '\0';
  FUN_00d530a0();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  return;
}


