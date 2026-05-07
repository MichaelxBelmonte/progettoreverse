// Function: FUN_01b25670
// Address: 01b25670
// Size: 3713 bytes
// Class: MUScalePitchSystem
// String references:
//   "MUScalePitchSystem"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01b25670(pthread_key_t param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  undefined7 uVar11;
  longlong unaff_RDI;
  longlong *plVar12;
  longlong **pplVar13;
  undefined4 uVar14;
  float fVar15;
  longlong *local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if ((*(char *)(unaff_RDI + 0x315) != '\0') && (*(char *)(unaff_RDI + 0x316) != '\0')) {
    FUN_01caeae0();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b256ec;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_01b256ec:
      FUN_01d64cb0();
      plVar10 = local_40;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        FUN_01d64cb0();
        iVar3 = FUN_01d5b230();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar10 = (longlong *)(ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),iVar3 != 0);
        if ((iVar3 != 0) && (param_2 != '\0')) {
          FUN_01caeae0();
          plVar12 = local_40;
          if ((local_38 == '\0') &&
             (((local_40 != (longlong *)0x0 && (FUN_00d50b00(), local_38 != '\0')) &&
              (local_40 != (longlong *)0x0)))) {
            FUN_00d50b20();
          }
          local_60 = plVar12;
          FUN_01ad3cb0();
          local_80 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
              goto LAB_01b257bf;
            }
          }
          else {
LAB_01b257bf:
            if ((plVar12 != (longlong *)0x0) && (local_80 != (longlong *)0x0)) {
              local_70 = plVar1;
              uVar14 = FUN_01d66da0();
              local_148 = DAT_027e3c40;
              if (DAT_027e3c40 != 0) {
                uVar14 = FUN_00d50b00();
              }
              local_140 = '\x01';
              pplVar13 = &local_40;
              FUN_000175c0(uVar14,&local_148);
              plVar1 = local_40;
              if ((DAT_027c0160 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
                _DAT_0270ab28 = FUN_0015ea50();
                _DAT_0270ab10 = "MUScalePitchSystem";
                _DAT_0270ab18 = 0x78;
                param_1 = 0x15ecf0;
                _DAT_0270ab20 = FUN_0015ecf0;
                _DAT_0270ab30 = 0;
                uRam000000000270ab38 = 0;
                _DAT_0270ab40 = 0;
                uRam000000000270ab48 = 0;
                _DAT_0270ab50 = 0;
                uRam000000000270ab58 = 0;
                _DAT_0270ab60 = 0;
                uRam000000000270ab68 = 0;
                _DAT_0270ab70 = 0;
                uRam000000000270ab78 = 0;
                _DAT_0270ab80 = 0;
                uRam000000000270ab88 = 0;
                _DAT_0270ab90 = 0;
                uRam000000000270ab98 = 0;
                _DAT_0270aba0 = 0;
                uRam000000000270aba8 = 0;
                _DAT_0270abb0 = 0;
                uRam000000000270abb8 = 0;
                _DAT_0270abc0 = 0;
                uRam000000000270abc8 = 0;
                _DAT_0270abd0 = 0;
                ___cxa_guard_release();
              }
              if (plVar1 == (longlong *)0x0) {
                pplVar13 = (longlong **)&DAT_02802688;
              }
              else {
                (**(code **)(*plVar1 + 0x360))();
                cVar2 = FUN_00e85ea0();
                if (cVar2 == '\0') {
                  pplVar13 = (longlong **)&DAT_02802688;
                }
              }
              local_58 = *pplVar13;
              if (*(char *)(pplVar13 + 1) == '\0') {
                if (local_58 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar13 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_140 != '\0') && (local_148 != 0)) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              uVar14 = FUN_01d66da0();
              local_138 = DAT_027e3de0;
              if (DAT_027e3de0 != 0) {
                uVar14 = FUN_00d50b00();
              }
              local_130 = '\x01';
              pplVar13 = &local_40;
              FUN_000175c0(uVar14,&local_138);
              plVar1 = local_40;
              FUN_0013db50();
              if (plVar1 == (longlong *)0x0) {
LAB_01b25955:
                pplVar13 = (longlong **)&DAT_02802688;
              }
              else {
                (**(code **)(*plVar1 + 0x360))();
                cVar2 = FUN_00e85ea0();
                if (cVar2 == '\0') goto LAB_01b25955;
              }
              plVar1 = *pplVar13;
              if (*(char *)(pplVar13 + 1) == '\0') {
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar13 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_130 != '\0') && (local_138 != 0)) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_88 = plVar1;
              uVar14 = FUN_01d66da0();
              local_128 = DAT_02709968;
              if (DAT_02709968 != 0) {
                uVar14 = FUN_00d50b00();
              }
              local_120 = '\x01';
              pplVar13 = &local_40;
              FUN_000175c0(uVar14,&local_128);
              plVar1 = local_40;
              FUN_002771e0();
              if (plVar1 == (longlong *)0x0) {
LAB_01b25a38:
                pplVar13 = (longlong **)&DAT_02802688;
              }
              else {
                (**(code **)(*plVar1 + 0x360))();
                cVar2 = FUN_00e85ea0();
                if (cVar2 == '\0') goto LAB_01b25a38;
              }
              plVar12 = local_60;
              local_78 = *pplVar13;
              if (*(char *)(pplVar13 + 1) == '\0') {
                if (local_78 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar13 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_120 != '\0') && (local_128 != 0)) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              plVar1 = local_58;
              if (((local_88 != (longlong *)0x0) && (local_58 != (longlong *)0x0)) &&
                 (local_78 != (longlong *)0x0)) {
                local_118 = local_58;
                local_110 = '\0';
                FUN_0173b120();
                plVar10 = local_40;
                if (plVar1 == local_40) {
LAB_01b25b33:
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_38 == '\0') {
                    if (local_40 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    local_58 = plVar10;
                    FUN_00d50b20();
                    goto LAB_01b25b33;
                  }
                  local_58 = local_40;
                  FUN_00d50b20();
                  local_38 = '\0';
                  local_58 = plVar10;
                }
                if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar5 = _pthread_getspecific(param_1);
                if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                  param_1 = (pthread_key_t)local_80;
                }
                fVar15 = (float)FUN_0173e3a0();
                iVar3 = FUN_00e7d780(fVar15 / DAT_023908e0);
                if (iVar3 != 0) {
                  iVar4 = FUN_01d654a0();
                  if (iVar4 == 0) {
                    pvVar5 = _pthread_getspecific(param_1);
                    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                      param_1 = (pthread_key_t)local_58;
                    }
                    FUN_0173b6f0();
                    pvVar5 = _pthread_getspecific(param_1);
                    if (pvVar5 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01738020();
                    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    iVar4 = FUN_01d654a0();
                    if (iVar4 == 1) {
                      pvVar5 = _pthread_getspecific(param_1);
                      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                        param_1 = (pthread_key_t)local_58;
                      }
                      FUN_0174dc60();
                      pvVar5 = _pthread_getspecific(param_1);
                      if (pvVar5 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_0173ecc0((float)iVar3 * DAT_023908e0);
                    }
                  }
                }
                *(undefined1 *)(unaff_RDI + 0x1d8) = 0;
                *(undefined1 *)(unaff_RDI + 0x1da) = 1;
                FUN_01a1d6e0();
                plVar1 = local_40;
                plVar12 = local_60;
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar1 != (longlong *)0x0) {
                  FUN_01a1d6e0();
                  (**(code **)(*local_50 + 0xa20))();
                  plVar1 = local_40;
                  if (local_38 == '\0') {
                    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                       (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  local_68 = plVar1;
                  uVar14 = FUN_01a1d6e0();
                  local_108 = local_78;
                  local_100 = '\0';
                  FUN_019c1760(uVar14,&local_108);
                  local_b8 = local_40;
                  local_b0 = 0;
                  if (local_38 == '\0') {
                    if (local_40 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  local_b0 = '\x01';
                  pVar9 = 0;
                  uVar14 = FUN_012912a0(0,0,0);
                  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar5 = _pthread_getspecific(pVar9);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_f8 = local_88;
                  local_f0 = '\0';
                  pvVar5 = _pthread_getspecific(pVar9);
                  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                    pVar9 = (pthread_key_t)local_78;
                  }
                  FUN_0132d610();
                  local_a8 = local_40;
                  local_a0 = 0;
                  if (local_38 == '\0') {
                    if (local_40 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  local_a0 = '\x01';
                  FUN_01a1d6e0();
                  (**(code **)(*local_158 + 0x9f8))();
                  pvVar5 = _pthread_getspecific(pVar9);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012caf10();
                  local_98 = local_50;
                  local_90 = 0;
                  if (local_48 == '\0') {
                    if (local_50 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_48 = '\0';
                  }
                  local_90 = '\x01';
                  uVar7 = FUN_00e7bdb0();
                  uVar8 = FUN_00e7bdb0();
                  local_d0 = '\0';
                  local_d8 = 0;
                  pVar9 = (pthread_key_t)&local_98;
                  FUN_01516650(uVar14,&local_a8,uVar7,uVar8);
                  plVar12 = local_60;
                  if ((local_d0 != '\0') && (local_d8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_e0 != '\0') && (local_e8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar5 = _pthread_getspecific(pVar9);
                  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                    pVar9 = (pthread_key_t)local_68;
                  }
                  FUN_0150eb60();
                  pvVar5 = _pthread_getspecific(pVar9);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_018232c0();
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar5 = _pthread_getspecific(pVar9);
                  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                    pVar9 = (pthread_key_t)local_68;
                  }
                  FUN_01510030();
                  pvVar5 = _pthread_getspecific(pVar9);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0124ae40();
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_01a1d6e0();
                  (**(code **)(*local_50 + 0x9f8))();
                  plVar1 = local_40;
                  if (local_38 == '\0') {
                    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                       (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar5 = _pthread_getspecific(pVar9);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012cb110();
                  pvVar5 = _pthread_getspecific(pVar9);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012e7210();
                  plVar10 = local_40;
                  if (local_38 == '\0') {
                    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                       (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  local_c8 = plVar10;
                  local_c0 = '\0';
                  FUN_012879b0();
                  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar10 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  if (plVar1 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  if (local_68 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                }
              }
              if (local_78 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              plVar10 = local_58;
              if (local_88 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if (plVar10 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            if (local_80 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          uVar11 = (undefined7)((ulonglong)plVar10 >> 8);
          if (plVar12 == (longlong *)0x0) {
            plVar10 = (longlong *)CONCAT71(uVar11,1);
          }
          else {
            plVar10 = (longlong *)CONCAT71(uVar11,1);
            FUN_00d50b20();
          }
        }
      }
      FUN_00d50b20();
      goto LAB_01b263cf;
    }
  }
  plVar10 = (longlong *)0x0;
LAB_01b263cf:
  return (ulonglong)plVar10 & 0xffffffff;
}


