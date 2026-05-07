// Function: FUN_0075edc0
// Address: 0075edc0
// Size: 3824 bytes
// Class: MUAudioFileSource


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0075edc0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  void *pvVar9;
  char *pcVar10;
  char in_CL;
  pthread_key_t pVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  double dVar17;
  undefined8 uVar18;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
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
  longlong local_e8;
  char local_e0;
  int local_d4;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  longlong local_a0;
  char local_98 [8];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58 [8];
  char local_48 [4];
  uint local_44;
  longlong local_40;
  char local_38;
  
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar7 + 0x18))();
  lVar15 = DAT_026e1800;
  if (DAT_026e1800 != 0) {
    FUN_00d50b00();
  }
  dVar17 = (double)FUN_00e7d6f0();
  uVar8 = (ulonglong)(dVar17 * DAT_023907c0);
  dVar17 = dVar17 * DAT_023907c0 - _DAT_023907c8;
  plVar12 = (longlong *)0xaaaaaaaaaaaaaaab;
  uVar18 = FUN_0071a120();
  if ((((local_98[0] == '\0') && (local_a0 != 0)) && (uVar18 = FUN_00d50b00(), local_98[0] != '\0'))
     && (local_a0 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  bVar4 = (byte)(((longlong)dVar17 & (longlong)uVar8 >> 0x3f | uVar8) / 3);
  local_40 = lVar15;
  local_38 = '\0';
  FUN_000175c0(uVar18,&local_40);
  if (local_98[0] == '\0') {
    if (((local_a0 != 0) && (FUN_00d50b00(), local_98[0] != '\0')) && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_98[0] = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_a0 != 0) {
    local_98[0] = '\0';
    bVar4 = FUN_00c70bc0();
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar18 = FUN_00d50b20();
  if (lVar15 != 0) {
    uVar18 = FUN_00d50b20();
  }
  pVar11 = (pthread_key_t)plVar12;
  if ((local_a0 != 0 & bVar4) == 0) {
    (**(code **)(*unaff_RDI + 0x628))();
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    local_48[0] = local_98[0];
    pcVar10 = local_48;
    if (local_98[0] != '\0') {
      pcVar10 = local_98;
    }
    *pcVar10 = '\0';
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    local_c8 = 0;
    if (local_48[0] == '\0') {
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48[0] = '\0';
    }
    local_c8 = '\x01';
    local_d0 = local_a0;
    uVar18 = FUN_00d23310();
    pcVar10 = local_98;
    if (local_98[0] == '\0') {
      pcVar10 = local_58;
    }
    local_58[0] = local_98[0];
    *pcVar10 = '\0';
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    local_e0 = 0;
    if ((local_58[0] == '\0') && (local_a0 != 0)) {
      uVar18 = FUN_00d50b00();
    }
    local_e8 = local_a0;
    local_e0 = '\x01';
    FUN_002474e0(uVar18,&local_e8);
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar15 = *param_2;
    local_44 = (uint)CONCAT71((int7)((ulonglong)uVar18 >> 8),(char)param_2[1]);
    if (((char)param_2[1] != '\0') && (lVar15 != 0)) {
      FUN_00d50b00();
    }
    lVar1 = *unaff_RSI;
    if (lVar1 != 0) {
      local_98[0] = '\0';
      local_80 = 0;
      local_88 = 0;
      local_90 = lVar1;
      local_60 = lVar15;
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar15 = 0;
        local_d4 = 0;
        do {
          lVar13 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar15 * 8);
          FUN_00b88600();
          uVar18 = (**(code **)(*local_70 + 0x390))();
          local_78 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != 0) && (uVar18 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0))
            {
              uVar18 = FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
          pVar11 = (pthread_key_t)plVar12;
          if ((int)lVar15 == 0) {
            if ((*param_2 == 0) || (lVar14 = local_60, uVar16 = local_44, in_CL != '\0')) {
              (**(code **)(*unaff_RDI + 0x628))();
              pvVar9 = _pthread_getspecific(pVar11);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_190 = local_78;
              local_188 = '\0';
              local_180 = *param_2;
              local_178 = '\0';
              plVar12 = &local_180;
              uVar18 = FUN_004a41a0(plVar12,&local_190,0);
              lVar2 = local_40;
              lVar14 = *param_2;
              if (lVar14 == local_40) {
                if (((char)param_2[1] == '\0') && (local_40 != 0)) {
                  if (local_38 != '\0') goto LAB_0075f583;
                  uVar18 = FUN_00d50b00();
                  goto LAB_0075f6d0;
                }
LAB_0075f6d8:
                if ((local_38 != '\0') && (local_40 != 0)) {
                  uVar18 = FUN_00d50b20();
                }
              }
              else {
                lVar3 = param_2[1];
                if (local_38 == '\0') {
                  if (local_40 != 0) {
                    uVar18 = FUN_00d50b00();
                  }
                  *param_2 = lVar2;
                  if (((char)lVar3 != '\0') && (lVar14 != 0)) {
                    uVar18 = FUN_00d50b20();
                  }
LAB_0075f6d0:
                  *(undefined1 *)(param_2 + 1) = 1;
                  goto LAB_0075f6d8;
                }
                *param_2 = local_40;
                if (((char)lVar3 != '\0') && (lVar14 != 0)) {
                  uVar18 = FUN_00d50b20();
                }
LAB_0075f583:
                *(undefined1 *)(param_2 + 1) = 1;
                local_38 = '\0';
              }
              if ((local_178 != '\0') && (local_180 != 0)) {
                uVar18 = FUN_00d50b20();
              }
              if ((local_188 != '\0') && (local_190 != 0)) {
                uVar18 = FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                uVar18 = FUN_00d50b20();
              }
              lVar14 = local_60;
              uVar16 = local_44;
              if (in_CL != '\0') {
                lVar2 = *param_2;
                bVar4 = *(byte *)(param_2 + 1);
                uVar16 = (uint)bVar4;
                if (local_60 == lVar2) {
                  uVar16 = local_44;
                  if (((bVar4 != 0) && ((char)local_44 == '\0')) && (local_60 != 0)) {
                    local_44 = 0;
                    uVar18 = FUN_00d50b00();
                    uVar16 = 1;
                  }
                }
                else {
                  if ((bVar4 != 0) && (lVar2 != 0)) {
                    uVar18 = FUN_00d50b00();
                  }
                  lVar14 = lVar2;
                  if (((char)local_44 != '\0') && (local_60 != 0)) {
                    local_60 = lVar2;
                    uVar18 = FUN_00d50b20();
                  }
                }
              }
            }
            local_170 = *param_2;
            local_168 = '\0';
            local_158 = '\0';
            local_160 = lVar13;
            FUN_002474e0(uVar18,&local_160);
            lVar13 = local_78;
            if ((local_158 != '\0') && (local_160 != 0)) {
              FUN_00d50b20();
            }
            if ((local_168 != '\0') && (local_170 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (in_CL == '\0') {
              pvVar9 = _pthread_getspecific(pVar11);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e6a50();
              lVar14 = local_40;
              if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != 0)) {
                FUN_00d50b20();
              }
              local_f0 = lVar14;
              pvVar9 = _pthread_getspecific(pVar11);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e6160();
              local_c0 = local_40;
              if (((local_38 == '\0') && (local_40 != 0)) &&
                 ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
                FUN_00d50b20();
              }
              local_40 = *param_2;
              local_38 = '\0';
              iVar5 = FUN_00d237a0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (iVar5 + 1 < *(int *)(local_c0 + 0xc)) {
                plVar12 = (longlong *)(longlong)(iVar5 + 1);
                lVar14 = *(longlong *)(*(longlong *)(local_c0 + 0x10) + (longlong)plVar12 * 8);
                lVar2 = *param_2;
                lVar3 = param_2[1];
                if (lVar2 == lVar14) {
                  if (((char)lVar3 != '\0') || (lVar14 == 0)) goto LAB_0075f8c0;
                  FUN_00d50b00();
                }
                else {
                  if (lVar14 != 0) {
                    FUN_00d50b00();
                  }
                  *param_2 = lVar14;
                  if (((char)lVar3 != '\0') && (lVar2 != 0)) {
                    FUN_00d50b20();
                  }
                }
                *(undefined1 *)(param_2 + 1) = 1;
              }
              else {
                (**(code **)(*unaff_RDI + 0x628))();
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_130 = local_78;
                local_128 = '\0';
                local_120 = *param_2;
                local_118 = '\0';
                plVar12 = &local_120;
                FUN_004a41a0(plVar12,&local_130,0);
                lVar2 = local_40;
                lVar14 = *param_2;
                if (lVar14 == local_40) {
                  if (((char)param_2[1] == '\0') && (local_40 != 0)) {
                    if (local_38 != '\0') goto LAB_0075f5d8;
                    FUN_00d50b00();
                    goto LAB_0075f85c;
                  }
LAB_0075f864:
                  if ((local_38 != '\0') && (local_40 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  lVar3 = param_2[1];
                  if (local_38 == '\0') {
                    if (local_40 != 0) {
                      FUN_00d50b00();
                    }
                    *param_2 = lVar2;
                    if (((char)lVar3 != '\0') && (lVar14 != 0)) {
                      FUN_00d50b20();
                    }
LAB_0075f85c:
                    *(undefined1 *)(param_2 + 1) = 1;
                    goto LAB_0075f864;
                  }
                  *param_2 = local_40;
                  if (((char)lVar3 != '\0') && (lVar14 != 0)) {
                    FUN_00d50b20();
                  }
LAB_0075f5d8:
                  *(undefined1 *)(param_2 + 1) = 1;
                  local_38 = '\0';
                }
                if ((local_118 != '\0') && (local_120 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
LAB_0075f8c0:
              uVar18 = FUN_00d50b20();
              if (local_f0 != 0) {
                uVar18 = FUN_00d50b20();
              }
            }
            else {
              (**(code **)(*unaff_RDI + 0x628))();
              pvVar9 = _pthread_getspecific(pVar11);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_150 = local_78;
              local_148 = '\0';
              local_140 = local_60;
              local_138 = '\0';
              plVar12 = &local_140;
              uVar18 = FUN_004a41a0(plVar12,&local_150,local_d4);
              lVar2 = local_40;
              lVar14 = *param_2;
              if (lVar14 == local_40) {
                if (((char)param_2[1] == '\0') && (local_40 != 0)) {
                  if (local_38 != '\0') goto LAB_0075f521;
                  uVar18 = FUN_00d50b00();
                  goto LAB_0075f657;
                }
LAB_0075f65f:
                if ((local_38 != '\0') && (local_40 != 0)) {
                  uVar18 = FUN_00d50b20();
                }
              }
              else {
                lVar3 = param_2[1];
                if (local_38 == '\0') {
                  if (local_40 != 0) {
                    uVar18 = FUN_00d50b00();
                  }
                  *param_2 = lVar2;
                  if (((char)lVar3 != '\0') && (lVar14 != 0)) {
                    uVar18 = FUN_00d50b20();
                  }
LAB_0075f657:
                  *(undefined1 *)(param_2 + 1) = 1;
                  goto LAB_0075f65f;
                }
                *param_2 = local_40;
                if (((char)lVar3 != '\0') && (lVar14 != 0)) {
                  uVar18 = FUN_00d50b20();
                }
LAB_0075f521:
                *(undefined1 *)(param_2 + 1) = 1;
                local_38 = '\0';
              }
              if ((local_138 != '\0') && (local_140 != 0)) {
                uVar18 = FUN_00d50b20();
              }
              if ((local_148 != '\0') && (local_150 != 0)) {
                uVar18 = FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                uVar18 = FUN_00d50b20();
              }
            }
            local_110 = *param_2;
            local_108 = '\0';
            local_f8 = '\0';
            local_100 = lVar13;
            FUN_002474e0(uVar18,&local_100);
            lVar13 = local_78;
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            local_d4 = local_d4 + 1;
            lVar14 = local_60;
            uVar16 = local_44;
          }
          local_44 = uVar16;
          local_60 = lVar14;
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          lVar15 = lVar15 + 1;
          local_88 = CONCAT44(local_88._4_4_,(int)lVar15);
        } while ((int)lVar15 < *(int *)(lVar1 + 0xc));
      }
      FUN_002d7370();
      lVar15 = local_60;
    }
    if (((char)local_44 != '\0') && (lVar15 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar6 = FUN_00767640(param_1);
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return uVar6;
}


