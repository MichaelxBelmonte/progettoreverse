// Reconstructed implementation of GNAudioProcessor
// From MikeCore binary — reverse-engineered pseudocode

#include "GNAudioProcessor.h"

// ============================================================
// @0168b410 — 7607 bytes
// str: ""GNAudioProcessor""
// str: ""GNPlugInHostTrack""
// ============================================================

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




// ============================================================
// @005fea00 — 3072 bytes
// str: ""GNAudioProcessor""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005fea00(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02531d60;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
  if (DAT_02723170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ba18 = FUN_00d4fe50();
      DAT_0270ba00 = "GNAudioProcessor";
      _DAT_0270ba08 = 0x90;
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
      _uRam000000000270bab8 = 0;
      _DAT_0270bac0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270babb == '\0') {
    FUN_005ff740();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 2) = 0;
  if (DAT_02723170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ba18 = FUN_00d4fe50();
      DAT_0270ba00 = "GNAudioProcessor";
      _DAT_0270ba08 = 0x90;
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
      _uRam000000000270bab8 = 0;
      _DAT_0270bac0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270babb == '\0') {
    FUN_005ff8b0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = 0;
  if (DAT_02723170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ba18 = FUN_00d4fe50();
      DAT_0270ba00 = "GNAudioProcessor";
      _DAT_0270ba08 = 0x90;
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
      _uRam000000000270bab8 = 0;
      _DAT_0270bac0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270babb == '\0') {
    FUN_005ffa20();
    FUN_00e87980();
  }
  unaff_RDI[3] = 0;
  if (DAT_02723170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ba18 = FUN_00d4fe50();
      DAT_0270ba00 = "GNAudioProcessor";
      _DAT_0270ba08 = 0x90;
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
      _uRam000000000270bab8 = 0;
      _DAT_0270bac0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270babb == '\0') {
    FUN_005ffb90();
    FUN_00e87980();
  }
  unaff_RDI[4] = 0;
  if (DAT_02723170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ba18 = FUN_00d4fe50();
      DAT_0270ba00 = "GNAudioProcessor";
      _DAT_0270ba08 = 0x90;
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
      _uRam000000000270bab8 = 0;
      _DAT_0270bac0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270babb == '\0') {
    FUN_005ffd00();
    FUN_00e87980();
  }
  FUN_005ffe70();
  FUN_00600160();
  FUN_00600450();
  FUN_00600740();
  FUN_00600a80();
  FUN_00600dc0();
  unaff_RDI[0xb] = 0;
  if (DAT_02723170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ba18 = FUN_00d4fe50();
      DAT_0270ba00 = "GNAudioProcessor";
      _DAT_0270ba08 = 0x90;
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
      _uRam000000000270bab8 = 0;
      _DAT_0270bac0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270babb == '\0') {
    FUN_006010b0();
    FUN_00e87980();
  }
  FUN_00601220();
  FUN_00601510();
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  if (DAT_02723170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ba18 = FUN_00d4fe50();
      DAT_0270ba00 = "GNAudioProcessor";
      _DAT_0270ba08 = 0x90;
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
      _uRam000000000270bab8 = 0;
      _DAT_0270bac0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270babb == '\0') {
    FUN_00601800();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x74) = 0;
  if (DAT_02723170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ba18 = FUN_00d4fe50();
      DAT_0270ba00 = "GNAudioProcessor";
      _DAT_0270ba08 = 0x90;
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
      _uRam000000000270bab8 = 0;
      _DAT_0270bac0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270babb == '\0') {
    FUN_00601970();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x75) = 0;
  if (DAT_02723170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ba18 = FUN_00d4fe50();
      DAT_0270ba00 = "GNAudioProcessor";
      _DAT_0270ba08 = 0x90;
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
      _uRam000000000270bab8 = 0;
      _DAT_0270bac0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270babb == '\0') {
    FUN_00601ae0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x76) = 0;
  if (DAT_02723170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ba18 = FUN_00d4fe50();
      DAT_0270ba00 = "GNAudioProcessor";
      _DAT_0270ba08 = 0x90;
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
      _uRam000000000270bab8 = 0;
      _DAT_0270bac0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270babb == '\0') {
    FUN_00601c50();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x77) = 0;
  if (DAT_02723170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ba18 = FUN_00d4fe50();
      DAT_0270ba00 = "GNAudioProcessor";
      _DAT_0270ba08 = 0x90;
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
      _uRam000000000270bab8 = 0;
      _DAT_0270bac0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270babb == '\0') {
    FUN_00601dc0();
    FUN_00e87980();
  }
  unaff_RDI[0xf] = 0;
  if (DAT_02723170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ba18 = FUN_00d4fe50();
      DAT_0270ba00 = "GNAudioProcessor";
      _DAT_0270ba08 = 0x90;
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
      _uRam000000000270bab8 = 0;
      _DAT_0270bac0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270babb == '\0') {
    FUN_00601f30();
    FUN_00e87980();
  }
  FUN_006020a0();
  unaff_RDI[0x11] = 0;
  if (DAT_02723170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ba18 = FUN_00d4fe50();
      DAT_0270ba00 = "GNAudioProcessor";
      _DAT_0270ba08 = 0x90;
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
      _uRam000000000270bab8 = 0;
      _DAT_0270bac0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270babb == '\0') {
    FUN_00602320();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00b38fc0 — 2182 bytes
// ============================================================

void FUN_00b38fc0(uint param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong *unaff_RSI;
  float *pfVar13;
  longlong lVar14;
  longlong unaff_RDI;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float *pfVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float unaff_XMM6_Da;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  
  iVar8 = FUN_00b33520();
  if ((iVar8 == 1) && (iVar8 = FUN_00b33590(), iVar8 == 1)) {
    uVar10 = *unaff_RSI;
    uVar19 = *param_2;
    if ((*(float *)(unaff_RDI + 0x90) != 0.0) || (NAN(*(float *)(unaff_RDI + 0x90)))) {
      uVar18 = *(ulonglong *)(unaff_RDI + 0xb0);
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar18;
      uVar15 = *(ulonglong *)(unaff_RDI + 0xb8);
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar15;
      if ((int)param_1 < 1) {
        fVar23 = (float)(uVar18 >> 0x20);
        fVar26 = (float)(uVar15 >> 0x20);
        fVar24 = (float)uVar18;
        fVar38 = (float)uVar15;
      }
      else {
        fVar3 = *(float *)(unaff_RDI + 0x9c);
        uVar5 = *(undefined8 *)(unaff_RDI + 0xa0);
        uVar6 = *(undefined8 *)(unaff_RDI + 0xa8);
        iVar8 = param_1 + 1;
        lVar12 = 0;
        do {
          fVar23 = auVar29._0_4_;
          fVar26 = auVar37._0_4_;
          fVar24 = *(float *)(uVar10 + lVar12);
          auVar36._4_4_ = (float)((ulonglong)uVar5 >> 0x20) * auVar29._4_4_;
          auVar36._12_4_ = auVar29._12_4_ * 0.0;
          fVar38 = ((auVar36._4_4_ + fVar3 * fVar24 + (float)uVar5 * fVar23) - (float)uVar6 * fVar26
                   ) - (float)((ulonglong)uVar6 >> 0x20) * auVar37._4_4_;
          *(float *)(uVar19 + lVar12) = fVar38;
          auVar36._0_4_ = fVar38;
          auVar36._8_4_ = auVar36._12_4_;
          auVar37 = insertps(auVar36,auVar37,0x1c);
          auVar29 = insertps(ZEXT416((uint)fVar24),auVar29,0x1c);
          iVar8 = iVar8 + -1;
          lVar12 = lVar12 + 4;
        } while (1 < iVar8);
      }
      *(float *)(unaff_RDI + 0xb0) = fVar24;
      *(float *)(unaff_RDI + 0xb8) = fVar38;
      *(float *)(unaff_RDI + 0xb4) = fVar23;
      *(float *)(unaff_RDI + 0xbc) = fVar26;
      return;
    }
    if (uVar10 == uVar19) {
      return;
    }
    if ((int)param_1 < 1) {
      return;
    }
    if ((6 < param_1 - 1) &&
       ((uVar18 = (ulonglong)(param_1 - 1) + 1, uVar10 + uVar18 * 4 <= uVar19 ||
        (uVar19 + uVar18 * 4 <= uVar10)))) {
      uVar17 = uVar18 & 0xfffffffffffffff8;
      uVar15 = (uVar17 - 8 >> 3) + 1;
      uVar20 = (ulonglong)((uint)uVar15 & 3);
      if (uVar17 - 8 < 0x18) {
        lVar12 = 0;
      }
      else {
        lVar16 = -(uVar15 & 0xfffffffffffffffc);
        lVar12 = 0;
        do {
          puVar1 = (undefined8 *)(uVar10 + lVar12 * 4);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(uVar10 + 0x10 + lVar12 * 4);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (undefined8 *)(uVar19 + lVar12 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(uVar19 + 0x10 + lVar12 * 4);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1 = (undefined8 *)(uVar10 + 0x20 + lVar12 * 4);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(uVar10 + 0x30 + lVar12 * 4);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (undefined8 *)(uVar19 + 0x20 + lVar12 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(uVar19 + 0x30 + lVar12 * 4);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1 = (undefined8 *)(uVar10 + 0x40 + lVar12 * 4);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(uVar10 + 0x50 + lVar12 * 4);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (undefined8 *)(uVar19 + 0x40 + lVar12 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(uVar19 + 0x50 + lVar12 * 4);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1 = (undefined8 *)(uVar10 + 0x60 + lVar12 * 4);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(uVar10 + 0x70 + lVar12 * 4);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (undefined8 *)(uVar19 + 0x60 + lVar12 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(uVar19 + 0x70 + lVar12 * 4);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar12 = lVar12 + 0x20;
          lVar16 = lVar16 + 4;
        } while (lVar16 != 0);
      }
      if (uVar20 != 0) {
        lVar16 = uVar10 + lVar12 * 4;
        lVar12 = uVar19 + lVar12 * 4;
        lVar14 = 0;
        do {
          puVar2 = (undefined8 *)(lVar16 + lVar14);
          uVar5 = puVar2[1];
          puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar14);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (undefined8 *)(lVar12 + lVar14);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar14);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar14 = lVar14 + 0x20;
        } while (uVar20 << 5 != lVar14);
      }
      if (uVar18 == uVar17) {
        return;
      }
      param_1 = param_1 - (int)uVar17;
      uVar19 = uVar19 + uVar17 * 4;
      uVar10 = uVar10 + uVar17 * 4;
    }
    iVar8 = param_1 + 1;
    lVar12 = 0;
    do {
      *(undefined4 *)(uVar19 + lVar12) = *(undefined4 *)(uVar10 + lVar12);
      iVar8 = iVar8 + -1;
      lVar12 = lVar12 + 4;
    } while (1 < iVar8);
    return;
  }
  iVar8 = FUN_00b33520();
  if (iVar8 != 2) {
    return;
  }
  iVar8 = FUN_00b33590();
  if (iVar8 != 2) {
    return;
  }
  pfVar11 = (float *)*unaff_RSI;
  pfVar21 = (float *)unaff_RSI[1];
  pfVar13 = (float *)*param_2;
  pfVar22 = (float *)param_2[1];
  fVar24 = *(float *)(unaff_RDI + 0x90);
  if ((fVar24 != 0.0) || (NAN(fVar24))) {
    fVar23 = *(float *)(unaff_RDI + 0x9c);
    fVar26 = *(float *)(unaff_RDI + 0xa0);
    fVar38 = *(float *)(unaff_RDI + 0xa4);
    fVar3 = *(float *)(unaff_RDI + 0xa8);
    fVar4 = *(float *)(unaff_RDI + 0xac);
    fVar25 = *(float *)(unaff_RDI + 0xb0);
    fVar34 = *(float *)(unaff_RDI + 0xb8);
    fVar27 = *(float *)(unaff_RDI + 0xb4);
    fVar31 = *(float *)(unaff_RDI + 0xbc);
    fVar35 = fVar25;
    fVar32 = fVar31;
    if (0 < (int)param_1) {
      fVar39 = fVar25;
      uVar9 = param_1;
      fVar28 = fVar27;
      fVar33 = fVar34;
      if ((param_1 & 1) != 0) {
        fVar24 = *pfVar11;
        pfVar11 = pfVar11 + 1;
        unaff_XMM6_Da =
             ((fVar27 * fVar38 + fVar26 * fVar25 + fVar23 * fVar24) - fVar3 * fVar34) -
             fVar31 * fVar4;
        *pfVar13 = unaff_XMM6_Da;
        pfVar13 = pfVar13 + 1;
        fVar31 = fVar34;
        fVar39 = fVar24;
        uVar9 = param_1 - 1;
        fVar28 = fVar25;
        fVar33 = unaff_XMM6_Da;
      }
      fVar35 = fVar24;
      fVar27 = fVar25;
      fVar32 = fVar34;
      fVar34 = unaff_XMM6_Da;
      if (param_1 != 1) {
        iVar8 = uVar9 + 2;
        lVar12 = 0;
        do {
          fVar27 = *(float *)((longlong)pfVar11 + lVar12);
          fVar31 = ((fVar28 * fVar38 + fVar26 * fVar39 + fVar23 * fVar27) - fVar3 * fVar33) -
                   fVar31 * fVar4;
          *(float *)((longlong)pfVar13 + lVar12) = fVar31;
          fVar35 = *(float *)((longlong)pfVar11 + lVar12 + 4);
          fVar33 = ((fVar39 * fVar38 + fVar26 * fVar27 + fVar23 * fVar35) - fVar3 * fVar31) -
                   fVar33 * fVar4;
          *(float *)((longlong)pfVar13 + lVar12 + 4) = fVar33;
          iVar8 = iVar8 + -2;
          lVar12 = lVar12 + 8;
          fVar39 = fVar35;
          fVar32 = fVar31;
          fVar28 = fVar27;
          fVar34 = fVar33;
        } while (2 < iVar8);
      }
    }
    *(float *)(unaff_RDI + 0xb0) = fVar35;
    *(float *)(unaff_RDI + 0xb8) = fVar34;
    *(float *)(unaff_RDI + 0xb4) = fVar27;
    *(float *)(unaff_RDI + 0xbc) = fVar32;
    fVar24 = *(float *)(unaff_RDI + 0xc0);
    fVar25 = *(float *)(unaff_RDI + 0xc4);
    fVar34 = *(float *)(unaff_RDI + 200);
    fVar35 = *(float *)(unaff_RDI + 0xcc);
    fVar28 = fVar24;
    fVar33 = fVar34;
    fVar32 = fVar25;
    fVar39 = fVar35;
    if (0 < (int)param_1) {
      fVar40 = fVar24;
      fVar30 = fVar34;
      uVar9 = param_1;
      if ((param_1 & 1) != 0) {
        fVar27 = *pfVar21;
        pfVar21 = pfVar21 + 1;
        fVar31 = ((fVar25 * fVar38 + fVar26 * fVar24 + fVar23 * fVar27) - fVar3 * fVar34) -
                 fVar35 * fVar4;
        *pfVar22 = fVar31;
        pfVar22 = pfVar22 + 1;
        fVar25 = fVar24;
        fVar40 = fVar27;
        fVar30 = fVar31;
        uVar9 = param_1 - 1;
        fVar35 = fVar34;
      }
      fVar28 = fVar27;
      fVar33 = fVar31;
      fVar32 = fVar24;
      fVar39 = fVar34;
      if (param_1 != 1) {
        iVar8 = uVar9 + 2;
        lVar12 = 0;
        do {
          fVar32 = *(float *)((longlong)pfVar21 + lVar12);
          fVar35 = ((fVar25 * fVar38 + fVar26 * fVar40 + fVar23 * fVar32) - fVar3 * fVar30) -
                   fVar35 * fVar4;
          *(float *)((longlong)pfVar22 + lVar12) = fVar35;
          fVar28 = *(float *)((longlong)pfVar21 + lVar12 + 4);
          fVar30 = ((fVar40 * fVar38 + fVar26 * fVar32 + fVar23 * fVar28) - fVar3 * fVar35) -
                   fVar30 * fVar4;
          *(float *)((longlong)pfVar22 + lVar12 + 4) = fVar30;
          iVar8 = iVar8 + -2;
          lVar12 = lVar12 + 8;
          fVar25 = fVar32;
          fVar33 = fVar30;
          fVar40 = fVar28;
          fVar39 = fVar35;
        } while (2 < iVar8);
      }
    }
    *(float *)(unaff_RDI + 0xc0) = fVar28;
    *(float *)(unaff_RDI + 200) = fVar33;
    *(float *)(unaff_RDI + 0xc4) = fVar32;
    *(float *)(unaff_RDI + 0xcc) = fVar39;
    return;
  }
  if ((pfVar11 != pfVar13) && (0 < (int)param_1)) {
    uVar9 = param_1;
    if ((6 < param_1 - 1) &&
       ((uVar19 = (ulonglong)(param_1 - 1) + 1, pfVar11 + uVar19 <= pfVar13 ||
        (pfVar13 + uVar19 <= pfVar11)))) {
      uVar18 = uVar19 & 0xfffffffffffffff8;
      uVar10 = (uVar18 - 8 >> 3) + 1;
      uVar15 = (ulonglong)((uint)uVar10 & 3);
      if (uVar18 - 8 < 0x18) {
        lVar16 = 0;
      }
      else {
        lVar12 = -(uVar10 & 0xfffffffffffffffc);
        lVar16 = 0;
        do {
          uVar5 = *(undefined8 *)(pfVar11 + lVar16 + 2);
          uVar6 = *(undefined8 *)(pfVar11 + lVar16 + 4);
          uVar7 = *(undefined8 *)(pfVar11 + lVar16 + 4 + 2);
          *(undefined8 *)(pfVar13 + lVar16) = *(undefined8 *)(pfVar11 + lVar16);
          *(undefined8 *)(pfVar13 + lVar16 + 2) = uVar5;
          *(undefined8 *)(pfVar13 + lVar16 + 4) = uVar6;
          *(undefined8 *)(pfVar13 + lVar16 + 4 + 2) = uVar7;
          uVar5 = *(undefined8 *)(pfVar11 + lVar16 + 8 + 2);
          uVar6 = *(undefined8 *)(pfVar11 + lVar16 + 0xc);
          uVar7 = *(undefined8 *)(pfVar11 + lVar16 + 0xc + 2);
          *(undefined8 *)(pfVar13 + lVar16 + 8) = *(undefined8 *)(pfVar11 + lVar16 + 8);
          *(undefined8 *)(pfVar13 + lVar16 + 8 + 2) = uVar5;
          *(undefined8 *)(pfVar13 + lVar16 + 0xc) = uVar6;
          *(undefined8 *)(pfVar13 + lVar16 + 0xc + 2) = uVar7;
          uVar5 = *(undefined8 *)(pfVar11 + lVar16 + 0x10 + 2);
          uVar6 = *(undefined8 *)(pfVar11 + lVar16 + 0x14);
          uVar7 = *(undefined8 *)(pfVar11 + lVar16 + 0x14 + 2);
          *(undefined8 *)(pfVar13 + lVar16 + 0x10) = *(undefined8 *)(pfVar11 + lVar16 + 0x10);
          *(undefined8 *)(pfVar13 + lVar16 + 0x10 + 2) = uVar5;
          *(undefined8 *)(pfVar13 + lVar16 + 0x14) = uVar6;
          *(undefined8 *)(pfVar13 + lVar16 + 0x14 + 2) = uVar7;
          uVar5 = *(undefined8 *)(pfVar11 + lVar16 + 0x18 + 2);
          uVar6 = *(undefined8 *)(pfVar11 + lVar16 + 0x1c);
          uVar7 = *(undefined8 *)(pfVar11 + lVar16 + 0x1c + 2);
          *(undefined8 *)(pfVar13 + lVar16 + 0x18) = *(undefined8 *)(pfVar11 + lVar16 + 0x18);
          *(undefined8 *)(pfVar13 + lVar16 + 0x18 + 2) = uVar5;
          *(undefined8 *)(pfVar13 + lVar16 + 0x1c) = uVar6;
          *(undefined8 *)(pfVar13 + lVar16 + 0x1c + 2) = uVar7;
          lVar16 = lVar16 + 0x20;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      if (uVar15 != 0) {
        lVar12 = 0;
        do {
          puVar2 = (undefined8 *)((longlong)pfVar11 + lVar12 + lVar16 * 4);
          uVar5 = puVar2[1];
          puVar1 = (undefined8 *)((longlong)pfVar11 + lVar12 + lVar16 * 4 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (undefined8 *)((longlong)pfVar13 + lVar12 + lVar16 * 4);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)((longlong)pfVar13 + lVar12 + lVar16 * 4 + 0x10);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar12 = lVar12 + 0x20;
        } while (uVar15 << 5 != lVar12);
      }
      if (uVar19 == uVar18) goto LAB_00b39126;
      pfVar13 = pfVar13 + uVar18;
      pfVar11 = pfVar11 + uVar18;
      uVar9 = param_1 - (int)uVar18;
    }
    iVar8 = uVar9 + 1;
    lVar12 = 0;
    do {
      *(undefined4 *)((longlong)pfVar13 + lVar12) = *(undefined4 *)((longlong)pfVar11 + lVar12);
      iVar8 = iVar8 + -1;
      lVar12 = lVar12 + 4;
    } while (1 < iVar8);
  }
LAB_00b39126:
  if ((pfVar21 != pfVar22) && (0 < (int)param_1)) {
    if ((6 < param_1 - 1) &&
       ((uVar19 = (ulonglong)(param_1 - 1) + 1, pfVar21 + uVar19 <= pfVar22 ||
        (pfVar22 + uVar19 <= pfVar21)))) {
      uVar15 = uVar19 & 0xfffffffffffffff8;
      uVar10 = (uVar15 - 8 >> 3) + 1;
      uVar18 = (ulonglong)((uint)uVar10 & 3);
      if (uVar15 - 8 < 0x18) {
        lVar16 = 0;
      }
      else {
        lVar12 = -(uVar10 & 0xfffffffffffffffc);
        lVar16 = 0;
        do {
          uVar5 = *(undefined8 *)(pfVar21 + lVar16 + 2);
          uVar6 = *(undefined8 *)(pfVar21 + lVar16 + 4);
          uVar7 = *(undefined8 *)(pfVar21 + lVar16 + 4 + 2);
          *(undefined8 *)(pfVar22 + lVar16) = *(undefined8 *)(pfVar21 + lVar16);
          *(undefined8 *)(pfVar22 + lVar16 + 2) = uVar5;
          *(undefined8 *)(pfVar22 + lVar16 + 4) = uVar6;
          *(undefined8 *)(pfVar22 + lVar16 + 4 + 2) = uVar7;
          uVar5 = *(undefined8 *)(pfVar21 + lVar16 + 8 + 2);
          uVar6 = *(undefined8 *)(pfVar21 + lVar16 + 0xc);
          uVar7 = *(undefined8 *)(pfVar21 + lVar16 + 0xc + 2);
          *(undefined8 *)(pfVar22 + lVar16 + 8) = *(undefined8 *)(pfVar21 + lVar16 + 8);
          *(undefined8 *)(pfVar22 + lVar16 + 8 + 2) = uVar5;
          *(undefined8 *)(pfVar22 + lVar16 + 0xc) = uVar6;
          *(undefined8 *)(pfVar22 + lVar16 + 0xc + 2) = uVar7;
          uVar5 = *(undefined8 *)(pfVar21 + lVar16 + 0x10 + 2);
          uVar6 = *(undefined8 *)(pfVar21 + lVar16 + 0x14);
          uVar7 = *(undefined8 *)(pfVar21 + lVar16 + 0x14 + 2);
          *(undefined8 *)(pfVar22 + lVar16 + 0x10) = *(undefined8 *)(pfVar21 + lVar16 + 0x10);
          *(undefined8 *)(pfVar22 + lVar16 + 0x10 + 2) = uVar5;
          *(undefined8 *)(pfVar22 + lVar16 + 0x14) = uVar6;
          *(undefined8 *)(pfVar22 + lVar16 + 0x14 + 2) = uVar7;
          uVar5 = *(undefined8 *)(pfVar21 + lVar16 + 0x18 + 2);
          uVar6 = *(undefined8 *)(pfVar21 + lVar16 + 0x1c);
          uVar7 = *(undefined8 *)(pfVar21 + lVar16 + 0x1c + 2);
          *(undefined8 *)(pfVar22 + lVar16 + 0x18) = *(undefined8 *)(pfVar21 + lVar16 + 0x18);
          *(undefined8 *)(pfVar22 + lVar16 + 0x18 + 2) = uVar5;
          *(undefined8 *)(pfVar22 + lVar16 + 0x1c) = uVar6;
          *(undefined8 *)(pfVar22 + lVar16 + 0x1c + 2) = uVar7;
          lVar16 = lVar16 + 0x20;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      if (uVar18 != 0) {
        lVar12 = 0;
        do {
          puVar2 = (undefined8 *)((longlong)pfVar21 + lVar12 + lVar16 * 4);
          uVar5 = puVar2[1];
          puVar1 = (undefined8 *)((longlong)pfVar21 + lVar12 + lVar16 * 4 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (undefined8 *)((longlong)pfVar22 + lVar12 + lVar16 * 4);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)((longlong)pfVar22 + lVar12 + lVar16 * 4 + 0x10);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar12 = lVar12 + 0x20;
        } while (uVar18 << 5 != lVar12);
      }
      if (uVar19 == uVar15) {
        return;
      }
      param_1 = param_1 - (int)uVar15;
      pfVar22 = pfVar22 + uVar15;
      pfVar21 = pfVar21 + uVar15;
    }
    iVar8 = param_1 + 1;
    lVar12 = 0;
    do {
      *(undefined4 *)((longlong)pfVar22 + lVar12) = *(undefined4 *)((longlong)pfVar21 + lVar12);
      iVar8 = iVar8 + -1;
      lVar12 = lVar12 + 4;
    } while (1 < iVar8);
  }
  return;
}




// ============================================================
// @0168a900 — 1862 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0168af97) */
/* WARNING: Removing unreachable block (ram,0x0168afa0) */
/* WARNING: Removing unreachable block (ram,0x0168aa72) */
/* WARNING: Removing unreachable block (ram,0x0168aa7b) */
/* WARNING: Removing unreachable block (ram,0x0168a97c) */
/* WARNING: Removing unreachable block (ram,0x0168a985) */
/* WARNING: Removing unreachable block (ram,0x0168a9f3) */
/* WARNING: Removing unreachable block (ram,0x0168a9fc) */
/* WARNING: Removing unreachable block (ram,0x0168ab86) */
/* WARNING: Removing unreachable block (ram,0x0168ab96) */
/* WARNING: Removing unreachable block (ram,0x0168ae47) */
/* WARNING: Removing unreachable block (ram,0x0168ae70) */
/* WARNING: Removing unreachable block (ram,0x0168aae7) */
/* WARNING: Removing unreachable block (ram,0x0168ab10) */
/* WARNING: Removing unreachable block (ram,0x0168aae9) */
/* WARNING: Removing unreachable block (ram,0x0168ab12) */
/* WARNING: Removing unreachable block (ram,0x0168ae49) */
/* WARNING: Removing unreachable block (ram,0x0168ae72) */

void FUN_0168a900(pthread_key_t param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_68;
  longlong local_60;
  char local_58;
  int local_48;
  
  lVar2 = local_60;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01653bd0();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  if (local_60 == *unaff_RSI) goto LAB_0168b056;
  if (local_60 == 0) {
LAB_0168aa03:
    lVar7 = 0;
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c8a10();
    lVar7 = local_60;
    if (local_58 == '\0') {
      if (local_60 == 0) goto LAB_0168aa03;
      FUN_00d50b00();
    }
  }
  if (*unaff_RSI == 0) {
LAB_0168aa82:
    local_68 = 0;
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c8a10();
    if (local_58 == '\0') {
      if (local_60 == 0) goto LAB_0168aa82;
      local_68 = local_60;
      FUN_00d50b00();
    }
    else {
      local_68 = local_60;
    }
  }
  if (local_60 != 0) {
    lVar6 = *(longlong *)(unaff_RDI + 0x60);
    if (lVar6 != 0) {
      local_58 = '\0';
      local_60 = 0;
      local_48 = -1;
      while( true ) {
        lVar5 = (longlong)local_48;
        local_48 = local_48 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_48) break;
        local_60 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 8 + lVar5 * 8);
        local_100 = *param_2;
        local_f8 = '\0';
        FUN_01694e10(*(longlong *)(lVar6 + 0x10),&local_100);
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_016be7c0();
      param_1 = (pthread_key_t)lVar6;
    }
    if (lVar7 != local_68) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_e8 = '\0';
      local_f0 = lVar7;
      FUN_01657d60();
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e0 = *param_2;
    local_d8 = '\0';
    FUN_012c85c0();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_d0 = *unaff_RSI;
  local_c8 = '\0';
  FUN_01658140();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (*unaff_RSI != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_c0 = *param_2;
    local_b8 = '\0';
    FUN_012c8210();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != local_68) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_b0 = local_68;
      local_a8 = '\0';
      FUN_01657410();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar6 = *(longlong *)(unaff_RDI + 0x60);
    if (lVar6 != 0) {
      local_58 = '\0';
      local_60 = 0;
      local_48 = -1;
      while( true ) {
        lVar5 = (longlong)local_48;
        local_48 = local_48 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_48) break;
        local_60 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 8 + lVar5 * 8);
        local_a0 = *unaff_RSI;
        local_98 = '\0';
        local_90 = *param_2;
        local_88 = '\0';
        FUN_01694d70(*(longlong *)(lVar6 + 0x10),&local_90);
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_016be7c0();
      param_1 = (pthread_key_t)lVar6;
    }
  }
  cVar3 = FUN_016ae5f0();
  if ((cVar3 != '\0') && (lVar2 != 0)) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c81e0();
    iVar1 = *(int *)(local_60 + 0xc);
    if (local_58 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 == 0) {
      FUN_00d23d90();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = '\0';
      local_80 = 0;
      FUN_012c8a40();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50130();
    }
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
LAB_0168b056:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @011f03e0 — 1534 bytes
// str: ""GNAudioProcessor""
// str: ""GNString""
// str: ""MUAudioEffectRenderer""
// str: ""getLatency""
// str: ""getTailDuration""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011f03e0(void)

{
  int iVar1;
  
  FUN_0044b870();
  FUN_00e87cb0();
  if (DAT_028ac030 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028abff8 = FUN_0044b870();
      _DAT_028abff0 = "getLatency";
      _DAT_028ac000 = 0;
      _DAT_028ac008 = &DAT_027bcfe8;
      _DAT_028ac010 = FUN_011f1370;
      _DAT_028ac018 = FUN_011f0a30;
      _DAT_028ac020 = 0;
      uRam00000000028ac028 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028ac078 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028ac040 = FUN_0044b870();
      _DAT_028ac038 = "getTailDuration";
      _DAT_028ac048 = 0;
      _DAT_028ac050 = &DAT_027bcfe8;
      _DAT_028ac058 = FUN_011f1370;
      _DAT_028ac060 = FUN_011f0a40;
      _DAT_028ac068 = 0;
      uRam00000000028ac070 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028ac0c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028ac088 = FUN_0044b870();
      _DAT_028ac080 = "getHeadDuration";
      _DAT_028ac090 = 0;
      _DAT_028ac098 = &DAT_027bcfe8;
      _DAT_028ac0a0 = FUN_011f1370;
      _DAT_028ac0a8 = FUN_011f0a50;
      _DAT_028ac0b0 = 0;
      uRam00000000028ac0b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028ac108 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028ac0d0 = FUN_0044b870();
      _DAT_028ac0c8 = "getTitle";
      _DAT_028ac0d8 = 0;
      _DAT_028ac0e0 = &DAT_027bcfea;
      _DAT_028ac0e8 = FUN_011f13a0;
      _DAT_028ac0f0 = _DAT_023dc9a0;
      uRam00000000028ac0f4 = _UNK_023dc9a4;
      uRam00000000028ac0f8 = _UNK_023dc9a8;
      uRam00000000028ac0fc = _UNK_023dc9ac;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028ac100 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028ac150 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028ac118 = FUN_0044b870();
      _DAT_028ac110 = "getProcessor";
      _DAT_028ac120 = 0;
      _DAT_028ac128 = &DAT_027bcff0;
      _DAT_028ac130 = FUN_011f1440;
      _DAT_028ac138 = _DAT_0240cd30;
      uRam00000000028ac13c = _UNK_0240cd34;
      uRam00000000028ac140 = _UNK_0240cd38;
      uRam00000000028ac144 = _UNK_0240cd3c;
      if (DAT_02723170 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0270ba18 = FUN_00d4fe50();
          DAT_0270ba00 = "GNAudioProcessor";
          _DAT_0270ba08 = 0x90;
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
      }
      _DAT_028ac148 = DAT_0270ba00;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028ac198 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028ac160 = FUN_0044b870();
      _DAT_028ac158 = "getDisplayRenderer";
      _DAT_028ac168 = 0;
      _DAT_028ac170 = &DAT_027bcff2;
      _DAT_028ac178 = FUN_011f14e0;
      _DAT_028ac180 = FUN_011f0b50;
      _DAT_028ac188 = 0;
      if (DAT_0278d9e8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0278d938 = FUN_010f2dd0();
          DAT_0278d920 = "MUAudioEffectRenderer";
          _DAT_0278d928 = 0xf0;
          _DAT_0278d930 = FUN_010f2d40;
          _DAT_0278d940 = 0;
          uRam000000000278d948 = 0;
          _DAT_0278d950 = 0;
          uRam000000000278d958 = 0;
          _DAT_0278d960 = 0;
          uRam000000000278d968 = 0;
          _DAT_0278d970 = 0;
          uRam000000000278d978 = 0;
          _DAT_0278d980 = 0;
          uRam000000000278d988 = 0;
          _DAT_0278d990 = 0;
          uRam000000000278d998 = 0;
          _DAT_0278d9a0 = 0;
          uRam000000000278d9a8 = 0;
          _DAT_0278d9b0 = 0;
          uRam000000000278d9b8 = 0;
          _DAT_0278d9c0 = 0;
          uRam000000000278d9c8 = 0;
          _DAT_0278d9d0 = 0;
          uRam000000000278d9d8 = 0;
          _DAT_0278d9e0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028ac190 = DAT_0278d920;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @00b3d310 — 1369 bytes
// str: ""%@:""
// ============================================================

void FUN_00b3d310(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong *unaff_RDI;
  undefined8 unaff_R13;
  ulonglong uVar5;
  longlong *plVar6;
  longlong local_110;
  char local_108;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  uint local_34;
  
  lVar2 = DAT_0275e910;
  if (DAT_0275e910 != 0) {
    FUN_00d50b00();
  }
  local_f0 = 0;
  local_e8 = '\0';
  (**(code **)(*unaff_RDI + 0x508))(param_1,&local_f0);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_b0 = (longlong *)0x0;
  (**(code **)(*(longlong *)unaff_RDI[0xf] + 0x5d0))();
  plVar6 = local_58;
  if (local_58 == (longlong *)0x0) {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
    plVar6 = (longlong *)0x0;
  }
  else {
    if ((char)local_50 == '\0') {
      FUN_00d50b00();
      local_b0 = plVar6;
      uVar5 = 0;
      if (((char)local_50 == '\0') || (local_58 == (longlong *)0x0)) goto LAB_00b3d410;
      FUN_00d50b20();
    }
    else {
      local_b0 = local_58;
    }
    uVar5 = 0;
  }
LAB_00b3d410:
  plVar1 = (longlong *)unaff_RDI[0x10];
  if (plVar1 != (longlong *)0x0) {
    local_34 = (uint)uVar5;
    (**(code **)(*plVar6 + 0x478))(param_1,(int)unaff_RDI[0xe]);
    local_50 = 1;
    local_58 = &DAT_024c5048;
    local_40 = 0;
    if (local_110 != 0) {
      FUN_00d50b00();
    }
    local_48 = local_110;
    local_40 = '\x01';
    FUN_00d8cb40(param_1,&local_58);
    lVar2 = local_a8;
    if (local_a0 == '\0') {
      if (local_a8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a0 = '\0';
    }
    (**(code **)(*plVar1 + 0x968))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = (ulonglong)local_34;
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = (longlong *)unaff_RDI[0x13];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x4a0))(param_1,(int)unaff_RDI[0xe]);
    plVar3 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    (**(code **)(*plVar1 + 0x968))();
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = (longlong *)unaff_RDI[0x11];
  if (plVar1 == (longlong *)0x0) goto LAB_00b3d738;
  (**(code **)(*plVar6 + 0x460))();
  (**(code **)(*plVar1 + 0xab8))();
  plVar1 = (longlong *)unaff_RDI[0x11];
  (**(code **)(*plVar6 + 0x468))();
  (**(code **)(*plVar1 + 0xac8))();
  (**(code **)(*plVar6 + 0x470))(param_1,(int)unaff_RDI[0xe]);
  plVar1 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00b3d659;
    }
  }
  else if (local_58 != (longlong *)0x0) {
LAB_00b3d659:
    local_e0 = plVar1;
    local_d8 = '\0';
    (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x988))();
    if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  plVar1 = (longlong *)unaff_RDI[0x11];
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0xa20))();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_0275e918;
  plVar1 = (longlong *)unaff_RDI[0x11];
  if (DAT_0275e918 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar2;
  local_c8 = '\x01';
  (**(code **)(*plVar1 + 0xa10))();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
LAB_00b3d738:
  if (unaff_RDI[0x12] != 0) {
    FUN_01e058a0();
    FUN_00b10020();
    plVar1 = DAT_02802688;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar1 = DAT_02802688;
      if (cVar4 != '\0') {
        plVar1 = local_b0;
      }
    }
    if (plVar1 != (longlong *)0x0) {
      plVar1 = (longlong *)unaff_RDI[0x12];
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0xa20))();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0275e920;
      plVar1 = (longlong *)unaff_RDI[0x12];
      if (DAT_0275e920 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar2;
      local_b8 = '\x01';
      (**(code **)(*plVar1 + 0xa10))();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((char)uVar5 == '\0' && plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0168a170 — 1311 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0168a5ee) */
/* WARNING: Removing unreachable block (ram,0x0168a5f7) */
/* WARNING: Removing unreachable block (ram,0x0168a550) */
/* WARNING: Removing unreachable block (ram,0x0168a55c) */
/* WARNING: Removing unreachable block (ram,0x0168a5bb) */
/* WARNING: Removing unreachable block (ram,0x0168a5c7) */
/* WARNING: Removing unreachable block (ram,0x0168a65d) */
/* WARNING: Removing unreachable block (ram,0x0168a636) */
/* WARNING: Removing unreachable block (ram,0x0168a643) */
/* WARNING: Removing unreachable block (ram,0x0168a1f0) */
/* WARNING: Removing unreachable block (ram,0x0168a210) */
/* WARNING: Removing unreachable block (ram,0x0168a1f2) */
/* WARNING: Removing unreachable block (ram,0x0168a212) */

longlong * FUN_0168a170(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  void *pvVar2;
  longlong *plVar3;
  pthread_key_t pVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong *local_58;
  char local_50;
  int local_40;
  
  if (*param_2 != 0) {
    plVar5 = *(longlong **)(unaff_RSI + 0x78);
    if (plVar5 == (longlong *)0x0) {
LAB_0168a2b1:
      pVar4 = (pthread_key_t)param_1;
      lVar1 = *param_2;
    }
    else {
      local_58 = (longlong *)0x0;
      local_40 = -1;
      do {
        local_50 = '\0';
        lVar1 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((longlong)plVar5 + 0xc) <= local_40) {
          FUN_01714b60();
          param_1 = plVar5;
          goto LAB_0168a2b1;
        }
        plVar3 = (longlong *)plVar5[2];
        local_58 = (longlong *)plVar3[lVar1 + 1];
        pvVar2 = _pthread_getspecific((pthread_key_t)plVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c9180();
        lVar1 = *param_2;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      } while (local_88 != lVar1);
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8a10();
      lVar1 = *param_1;
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (local_88 == lVar1) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RDI = (longlong)local_58;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        FUN_01714b60();
        return unaff_RDI;
      }
      FUN_01714b60();
      pVar4 = (pthread_key_t)plVar3;
      lVar1 = *param_2;
      param_1 = plVar3;
    }
    if (lVar1 != 0) goto LAB_0168a486;
  }
  pVar4 = (pthread_key_t)param_1;
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00bdbf50();
  (**(code **)(*plVar3 + 0x18))();
  plVar5 = (longlong *)*param_2;
  if (plVar5 == plVar3) {
    if ((char)param_2[1] == '\0') goto LAB_0168a309;
    FUN_00d50b20();
  }
  else {
    *param_2 = (longlong)plVar3;
    if (((char)param_2[1] != '\0') && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_0168a309:
    *(undefined1 *)(param_2 + 1) = 1;
  }
  FUN_00d9bb60();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00b69200();
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d46300();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00b68960();
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_0168a486:
  FUN_016ae690();
  FUN_00c811e0();
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  plVar5 = local_58;
  if ((pvVar2 != (void *)0x0) && (lVar1 = FUN_00e8b990(), lVar1 != 0)) {
    plVar5 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar1 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c78d0();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a40();
  FUN_00d21140();
  *unaff_RDI = (longlong)local_58;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @00b3bc60 — 1305 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b3bf8a) */
/* WARNING: Removing unreachable block (ram,0x00b3bf96) */
/* WARNING: Removing unreachable block (ram,0x00b3bf2a) */
/* WARNING: Removing unreachable block (ram,0x00b3bf36) */
/* WARNING: Removing unreachable block (ram,0x00b3bfc2) */
/* WARNING: Removing unreachable block (ram,0x00b3bfce) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00b3bc60(void)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  float extraout_XMM0_Dc_06;
  float extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  float extraout_XMM0_Dd_07;
  float extraout_XMM0_Dd_08;
  float fVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong local_e0;
  char local_d8;
  undefined1 local_c8 [16];
  longlong *local_88;
  char local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_38;
  
  plVar6 = (longlong *)*unaff_RSI;
  cVar1 = (char)unaff_RSI[1];
  bVar9 = cVar1 == '\0';
  bVar10 = plVar6 == (longlong *)0x0;
  plVar7 = plVar6;
  if (!bVar10 && !bVar9) {
    FUN_00d50b00();
    plVar7 = (longlong *)*unaff_RSI;
  }
  local_50 = plVar6;
  (**(code **)(*plVar7 + 0x570))();
  iVar5 = (**(code **)(*(longlong *)unaff_RDI[0xf] + 0x448))();
  local_68 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x618))();
  fStack_60 = (float)extraout_XMM0_Dc;
  fStack_5c = (float)extraout_XMM0_Dd;
  (**(code **)(*unaff_RDI + 0x620))();
  local_48 = (**(code **)(*unaff_RDI + 0x620))();
  local_78._0_8_ = (**(code **)(*unaff_RDI + 0x628))();
  local_78._8_4_ = extraout_XMM0_Dc_00;
  local_78._12_4_ = extraout_XMM0_Dd_00;
  (**(code **)(*unaff_RDI + 0x628))();
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00074c30();
  (**(code **)(*plVar6 + 0x18))();
  local_38 = plVar6;
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar6 + 0x18))();
  fVar15 = extraout_XMM0_Db + (float)local_68._4_4_;
  local_78._0_4_ = local_78._0_4_ + local_78._0_4_ + (float)local_68._0_4_;
  auVar13._4_4_ = extraout_XMM0_Db_00;
  auVar13._0_4_ = extraout_XMM0_Db_00;
  auVar13._8_4_ = extraout_XMM0_Dd_01;
  auVar13._12_4_ = extraout_XMM0_Dd_01;
  register0x00001284 = auVar13._4_12_;
  local_68._0_4_ =
       extraout_XMM0_Db_00 + extraout_XMM0_Db_00 + ((float)iVar5 * fVar15 - local_48._4_4_);
  insertps(local_78,_local_68,0x10);
  (**(code **)(*plVar6 + 0x4d0))(0);
  if ((float)local_68._0_4_ <= DAT_0241b640) {
    FUN_01d94ee0();
    FUN_01d95060();
    (**(code **)(*local_38 + 0x4d0))(0);
    if (local_50 != plVar6) {
      FUN_00d50b00();
      local_48._0_4_ = CONCAT31(local_48._1_3_,1);
      local_50 = plVar6;
      if (!bVar10 && !bVar9) {
        FUN_00d50b20();
      }
      goto LAB_00b3beec;
    }
    uVar12 = local_48;
    if ((cVar1 == '\0') && (local_50 != (longlong *)0x0)) {
      local_48._0_4_ = CONCAT31(local_48._1_3_,1);
      FUN_00d50b00();
      goto LAB_00b3beec;
    }
  }
  else {
    uVar11 = FUN_01d91900();
    local_68._0_4_ = uVar11;
    FUN_01d94ee0();
    FUN_01d95060();
    auVar14._4_12_ = local_78._4_12_;
    auVar14._0_4_ = local_78._0_4_ + (float)local_68._0_4_;
    auVar13 = blendps(auVar14,_DAT_023d5dd0,0xe);
    (**(code **)(*local_38 + 0x4d0))(0,auVar13._0_8_);
    if (local_50 != local_38) {
      FUN_00d50b00();
      local_48._0_4_ = CONCAT31(local_48._1_3_,1);
      if (bVar10 || bVar9) {
        local_50 = local_38;
      }
      else {
        local_50 = local_38;
        FUN_00d50b20();
      }
      goto LAB_00b3beec;
    }
    uVar12 = local_48;
    if ((cVar1 == '\0') && (local_50 != (longlong *)0x0)) {
      local_48._0_4_ = CONCAT31(local_48._1_3_,1);
      FUN_00d50b00();
      goto LAB_00b3beec;
    }
  }
  local_48._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
  local_48._1_3_ = (undefined3)((ulonglong)uVar12 >> 8);
  local_48._0_4_ = CONCAT31(local_48._1_3_,cVar1);
LAB_00b3beec:
  FUN_01d97870();
  FUN_01cf3e00();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x450))();
  FUN_01d978b0();
  local_68 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x628))();
  fStack_60 = (float)extraout_XMM0_Dc_01;
  fStack_5c = (float)extraout_XMM0_Dd_02;
  local_c8._0_8_ = (**(code **)(*unaff_RDI + 0x628))();
  local_c8._8_4_ = extraout_XMM0_Dc_02;
  local_c8._12_4_ = extraout_XMM0_Dd_03;
  local_78._0_8_ = (**(code **)(*unaff_RDI + 0x618))();
  local_78._8_4_ = extraout_XMM0_Dc_03;
  local_78._12_4_ = extraout_XMM0_Dd_04;
  uVar12 = (**(code **)(*unaff_RDI + 0x618))();
  auVar13 = blendps(_local_68,local_c8,2);
  if (0 < iVar5) {
    auVar3._8_4_ = extraout_XMM0_Dc_04;
    auVar3._0_8_ = uVar12;
    auVar3._12_4_ = extraout_XMM0_Dd_05;
    auVar14 = blendps(local_78,auVar3,2);
    iVar8 = 0;
    do {
      local_80 = '\0';
      local_88 = plVar6;
      local_68 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x638))(auVar13._0_4_,&local_88);
      fStack_60 = (float)extraout_XMM0_Dc_05;
      fStack_5c = (float)extraout_XMM0_Dd_06;
      local_78 = auVar14;
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar12 = (**(code **)(*unaff_RDI + 0x620))();
      auVar16._0_4_ = (float)uVar12 + local_78._0_4_ + local_68._0_4_;
      auVar16._4_4_ = (float)((ulonglong)uVar12 >> 0x20) + local_78._4_4_ + local_68._4_4_;
      auVar16._8_4_ = extraout_XMM0_Dc_06 + local_78._8_4_ + local_68._8_4_;
      auVar16._12_4_ = extraout_XMM0_Dd_07 + local_78._12_4_ + local_68._12_4_;
      auVar13 = blendps(auVar16,_local_68,0xd);
      iVar8 = iVar8 + 1;
      auVar14 = local_78;
    } while (iVar5 != iVar8);
  }
  _local_68 = auVar13;
  (**(code **)(*plVar6 + 0x4d8))();
  plVar4 = local_38;
  plVar7 = local_50;
  uVar12 = (**(code **)(*unaff_RDI + 0x628))();
  auVar17._0_4_ = (float)local_68._0_4_ + (float)uVar12;
  auVar17._4_4_ = (float)local_68._4_4_ + (float)((ulonglong)uVar12 >> 0x20);
  auVar17._8_4_ = fStack_60 + extraout_XMM0_Dc_07;
  auVar17._12_4_ = fStack_5c + extraout_XMM0_Dd_08;
  auVar13 = blendps(local_78,auVar17,2);
  (**(code **)(*plVar6 + 0x4d0))(0);
  if (plVar6 == plVar7) {
    (**(code **)(*plVar6 + 0x4d8))();
    (**(code **)(*plVar4 + 0x4d0))();
    plVar2 = (longlong *)*unaff_RSI;
    (**(code **)(*plVar6 + 0x4d8))();
    (**(code **)(*plVar2 + 0x4d0))();
  }
  (**(code **)(*plVar7 + 0x4d8))();
  local_78 = auVar13;
  FUN_00d50b20();
  if ((char)local_48 != '\0') {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return local_78._0_8_;
}




// ============================================================
// @008f1210 — 1073 bytes
// ============================================================

int FUN_008f1210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  ulonglong uVar6;
  longlong unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar7 = unaff_RDI + 0x50;
  lVar8 = unaff_RDI + 0x4c;
  lVar9 = unaff_RDI + 0x48;
  lVar10 = unaff_RDI + 0x44;
  lVar11 = unaff_RDI + 0x40;
  lVar12 = unaff_RDI + 0x28;
  lVar13 = unaff_RDI + 0x10;
  lVar14 = unaff_RDI + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,&local_44,param_3,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,
                       lVar13,lVar14,uVar15,uVar16,uVar17);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar15 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_44 != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x70) = 1;
      goto LAB_008f159b;
    case 2:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x71) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 3:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x72) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 10:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x73) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xb:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x74) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xc:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x75) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xd:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x76) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x14:
      if (local_44 == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x58) = *(undefined8 *)(unaff_RDI + 0x50);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_008f1300::switchdataD_008f166c,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x58) - *(longlong *)(unaff_RDI + 0x50);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x58) = *(longlong *)(unaff_RDI + 0x50) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x77) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x15:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x78) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x16:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x79) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008f159b:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ============================================================
// @00b3df40 — 1000 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b3e13b) */
/* WARNING: Removing unreachable block (ram,0x00b3e14b) */

ulonglong FUN_00b3df40(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong unaff_RDI;
  longlong **pplVar9;
  undefined4 extraout_XMM0_Da;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar1 = local_40;
  lVar3 = DAT_0275e918;
  if (DAT_0275e918 != 0) {
    FUN_00d50b00();
  }
  uVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar5 != '\0') {
    uVar8 = CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
    if (param_2 != '\0') {
      plVar1 = *(longlong **)(unaff_RDI + 0x78);
      uVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x930))();
      local_58 = (longlong *)CONCAT44(local_58._4_4_,uVar5);
      FUN_00b3d240();
      local_78 = local_40;
      local_70 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      FUN_01caecd0();
      lVar3 = *plVar1;
      (**(code **)(lVar3 + 0x5e0))(local_58._0_4_,&local_78);
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_00b3e314;
  }
  FUN_01cae990();
  plVar1 = local_40;
  lVar3 = DAT_0275e920;
  if (DAT_0275e920 != 0) {
    FUN_00d50b00();
  }
  uVar6 = (**(code **)(*plVar1 + 0x50))();
  uVar5 = extraout_XMM0_Da;
  if (lVar3 != 0) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((char)uVar6 == '\0') {
    uVar7 = FUN_01e54290(uVar5,param_2);
    uVar8 = (ulonglong)uVar7;
    goto LAB_00b3e314;
  }
  uVar8 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
  if (param_2 == '\0') goto LAB_00b3e314;
  pplVar9 = &local_40;
  (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x5d0))();
  plVar1 = local_40;
  FUN_00b10020();
  if (plVar1 == (longlong *)0x0) {
LAB_00b3e0ec:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00b3e0ec;
  }
  plVar2 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  uVar8 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    local_58 = plVar2;
    uVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x970))();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar5 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    uVar5 = FUN_00bf87d0(uVar5,*(undefined4 *)(unaff_RDI + 0x70));
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x78);
    FUN_00b3d240();
    local_68 = local_40;
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    FUN_01caecd0();
    lVar3 = *plVar1;
    (**(code **)(lVar3 + 0x5e0))(uVar5,&local_68);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_00b3e314:
  return uVar8 & 0xffffffff;
}




// ============================================================
// @00b34ce0 — 949 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b34ef1) */
/* WARNING: Removing unreachable block (ram,0x00b34efa) */
/* WARNING: Removing unreachable block (ram,0x00b34e59) */
/* WARNING: Removing unreachable block (ram,0x00b34e65) */
/* WARNING: Removing unreachable block (ram,0x00b35039) */
/* WARNING: Removing unreachable block (ram,0x00b35042) */
/* WARNING: Removing unreachable block (ram,0x00b34eb6) */
/* WARNING: Removing unreachable block (ram,0x00b34ebf) */
/* WARNING: Removing unreachable block (ram,0x00b34d90) */
/* WARNING: Removing unreachable block (ram,0x00b34d99) */

ulonglong FUN_00b34ce0(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  float *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined4 extraout_XMM0_Da;
  float fVar10;
  longlong local_48;
  char local_40;
  
  iVar5 = (**(code **)(*unaff_RDI + 0x4b0))();
  if (iVar5 != 1) {
    if (iVar5 == 2) {
      (**(code **)(*unaff_RDI + 0x4b8))(extraout_XMM0_Da,param_2);
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
          goto LAB_00b34d9e;
        }
      }
      else if (local_48 != 0) {
LAB_00b34d9e:
        uVar1 = *(uint *)(local_48 + 0xc);
        if ((int)uVar1 < 1) {
          uVar8 = 0;
          lVar6 = 0;
          bVar3 = false;
        }
        else {
          uVar8 = 0;
          lVar6 = 0;
          bVar3 = false;
          do {
            lVar2 = *(longlong *)(*(longlong *)(local_48 + 0x10) + uVar8 * 8);
            if (lVar6 == lVar2) {
              lVar2 = lVar6;
              bVar4 = bVar3;
              if ((!bVar3) && (lVar6 != 0)) {
                FUN_00d50b00();
                bVar4 = true;
              }
            }
            else {
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              bVar4 = true;
              if ((bVar3) && (lVar6 != 0)) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar4;
            lVar6 = lVar2;
            iVar5 = FUN_00d92520();
            if (iVar5 == 0) {
              *unaff_RSI = (float)(int)uVar8;
              uVar8 = 1;
              goto LAB_00b34fb2;
            }
            uVar8 = uVar8 + 1;
          } while (uVar1 != uVar8);
          uVar8 = 0;
        }
LAB_00b34fb2:
        FUN_00d50b20();
        goto joined_r0x00b35069;
      }
    }
    uVar8 = 0;
    goto LAB_00b35078;
  }
  (**(code **)(*unaff_RDI + 0x490))(0,param_2);
  lVar6 = local_48;
  if (local_48 == 0) {
    bVar7 = 1;
    lVar6 = 0;
    bVar3 = false;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar7 = 0;
    bVar3 = true;
  }
  else {
    bVar7 = 0;
    bVar3 = true;
  }
  iVar5 = FUN_00d92520();
  if (iVar5 == 0) {
    fVar10 = 0.0;
LAB_00b3505c:
    *unaff_RSI = fVar10;
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
  else {
    (**(code **)(*unaff_RDI + 0x490))(DAT_02390124,param_2);
    if (local_48 == lVar6) {
      if ((bool)(bVar7 & local_48 != 0)) {
        bVar4 = true;
        if (local_40 != '\0') goto LAB_00b35016;
        bVar3 = true;
        FUN_00d50b00();
      }
LAB_00b35002:
      bVar4 = bVar3;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar9 = (bool)(bVar3 & lVar6 != 0);
      bVar3 = true;
      lVar6 = local_48;
      bVar4 = true;
      if (bVar9) {
        FUN_00d50b20();
        goto LAB_00b35002;
      }
    }
    else {
      bVar9 = lVar6 != 0;
      lVar6 = local_48;
      bVar4 = true;
      if ((bool)(bVar3 & bVar9)) {
        FUN_00d50b20();
      }
    }
LAB_00b35016:
    bVar3 = bVar4;
    iVar5 = FUN_00d92520();
    if (iVar5 == 0) {
      unaff_RDI = (longlong *)0x0;
      fVar10 = DAT_02390124;
      goto LAB_00b3505c;
    }
    uVar8 = 0;
  }
joined_r0x00b35069:
  if ((bVar3) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
LAB_00b35078:
  return uVar8 & 0xffffffff;
}




// ============================================================
// @00b324d0 — 948 bytes
// str: ""editValueForKey""
// str: ""Edit %@""
// str: ""v@@I@""
// ============================================================

void FUN_00b324d0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  int local_c4;
  longlong local_c0;
  char local_b8;
  undefined8 *local_b0;
  uint local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_78;
  char local_70;
  char local_50;
  
  local_c4 = (int)param_1;
  if (((*param_3 != 0) && (local_c4 != 3)) && (local_c4 != 2)) {
    local_108 = *param_2;
    local_100 = '\0';
    (**(code **)(*unaff_RDI + 0x88))(param_1,&local_108);
    puVar1 = local_b0;
    if ((char)local_a8 == '\0') {
      if (local_b0 != (undefined8 *)0x0) {
        FUN_00d50b00();
        if (((char)local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_a8 = local_a8 & 0xffffff00;
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    local_c0 = *param_2;
    local_110 = *param_3;
    FUN_00b359e0(&local_c4,&local_c0,&local_110,4);
    FUN_00db2930("v@@I@","editValueForKey",&local_b0);
    local_b0 = (undefined8 *)&DAT_02532370;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    local_b0 = (undefined8 *)&DAT_0253d630;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_b0 = &DAT_024c5048;
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    local_f8 = *param_2;
    local_f0 = '\0';
    FUN_00d9a330();
    local_a0 = local_c0;
    local_a8 = 1;
    local_b0 = &DAT_024c5048;
    local_98 = 0;
    if (local_c0 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    FUN_00d8cb40();
    if (local_50 == '\0') {
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00db3140();
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (puVar1 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_b0 = &DAT_024c5048;
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  local_e8 = *unaff_RSI;
  local_e0 = '\0';
  local_d8 = *param_2;
  local_d0 = '\0';
  (**(code **)(*unaff_RDI + 0x80))();
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00b32d70 — 938 bytes
// ============================================================

void FUN_00b32d70(undefined8 param_1,undefined4 param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  
  bVar1 = *(byte *)((longlong)unaff_RDI + 0x14);
  cVar8 = unaff_RSI == 0;
  if ((ulonglong)bVar1 != 0) {
    uVar3 = (ulonglong)(bVar1 & 3);
    if ((ulonglong)bVar1 - 1 < 3) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        if (*(longlong *)(unaff_RSI + uVar2 * 8) == 0) {
          cVar8 = '\x02';
        }
        if (*(longlong *)(unaff_RSI + 8 + uVar2 * 8) == 0) {
          cVar8 = '\x02';
        }
        if (*(longlong *)(unaff_RSI + 0x10 + uVar2 * 8) == 0) {
          cVar8 = '\x02';
        }
        if (*(longlong *)(unaff_RSI + 0x18 + uVar2 * 8) == 0) {
          cVar8 = '\x02';
        }
        uVar2 = uVar2 + 4;
      } while ((bVar1 & 0xfffffffc) != uVar2);
    }
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        if (*(longlong *)(unaff_RSI + uVar2 * 8 + uVar4 * 8) == 0) {
          cVar8 = '\x02';
        }
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  if (cVar8 != '\0') {
    return;
  }
  plVar5 = (longlong *)unaff_RDI[7];
  uVar7 = (uint)bVar1;
  uVar6 = (uint)bVar1;
  if (plVar5 == (longlong *)0x0) {
    bVar1 = *(byte *)(unaff_RDI + 2);
    if (uVar6 != 0) {
      if (6 < (ulonglong)uVar7 - 1) {
        uVar3 = 0;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          uVar3 = uVar3 + 8;
        } while ((uVar7 & 0xfffffff8) != uVar3);
      }
      if ((ulonglong)(uVar7 & 7) != 0) {
        uVar3 = 0;
        do {
          ___bzero();
          uVar3 = uVar3 + 1;
        } while ((uVar7 & 7) != uVar3);
      }
    }
    uVar7 = (uint)bVar1;
    if (uVar7 != 0) {
      if (6 < (ulonglong)bVar1 - 1) {
        uVar3 = 0;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          uVar3 = uVar3 + 8;
        } while ((uVar7 & 0xfffffff8) != uVar3);
      }
      if ((ulonglong)(uVar7 & 7) != 0) {
        uVar3 = 0;
        do {
          ___bzero();
          uVar3 = uVar3 + 1;
        } while ((uVar7 & 7) != uVar3);
      }
    }
  }
  else {
    if (uVar7 != 0) {
      if (6 < (ulonglong)uVar6 - 1) {
        uVar3 = 0;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          uVar3 = uVar3 + 8;
        } while ((uVar6 & 0xfffffff8) != uVar3);
      }
      if ((ulonglong)(uVar6 & 7) != 0) {
        uVar3 = 0;
        do {
          ___bzero();
          uVar3 = uVar3 + 1;
        } while ((uVar6 & 7) != uVar3);
      }
      plVar5 = (longlong *)unaff_RDI[7];
    }
    (**(code **)(*plVar5 + 0x538))();
  }
                    /* WARNING: Could not recover jumptable at 0x00b32f89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x400))(param_2);
  return;
}




// ============================================================
// @00b3ca40 — 888 bytes
// str: ""GNAudioProcessor""
// str: ""GNAudioProcessorView""
// str: ""setAudioProcessor""
// str: ""getAudioProcessor""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b3ca40(void)

{
  int iVar1;
  
  if (DAT_028a50b8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02756790 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027566e0 = FUN_0006d940();
          _DAT_027566c8 = "GNAudioProcessorView";
          _DAT_027566d0 = 0x148;
          _DAT_027566d8 = FUN_00afba50;
          _DAT_027566e8 = 0;
          uRam00000000027566f0 = 0;
          _DAT_027566f8 = 0;
          uRam0000000002756700 = 0;
          _DAT_02756708 = 0;
          uRam0000000002756710 = 0;
          _DAT_02756718 = 0;
          uRam0000000002756720 = 0;
          _DAT_02756728 = 0;
          uRam0000000002756730 = 0;
          _DAT_02756738 = 0;
          uRam0000000002756740 = 0;
          _DAT_02756748 = 0;
          uRam0000000002756750 = 0;
          _DAT_02756758 = 0;
          uRam0000000002756760 = 0;
          _DAT_02756768 = 0;
          uRam0000000002756770 = 0;
          _DAT_02756778 = 0;
          uRam0000000002756780 = 0;
          _DAT_02756788 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a5078 = "setAudioProcessor";
      _DAT_028a5080 = &DAT_027566c8;
      _DAT_028a5088 = 0;
      _DAT_028a5090 = &DAT_0275edb8;
      _DAT_028a5098 = FUN_00b41320;
      _DAT_028a50a0 = 0x919;
      _DAT_028a50a8 = 0;
      uRam00000000028a50b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a5100 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02756790 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027566e0 = FUN_0006d940();
          _DAT_027566c8 = "GNAudioProcessorView";
          _DAT_027566d0 = 0x148;
          _DAT_027566d8 = FUN_00afba50;
          _DAT_027566e8 = 0;
          uRam00000000027566f0 = 0;
          _DAT_027566f8 = 0;
          uRam0000000002756700 = 0;
          _DAT_02756708 = 0;
          uRam0000000002756710 = 0;
          _DAT_02756718 = 0;
          uRam0000000002756720 = 0;
          _DAT_02756728 = 0;
          uRam0000000002756730 = 0;
          _DAT_02756738 = 0;
          uRam0000000002756740 = 0;
          _DAT_02756748 = 0;
          uRam0000000002756750 = 0;
          _DAT_02756758 = 0;
          uRam0000000002756760 = 0;
          _DAT_02756768 = 0;
          uRam0000000002756770 = 0;
          _DAT_02756778 = 0;
          uRam0000000002756780 = 0;
          _DAT_02756788 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a50c0 = "getAudioProcessor";
      _DAT_028a50c8 = &DAT_027566c8;
      _DAT_028a50d0 = 0;
      _DAT_028a50d8 = &DAT_0275edbb;
      _DAT_028a50e0 = FUN_00b413a0;
      _DAT_028a50e8 = _DAT_023d5de0;
      uRam00000000028a50ec = _UNK_023d5de4;
      uRam00000000028a50f0 = _UNK_023d5de8;
      uRam00000000028a50f4 = _UNK_023d5dec;
      if (DAT_02723170 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0270ba18 = FUN_00d4fe50();
          DAT_0270ba00 = "GNAudioProcessor";
          _DAT_0270ba08 = 0x90;
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
      }
      _DAT_028a50f8 = DAT_0270ba00;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @00b38870 — 878 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b38870(int *param_1,ulonglong *param_2,size_t param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  ulonglong uVar10;
  int *piVar11;
  void *pvVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  
  iVar5 = (int)param_1;
  uVar6 = FUN_00b33120();
  if (iVar5 < 1) goto LAB_00b3899b;
  piVar11 = (int *)*param_2;
  dVar4 = *(double *)(unaff_RDI + 0x18);
  iVar24 = *(int *)(unaff_RDI + 0x98);
  uVar9 = 0;
  param_1 = piVar11;
  if ((iVar5 - 1U < 3) ||
     ((uVar10 = (ulonglong)(iVar5 - 1U) + 1, piVar11 < (int *)(unaff_RDI + 0x98U) &&
      (param_1 = piVar11 + uVar10, (int *)(unaff_RDI + 0x90U) < param_1)))) {
LAB_00b38902:
    lVar8 = 0;
    do {
      dVar17 = (double)(iVar24 + (int)lVar8);
      fVar2 = *(float *)(unaff_RDI + 0x94);
      dVar17 = (double)_sin((double)*(float *)(unaff_RDI + 0x90) *
                            (((dVar17 + dVar17) * _DAT_023d5c20) / dVar4));
      piVar11[lVar8] = (int)(float)((double)fVar2 * dVar17);
      lVar8 = lVar8 + 1;
    } while (iVar5 - (int)uVar9 != (int)lVar8);
    iVar7 = iVar24 + (int)lVar8;
  }
  else {
    uVar9 = uVar10 & 0xfffffffffffffffc;
    iVar7 = iVar24 + (int)uVar9;
    iVar21 = iVar24 + _DAT_0238fcc0;
    iVar22 = iVar24 + _UNK_0238fcc4;
    iVar23 = iVar24 + _UNK_0238fcc8;
    iVar24 = iVar24 + _UNK_0238fccc;
    fVar2 = *(float *)(unaff_RDI + 0x90);
    fVar3 = *(float *)(unaff_RDI + 0x94);
    uVar13 = 0;
    do {
      auVar18._0_8_ = ((double)iVar23 + (double)iVar23) * _DAT_023d5c10;
      auVar18._8_8_ = ((double)iVar24 + (double)iVar24) * _UNK_023d5c18;
      auVar20._0_8_ = ((double)iVar21 + (double)iVar21) * _DAT_023d5c10;
      auVar20._8_8_ = ((double)iVar22 + (double)iVar22) * _UNK_023d5c18;
      auVar19._8_8_ = dVar4;
      auVar19._0_8_ = dVar4;
      auVar20 = divpd(auVar20,auVar19);
      auVar19 = divpd(auVar18,auVar19);
      dVar17 = (double)_sin(auVar20._0_8_ * (double)fVar2);
      dVar14 = (double)_sin(auVar20._8_8_ * (double)fVar2);
      dVar15 = (double)_sin();
      dVar16 = (double)_sin(auVar19._8_8_ * (double)fVar2);
      *(ulonglong *)(piVar11 + uVar13) =
           CONCAT44((float)(dVar14 * (double)fVar3),(float)(dVar17 * (double)fVar3));
      *(ulonglong *)(piVar11 + uVar13 + 2) =
           CONCAT44((float)(dVar16 * (double)fVar3),(float)(dVar15 * (double)fVar3));
      uVar13 = uVar13 + 4;
      iVar21 = iVar21 + _DAT_02394180;
      iVar22 = iVar22 + _UNK_02394184;
      iVar23 = iVar23 + _UNK_02394188;
      iVar24 = iVar24 + _UNK_0239418c;
    } while (uVar9 != uVar13);
    piVar11 = piVar11 + uVar9;
    iVar24 = iVar7;
    if (uVar10 != uVar9) goto LAB_00b38902;
  }
  *(int *)(unaff_RDI + 0x98U) = iVar7;
LAB_00b3899b:
  if (1 < (int)uVar6) {
    pvVar12 = (void *)((longlong)iVar5 << 2);
    if (uVar6 != 2) {
      lVar8 = 1;
      do {
        _memcpy(param_1,pvVar12,param_3);
        _memcpy(param_1,pvVar12,param_3);
        lVar1 = lVar8 - ((ulonglong)uVar6 - 1 & 0xfffffffffffffffe);
        lVar8 = lVar8 + 2;
      } while (lVar1 != -1);
    }
    if (((ulonglong)uVar6 - 1 & 1) != 0) {
      _memcpy(param_1,pvVar12,param_3);
      return;
    }
  }
  return;
}




// ============================================================
// @00b3ee10 — 734 bytes
// str: ""%@:""
// ============================================================

void FUN_00b3ee10(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong *plVar4;
  longlong local_c0;
  char local_b8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  undefined4 local_68;
  longlong local_60;
  char local_58;
  
  lVar3 = DAT_0275e938;
  if (DAT_0275e938 != 0) {
    FUN_00d50b00();
  }
  local_a0 = 0;
  local_98 = '\0';
  (**(code **)(*unaff_RDI + 0x508))(param_1,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0xf] + 0x5d0))();
  plVar4 = local_70;
  if (local_70 == (longlong *)0x0) {
    bVar2 = true;
    plVar4 = (longlong *)0x0;
    plVar1 = (longlong *)unaff_RDI[0x10];
  }
  else {
    if ((char)local_68 == '\0') {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    bVar2 = false;
    plVar1 = (longlong *)unaff_RDI[0x10];
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x478))(param_1,(int)unaff_RDI[0xe]);
    local_68 = 1;
    local_70 = &DAT_024c5048;
    local_58 = 0;
    if (local_c0 != 0) {
      FUN_00d50b00();
    }
    local_60 = local_c0;
    local_58 = '\x01';
    FUN_00d8cb40(param_1,&local_70);
    lVar3 = local_80;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    (**(code **)(*plVar1 + 0x968))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &DAT_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = (longlong *)unaff_RDI[0x11];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0xa20))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_0275e940;
    plVar1 = (longlong *)unaff_RDI[0x11];
    if (DAT_0275e940 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar3;
    local_88 = '\x01';
    (**(code **)(*plVar1 + 0xa10))();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d6f8d0();
    (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x998))();
  }
  if (!bVar2 && plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00b3e5a0 — 703 bytes
// str: ""%@:""
// ============================================================

void FUN_00b3e5a0(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong *plVar4;
  longlong local_c0;
  char local_b8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_0275e928;
  if (DAT_0275e928 != 0) {
    FUN_00d50b00();
  }
  local_a0 = 0;
  local_98 = '\0';
  (**(code **)(*unaff_RDI + 0x508))(param_1,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0xf] + 0x5d0))();
  plVar4 = local_60;
  if (local_60 == (longlong *)0x0) {
    bVar2 = true;
    plVar4 = (longlong *)0x0;
    plVar1 = (longlong *)unaff_RDI[0x10];
  }
  else {
    if ((char)local_58 == '\0') {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    bVar2 = false;
    plVar1 = (longlong *)unaff_RDI[0x10];
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x478))(param_1,(int)unaff_RDI[0xe]);
    local_58 = 1;
    local_60 = &DAT_024c5048;
    local_48 = 0;
    if (local_c0 != 0) {
      FUN_00d50b00();
    }
    local_50 = local_c0;
    local_48 = '\x01';
    FUN_00d8cb40(param_1,&local_60);
    local_40 = local_80;
    local_38 = 0;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_38 = '\x01';
    (**(code **)(*plVar1 + 0x968))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &DAT_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = (longlong *)unaff_RDI[0x11];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0xa20))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_0275e930;
    plVar1 = (longlong *)unaff_RDI[0x11];
    if (DAT_0275e930 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar3;
    local_88 = '\x01';
    (**(code **)(*plVar1 + 0xa10))();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar2 && plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00b31190 — 685 bytes
// str: ""GNAudioProcessor""
// str: ""editParameterAtIndex""
// str: ""editValueForKey""
// str: ""vfie@""
// str: ""v@@e@""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b31190(void)

{
  int iVar1;
  
  if (DAT_028a4e38 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02723170 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0270ba18 = FUN_00d4fe50();
          DAT_0270ba00 = "GNAudioProcessor";
          _DAT_0270ba08 = 0x90;
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
      }
      _DAT_028a4df8 = "editParameterAtIndex";
      _DAT_028a4e00 = &DAT_0270ba00;
      _DAT_028a4e08 = 0;
      _DAT_028a4e10 = s_vfie__0275e4b0;
      _DAT_028a4e18 = FUN_00b356b0;
      _DAT_028a4e20 = FUN_00b32070;
      _DAT_028a4e28 = 0;
      uRam00000000028a4e30 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a4e80 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02723170 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0270ba18 = FUN_00d4fe50();
          DAT_0270ba00 = "GNAudioProcessor";
          _DAT_0270ba08 = 0x90;
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
      }
      _DAT_028a4e40 = "editValueForKey";
      _DAT_028a4e48 = &DAT_0270ba00;
      _DAT_028a4e50 = 0;
      _DAT_028a4e58 = s_v__e__0275e4b6;
      _DAT_028a4e60 = FUN_00b35740;
      _DAT_028a4e68 = FUN_00b324d0;
      _DAT_028a4e70 = 0;
      uRam00000000028a4e78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @00b32070 — 672 bytes
// str: ""editParameterAtIndex""
// str: ""vfII@""
// str: ""Edit %@""
// ============================================================

void FUN_00b32070(undefined4 param_1,int param_2)

{
  longlong *plVar1;
  ulonglong *in_RCX;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong local_b8;
  char local_b0;
  longlong local_98;
  char local_90;
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  char local_58;
  undefined4 local_4c;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  local_4c = param_1;
  if (((*in_RCX != 0) && (param_2 != 3)) && (param_2 != 2)) {
    local_34 = (**(code **)(*unaff_RDI + 0x458))();
    FUN_00d50b00();
    local_60 = *in_RCX;
    local_70 = 4;
    local_6c = local_34;
    local_68 = CONCAT44(param_2,unaff_ESI);
    local_78 = (undefined8 *)&DAT_02532338;
    local_58 = 0;
    local_34 = unaff_ESI;
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    uVar2 = FUN_00db2930("vfII@","editParameterAtIndex",&local_78);
    uVar3 = local_34;
    local_78 = (undefined8 *)&DAT_02532338;
    if ((local_58 != '\0') && (local_60 != 0)) {
      uVar2 = FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      uVar2 = FUN_00d50b20();
    }
    uVar3 = (**(code **)(*unaff_RDI + 0x478))(uVar2,uVar3);
    local_70 = 1;
    local_78 = &DAT_024c5048;
    local_60 = local_60 & 0xffffffffffffff00;
    if (local_b8 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = local_b8;
    local_60 = CONCAT71(local_60._1_7_,1);
    FUN_00d8cb40(uVar3,&local_78);
    local_40 = 0;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    local_40 = '\x01';
    local_48 = local_98;
    FUN_00db3140();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    local_78 = &DAT_024c5048;
    if (((char)local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    unaff_ESI = local_34;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = (longlong *)unaff_RDI[8];
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x450))(local_4c);
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x18))(local_4c,unaff_ESI);
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00b2f6b0 — 658 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b2f6dd) */
/* WARNING: Removing unreachable block (ram,0x00b2f6e6) */

void FUN_00b2f6b0(void)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_30;
  char local_28;
  
  FUN_00d50cd0();
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(undefined8 *)(unaff_RDI + 0x28) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x28);
        *(longlong *)(unaff_RDI + 0x28) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(longlong *)(unaff_RDI + 0x28) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x30);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(undefined8 *)(unaff_RDI + 0x30) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x30);
        *(longlong *)(unaff_RDI + 0x30) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(longlong *)(unaff_RDI + 0x30) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(undefined8 *)(unaff_RDI + 0x40) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x40);
        *(longlong *)(unaff_RDI + 0x40) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(longlong *)(unaff_RDI + 0x40) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(undefined8 *)(unaff_RDI + 0x38) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x38);
        *(longlong *)(unaff_RDI + 0x38) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(longlong *)(unaff_RDI + 0x38) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x18) = uVar2;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x48) = uVar3;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x4c) = uVar3;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  FUN_00e88810();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x50) = uVar3;
  return;
}




