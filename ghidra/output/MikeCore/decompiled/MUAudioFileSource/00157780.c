// Function: FUN_00157780
// Address: 00157780
// Size: 7660 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"
//   "MULSSGenerator"


/* WARNING: Removing unreachable block (ram,0x00157ccb) */
/* WARNING: Removing unreachable block (ram,0x00157cd7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00157780(longlong *param_1)

{
  pthread_key_t pVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  pthread_key_t pVar11;
  longlong *plVar12;
  longlong **pplVar13;
  longlong *plVar14;
  longlong *unaff_RSI;
  longlong *plVar15;
  longlong unaff_RDI;
  longlong *plVar16;
  bool bVar17;
  bool bVar18;
  undefined4 uVar19;
  longlong *local_200;
  char local_1f8;
  longlong *local_1f0;
  char local_1e8;
  longlong *local_1e0;
  char local_1d8;
  longlong *local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  undefined8 *local_1a0;
  char local_198;
  undefined8 *local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
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
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_70;
  char local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  plVar12 = param_1;
  (**(code **)(*(longlong *)*unaff_RSI + 0x628))();
  pVar11 = (pthread_key_t)plVar12;
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  plVar12 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00157815;
    }
    if (*(longlong *)(unaff_RDI + 0x80) != 0) {
      *(undefined8 *)(unaff_RDI + 0x80) = 0;
      goto LAB_0015785a;
    }
  }
  else {
    local_68 = '\0';
LAB_00157815:
    plVar14 = *(longlong **)(unaff_RDI + 0x80);
    if (plVar14 != plVar12) {
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x80) = plVar12;
      if (plVar14 != (longlong *)0x0) {
LAB_0015785a:
        FUN_00d50b20();
      }
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  local_48 = local_70;
  if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  plVar12 = local_70;
  if (((local_68 == '\0') && (local_70 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_68 != '\0' && (local_70 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pVar11 = (pthread_key_t)local_48;
  }
  FUN_012caf10();
  if (local_70 == (longlong *)0x0) {
    bVar17 = true;
  }
  else {
    pvVar6 = _pthread_getspecific(pVar11);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      pVar11 = (pthread_key_t)local_48;
    }
    FUN_012caf10();
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_016c2e90();
    bVar17 = iVar4 == 0;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar17) && (*(longlong *)(unaff_RDI + 0xa0) != 0)) {
    FUN_00d50b00();
    lVar7 = *(longlong *)(unaff_RDI + 0xa0);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_016c2e90();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (iVar4 != 0) {
      pvVar6 = _pthread_getspecific(pVar11);
      if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        lVar7 = *(longlong *)(unaff_RDI + 0xa0);
      }
      else {
        pVar11 = (pthread_key_t)local_48;
        lVar7 = *(longlong *)(unaff_RDI + 0xa0);
      }
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_012cae50();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
  }
  lVar7 = *(longlong *)(unaff_RDI + 0x98);
  if (lVar7 != 0) {
    FUN_00d50b00();
    local_68 = '\0';
    local_70 = (longlong *)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = lVar7;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar4 = -local_58._4_4_;
        }
        else {
          iVar4 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar4);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar4 = 0;
        }
        local_58 = CONCAT44(iVar4,(int)local_58);
      }
      lVar7 = (longlong)(int)local_58;
      iVar4 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar4);
      if (*(int *)(local_60 + 0xc) <= iVar4) break;
      local_70 = *(longlong **)(*(longlong *)(local_60 + 0x10) + 8 + lVar7 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_60 + 0x10));
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb4b0();
      plVar14 = local_70;
      if ((DAT_026fdd70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
      pplVar13 = (longlong **)&DAT_02802688;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar13 = &local_70;
        if (cVar3 == '\0') {
          pplVar13 = (longlong **)&DAT_02802688;
        }
      }
      plVar14 = *pplVar13;
      if (*(char *)(pplVar13 + 1) == '\0') {
        if (plVar14 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_00157d51;
        }
      }
      else {
        *(undefined1 *)(pplVar13 + 1) = 0;
        if (plVar14 != (longlong *)0x0) {
LAB_00157d51:
          pVar11 = (pthread_key_t)pplVar13;
          if (*param_1 != 0) {
            pvVar6 = _pthread_getspecific(pVar11);
            plVar15 = plVar14;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar15 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar15 + 0x478))();
            uVar19 = (**(code **)(*local_90 + 0x388))();
            plVar15 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (longlong *)0x0) && (uVar19 = FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (longlong *)0x0)) {
                uVar19 = FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
              uVar19 = FUN_00d50b20();
            }
            local_200 = plVar15;
            local_1f8 = '\0';
            (**(code **)(*(longlong *)*param_1 + 0x400))(uVar19,&local_200);
            plVar2 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_1f8 != '\0') && (local_200 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            cVar3 = (**(code **)(*plVar2 + 0x398))();
            if (cVar3 == '\0') {
LAB_00157ed0:
              pvVar6 = _pthread_getspecific(pVar11);
              plVar16 = plVar14;
              if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                plVar16 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              cVar3 = (**(code **)(*plVar16 + 0x498))();
              if (cVar3 != '\0') {
                pvVar6 = _pthread_getspecific(pVar11);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_1d0 = plVar2;
                local_1c8 = '\0';
                FUN_0123bf80();
                if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_1f0 = plVar2;
              local_1e8 = '\0';
              cVar3 = FUN_00b80190();
              if ((local_1e8 != '\0') && (local_1f0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar3 == '\0') goto LAB_00157ed0;
              pvVar6 = _pthread_getspecific(pVar11);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_1e0 = plVar2;
              local_1d8 = '\0';
              FUN_0123ab70();
              if ((local_1d8 != '\0') && (local_1e0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
            if (plVar15 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          pvVar6 = _pthread_getspecific(pVar11);
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar14 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar14 + 0x480))();
          FUN_00d50b20();
        }
      }
    }
    lVar7 = local_60;
    FUN_00115e00();
    pVar11 = (pthread_key_t)lVar7;
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  pVar1 = (pthread_key_t)plVar12;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pVar11 = pVar1;
  }
  FUN_015058d0();
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  plVar14 = local_70;
  if (local_70 == (longlong *)0x0) {
LAB_001582c2:
    if (*(longlong *)(unaff_RDI + 0x90) == 0) {
      bVar17 = false;
    }
    else {
      FUN_00d50b00();
      lVar7 = *(longlong *)(unaff_RDI + 0x90);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510030();
      bVar17 = local_f0 != 0;
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (plVar14 != (longlong *)0x0) goto LAB_00158375;
  }
  else {
    pvVar6 = _pthread_getspecific(pVar11);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      pVar11 = pVar1;
    }
    FUN_015058d0();
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_0124ae30();
    if (iVar4 == 0) goto LAB_001582c2;
    bVar17 = false;
LAB_00158375:
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    FUN_00d50b00();
    lVar7 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    bVar18 = local_70 != (longlong *)0x0;
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((bool)(bVar18 & (bVar17 ^ 1U))) {
      lVar7 = *(longlong *)(unaff_RDI + 0x90);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510030();
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_0124ae30();
      pvVar6 = _pthread_getspecific(pVar11);
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar11 = pVar1;
      }
      FUN_015058d0();
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510030();
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar5 = FUN_0124ae30();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      bVar17 = (bool)(bVar17 | iVar5 < iVar4);
    }
    if (*(longlong *)(unaff_RDI + 0x90) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      if (bVar17) {
        pvVar6 = _pthread_getspecific(pVar11);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          pVar11 = pVar1;
        }
        FUN_015058d0();
        pvVar6 = _pthread_getspecific(pVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = *(longlong *)(unaff_RDI + 0x90);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        local_1a8 = '\x01';
        local_1b0 = lVar7;
        FUN_015127c0();
        if ((local_1a8 != '\0') && (local_1b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_001563c0();
  lVar7 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pVar11 = (pthread_key_t)local_48;
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8b20();
  local_c0 = local_70;
  local_b8 = 0;
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_b8 = '\x01';
  FUN_012e8aa0();
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  lVar7 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pVar11 = (pthread_key_t)local_48;
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8a60();
  local_b0 = local_70;
  local_a8 = 0;
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_a8 = '\x01';
  FUN_012e89e0();
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar13 = &local_70;
  FUN_012e78c0();
  plVar14 = local_70;
  if ((DAT_0270c820 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    pVar11 = 0x15ef30;
    _DAT_027e77e0 = FUN_0015ef30;
    _DAT_027e77f0 = 0;
    uRam00000000027e77f8 = 0;
    _DAT_027e7800 = 0;
    uRam00000000027e7808 = 0;
    _DAT_027e7810 = 0;
    uRam00000000027e7818 = 0;
    _DAT_027e7820 = 0;
    uRam00000000027e7828 = 0;
    _DAT_027e7830 = 0;
    uRam00000000027e7838 = 0;
    _DAT_027e7840 = 0;
    uRam00000000027e7848 = 0;
    _DAT_027e7850 = 0;
    uRam00000000027e7858 = 0;
    _DAT_027e7860 = 0;
    uRam00000000027e7868 = 0;
    _DAT_027e7870 = 0;
    uRam00000000027e7878 = 0;
    _DAT_027e7880 = 0;
    uRam00000000027e7888 = 0;
    _DAT_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00158ace;
  }
  pplVar13 = (longlong **)&DAT_02802688;
LAB_00158ace:
  plVar14 = *pplVar13;
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar14 == (longlong *)0x0) {
    puVar9 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar9[7] = 0;
    puVar9[8] = 0;
    pVar11 = 0x25d31f0;
    *puVar9 = &DAT_025d31f0;
    *(undefined4 *)(puVar9 + 9) = 0;
    puVar9[10] = 0;
    *(undefined1 *)(puVar9 + 0xb) = 0;
    *(undefined8 *)((longlong)puVar9 + 0x5c) = 0;
    *(undefined8 *)((longlong)puVar9 + 99) = 0;
    (*DAT_025d3208)();
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar10 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar11 = 0x2607248;
    *puVar10 = &DAT_02607248;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    *(undefined8 *)((longlong)puVar10 + 0x76) = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0;
    puVar10[0x14] = 0;
    puVar10[0x15] = 0;
    puVar10[0x16] = 0;
    puVar10[0x17] = 0;
    puVar10[0x18] = 0;
    puVar10[0x19] = 0;
    puVar10[0x1a] = 0;
    (*DAT_02607260)();
    local_198 = '\x01';
    local_1a0 = puVar10;
    FUN_012c64a0();
    if ((local_198 != '\0') && (local_1a0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    lVar7 = *(longlong *)(unaff_RDI + 0x88);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_188 = '\0';
    local_190 = puVar9;
    FUN_012e7710();
    if ((local_188 != '\0') && (local_190 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar19 = FUN_01f27fe0();
  local_180 = *unaff_RSI;
  local_178 = '\0';
  FUN_000c4290(uVar19,&local_180);
  plVar14 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_001570d0();
  if (plVar14 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pVar11 = (pthread_key_t)local_48;
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_d8 = 0;
  lVar7 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  local_e0 = lVar7;
  FUN_012e66e0();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pVar11 = pVar1;
  }
  FUN_015058d0();
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c8 = 0;
  lVar7 = *(longlong *)(unaff_RDI + 0x90);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_d0 = lVar7;
  FUN_0150f1c0();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar19 = FUN_004405c0();
  local_170 = *(longlong *)(unaff_RDI + 0x88);
  if (local_170 != 0) {
    uVar19 = FUN_00d50b00();
  }
  local_168 = '\x01';
  FUN_004b8020(uVar19,&local_170);
  plVar14 = local_70;
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar14 == (longlong *)0x0) {
    FUN_004405c0();
    FUN_004b8a30();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_004405c0();
    local_160 = *(longlong *)(unaff_RDI + 0x88);
    if (local_160 != 0) {
      FUN_00d50b00();
    }
    local_158 = '\x01';
    FUN_003b6860();
    local_a0 = local_40;
    local_98 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_98 = '\x01';
    FUN_004b7a60();
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_004405c0();
    FUN_004b8a40();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x628))();
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar7 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  local_148 = '\x01';
  lVar8 = *(longlong *)(unaff_RDI + 0x90);
  local_150 = lVar7;
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  local_138 = '\x01';
  lVar7 = *(longlong *)(unaff_RDI + 0x98);
  local_140 = lVar8;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  plVar14 = &local_130;
  local_130 = lVar7;
  uVar19 = FUN_0131ba70(plVar14,&local_140,1,1);
  pVar11 = (pthread_key_t)plVar14;
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00155070();
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar7 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_118 = '\0';
    local_120 = 0;
    FUN_0150ceb0();
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    lVar7 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_108 = '\0';
    local_110 = 0;
    FUN_0150c7f0();
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    lVar7 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_f8 = '\0';
    local_100 = 0;
    FUN_0150d0b0();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0xa0) != 0) {
    *(undefined8 *)(unaff_RDI + 0xa0) = 0;
    FUN_00d50b20();
  }
  if (plVar12 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return uVar19;
}


