// Function: FUN_017517b0
// Address: 017517b0
// Size: 7971 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x017528fa) */
/* WARNING: Removing unreachable block (ram,0x01752906) */

undefined8 * FUN_017517b0(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  char cVar11;
  char cVar12;
  byte bVar13;
  bool bVar14;
  uint uVar15;
  undefined8 *puVar16;
  void *pvVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  pthread_key_t pVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong unaff_RSI;
  longlong *plVar25;
  ulonglong uVar26;
  undefined8 *unaff_RDI;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  uint uVar30;
  dword *pdVar31;
  uint uVar32;
  int iVar33;
  longlong lVar34;
  undefined4 uVar35;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong *local_178;
  longlong *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  uint local_5c;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  local_c8 = param_2;
  puVar16 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar16 = &DAT_02572358;
  pcVar10 = DAT_02572370;
  local_b0 = puVar16;
  (*DAT_02572370)();
  lVar34 = *(longlong *)(unaff_RSI + 0x58);
  if (lVar34 != 0) {
    FUN_00d50b00();
  }
  pvVar17 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736e70();
  iVar33 = *(int *)((longlong)local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if (lVar34 != 0) {
    FUN_00d50b20();
  }
  pVar21 = (pthread_key_t)param_1;
  local_58 = (longlong *)CONCAT44(local_58._4_4_,iVar33);
  if (0 < iVar33) {
    do {
      plVar18 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar18 = (longlong)&DAT_02572358;
      (*pcVar10)();
      local_38 = '\0';
      local_40 = plVar18;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      pVar21 = (pthread_key_t)param_1;
      iVar33 = iVar33 + -1;
    } while (iVar33 != 0);
  }
  lVar34 = *(longlong *)(unaff_RSI + 0x60);
  if (lVar34 != 0) {
    FUN_00d50b00();
  }
  pvVar17 = _pthread_getspecific(pVar21);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar11 = FUN_017708d0();
  if (lVar34 != 0) {
    FUN_00d50b20();
  }
  if (cVar11 != '\0') {
    FUN_0174c730();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        local_c0 = local_40;
        FUN_00d50b00();
        goto LAB_01751991;
      }
    }
    else {
      local_c0 = local_40;
      if (local_40 != (longlong *)0x0) {
LAB_01751991:
        FUN_017bf740();
        local_b8 = local_40;
        if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar34 = *(longlong *)(unaff_RSI + 0x58);
        if (lVar34 != 0) {
          FUN_00d50b00();
        }
        pvVar17 = _pthread_getspecific(pVar21);
        if (pvVar17 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar11 = FUN_01736d10();
        if (lVar34 != 0) {
          FUN_00d50b20();
        }
        uVar15 = 1;
        if (cVar11 != '\0') {
          uVar15 = (uint)local_58;
        }
        if (0 < (int)uVar15) {
          uVar22 = 0;
          do {
            lVar34 = *(longlong *)(local_b0[2] + uVar22 * 8);
            if (lVar34 != 0) {
              FUN_00d50b00();
            }
            local_98 = lVar34;
            if (0 < *(int *)((longlong)local_b8 + 0xc)) {
              lVar34 = 0;
              bVar14 = false;
              do {
                plVar18 = *(longlong **)(local_b8[2] + lVar34 * 8);
                plVar25 = local_b8;
                if (plVar18 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                local_58 = plVar18;
                pvVar17 = _pthread_getspecific((pthread_key_t)plVar25);
                if ((pvVar17 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                  plVar25 = local_58;
                }
                FUN_017aa5e0();
                local_50 = local_40;
                if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
                   ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
                  FUN_00d50b20();
                }
                pvVar17 = _pthread_getspecific((pthread_key_t)plVar25);
                if ((pvVar17 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                  plVar25 = local_58;
                }
                cVar11 = FUN_017c0290();
                if (cVar11 != '\0') {
                  if (uVar22 != 0) {
                    pvVar17 = _pthread_getspecific((pthread_key_t)plVar25);
                    if ((pvVar17 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                      plVar25 = local_50;
                    }
                    cVar11 = FUN_0173ed60();
                    if (cVar11 == '\0') goto LAB_01752ff0;
                  }
                  lVar19 = *(longlong *)(unaff_RSI + 0x58);
                  if (lVar19 != 0) {
                    FUN_00d50b00();
                  }
                  pvVar17 = _pthread_getspecific((pthread_key_t)plVar25);
                  if (pvVar17 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar11 = FUN_01736d10();
                  pvVar17 = _pthread_getspecific((pthread_key_t)plVar25);
                  if ((pvVar17 == (void *)0x0) || (lVar20 = FUN_00e8b990(), lVar20 == 0)) {
                    lVar20 = local_50[0xb];
                  }
                  else {
                    lVar20 = *(longlong *)
                              (local_50[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4] + 0x58);
                    plVar25 = local_50;
                  }
                  pVar21 = (pthread_key_t)plVar25;
                  if (lVar20 != 0) {
                    FUN_00d50b00();
                  }
                  pvVar17 = _pthread_getspecific(pVar21);
                  if (pvVar17 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar12 = FUN_01736d10();
                  if (lVar20 != 0) {
                    FUN_00d50b20();
                  }
                  if (lVar19 != 0) {
                    FUN_00d50b20();
                  }
                  if (cVar11 == cVar12) {
                    pvVar17 = _pthread_getspecific(pVar21);
                    if (pvVar17 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0174c730();
                    plVar18 = local_40;
                    if (local_38 == '\0') {
                      if (local_40 != (longlong *)0x0) {
                        FUN_00d50b00();
                        goto LAB_01751dc6;
                      }
                    }
                    else if (local_40 != (longlong *)0x0) {
LAB_01751dc6:
                      piVar4 = (int *)local_c0[2];
                      plVar18 = (longlong *)plVar18[2];
                      if (*piVar4 == 3) {
                        if ((int)*plVar18 == 3) {
LAB_01751def:
                          if (piVar4[1] == 3) {
                            if (*(int *)((longlong)plVar18 + 4) == 3) {
LAB_01751e0b:
                              if (piVar4[2] == 3) {
                                if ((int)plVar18[1] == 3) {
LAB_01751e27:
                                  if (piVar4[3] == 3) {
                                    if (*(int *)((longlong)plVar18 + 0xc) == 3) {
LAB_01751e43:
                                      if (piVar4[4] == 3) {
                                        if ((int)plVar18[2] == 3) {
LAB_01751e5f:
                                          if (piVar4[5] == 3) {
                                            if (*(int *)((longlong)plVar18 + 0x14) == 3) {
LAB_01751e7b:
                                              if (piVar4[6] == 3) {
                                                if ((int)plVar18[3] == 3) {
LAB_01751e97:
                                                  if (piVar4[7] == 3) {
                                                    if (*(int *)((longlong)plVar18 + 0x1c) == 3) {
LAB_01751eb3:
                                                      if (piVar4[8] == 3) {
                                                        if ((int)plVar18[4] == 3) {
LAB_01751ecf:
                                                          if (piVar4[9] == 3) {
                                                            if (*(int *)((longlong)plVar18 + 0x24)
                                                                == 3) {
LAB_01751eeb:
                                                              if (piVar4[10] == 3) {
                                                                if ((int)plVar18[5] == 3) {
LAB_01751f07:
                                                                  if (piVar4[0xb] == 3) {
                                                                    if (*(int *)((longlong)plVar18 +
                                                                                0x2c) == 3) {
LAB_01751f23:
                                                                      if (piVar4[0xc] == 3) {
                                                                        if ((int)plVar18[6] == 3) {
LAB_01751f3f:
                                                                          if (piVar4[0xd] == 3) {
                                                                            if (*(int *)((longlong)
                                                                                         plVar18 +
                                                                                        0x34) == 3)
                                                                            {
LAB_01751f5b:
                                                                              if (piVar4[0xe] == 3)
                                                                              {
                                                                                if ((int)plVar18[7]
                                                                                    == 3) {
LAB_01751f77:
                                                                                  if (piVar4[0xf] ==
                                                                                      3) {
                                                                                    if (*(int *)((
                                                  longlong)plVar18 + 0x3c) == 3) {
LAB_01751f93:
                                                    if (piVar4[0x10] == 3) {
                                                      if ((int)plVar18[8] == 3) {
LAB_01751faf:
                                                        if (piVar4[0x11] == 3) {
                                                          if (*(int *)((longlong)plVar18 + 0x44) ==
                                                              3) {
LAB_01751fcb:
                                                            if (piVar4[0x12] == 3) {
                                                              if ((int)plVar18[9] == 3) {
LAB_01751fe7:
                                                                if (piVar4[0x13] == 3) {
                                                                  if (*(int *)((longlong)plVar18 +
                                                                              0x4c) == 3) {
LAB_01752003:
                                                                    if (piVar4[0x14] == 3) {
                                                                      if ((int)plVar18[10] == 3) {
LAB_0175201f:
                                                                        if (piVar4[0x15] == 3) {
                                                                          if (*(int *)((longlong)
                                                                                       plVar18 +
                                                                                      0x54) == 3) {
LAB_0175203b:
                                                                            if (piVar4[0x16] == 3) {
                                                                              if ((int)plVar18[0xb]
                                                                                  == 3) {
LAB_01752057:
                                                                                if (piVar4[0x17] ==
                                                                                    3) {
                                                                                  if (*(int *)((
                                                  longlong)plVar18 + 0x5c) == 3) {
LAB_01752073:
                                                    pvVar17 = _pthread_getspecific
                                                                        ((pthread_key_t)plVar18);
                                                    plVar25 = local_50;
                                                    if ((pvVar17 != (void *)0x0) &&
                                                       (lVar19 = FUN_00e8b990(), plVar25 = local_50,
                                                       lVar19 != 0)) {
                                                      plVar25 = (longlong *)
                                                                local_50[(ulonglong)
                                                                         (*(uint *)(lVar19 + 0x154)
                                                                         & 1) + 4];
                                                      plVar18 = local_50;
                                                    }
                                                    lVar19 = plVar25[0xb];
                                                    if (lVar19 != 0) {
                                                      FUN_00d50b00();
                                                    }
                                                    pvVar17 = _pthread_getspecific
                                                                        ((pthread_key_t)plVar18);
                                                    if (pvVar17 != (void *)0x0) {
                                                      FUN_00e8b990();
                                                    }
                                                    FUN_01736da0();
                                                    local_a0 = local_40;
                                                    if (local_38 == '\0') {
                                                      if (((local_40 != (longlong *)0x0) &&
                                                          (FUN_00d50b00(), local_38 != '\0')) &&
                                                         (local_40 != (longlong *)0x0)) {
                                                        FUN_00d50b20();
                                                      }
                                                    }
                                                    else {
                                                      local_38 = '\0';
                                                    }
                                                    if (lVar19 != 0) {
                                                      FUN_00d50b20();
                                                    }
                                                    FUN_016ab300();
                                                    pvVar17 = _pthread_getspecific
                                                                        ((pthread_key_t)plVar18);
                                                    plVar25 = local_50;
                                                    if ((pvVar17 != (void *)0x0) &&
                                                       (lVar19 = FUN_00e8b990(), plVar25 = local_50,
                                                       lVar19 != 0)) {
                                                      plVar25 = (longlong *)
                                                                local_50[(ulonglong)
                                                                         (*(uint *)(lVar19 + 0x154)
                                                                         & 1) + 4];
                                                      plVar18 = local_50;
                                                    }
                                                    lVar19 = plVar25[0xb];
                                                    if (lVar19 != 0) {
                                                      FUN_00d50b00();
                                                    }
                                                    pvVar17 = _pthread_getspecific
                                                                        ((pthread_key_t)plVar18);
                                                    if (pvVar17 != (void *)0x0) {
                                                      FUN_00e8b990();
                                                    }
                                                    uVar35 = FUN_01736d70();
                                                    local_158 = local_80;
                                                    local_150 = 0;
                                                    if (local_78 == '\0') {
                                                      if (local_80 != (longlong *)0x0) {
                                                        uVar35 = FUN_00d50b00();
                                                      }
                                                    }
                                                    else {
                                                      local_78 = '\0';
                                                    }
                                                    local_150 = '\x01';
                                                    FUN_016ac280(uVar35,&local_158);
                                                    local_88 = local_40;
                                                    plVar25 = local_40;
                                                    if (local_38 == '\0') {
                                                      if (((local_40 != (longlong *)0x0) &&
                                                          (plVar25 = (longlong *)FUN_00d50b00(),
                                                          local_38 != '\0')) &&
                                                         (local_40 != (longlong *)0x0)) {
                                                        plVar25 = (longlong *)FUN_00d50b20();
                                                      }
                                                    }
                                                    else {
                                                      local_38 = '\0';
                                                    }
                                                    if ((local_150 != '\0') &&
                                                       (local_158 != (longlong *)0x0)) {
                                                      plVar25 = (longlong *)FUN_00d50b20();
                                                    }
                                                    if ((local_78 != '\0') &&
                                                       (local_80 != (longlong *)0x0)) {
                                                      plVar25 = (longlong *)FUN_00d50b20();
                                                    }
                                                    if (lVar19 != 0) {
                                                      plVar25 = (longlong *)FUN_00d50b20();
                                                    }
                                                    if ((local_68 != '\0') && (local_70 != 0)) {
                                                      plVar25 = (longlong *)FUN_00d50b20();
                                                    }
                                                    local_5c = (uint)CONCAT71((int7)((ulonglong)
                                                                                     plVar25 >> 8),1
                                                                             );
                                                    if (((local_88 != (longlong *)0x0) &&
                                                        (local_a0 != (longlong *)0x0)) &&
                                                       (0 < *(int *)(local_98 + 0xc))) {
                                                      local_178 = (longlong *)0x0;
                                                      do {
                                                        plVar18 = local_178;
                                                        pvVar17 = _pthread_getspecific
                                                                            ((pthread_key_t)
                                                                             local_178);
                                                        if (pvVar17 != (void *)0x0) {
                                                          FUN_00e8b990();
                                                        }
                                                        FUN_017aa5e0();
                                                        local_48 = local_40;
                                                        if (((local_38 == '\0') &&
                                                            (local_40 != (longlong *)0x0)) &&
                                                           ((FUN_00d50b00(), local_38 != '\0' &&
                                                            (local_40 != (longlong *)0x0)))) {
                                                          FUN_00d50b20();
                                                        }
                                                        pvVar17 = _pthread_getspecific
                                                                            ((pthread_key_t)plVar18)
                                                        ;
                                                        plVar25 = local_48;
                                                        if ((pvVar17 != (void *)0x0) &&
                                                           (lVar19 = FUN_00e8b990(),
                                                           plVar25 = local_48, lVar19 != 0)) {
                                                          plVar25 = (longlong *)
                                                                    local_48[(ulonglong)
                                                                             (*(uint *)(lVar19 + 
                                                  0x154) & 1) + 4];
                                                  plVar18 = local_48;
                                                  }
                                                  lVar19 = plVar25[0xb];
                                                  if (lVar19 != 0) {
                                                    FUN_00d50b00();
                                                  }
                                                  pvVar17 = _pthread_getspecific
                                                                      ((pthread_key_t)plVar18);
                                                  if (pvVar17 != (void *)0x0) {
                                                    FUN_00e8b990();
                                                  }
                                                  FUN_01736da0();
                                                  local_a8 = local_40;
                                                  if (local_38 == '\0') {
                                                    if (((local_40 != (longlong *)0x0) &&
                                                        (FUN_00d50b00(), local_38 != '\0')) &&
                                                       (local_40 != (longlong *)0x0)) {
                                                      FUN_00d50b20();
                                                    }
                                                  }
                                                  else {
                                                    local_38 = '\0';
                                                  }
                                                  if (lVar19 != 0) {
                                                    FUN_00d50b20();
                                                  }
                                                  FUN_016ab300();
                                                  pvVar17 = _pthread_getspecific
                                                                      ((pthread_key_t)plVar18);
                                                  plVar25 = local_48;
                                                  if ((pvVar17 != (void *)0x0) &&
                                                     (lVar19 = FUN_00e8b990(), plVar25 = local_48,
                                                     lVar19 != 0)) {
                                                    plVar25 = (longlong *)
                                                              local_48[(ulonglong)
                                                                       (*(uint *)(lVar19 + 0x154) &
                                                                       1) + 4];
                                                    plVar18 = local_48;
                                                  }
                                                  lVar19 = plVar25[0xb];
                                                  if (lVar19 != 0) {
                                                    FUN_00d50b00();
                                                  }
                                                  pvVar17 = _pthread_getspecific
                                                                      ((pthread_key_t)plVar18);
                                                  if (pvVar17 != (void *)0x0) {
                                                    FUN_00e8b990();
                                                  }
                                                  uVar35 = FUN_01736d70();
                                                  local_148 = local_80;
                                                  local_140 = 0;
                                                  if (local_78 == '\0') {
                                                    if (local_80 != (longlong *)0x0) {
                                                      uVar35 = FUN_00d50b00();
                                                    }
                                                  }
                                                  else {
                                                    local_78 = '\0';
                                                  }
                                                  local_140 = '\x01';
                                                  FUN_016ac280(uVar35,&local_148);
                                                  local_90 = local_40;
                                                  if (local_38 == '\0') {
                                                    if (((local_40 != (longlong *)0x0) &&
                                                        (FUN_00d50b00(), local_38 != '\0')) &&
                                                       (local_40 != (longlong *)0x0)) {
                                                      FUN_00d50b20();
                                                    }
                                                  }
                                                  else {
                                                    local_38 = '\0';
                                                  }
                                                  if ((local_140 != '\0') &&
                                                     (local_148 != (longlong *)0x0)) {
                                                    FUN_00d50b20();
                                                  }
                                                  if ((local_78 != '\0') &&
                                                     (local_80 != (longlong *)0x0)) {
                                                    FUN_00d50b20();
                                                  }
                                                  if (lVar19 != 0) {
                                                    FUN_00d50b20();
                                                  }
                                                  if ((local_68 != '\0') && (local_70 != 0)) {
                                                    FUN_00d50b20();
                                                  }
                                                  cVar11 = (**(code **)(*local_88 + 0x50))();
                                                  lVar19 = DAT_027cd5a0;
                                                  if (cVar11 == '\0') {
                                                    local_5c = 0;
                                                  }
                                                  else {
                                                    if (DAT_027cd5a0 != 0) {
                                                      FUN_00d50b00();
                                                    }
                                                    lVar20 = DAT_027e3bf0;
                                                    if (DAT_027e3bf0 != 0) {
                                                      FUN_00d50b00();
                                                    }
                                                    local_208 = lVar20;
                                                    local_200 = '\x01';
                                                    local_1f8 = 0;
                                                    local_1f0 = '\0';
                                                    plVar18 = &local_1f8;
                                                    FUN_00d31230(plVar18,&local_208);
                                                    plVar25 = local_40;
                                                    local_130 = 0;
                                                    if (local_38 == '\0') {
                                                      if (local_40 != (longlong *)0x0) {
                                                        FUN_00d50b00();
                                                      }
                                                    }
                                                    else {
                                                      local_38 = '\0';
                                                    }
                                                    local_130 = '\x01';
                                                    local_138 = plVar25;
                                                    cVar11 = FUN_00d90eb0();
                                                    lVar20 = DAT_027cd5a0;
                                                    plVar18 = (longlong *)
                                                              CONCAT71((int7)((ulonglong)plVar18 >>
                                                                             8),1);
                                                    local_5c = (uint)plVar18;
                                                    if (cVar11 == '\0') {
                                                      if (DAT_027cd5a0 != 0) {
                                                        FUN_00d50b00();
                                                      }
                                                      lVar28 = DAT_027cd5b0;
                                                      local_1e8 = lVar20;
                                                      local_1e0 = '\x01';
                                                      if (DAT_027cd5b0 != 0) {
                                                        FUN_00d50b00();
                                                      }
                                                      local_1d8 = lVar28;
                                                      local_1d0 = '\x01';
                                                      local_1c8 = 0;
                                                      local_1c0 = '\0';
                                                      plVar18 = &local_1c8;
                                                      FUN_00d31230(plVar18,&local_1d8);
                                                      local_128 = local_70;
                                                      local_120 = 0;
                                                      if (local_68 == '\0') {
                                                        if (local_70 != 0) {
                                                          FUN_00d50b00();
                                                        }
                                                      }
                                                      else {
                                                        local_68 = '\0';
                                                      }
                                                      local_120 = '\x01';
                                                      cVar11 = FUN_00d90eb0();
                                                      plVar18 = (longlong *)
                                                                CONCAT71((int7)((ulonglong)plVar18
                                                                               >> 8),1);
                                                      local_5c = (uint)plVar18;
                                                      if (cVar11 == '\0') {
                                                        local_1b8 = local_a8;
                                                        local_1b0 = '\0';
                                                        local_5c = (**(code **)(*local_a0 + 0x50))()
                                                        ;
                                                        if ((local_1b0 != '\0') &&
                                                           (local_1b8 != (longlong *)0x0)) {
                                                          FUN_00d50b20();
                                                        }
                                                      }
                                                      if ((local_120 != '\0') && (local_128 != 0)) {
                                                        FUN_00d50b20();
                                                      }
                                                      if ((local_68 != '\0') && (local_70 != 0)) {
                                                        FUN_00d50b20();
                                                      }
                                                      if ((local_1c0 != '\0') && (local_1c8 != 0)) {
                                                        FUN_00d50b20();
                                                      }
                                                      if ((local_1d0 != '\0') && (local_1d8 != 0)) {
                                                        FUN_00d50b20();
                                                      }
                                                      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
                                                        FUN_00d50b20();
                                                      }
                                                    }
                                                    if ((local_130 != '\0') &&
                                                       (local_138 != (longlong *)0x0)) {
                                                      FUN_00d50b20();
                                                    }
                                                    if ((local_38 != '\0') &&
                                                       (local_40 != (longlong *)0x0)) {
                                                      FUN_00d50b20();
                                                    }
                                                    if ((local_1f0 != '\0') && (local_1f8 != 0)) {
                                                      FUN_00d50b20();
                                                    }
                                                    if ((local_200 != '\0') && (local_208 != 0)) {
                                                      FUN_00d50b20();
                                                    }
                                                    if (lVar19 != 0) {
                                                      FUN_00d50b20();
                                                    }
                                                  }
                                                  if (local_90 != (longlong *)0x0) {
                                                    FUN_00d50b20();
                                                  }
                                                  if (local_a8 != (longlong *)0x0) {
                                                    FUN_00d50b20();
                                                  }
                                                  if (local_48 != (longlong *)0x0) {
                                                    FUN_00d50b20();
                                                  }
                                                  } while (((char)local_5c == '\0') &&
                                                          (plVar18 = (longlong *)
                                                                     ((longlong)local_178 + 1),
                                                          local_178 = plVar18,
                                                          (longlong)plVar18 <
                                                          (longlong)*(int *)(local_98 + 0xc)));
                                                  local_5c = local_5c ^ 1;
                                                  }
                                                  pvVar17 = _pthread_getspecific
                                                                      ((pthread_key_t)plVar18);
                                                  plVar25 = local_50;
                                                  if ((pvVar17 != (void *)0x0) &&
                                                     (lVar19 = FUN_00e8b990(), plVar25 = local_50,
                                                     lVar19 != 0)) {
                                                    plVar25 = (longlong *)
                                                              local_50[(ulonglong)
                                                                       (*(uint *)(lVar19 + 0x154) &
                                                                       1) + 4];
                                                    plVar18 = local_50;
                                                  }
                                                  pVar21 = (pthread_key_t)plVar18;
                                                  local_48 = (longlong *)plVar25[0xb];
                                                  if (local_48 == (longlong *)0x0) {
                                                    bVar13 = 0;
                                                  }
                                                  else {
                                                    FUN_00d50b00();
                                                    FUN_016ab300();
                                                    pvVar17 = _pthread_getspecific(pVar21);
                                                    if ((pvVar17 != (void *)0x0) &&
                                                       (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                                                      pVar21 = (pthread_key_t)local_48;
                                                    }
                                                    uVar35 = FUN_01736d70();
                                                    local_118 = local_80;
                                                    local_110 = 0;
                                                    if (local_78 == '\0') {
                                                      if (local_80 != (longlong *)0x0) {
                                                        uVar35 = FUN_00d50b00();
                                                      }
                                                    }
                                                    else {
                                                      local_78 = '\0';
                                                    }
                                                    local_110 = '\x01';
                                                    FUN_016ac280(uVar35,&local_118);
                                                    plVar18 = local_40;
                                                    if ((local_38 != '\0') &&
                                                       (local_40 != (longlong *)0x0)) {
                                                      FUN_00d50b20();
                                                    }
                                                    if ((local_110 != '\0') &&
                                                       (local_118 != (longlong *)0x0)) {
                                                      FUN_00d50b20();
                                                    }
                                                    if ((local_78 != '\0') &&
                                                       (local_80 != (longlong *)0x0)) {
                                                      FUN_00d50b20();
                                                    }
                                                    if ((local_68 != '\0') && (local_70 != 0)) {
                                                      FUN_00d50b20();
                                                    }
                                                    bVar13 = 0;
                                                    if (((plVar18 != (longlong *)0x0) &&
                                                        (*local_c8 != 0)) && (!bVar14)) {
                                                      pvVar17 = _pthread_getspecific(pVar21);
                                                      if ((pvVar17 != (void *)0x0) &&
                                                         (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                                                        pVar21 = (pthread_key_t)local_48;
                                                      }
                                                      FUN_01736da0();
                                                      plVar18 = local_40;
                                                      pvVar17 = _pthread_getspecific(pVar21);
                                                      if (pvVar17 != (void *)0x0) {
                                                        FUN_00e8b990();
                                                      }
                                                      FUN_01736da0();
                                                      local_108 = local_70;
                                                      local_100 = 0;
                                                      if (local_68 == '\0') {
                                                        if (local_70 != 0) {
                                                          FUN_00d50b00();
                                                        }
                                                      }
                                                      else {
                                                        local_68 = '\0';
                                                      }
                                                      local_100 = '\x01';
                                                      cVar11 = (**(code **)(*plVar18 + 0x50))();
                                                      if (cVar11 == '\0') {
                                                        bVar13 = 0;
                                                      }
                                                      else {
                                                        FUN_016ab300();
                                                        pvVar17 = _pthread_getspecific(pVar21);
                                                        if ((pvVar17 != (void *)0x0) &&
                                                           (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                                                          pVar21 = (pthread_key_t)local_48;
                                                        }
                                                        uVar35 = FUN_01736d70();
                                                        local_f8 = local_1a8;
                                                        local_f0 = 0;
                                                        if (local_1a0 == '\0') {
                                                          if (local_1a8 != 0) {
                                                            uVar35 = FUN_00d50b00();
                                                          }
                                                        }
                                                        else {
                                                          local_1a0 = '\0';
                                                        }
                                                        local_f0 = '\x01';
                                                        FUN_016ac280(uVar35,&local_f8);
                                                        local_90 = local_80;
                                                        FUN_016ab300();
                                                        pvVar17 = _pthread_getspecific(pVar21);
                                                        if (pvVar17 != (void *)0x0) {
                                                          FUN_00e8b990();
                                                        }
                                                        uVar35 = FUN_01736d70();
                                                        local_d8 = local_188;
                                                        local_d0 = 0;
                                                        if (local_180 == '\0') {
                                                          if (local_188 != 0) {
                                                            uVar35 = FUN_00d50b00();
                                                          }
                                                        }
                                                        else {
                                                          local_180 = '\0';
                                                        }
                                                        local_d0 = '\x01';
                                                        FUN_016ac280(uVar35,&local_d8);
                                                        local_e8 = local_198;
                                                        local_e0 = 0;
                                                        if (local_190 == '\0') {
                                                          if (local_198 != 0) {
                                                            FUN_00d50b00();
                                                          }
                                                        }
                                                        else {
                                                          local_190 = '\0';
                                                        }
                                                        local_e0 = '\x01';
                                                        bVar13 = (**(code **)(*local_90 + 0x50))();
                                                        if ((local_e0 != '\0') && (local_e8 != 0)) {
                                                          FUN_00d50b20();
                                                        }
                                                        if ((local_190 != '\0') && (local_198 != 0))
                                                        {
                                                          FUN_00d50b20();
                                                        }
                                                        if ((local_d0 != '\0') && (local_d8 != 0)) {
                                                          FUN_00d50b20();
                                                        }
                                                        if ((local_180 != '\0') && (local_188 != 0))
                                                        {
                                                          FUN_00d50b20();
                                                        }
                                                        if ((local_238 != '\0') && (local_240 != 0))
                                                        {
                                                          FUN_00d50b20();
                                                        }
                                                        if ((local_78 != '\0') &&
                                                           (local_80 != (longlong *)0x0)) {
                                                          FUN_00d50b20();
                                                        }
                                                        if ((local_f0 != '\0') && (local_f8 != 0)) {
                                                          FUN_00d50b20();
                                                        }
                                                        if ((local_1a0 != '\0') && (local_1a8 != 0))
                                                        {
                                                          FUN_00d50b20();
                                                        }
                                                        if ((local_248 != '\0') && (local_250 != 0))
                                                        {
                                                          FUN_00d50b20();
                                                        }
                                                      }
                                                      if ((local_100 != '\0') && (local_108 != 0)) {
                                                        FUN_00d50b20();
                                                      }
                                                      if ((local_68 != '\0') && (local_70 != 0)) {
                                                        FUN_00d50b20();
                                                      }
                                                      if ((local_38 != '\0') &&
                                                         (local_40 != (longlong *)0x0)) {
                                                        FUN_00d50b20();
                                                      }
                                                    }
                                                  }
                                                  if ((byte)((byte)local_5c | bVar13) == 1) {
                                                    if (bVar13 == 0) {
                                                      local_40 = local_58;
                                                      local_38 = '\0';
                                                      FUN_00d21140();
                                                      if ((local_38 != '\0') &&
                                                         (local_40 != (longlong *)0x0)) {
                                                        FUN_00d50b20();
                                                      }
                                                    }
                                                    else {
                                                      local_40 = local_58;
                                                      local_38 = '\0';
                                                      FUN_00d23370();
                                                      if ((local_38 != '\0') &&
                                                         (local_40 != (longlong *)0x0)) {
                                                        FUN_00d50b20();
                                                      }
                                                      bVar14 = true;
                                                    }
                                                  }
                                                  if (local_48 != (longlong *)0x0) {
                                                    FUN_00d50b20();
                                                  }
                                                  if (local_88 != (longlong *)0x0) {
                                                    FUN_00d50b20();
                                                  }
                                                  if (local_a0 != (longlong *)0x0) {
                                                    FUN_00d50b20();
                                                  }
                                                  }
                                                  }
                                                  else if (*(int *)((longlong)plVar18 + 0x5c) != 3)
                                                  goto LAB_01752073;
                                                  }
                                                  }
                                                  else if ((int)plVar18[0xb] != 3)
                                                  goto LAB_01752057;
                                                  }
                                                  }
                                                  else if (*(int *)((longlong)plVar18 + 0x54) != 3)
                                                  goto LAB_0175203b;
                                                  }
                                                  }
                                                  else if ((int)plVar18[10] != 3) goto LAB_0175201f;
                                                  }
                                                  }
                                                  else if (*(int *)((longlong)plVar18 + 0x4c) != 3)
                                                  goto LAB_01752003;
                                                  }
                                                  }
                                                  else if ((int)plVar18[9] != 3) goto LAB_01751fe7;
                                                  }
                                                  }
                                                  else if (*(int *)((longlong)plVar18 + 0x44) != 3)
                                                  goto LAB_01751fcb;
                                                  }
                                                  }
                                                  else if ((int)plVar18[8] != 3) goto LAB_01751faf;
                                                  }
                                                  }
                                                  else if (*(int *)((longlong)plVar18 + 0x3c) != 3)
                                                  goto LAB_01751f93;
                                                  }
                                                  }
                                                  else if ((int)plVar18[7] != 3) goto LAB_01751f77;
                                                  }
                                                  }
                                                  else if (*(int *)((longlong)plVar18 + 0x34) != 3)
                                                  goto LAB_01751f5b;
                                                  }
                                                  }
                                                  else if ((int)plVar18[6] != 3) goto LAB_01751f3f;
                                                  }
                                                  }
                                                  else if (*(int *)((longlong)plVar18 + 0x2c) != 3)
                                                  goto LAB_01751f23;
                                                  }
                                                  }
                                                  else if ((int)plVar18[5] != 3) goto LAB_01751f07;
                                                  }
                                                  }
                                                  else if (*(int *)((longlong)plVar18 + 0x24) != 3)
                                                  goto LAB_01751eeb;
                                                  }
                                                  }
                                                  else if ((int)plVar18[4] != 3) goto LAB_01751ecf;
                                                  }
                                                  }
                                                  else if (*(int *)((longlong)plVar18 + 0x1c) != 3)
                                                  goto LAB_01751eb3;
                                                }
                                              }
                                              else if ((int)plVar18[3] != 3) goto LAB_01751e97;
                                            }
                                          }
                                          else if (*(int *)((longlong)plVar18 + 0x14) != 3)
                                          goto LAB_01751e7b;
                                        }
                                      }
                                      else if ((int)plVar18[2] != 3) goto LAB_01751e5f;
                                    }
                                  }
                                  else if (*(int *)((longlong)plVar18 + 0xc) != 3)
                                  goto LAB_01751e43;
                                }
                              }
                              else if ((int)plVar18[1] != 3) goto LAB_01751e27;
                            }
                          }
                          else if (*(int *)((longlong)plVar18 + 4) != 3) goto LAB_01751e0b;
                        }
                      }
                      else if ((int)*plVar18 != 3) goto LAB_01751def;
                      FUN_00d50b20();
                    }
                  }
                }
LAB_01752ff0:
                if (local_50 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if (local_58 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                lVar34 = lVar34 + 1;
              } while (lVar34 < *(int *)((longlong)local_b8 + 0xc));
            }
            lVar34 = local_c0[2];
            pdVar31 = (dword *)((longlong)&MACH_HEADER.magic + 1);
            bVar14 = true;
            if (((*(int *)(lVar34 + 4) == 0) &&
                (pdVar31 = (dword *)((longlong)&MACH_HEADER.magic + 2), *(int *)(lVar34 + 8) == 0))
               && (pdVar31 = (dword *)((longlong)&MACH_HEADER.magic + 3),
                  *(int *)(lVar34 + 0xc) == 0)) {
              if (*(int *)(lVar34 + 0x10) == 0) {
                if (*(int *)(lVar34 + 0x14) == 0) {
                  if (*(int *)(lVar34 + 0x18) == 0) {
                    if (*(int *)(lVar34 + 0x1c) == 0) {
                      if (*(int *)(lVar34 + 0x20) == 0) {
                        if (*(int *)(lVar34 + 0x24) == 0) {
                          if (*(int *)(lVar34 + 0x28) == 0) {
                            if (*(int *)(lVar34 + 0x2c) == 0) {
                              if (*(int *)(lVar34 + 0x30) == 0) {
                                if (*(int *)(lVar34 + 0x34) == 0) {
                                  if (*(int *)(lVar34 + 0x38) == 0) {
                                    if (*(int *)(lVar34 + 0x3c) == 0) {
                                      if (*(int *)(lVar34 + 0x40) == 0) {
                                        if (*(int *)(lVar34 + 0x44) == 0) {
                                          if (*(int *)(lVar34 + 0x48) == 0) {
                                            if (*(int *)(lVar34 + 0x4c) == 0) {
                                              if (*(int *)(lVar34 + 0x50) == 0) {
                                                if (*(int *)(lVar34 + 0x54) == 0) {
                                                  if (*(int *)(lVar34 + 0x58) == 0) {
                                                    if (*(int *)(lVar34 + 0x5c) == 0) {
                                                      if (local_98 != 0) {
                                                        FUN_00d50b20();
                                                      }
                                                      *unaff_RDI = local_b0;
                                                      *(undefined1 *)(unaff_RDI + 1) = 1;
                                                      goto LAB_017536cf;
                                                    }
                                                    pdVar31 = (dword *)((longlong)
                                                                        &MACH_HEADER.sizeofcmds + 3)
                                                    ;
                                                  }
                                                  else {
                                                    pdVar31 = (dword *)((longlong)
                                                                        &MACH_HEADER.sizeofcmds + 2)
                                                    ;
                                                  }
                                                }
                                                else {
                                                  pdVar31 = (dword *)((longlong)
                                                                      &MACH_HEADER.sizeofcmds + 1);
                                                }
                                              }
                                              else {
                                                pdVar31 = &MACH_HEADER.sizeofcmds;
                                              }
                                            }
                                            else {
                                              pdVar31 = (dword *)((longlong)&MACH_HEADER.ncmds + 3);
                                            }
                                          }
                                          else {
                                            pdVar31 = (dword *)((longlong)&MACH_HEADER.ncmds + 2);
                                          }
                                        }
                                        else {
                                          pdVar31 = (dword *)((longlong)&MACH_HEADER.ncmds + 1);
                                        }
                                      }
                                      else {
                                        pdVar31 = &MACH_HEADER.ncmds;
                                      }
                                    }
                                    else {
                                      pdVar31 = (dword *)((longlong)&MACH_HEADER.filetype + 3);
                                    }
                                  }
                                  else {
                                    pdVar31 = (dword *)((longlong)&MACH_HEADER.filetype + 2);
                                  }
                                }
                                else {
                                  pdVar31 = (dword *)((longlong)&MACH_HEADER.filetype + 1);
                                }
                              }
                              else {
                                pdVar31 = &MACH_HEADER.filetype;
                              }
                            }
                            else {
                              pdVar31 = (dword *)((longlong)&MACH_HEADER.cpusubtype + 3);
                            }
                          }
                          else {
                            pdVar31 = (dword *)((longlong)&MACH_HEADER.cpusubtype + 2);
                          }
                        }
                        else {
                          pdVar31 = (dword *)((longlong)&MACH_HEADER.cpusubtype + 1);
                        }
                      }
                      else {
                        pdVar31 = &MACH_HEADER.cpusubtype;
                      }
                    }
                    else {
                      pdVar31 = (dword *)((longlong)&MACH_HEADER.cputype + 3);
                    }
                  }
                  else {
                    pdVar31 = (dword *)((longlong)&MACH_HEADER.cputype + 2);
                  }
                }
                else {
                  pdVar31 = (dword *)((longlong)&MACH_HEADER.cputype + 1);
                }
              }
              else {
                pdVar31 = &MACH_HEADER.cputype;
              }
              bVar14 = false;
            }
            FUN_00c8e690();
            plVar18 = local_40;
            if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
               ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
              FUN_00d50b20();
            }
            FUN_00c92170();
            FUN_00c92160();
            uVar5 = local_c0[2];
            uVar6 = plVar18[2];
            uVar30 = (uint)pdVar31;
            if ((bVar14) ||
               ((uVar6 < uVar5 + (longlong)pdVar31 * 4 && (uVar5 < uVar6 + (longlong)pdVar31 * 4))))
            {
              plVar25 = (longlong *)0x0;
LAB_01753221:
              uVar23 = ~(ulonglong)plVar25;
              for (uVar27 = (ulonglong)pdVar31 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *(undefined4 *)(uVar6 + (longlong)plVar25 * 4) =
                     *(undefined4 *)(uVar5 + (longlong)plVar25 * 4);
                plVar25 = (longlong *)((longlong)plVar25 + 1);
              }
              if (2 < uVar23 + (longlong)pdVar31) {
                do {
                  *(undefined4 *)(uVar6 + (longlong)plVar25 * 4) =
                       *(undefined4 *)(uVar5 + (longlong)plVar25 * 4);
                  *(undefined4 *)(uVar6 + 4 + (longlong)plVar25 * 4) =
                       *(undefined4 *)(uVar5 + 4 + (longlong)plVar25 * 4);
                  *(undefined4 *)(uVar6 + 8 + (longlong)plVar25 * 4) =
                       *(undefined4 *)(uVar5 + 8 + (longlong)plVar25 * 4);
                  *(undefined4 *)(uVar6 + 0xc + (longlong)plVar25 * 4) =
                       *(undefined4 *)(uVar5 + 0xc + (longlong)plVar25 * 4);
                  plVar25 = (longlong *)((longlong)plVar25 + 4);
                } while (pdVar31 != (dword *)plVar25);
              }
            }
            else {
              plVar25 = (longlong *)(ulonglong)(uVar30 & 0xfffffffc);
              uVar27 = ((longlong)plVar25 - 4U >> 2) + 1;
              uVar23 = (ulonglong)((uint)uVar27 & 7);
              if ((int *)((longlong)&MACH_HEADER.flags + 3) < (int *)((longlong)plVar25 - 4U)) {
                lVar34 = -(uVar27 & 0xfffffffffffffff8);
                lVar19 = 0;
                do {
                  puVar16 = (undefined8 *)(uVar5 + lVar19 * 4);
                  uVar9 = puVar16[1];
                  puVar3 = (undefined8 *)(uVar6 + lVar19 * 4);
                  *puVar3 = *puVar16;
                  puVar3[1] = uVar9;
                  puVar16 = (undefined8 *)(uVar5 + 0x10 + lVar19 * 4);
                  uVar9 = puVar16[1];
                  puVar3 = (undefined8 *)(uVar6 + 0x10 + lVar19 * 4);
                  *puVar3 = *puVar16;
                  puVar3[1] = uVar9;
                  puVar16 = (undefined8 *)(uVar5 + 0x20 + lVar19 * 4);
                  uVar9 = puVar16[1];
                  puVar3 = (undefined8 *)(uVar6 + 0x20 + lVar19 * 4);
                  *puVar3 = *puVar16;
                  puVar3[1] = uVar9;
                  puVar16 = (undefined8 *)(uVar5 + 0x30 + lVar19 * 4);
                  uVar9 = puVar16[1];
                  puVar3 = (undefined8 *)(uVar6 + 0x30 + lVar19 * 4);
                  *puVar3 = *puVar16;
                  puVar3[1] = uVar9;
                  puVar16 = (undefined8 *)(uVar5 + 0x40 + lVar19 * 4);
                  uVar9 = puVar16[1];
                  puVar3 = (undefined8 *)(uVar6 + 0x40 + lVar19 * 4);
                  *puVar3 = *puVar16;
                  puVar3[1] = uVar9;
                  puVar16 = (undefined8 *)(uVar5 + 0x50 + lVar19 * 4);
                  uVar9 = puVar16[1];
                  puVar3 = (undefined8 *)(uVar6 + 0x50 + lVar19 * 4);
                  *puVar3 = *puVar16;
                  puVar3[1] = uVar9;
                  puVar16 = (undefined8 *)(uVar5 + 0x60 + lVar19 * 4);
                  uVar9 = puVar16[1];
                  puVar3 = (undefined8 *)(uVar6 + 0x60 + lVar19 * 4);
                  *puVar3 = *puVar16;
                  puVar3[1] = uVar9;
                  puVar1 = (undefined4 *)(uVar5 + 0x70 + lVar19 * 4);
                  uVar35 = puVar1[1];
                  uVar7 = puVar1[2];
                  uVar8 = puVar1[3];
                  puVar2 = (undefined4 *)(uVar6 + 0x70 + lVar19 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar35;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  lVar19 = lVar19 + 0x20;
                  lVar34 = lVar34 + 8;
                } while (lVar34 != 0);
              }
              else {
                lVar19 = 0;
              }
              if (uVar23 != 0) {
                lVar34 = 0;
                do {
                  puVar1 = (undefined4 *)(uVar5 + lVar19 * 4 + lVar34);
                  uVar35 = puVar1[1];
                  uVar7 = puVar1[2];
                  uVar8 = puVar1[3];
                  puVar2 = (undefined4 *)(uVar6 + lVar19 * 4 + lVar34);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar35;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  lVar34 = lVar34 + 0x10;
                } while (uVar23 << 4 != lVar34);
              }
              if ((dword *)plVar25 != pdVar31) goto LAB_01753221;
            }
            uVar32 = -uVar30 + 0x18;
            uVar27 = (ulonglong)uVar32;
            if ((uVar32 < 4) ||
               ((uVar5 < uVar5 + ((longlong)pdVar31 + uVar27) * 4 &&
                (uVar5 + (longlong)pdVar31 * 4 < uVar5 + uVar27 * 4)))) {
              uVar23 = 0;
LAB_01753383:
              uVar29 = ~uVar23;
              uVar26 = uVar27 & 3;
              if ((uVar32 & 3) != 0) {
                do {
                  *(undefined4 *)(uVar5 + uVar23 * 4) =
                       *(undefined4 *)(uVar5 + (longlong)pdVar31 * 4 + uVar23 * 4);
                  uVar23 = uVar23 + 1;
                  uVar26 = uVar26 - 1;
                } while (uVar26 != 0);
              }
              if (2 < uVar29 + uVar27) {
                lVar34 = uVar5 + (longlong)pdVar31 * 4;
                do {
                  *(undefined4 *)(uVar5 + uVar23 * 4) = *(undefined4 *)(lVar34 + uVar23 * 4);
                  *(undefined4 *)(uVar5 + 4 + uVar23 * 4) = *(undefined4 *)(lVar34 + 4 + uVar23 * 4)
                  ;
                  *(undefined4 *)(uVar5 + 8 + uVar23 * 4) = *(undefined4 *)(lVar34 + 8 + uVar23 * 4)
                  ;
                  *(undefined4 *)(uVar5 + 0xc + uVar23 * 4) =
                       *(undefined4 *)(lVar34 + 0xc + uVar23 * 4);
                  uVar23 = uVar23 + 4;
                } while (uVar27 != uVar23);
              }
            }
            else {
              uVar23 = (ulonglong)(uVar32 & 0xfffffffc);
              uVar26 = (uVar23 - 4 >> 2) + 1;
              uVar29 = (ulonglong)((uint)uVar26 & 3);
              if (uVar23 - 4 < 0xc) {
                lVar20 = 0;
              }
              else {
                lVar34 = uVar5 + (longlong)pdVar31 * 4;
                lVar19 = -(uVar26 & 0xfffffffffffffffc);
                lVar20 = 0;
                do {
                  puVar3 = (undefined8 *)(lVar34 + lVar20 * 4);
                  uVar9 = puVar3[1];
                  puVar16 = (undefined8 *)(uVar5 + lVar20 * 4);
                  *puVar16 = *puVar3;
                  puVar16[1] = uVar9;
                  puVar16 = (undefined8 *)(lVar34 + 0x10 + lVar20 * 4);
                  uVar9 = puVar16[1];
                  puVar3 = (undefined8 *)(uVar5 + 0x10 + lVar20 * 4);
                  *puVar3 = *puVar16;
                  puVar3[1] = uVar9;
                  puVar16 = (undefined8 *)(lVar34 + 0x20 + lVar20 * 4);
                  uVar9 = puVar16[1];
                  puVar3 = (undefined8 *)(uVar5 + 0x20 + lVar20 * 4);
                  *puVar3 = *puVar16;
                  puVar3[1] = uVar9;
                  puVar1 = (undefined4 *)(lVar34 + 0x30 + lVar20 * 4);
                  uVar35 = puVar1[1];
                  uVar7 = puVar1[2];
                  uVar8 = puVar1[3];
                  puVar2 = (undefined4 *)(uVar5 + 0x30 + lVar20 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar35;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  lVar20 = lVar20 + 0x10;
                  lVar19 = lVar19 + 4;
                } while (lVar19 != 0);
              }
              if (uVar29 != 0) {
                lVar34 = uVar5 + lVar20 * 4;
                lVar19 = 0;
                do {
                  puVar1 = (undefined4 *)(lVar34 + (longlong)pdVar31 * 4 + lVar19);
                  uVar35 = puVar1[1];
                  uVar7 = puVar1[2];
                  uVar8 = puVar1[3];
                  puVar2 = (undefined4 *)(lVar34 + lVar19);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar35;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  lVar19 = lVar19 + 0x10;
                } while (uVar29 << 4 != lVar19);
              }
              if (uVar23 != uVar27) goto LAB_01753383;
            }
            uVar27 = (ulonglong)(int)uVar32;
            uVar24 = uVar32;
            if ((bVar14) ||
               ((uVar5 + uVar27 * 4 < uVar6 + (longlong)pdVar31 * 4 && (uVar6 < uVar5 + 0x60)))) {
joined_r0x017534d5:
              uVar23 = uVar27;
              if ((uVar27 & 1) != 0) {
                *(undefined4 *)(uVar5 + uVar27 * 4) =
                     *(undefined4 *)(uVar6 + (longlong)(int)(uVar24 - uVar32) * 4);
                uVar24 = uVar24 + 1;
                uVar23 = uVar27 + 1;
              }
              if (uVar27 != 0x17) {
                lVar34 = uVar5 + uVar23 * 4;
                lVar19 = uVar6 + ((ulonglong)uVar24 - (longlong)(int)-uVar30) * 4;
                lVar20 = 0;
                do {
                  *(undefined4 *)(lVar34 + lVar20 * 4) =
                       *(undefined4 *)(lVar19 + -0x60 + lVar20 * 4);
                  *(undefined4 *)(lVar34 + 4 + lVar20 * 4) =
                       *(undefined4 *)(lVar19 + -0x5c + lVar20 * 4);
                  lVar20 = lVar20 + 2;
                } while (0x18 - uVar23 != lVar20);
              }
            }
            else {
              local_58 = plVar18;
              local_50 = (longlong *)(ulonglong)(uVar30 & 0xfffffffc);
              uVar23 = ((ulonglong)((longlong)local_50 + -4) >> 2) + 1;
              uVar26 = (ulonglong)((uint)uVar23 & 3);
              if ((int *)((longlong)&MACH_HEADER.cpusubtype + 3) < (int *)((longlong)local_50 + -4))
              {
                lVar34 = uVar5 + uVar27 * 4;
                lVar20 = -(uVar23 & 0xfffffffffffffffc);
                lVar28 = 0;
                lVar19 = 0;
                do {
                  puVar16 = (undefined8 *)(uVar6 + (lVar28 >> 0x1e));
                  uVar9 = puVar16[1];
                  puVar3 = (undefined8 *)(lVar34 + lVar19 * 4);
                  *puVar3 = *puVar16;
                  puVar3[1] = uVar9;
                  puVar16 = (undefined8 *)(uVar6 + (lVar28 + 0x400000000 >> 0x1e));
                  uVar9 = puVar16[1];
                  puVar3 = (undefined8 *)(lVar34 + 0x10 + lVar19 * 4);
                  *puVar3 = *puVar16;
                  puVar3[1] = uVar9;
                  puVar16 = (undefined8 *)(uVar6 + (lVar28 + 0x800000000 >> 0x1e));
                  uVar9 = puVar16[1];
                  puVar3 = (undefined8 *)(lVar34 + 0x20 + lVar19 * 4);
                  *puVar3 = *puVar16;
                  puVar3[1] = uVar9;
                  puVar1 = (undefined4 *)(uVar6 + (lVar28 + 0xc00000000 >> 0x1e));
                  uVar35 = puVar1[1];
                  uVar7 = puVar1[2];
                  uVar8 = puVar1[3];
                  puVar2 = (undefined4 *)(lVar34 + 0x30 + lVar19 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar35;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  lVar19 = lVar19 + 0x10;
                  lVar28 = lVar28 + 0x1000000000;
                  lVar20 = lVar20 + 4;
                } while (lVar20 != 0);
              }
              else {
                lVar19 = 0;
              }
              if (uVar26 != 0) {
                lVar34 = lVar19 << 0x20;
                lVar20 = 0;
                do {
                  puVar1 = (undefined4 *)(uVar6 + (lVar34 >> 0x1e));
                  uVar35 = puVar1[1];
                  uVar7 = puVar1[2];
                  uVar8 = puVar1[3];
                  puVar2 = (undefined4 *)(uVar5 + (lVar19 - (longlong)pdVar31) * 4 + 0x60 + lVar20);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar35;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  lVar34 = lVar34 + 0x400000000;
                  lVar20 = lVar20 + 0x10;
                } while (uVar26 << 4 != lVar20);
              }
              if ((dword *)local_50 != pdVar31) {
                uVar27 = uVar27 + (longlong)local_50;
                uVar24 = (uVar30 & 0xfffffffc) + uVar32;
                goto joined_r0x017534d5;
              }
            }
            if (plVar18 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (local_98 != 0) {
              FUN_00d50b20();
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 != uVar15);
        }
        *unaff_RDI = local_b0;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (local_b8 != (longlong *)0x0) {
LAB_017536cf:
          FUN_00d50b20();
        }
        FUN_00d50b20();
        return unaff_RDI;
      }
    }
  }
  *unaff_RDI = local_b0;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