// ============================================================
// @00b3ce60 — 629 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b3cff4) */
/* WARNING: Removing unreachable block (ram,0x00b3cffd) */

void FUN_00b3ce60(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_38;
  char local_30;
  
  if (unaff_RDI[0x27] == *unaff_RSI) {
    return;
  }
  if ((longlong *)unaff_RDI[0x28] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x4d0))();
    FUN_00d50130();
    if (unaff_RDI[0x28] != 0) {
      unaff_RDI[0x28] = 0;
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  lVar2 = unaff_RDI[0x27];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x27] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((longlong *)*unaff_RSI == (longlong *)0x0) {
    return;
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x4e0))();
  plVar3 = (longlong *)unaff_RDI[0x28];
  plVar4 = plVar3;
  if (plVar3 == local_38) goto LAB_00b3cf70;
  plVar4 = local_38;
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_00b3cf25;
    }
    FUN_00d50b00();
    plVar3 = (longlong *)unaff_RDI[0x28];
    unaff_RDI[0x28] = (longlong)local_38;
  }
  else {
    local_30 = '\0';
LAB_00b3cf25:
    unaff_RDI[0x28] = (longlong)plVar4;
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar4 = local_38;
  }
LAB_00b3cf70:
  if ((local_30 != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x28] == 0) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00afe870();
    (**(code **)(*plVar4 + 0x18))();
    plVar3 = (longlong *)unaff_RDI[0x28];
    if (plVar3 == plVar4) {
      FUN_00d50b20();
    }
    else {
      unaff_RDI[0x28] = (longlong)plVar4;
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x5c8))();
  }
  FUN_01e53c20();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38 == (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x4c0))();
  }
  FUN_01e53c20();
  (**(code **)(*local_38 + 0x4d8))();
  (**(code **)(*unaff_RDI + 0x4e8))(param_2);
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)unaff_RDI[0x28];
  FUN_00d50b00();
  FUN_01e3f820();
  (**(code **)(*plVar3 + 0x4c8))();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00b38c20 — 623 bytes
