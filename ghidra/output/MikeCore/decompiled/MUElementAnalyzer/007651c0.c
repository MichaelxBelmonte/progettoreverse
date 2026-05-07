// Function: FUN_007651c0
// Address: 007651c0
// Size: 5742 bytes
// Class: MUElementAnalyzer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_007651c0(undefined4 param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar11;
  pthread_key_t pVar12;
  longlong lVar13;
  int iVar14;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar15;
  double dVar16;
  undefined8 uVar17;
  longlong *local_res8;
  undefined1 local_res10;
  longlong local_1d8;
  undefined1 local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  undefined4 local_138;
  undefined4 local_134;
  longlong local_130;
  char local_128;
  longlong *local_120;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  char local_90;
  undefined7 uStack_8f;
  char local_88;
  longlong local_80;
  longlong local_78;
  char local_70 [8];
  longlong local_68;
  char local_60 [8];
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong local_40;
  
  local_138 = param_4;
  local_134 = param_1;
  local_120 = param_2;
  FUN_00d23310();
  lVar8 = local_68;
  local_90 = local_60[0];
  pcVar11 = &local_90;
  pcVar6 = local_60;
  if (local_60[0] == '\0') {
    pcVar6 = pcVar11;
  }
  *pcVar6 = '\0';
  if ((local_60[0] != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  pVar12 = (pthread_key_t)pcVar11;
  pvVar7 = _pthread_getspecific(pVar12);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  local_80 = local_78;
  if (local_70[0] == '\0') {
    if (((local_78 != 0) && (FUN_00d50b00(), local_70[0] != '\0')) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70[0] = '\0';
  }
  if ((local_90 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar12);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pVar12 = (pthread_key_t)local_80;
  }
  FUN_012e60a0();
  lVar8 = local_68;
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    goto LAB_0076682b;
  }
  if (*param_3 == 0) {
    pvVar7 = _pthread_getspecific(pVar12);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      pVar12 = (pthread_key_t)local_80;
    }
    FUN_012e60a0();
    lVar9 = local_68;
    lVar8 = *param_3;
    if (lVar8 == local_68) {
      if (((char)param_3[1] != '\0') || (local_68 == 0)) goto LAB_00765417;
      if (local_60[0] == '\0') {
        FUN_00d50b00();
        goto LAB_00765412;
      }
LAB_007653df:
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      lVar13 = param_3[1];
      if (local_60[0] != '\0') {
        *param_3 = local_68;
        if (((char)lVar13 != '\0') && (lVar8 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_007653df;
      }
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      *param_3 = lVar9;
      if (((char)lVar13 != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
LAB_00765412:
      *(undefined1 *)(param_3 + 1) = 1;
LAB_00765417:
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar8 = DAT_02729560;
    plVar1 = (longlong *)*param_3;
    if (DAT_02729560 != 0) {
      FUN_00d50b00();
    }
    local_1c8 = lVar8;
    local_1c0 = '\x01';
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_0141b1a0();
      lVar9 = local_68;
      lVar8 = *param_3;
      if (lVar8 == local_68) {
        if (((char)param_3[1] != '\0') || (local_68 == 0)) goto LAB_0076550c;
        if (local_60[0] == '\0') {
          FUN_00d50b00();
          goto LAB_00765507;
        }
      }
      else {
        lVar13 = param_3[1];
        if (local_60[0] == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
          *param_3 = lVar9;
          if (((char)lVar13 != '\0') && (lVar8 != 0)) {
            FUN_00d50b20();
          }
LAB_00765507:
          *(undefined1 *)(param_3 + 1) = 1;
LAB_0076550c:
          if ((local_60[0] != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_00765520;
        }
        *param_3 = local_68;
        if (((char)lVar13 != '\0') && (lVar8 != 0)) {
          FUN_00d50b20();
        }
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
  }
LAB_00765520:
  local_1b8 = *param_3;
  local_1b0 = '\0';
  FUN_0141af60();
  local_40 = local_68;
  if (local_60[0] == '\0') {
    if (((local_68 != 0) && (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar12);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pVar12 = (pthread_key_t)local_40;
  }
  cVar3 = FUN_0141ba80();
  lVar8 = DAT_02708e90;
  if (cVar3 == '\0') {
    if (DAT_02708e90 != 0) {
      FUN_00d50b00();
    }
    dVar16 = (double)FUN_00e7d6f0();
    uVar10 = (ulonglong)(dVar16 * DAT_023907c0);
    dVar16 = dVar16 * DAT_023907c0 - _DAT_023907c8;
    pVar12 = 0xaaaaaaab;
    uVar17 = FUN_0071a120();
    if ((((local_60[0] == '\0') && (local_68 != 0)) &&
        (uVar17 = FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != 0)) {
      uVar17 = FUN_00d50b20();
    }
    bVar4 = (byte)(((longlong)dVar16 & (longlong)uVar10 >> 0x3f | uVar10) / 3);
    local_78 = lVar8;
    local_70[0] = '\0';
    FUN_000175c0(uVar17,&local_78);
    lVar9 = local_68;
    if (local_60[0] == '\0') {
      if (((local_68 != 0) && (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
    }
    if ((local_70[0] != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      local_60[0] = '\0';
      local_68 = lVar9;
      bVar4 = FUN_00c70bc0();
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if ((lVar9 != 0 & bVar4) == 0) {
      FUN_00d23310();
      lVar8 = local_68;
      pcVar11 = &local_90;
      pcVar6 = local_60;
      if (local_60[0] == '\0') {
        pcVar6 = pcVar11;
      }
      local_90 = local_60[0];
      *pcVar6 = '\0';
      if ((local_60[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      pVar12 = (pthread_key_t)pcVar11;
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      lVar9 = local_78;
      if (local_70[0] == '\0') {
        if (((local_78 != 0) && (FUN_00d50b00(), local_70[0] != '\0')) && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70[0] = '\0';
      }
      if ((local_90 != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar9 != 0) {
        pvVar7 = _pthread_getspecific(pVar12);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pVar12 = (pthread_key_t)local_40;
        }
        iVar14 = FUN_0141bab0();
        if (iVar14 == 1) {
          pvVar7 = _pthread_getspecific(pVar12);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar14 = FUN_01326de0();
          if (iVar14 == 1) {
            pvVar7 = _pthread_getspecific(pVar12);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0134a500();
            if (local_68 == 0) {
              bVar4 = 0;
            }
            else {
              pvVar7 = _pthread_getspecific(pVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0134a500();
              pvVar7 = _pthread_getspecific(pVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0141b660();
              if (local_78 == 0) {
                bVar4 = 0;
              }
              else {
                pvVar7 = _pthread_getspecific(pVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0134a500();
                pvVar7 = _pthread_getspecific(pVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0141b660();
                pvVar7 = _pthread_getspecific(pVar12);
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  pVar12 = (pthread_key_t)local_40;
                }
                FUN_0141b660();
                lVar8 = local_130;
                if (local_128 == '\0') {
                  if (local_130 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_128 = '\0';
                }
                cVar3 = (**(code **)(*local_a0 + 0x50))();
                if (cVar3 == '\0') {
                  bVar4 = 0;
                }
                else {
                  pvVar7 = _pthread_getspecific(pVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  bVar4 = FUN_01334f30();
                  bVar4 = bVar4 ^ 1;
                }
                if (lVar8 != 0) {
                  FUN_00d50b20();
                }
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a8 != '\0') && (local_b0 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_70[0] != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_60[0] != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if (bVar4 != 0) {
              pvVar7 = _pthread_getspecific(pVar12);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pVar12 = (pthread_key_t)local_40;
              }
              FUN_0141ac40();
            }
          }
        }
        FUN_00d50b20();
      }
    }
  }
  else {
    local_1a8 = local_80;
    local_1a0 = '\0';
    FUN_004f9cf0();
    lVar8 = local_68;
    if (local_60[0] == '\0') {
      if (((local_68 != 0) && (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
    }
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      local_60[0] = '\0';
      local_68 = 0;
      local_58 = lVar8;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      bVar2 = false;
      bVar15 = false;
      lVar8 = 0;
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar14 = -local_50._4_4_;
          }
          else {
            iVar14 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar14);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar14 = 0;
          }
          local_50 = CONCAT44(iVar14,(int)local_50);
        }
        lVar9 = (longlong)(int)local_50;
        iVar14 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar14);
        if (*(int *)(local_58 + 0xc) <= iVar14) break;
        lVar13 = *(longlong *)(local_58 + 0x10);
        local_68 = *(longlong *)(lVar13 + 8 + lVar9 * 8);
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
        pVar12 = (pthread_key_t)lVar13;
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar14 = FUN_01326de0();
        if (iVar14 == 0) {
LAB_00765642:
        }
        else if (lVar8 == 0) {
          if (local_68 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = local_68;
            if (local_60[0] == '\0') {
              FUN_00d50b00();
              bVar2 = true;
            }
            else {
              local_60[0] = '\0';
              bVar2 = true;
            }
          }
        }
        else {
          pvVar7 = _pthread_getspecific(pVar12);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar14 = FUN_01326de0();
          pvVar7 = _pthread_getspecific(pVar12);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar5 = FUN_01326de0();
          if (iVar14 != iVar5) {
            bVar15 = true;
            goto LAB_00765642;
          }
        }
      }
      lVar9 = local_58;
      FUN_00115190();
      pVar12 = (pthread_key_t)lVar9;
      if (bVar15) {
LAB_00765dd4:
        if ((bVar2) && (lVar8 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (lVar8 != 0) {
        pvVar7 = _pthread_getspecific(pVar12);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0134a500();
        lVar9 = local_68;
        if (local_40 != local_68) {
          if (local_60[0] != '\0') {
            if (local_40 == 0) {
              local_40 = local_68;
            }
            else {
              local_40 = local_68;
              FUN_00d50b20();
            }
            goto LAB_00765dd4;
          }
          if (local_68 != 0) {
            FUN_00d50b00();
          }
          if (local_40 == 0) {
            local_40 = lVar9;
          }
          else {
            local_40 = lVar9;
            FUN_00d50b20();
          }
        }
        if ((local_60[0] != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00765dd4;
      }
      FUN_00d50b20();
    }
  }
  pvVar7 = _pthread_getspecific(pVar12);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pVar12 = (pthread_key_t)local_80;
  }
  iVar14 = FUN_012e6040();
  if (iVar14 == 0) {
    if (*local_res8 != 0) {
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_198 = *local_res8;
      local_190 = '\0';
      FUN_016cbba0();
      lVar8 = local_68;
      if (local_60[0] == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60[0] = '\0';
      }
      FUN_0141bb40();
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    pvVar7 = _pthread_getspecific(pVar12);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      pVar12 = (pthread_key_t)local_40;
    }
    (**(code **)(*unaff_RSI + 0x628))();
    pvVar7 = _pthread_getspecific(pVar12);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar7 = _pthread_getspecific(pVar12);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar7 = _pthread_getspecific(pVar12);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    lVar8 = local_78;
    if (local_70[0] == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70[0] = '\0';
    }
    FUN_016cbba0();
    lVar9 = local_68;
    if (local_60[0] == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60[0] = '\0';
    }
    FUN_0141bb40();
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if ((local_70[0] != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  local_188 = *local_120;
  local_180 = '\0';
  local_178 = local_40;
  local_170 = '\0';
  uVar17 = FUN_0147f490((undefined1)local_134,&local_178,local_res10,(undefined1)local_138);
  lVar8 = local_68;
  if (local_60[0] == '\0') {
    if (((local_68 != 0) && (uVar17 = FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != 0)) {
      uVar17 = FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    uVar17 = FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != 0)) {
    uVar17 = FUN_00d50b20();
  }
  if ((unaff_RSI[0x28] != 0) && (lVar8 != 0)) {
    local_168 = local_80;
    local_160 = '\0';
    uVar17 = FUN_007674e0(uVar17,&local_168);
    lVar9 = local_68;
    if (local_60[0] == '\0') {
      if (((local_68 != 0) && (uVar17 = FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != 0)) {
        uVar17 = FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      uVar17 = FUN_00d50b20();
    }
    if (lVar9 == 0) {
      local_158 = lVar8;
      local_150 = '\0';
      uVar17 = FUN_0074e990();
      lVar9 = local_68;
      if (local_60[0] == '\0') {
        if (local_68 != 0) {
          uVar17 = FUN_00d50b00();
        }
      }
      else {
        local_60[0] = '\0';
      }
      local_148 = local_80;
      local_140 = '\0';
      FUN_00767590(uVar17,&local_148);
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
      local_68 = lVar8;
      FUN_00d214d0(uVar17,*(undefined4 *)(lVar9 + 0xc));
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if (lVar8 != 0) {
    local_60[0] = '\0';
    local_68 = 0;
    local_58 = lVar8;
    local_48 = 0;
    local_50 = 0;
    if (0 < *(int *)(lVar8 + 0xc)) {
      lVar9 = 0;
      do {
        local_68 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar9 * 8);
        uVar17 = FUN_00d23310();
        lVar13 = local_78;
        local_90 = local_70[0];
        pcVar11 = local_70;
        if (local_70[0] == '\0') {
          pcVar11 = &local_90;
        }
        *pcVar11 = '\0';
        if ((local_70[0] != '\0') && (lVar13 != 0)) {
          uVar17 = FUN_00d50b20();
        }
        if ((local_90 == '\0') && (lVar13 != 0)) {
          uVar17 = FUN_00d50b00();
        }
        local_1d8 = lVar13;
        local_1d0 = 1;
        FUN_007649a0(uVar17,&local_1d8);
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        FUN_00e33de0();
        uVar17 = FUN_00d46300();
        lVar13 = DAT_02729570;
        if (local_98 == '\0') {
          if (local_a0 != (longlong *)0x0) {
            uVar17 = FUN_00d50b00();
            lVar13 = DAT_02729570;
          }
        }
        else {
          local_98 = '\0';
        }
        DAT_02729570 = lVar13;
        if (lVar13 != 0) {
          uVar17 = FUN_00d50b00();
        }
        local_70[0] = '\0';
        local_78 = lVar13;
        FUN_00ca0840(uVar17,&local_78);
        if ((local_70[0] != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if (local_a0 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
        local_50 = CONCAT44(local_50._4_4_,(int)lVar9);
      } while ((int)lVar9 < *(int *)(lVar8 + 0xc));
    }
    FUN_0079b950();
  }
  *unaff_RDI = lVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_40 != 0) {
    FUN_00d50b20();
  }
LAB_0076682b:
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