// str: ""editParameterAtIndex""
// str: ""setQ""
// str: ""setFreq""
// str: ""setDbGain""
// str: ""vfie@""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b38c20(void)

{
  int iVar1;
  
  if (DAT_028a4f68 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028a4f30 = FUN_00b033d0();
      _DAT_028a4f28 = "setQ";
      _DAT_028a4f38 = 0;
      _DAT_028a4f40 = &DAT_0275e7b8;
      _DAT_028a4f48 = FUN_00b3a8b0;
      _DAT_028a4f50 = FUN_00b38eb0;
      _DAT_028a4f58 = 0;
      uRam00000000028a4f60 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a4fb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028a4f78 = FUN_00b033d0();
      _DAT_028a4f70 = "setFreq";
      _DAT_028a4f80 = 0;
      _DAT_028a4f88 = &DAT_0275e7b8;
      _DAT_028a4f90 = FUN_00b3a8b0;
      _DAT_028a4f98 = FUN_00b38ef0;
      _DAT_028a4fa0 = 0;
      uRam00000000028a4fa8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a4ff8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028a4fc0 = FUN_00b033d0();
      _DAT_028a4fb8 = "setDbGain";
      _DAT_028a4fc8 = 0;
      _DAT_028a4fd0 = &DAT_0275e7b8;
      _DAT_028a4fd8 = FUN_00b3a8b0;
      _DAT_028a4fe0 = FUN_00b38f30;
      _DAT_028a4fe8 = 0;
      uRam00000000028a4ff0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a5040 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028a5008 = FUN_00b033d0();
      _DAT_028a5000 = "editParameterAtIndex";
      _DAT_028a5010 = 0;
      _DAT_028a5018 = s_vfie__0275e4b0;
      _DAT_028a5020 = FUN_00b356b0;
      _DAT_028a5028 = FUN_00b32070;
      _DAT_028a5030 = 0;
      uRam00000000028a5038 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @00b2fa60 — 567 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b2faea) */
/* WARNING: Removing unreachable block (ram,0x00b2faf3) */

void FUN_00b2fa60(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  
  lVar2 = DAT_027c7968;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027c7968 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x5a0))(param_1,2);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50de0();
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x30);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
  return;
}




// ============================================================
// @00b31a30 — 556 bytes
// ============================================================

void FUN_00b31a30(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  lVar2 = DAT_0275e470;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0275e470 != 0) {
    FUN_00d50b00();
  }
  iVar4 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027637d0;
  if (iVar4 == 0) {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027637d0 != 0) {
      FUN_00d50b00();
    }
    iVar4 = (**(code **)(*plVar1 + 0x598))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    iVar4 = (uint)(iVar4 == 3) * 3;
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar2 = unaff_RDI[6];
  if (lVar2 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        unaff_RDI[6] = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = unaff_RDI[6];
        unaff_RDI[6] = local_40;
      }
    }
    else {
      local_38 = '\0';
      unaff_RDI[6] = local_40;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar2 = unaff_RDI[7];
  if (lVar2 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        unaff_RDI[7] = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = unaff_RDI[7];
        unaff_RDI[7] = local_40;
      }
    }
    else {
      local_38 = '\0';
      unaff_RDI[7] = local_40;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  if ((cVar3 != '\0') && (iVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))(), 0 < iVar5)) {
    iVar6 = 0;
    do {
      (**(code **)(*(longlong *)*unaff_RSI + 0x430))();
      (**(code **)(*unaff_RDI + 0x450))();
      iVar6 = iVar6 + 1;
    } while (iVar5 != iVar6);
  }
  if (((iVar4 == 3) && ((**(code **)(*(longlong *)*unaff_RSI + 0x470))(), local_68 != '\0')) &&
     (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00b38500 — 549 bytes
// ============================================================

void FUN_00b38500(double param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint unaff_ESI;
  longlong unaff_RDI;
  double dVar9;
  double dVar10;
  
  *(uint *)(unaff_RDI + 8) = unaff_ESI;
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  dVar10 = DAT_023d5b98;
  if (unaff_ESI < 5) {
    dVar10 = *(double *)(&DAT_023d5bc0 + (longlong)(int)unaff_ESI * 8);
  }
  dVar10 = DAT_0238fee8 / dVar10;
  dVar9 = 0.0;
  if (0.0 <= param_1) {
    dVar9 = param_1;
  }
  iVar3 = FUN_00e7d850(dVar9 * dVar10);
  if (unaff_ESI == 2) {
    uVar7 = (short)(iVar3 / 0x1a574) * 0x2aab;
    *(char *)(unaff_RDI + 0x10) =
         (char)(iVar3 / 0x1a574) + ((char)(uVar7 >> 0x12) - (char)((int)uVar7 >> 0x1f)) * -0x18;
    iVar4 = (iVar3 % 0x1a574) % 0x463e;
    cVar8 = (char)((iVar3 % 0x1a574) / 0x463e);
    if (iVar4 < 0x708) {
      *(char *)(unaff_RDI + 0x11) = cVar8 * '\n';
      uVar7 = ((uint)((short)iVar4 * -0x7777) >> 0x10) + iVar4;
      cVar8 = (char)((short)uVar7 >> 4) + (char)((uVar7 & 0xffff) >> 0xf);
      *(char *)(unaff_RDI + 0x12) = cVar8;
      *(char *)(unaff_RDI + 0x13) = cVar8 * -0x1e + (char)iVar4;
    }
    else {
      uVar7 = iVar4 - 0x708U & 0xffff;
      uVar5 = uVar7 % 0x706;
      *(char *)(unaff_RDI + 0x11) = (char)(uVar7 / 0x706) + cVar8 * '\n' + '\x01';
      if ((ushort)uVar5 < 0x1c) {
        *(undefined1 *)(unaff_RDI + 0x12) = 0;
        *(char *)(unaff_RDI + 0x13) = (char)uVar5 + '\x02';
      }
      else {
        uVar7 = (uVar5 - 0x1c & 0xffff) / 0x1e;
        cVar8 = (char)uVar7;
        *(char *)(unaff_RDI + 0x12) = cVar8 + '\x01';
        *(char *)(unaff_RDI + 0x13) = (char)uVar5 + (cVar8 * '\x02' - (char)(uVar7 << 5)) + -0x1c;
      }
    }
  }
  else {
    iVar6 = FUN_00e7d850(dVar10);
    *(char *)(unaff_RDI + 0x13) = (char)(iVar3 % iVar6);
    iVar4 = (int)((longlong)iVar3 / (longlong)iVar6);
    iVar2 = iVar4 / 0x3c;
    cVar8 = (char)iVar2;
    *(char *)(unaff_RDI + 0x12) = (char)((longlong)iVar3 / (longlong)iVar6) + cVar8 * -0x3c;
    lVar1 = (longlong)iVar2 * 0x88888889;
    *(char *)(unaff_RDI + 0x11) =
         cVar8 + ((char)(uint)((ulonglong)lVar1 >> 0x25) - (char)(lVar1 >> 0x3f)) * -0x3c;
    iVar4 = iVar4 / 0xe10;
    *(char *)(unaff_RDI + 0x10) =
         (char)iVar4 +
         ((char)((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 2) - (char)(iVar4 >> 0x1f)) * -0x18;
  }
  return;
}




// ============================================================
// @01689980 — 526 bytes
// str: ""false && \"playback region still in use by playback plug-in extension!\"""
// str: ""false && \"playback region still in use by preview plug-in extension!\"""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01689b48) */
/* WARNING: Removing unreachable block (ram,0x01689b51) */
/* WARNING: Removing unreachable block (ram,0x01689a6e) */
/* WARNING: Removing unreachable block (ram,0x01689a77) */
/* WARNING: Removing unreachable block (ram,0x016899f7) */
/* WARNING: Removing unreachable block (ram,0x01689a20) */
/* WARNING: Removing unreachable block (ram,0x016899f9) */
/* WARNING: Removing unreachable block (ram,0x01689a22) */

void FUN_01689980(void)

{
  longlong lVar1;
  char cVar2;
  longlong unaff_RDI;
  int iVar3;
  int local_60;
  longlong local_50;
  char local_48;
  
  cVar2 = FUN_016be350();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(unaff_RDI + 0x58);
    if (lVar1 != 0) {
      local_60 = -1;
      while (local_60 = local_60 + 1, local_60 < *(int *)(lVar1 + 0xc)) {
        FUN_0168e8e0();
        cVar2 = FUN_00d24090();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          FUN_016aea20();
          FUN_00e82970();
        }
      }
      FUN_016be7c0();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x60);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar3 = 0;
        do {
          FUN_0168fda0();
          cVar2 = FUN_00d24090();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            FUN_016aea20();
            FUN_00e82970();
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(lVar1 + 0xc));
      }
      FUN_016be7c0();
    }
  }
  return;
}




// ============================================================
// @00b30e80 — 509 bytes
// ============================================================

void FUN_00b30e80(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  plVar5 = DAT_028a4e88;
  if ((DAT_028a4e88 == (longlong *)0x0) || (DAT_028a4e91 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a4e88 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (DAT_028a4e88 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = DAT_028a4e88 != (longlong *)0x0;
        DAT_028a4e88 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a4e90 == '\0') {
        DAT_028a4e90 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0275e490;
      if (DAT_0275e490 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0275e498;
      if (DAT_0275e498 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar4;
      local_48 = '\x01';
      FUN_00df16f0(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0275e4a0;
      if (DAT_0275e4a0 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1690();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0275e4a8;
      if (DAT_0275e4a8 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1570();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      DAT_028a4e91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a4e91 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = DAT_028a4e88;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      goto LAB_00b31063;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b31063:
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00b37610 — 506 bytes
// str: ""GNAudioProcessor""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b37610(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar4;
  longlong *local_58;
  char local_50;
  longlong local_38;
  char local_30;
  
  plVar1 = *(longlong **)(unaff_RSI + 0x90);
  if ((plVar1 == (longlong *)0x0) || (*(longlong *)(unaff_RSI + 0x78) == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_00d50b00();
  local_38 = *(longlong *)(unaff_RSI + 0x78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_00d50b00();
  }
  local_30 = '\x01';
  pplVar4 = &local_58;
  (**(code **)(*plVar1 + 0x18))(&local_38,&stack0xffffffffffffffb8);
  plVar1 = local_58;
  if ((DAT_02723170 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_0270ba18 = FUN_00d4fe50();
    DAT_0270ba00 = "GNAudioProcessor";
    _DAT_0270ba08 = 0x90;
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_00b376c6;
  }
  pplVar4 = (longlong **)&DAT_02802688;
LAB_00b376c6:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *unaff_RDI = (longlong)plVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = (longlong)plVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RSI != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00b31d20 — 501 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b31e7a) */
/* WARNING: Removing unreachable block (ram,0x00b31e01) */
/* WARNING: Removing unreachable block (ram,0x00b31df8) */
/* WARNING: Removing unreachable block (ram,0x00b31e83) */

void FUN_00b31d20(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  
  lVar2 = DAT_0275e470;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0275e470 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x5a0))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*unaff_RDI + 0x548))();
  plVar1 = (longlong *)*unaff_RSI;
  if (cVar3 == '\0') {
    (**(code **)(*plVar1 + 0x400))();
  }
  else {
    lVar2 = unaff_RDI[6];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x400))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  cVar3 = (**(code **)(*unaff_RDI + 0x550))();
  plVar1 = (longlong *)*unaff_RSI;
  if (cVar3 == '\0') {
    (**(code **)(*plVar1 + 0x400))();
  }
  else {
    lVar2 = unaff_RDI[7];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x400))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  plVar1 = (longlong *)*unaff_RSI;
  (**(code **)(*unaff_RDI + 0x558))();
  (**(code **)(*plVar1 + 0x3a8))();
  cVar3 = (**(code **)(*unaff_RDI + 0x558))();
  if (cVar3 != '\0') {
    iVar4 = (**(code **)(*unaff_RDI + 0x448))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        plVar1 = (longlong *)*unaff_RSI;
        (**(code **)(*unaff_RDI + 0x458))();
        (**(code **)(*plVar1 + 0x3c0))();
        iVar5 = iVar5 + 1;
      } while (iVar4 != iVar5);
    }
  }
  return;
}



