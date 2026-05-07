// Function: FUN_016f2c50
// Address: 016f2c50
// Size: 6815 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016f2c50(double param_1,double param_2)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  ulonglong uVar6;
  int extraout_var;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  pthread_key_t in_ECX;
  pthread_key_t pVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  double dVar18;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  char *local_170;
  undefined1 local_168;
  ulonglong local_160;
  undefined1 local_158;
  ulonglong local_150;
  undefined1 local_148;
  longlong local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118;
  longlong local_110;
  undefined1 local_108;
  code *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  char *local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  double local_98;
  ulonglong local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  undefined8 local_60;
  char local_58;
  undefined8 local_48;
  char local_40 [8];
  
  local_88 = (char *)param_2;
  local_68 = (char *)param_1;
  FUN_016d53b0();
  if ((local_40[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  local_c8 = local_48;
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_70 = (char *)FUN_018fdaf0(local_68);
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fc680(local_88);
  FUN_00e7d850();
  uVar3 = FUN_00e7bcc0();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar17 = FUN_00e7bdb0();
  local_78 = (char *)FUN_016cda80(uVar17,uVar3);
  local_b8 = FUN_00e7bcc0();
  if ((double)local_78 / (double)local_70 <= _DAT_024119d8) {
    if ((double)local_78 / (double)local_70 < DAT_024119e0) {
      local_b8 = FUN_00e7bcc0();
    }
  }
  else {
    local_b8 = FUN_00e7bcc0();
  }
  local_48 = FUN_00e7bcc0();
  if (((local_b8._4_4_ == 0) || (local_48 >> 0x20 == 0)) || (cVar1 = FUN_00e7c000(), cVar1 == '\0'))
  {
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016f4db0();
  }
  pcVar4 = (char *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar12 = &DAT_02572358;
  local_f8 = &DAT_02572358;
  *(undefined **)pcVar4 = &DAT_02572358;
  local_100 = DAT_02572370;
  (*DAT_02572370)();
  pVar11 = (pthread_key_t)puVar12;
  local_70 = pcVar4;
  if (0 < *(int *)(*(longlong *)(unaff_RDI + 0x60) + 0xc)) {
    lVar15 = 0;
    do {
      pVar11 = (pthread_key_t)puVar12;
      pvVar2 = _pthread_getspecific(pVar11);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01909dc0();
      pvVar2 = _pthread_getspecific(pVar11);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar3 = FUN_0190a000();
      FUN_01909ea0(extraout_XMM0_Qa,uVar3);
      local_48 = local_60;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_40[0] = '\0';
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar15 = lVar15 + 1;
      pVar11 = *(pthread_key_t *)(*(longlong *)(unaff_RDI + 0x60) + 0xc);
      puVar12 = (undefined *)(longlong)(int)pVar11;
    } while (lVar15 < (longlong)puVar12);
  }
  pvVar2 = _pthread_getspecific(pVar11);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(pVar11);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_90 = local_48;
  pcVar4 = (char *)**(undefined8 **)(local_48 + 0x10);
  if (pcVar4 != (char *)0x0) {
    FUN_00d50b00();
  }
  local_80 = pcVar4;
  pvVar2 = _pthread_getspecific(pVar11);
  if ((pvVar2 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
    pVar11 = (pthread_key_t)local_80;
  }
  local_78 = (char *)FUN_01907950();
  local_f0 = FUN_016cba50(local_78,0);
  pvVar2 = _pthread_getspecific(pVar11);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_98 = (double)FUN_018fdaf0(local_78);
  local_c0 = (double)FUN_00e7c860();
  FUN_00e7bcc0();
  local_78 = (char *)((double)local_78 + (DAT_02410f70 / local_98) * local_c0 * DAT_024119e8);
  FUN_016cb850(local_78,0);
  FUN_00e7cd00();
  pvVar2 = _pthread_getspecific(pVar11);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pcVar4 = (char *)FUN_0165d690();
  pvVar2 = _pthread_getspecific(pVar11);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990(local_78);
  }
  uVar3 = FUN_019003c0(local_78,0);
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  if (((local_48 != 0) && (FUN_016da710(uVar3,pcVar4), local_1a8 != '\0')) && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar11);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pcVar10 = (char *)0x0;
  FUN_018ff980(0,pcVar4);
  local_98 = (double)local_48;
  if (((local_40[0] == '\0') && (local_48 != 0)) &&
     ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != 0)))) {
    FUN_00d50b20();
  }
  FUN_00e7b820();
  pvVar2 = _pthread_getspecific((pthread_key_t)pcVar10);
  if ((pvVar2 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
    pcVar10 = local_80;
  }
  local_60 = FUN_019079b0();
  FUN_00e7b970();
  local_e8 = pcVar4;
  pvVar2 = _pthread_getspecific((pthread_key_t)pcVar10);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)pcVar10);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01901d80();
  FUN_00e7bcc0();
  FUN_016cb850((double)local_68 + (double)local_88,0);
  FUN_00e7cd00();
  pvVar2 = _pthread_getspecific((pthread_key_t)pcVar10);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar3 = FUN_0165d690();
  uVar17 = FUN_016da710(extraout_XMM0_Qa_00,uVar3);
  if ((local_40[0] == '\0') && (pcVar4 != (char *)0x0)) {
    uVar17 = FUN_00d50b00();
  }
  local_68 = pcVar4;
  FUN_016d5810(uVar17,uVar3);
  pcVar5 = pcVar4;
  if (local_40[0] == '\0') {
    if (pcVar4 != (char *)0x0) {
      FUN_00d50b00();
      goto LAB_016f35bf;
    }
  }
  else if (pcVar4 != (char *)0x0) goto LAB_016f35bf;
  local_88 = (char *)**(undefined8 **)(*(longlong *)(unaff_RDI + 0x60) + 0x10);
  if (local_88 != (char *)0x0) {
    FUN_00d50b00();
    pcVar5 = local_88;
  }
LAB_016f35bf:
  local_88 = pcVar5;
  pvVar2 = _pthread_getspecific((pthread_key_t)pcVar10);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78 = (char *)FUN_018fcb10();
  local_d8 = FUN_016cba50(local_78,0);
  pvVar2 = _pthread_getspecific((pthread_key_t)pcVar10);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c0 = (double)FUN_018fdaf0(local_78);
  dVar18 = (double)FUN_00e7c860();
  local_78 = (char *)((double)local_78 + (DAT_02410f70 / local_c0) * dVar18 * DAT_024119e8);
  local_b0 = uVar3;
  while( true ) {
    pvVar2 = _pthread_getspecific((pthread_key_t)pcVar10);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)pcVar10);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar18 = (double)FUN_018fcb10();
    if (dVar18 <= (double)local_78) break;
    FUN_00e7b970();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)pcVar10);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016da710();
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  iVar16 = *(int *)(local_90 + 0xc);
  do {
    if (iVar16 < 3) {
LAB_016f46e0:
      if (local_88 != (char *)0x0) {
        FUN_00d50b20();
      }
      if (local_68 != (char *)0x0) {
        FUN_00d50b20();
      }
      if (local_98 != 0.0) {
        FUN_00d50b20();
      }
      if (local_80 != (char *)0x0) {
        FUN_00d50b20();
      }
      if (local_90 != 0) {
        FUN_00d50b20();
      }
      if (local_70 != (char *)0x0) {
        FUN_00d50b20();
      }
      if (local_c8 != 0) {
        FUN_00d50b20();
      }
      return;
    }
    pVar11 = (pthread_key_t)pcVar10;
    pvVar2 = _pthread_getspecific(pVar11);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific(pVar11);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    pvVar2 = _pthread_getspecific(pVar11);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = FUN_019079b0();
    cVar1 = '\0';
    if ((local_60 >> 0x20 != 0) && (local_b0._4_4_ != 0)) {
      cVar1 = FUN_00e7c020();
    }
    if ((local_40[0] != '\0') && (pcVar4 != (char *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      if (2 < *(int *)(local_90 + 0xc)) {
        FUN_00d23340();
        local_a0 = CONCAT71(local_a0._1_7_,local_40[0]);
        pcVar10 = local_40;
        pcVar5 = (char *)&local_a0;
        if (local_40[0] != '\0') {
          pcVar5 = pcVar10;
        }
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (pcVar4 != (char *)0x0)) {
          FUN_00d50b20();
        }
        pvVar2 = _pthread_getspecific((pthread_key_t)pcVar10);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_019079b0();
        FUN_00e7b820();
        pvVar2 = _pthread_getspecific((pthread_key_t)pcVar10);
        if ((pvVar2 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pcVar10 = local_68;
        }
        local_60 = FUN_019079b0();
        FUN_00e7b970();
        local_d0 = uVar3;
        if (((char)local_a0 != '\0') && (pcVar4 != (char *)0x0)) {
          FUN_00d50b20();
        }
        pvVar2 = _pthread_getspecific((pthread_key_t)pcVar10);
        if ((pvVar2 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pcVar10 = local_80;
        }
        local_a0 = FUN_019079b0();
        uVar14 = *(uint *)(local_70 + 0xc);
        if (0 < (int)uVar14) {
          lVar15 = (ulonglong)uVar14 + 1;
          do {
            uVar14 = uVar14 - 1;
            lVar8 = *(longlong *)(local_70 + 0x10);
            lVar7 = *(longlong *)(lVar8 + (ulonglong)uVar14 * 8);
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
            pVar11 = (pthread_key_t)lVar8;
            pvVar2 = _pthread_getspecific(pVar11);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar6 = FUN_01909dc0();
            if (((uVar6 >> 0x20 != 0) && (local_a0._4_4_ != 0)) &&
               (cVar1 = FUN_00e7c020(), cVar1 == '\0')) {
              pvVar2 = _pthread_getspecific(pVar11);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_60 = FUN_01909dc0();
              pvVar2 = _pthread_getspecific(pVar11);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_a8 = FUN_019079b0();
              if (((local_60._4_4_ != 0) && (local_a8 >> 0x20 != 0)) &&
                 (cVar1 = FUN_00e7c020(), cVar1 == '\0')) {
                FUN_00d23620();
              }
            }
            if (lVar7 != 0) {
              FUN_00d50b20();
            }
            lVar15 = lVar15 + -1;
          } while (1 < lVar15);
          pcVar10 = local_70;
          if (0 < *(int *)(local_70 + 0xc)) {
            lVar15 = 0;
            do {
              lVar8 = *(longlong *)(*(longlong *)(local_70 + 0x10) + lVar15 * 8);
              pcVar4 = local_70;
              if (lVar8 != 0) {
                FUN_00d50b00();
              }
              pVar11 = (pthread_key_t)pcVar4;
              pvVar2 = _pthread_getspecific(pVar11);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01909dc0();
              pvVar2 = _pthread_getspecific(pVar11);
              if ((pvVar2 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                pVar11 = (pthread_key_t)local_68;
              }
              local_60 = FUN_019079b0();
              if (((extraout_var != 0) && (local_60 >> 0x20 != 0)) &&
                 (cVar1 = FUN_00e7c020(), cVar1 == '\0')) {
                pvVar2 = _pthread_getspecific(pVar11);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar2 = _pthread_getspecific(pVar11);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01909dc0();
                FUN_00e7b820();
                FUN_01909fa0();
              }
              if (lVar8 != 0) {
                FUN_00d50b20();
              }
              lVar15 = lVar15 + 1;
              pcVar10 = local_70;
            } while (lVar15 < *(int *)(local_70 + 0xc));
          }
        }
        lVar15 = *unaff_RSI;
        pvVar2 = _pthread_getspecific((pthread_key_t)pcVar10);
        if (pvVar2 != (void *)0x0) {
          lVar15 = *unaff_RSI;
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            lVar15 = *(longlong *)(lVar15 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
        }
        pcVar4 = *(char **)(lVar15 + 0x60);
        if (pcVar4 != (char *)0x0) {
          FUN_00d50b00();
        }
        local_78 = pcVar4;
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = local_f8;
        (*local_100)();
        pvVar2 = _pthread_getspecific((pthread_key_t)pcVar10);
        if ((pvVar2 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pcVar10 = local_68;
        }
        uVar6 = FUN_019079b0();
        FUN_00e7b820();
        local_a8 = uVar6;
        if (0 < *(int *)(pcVar4 + 0xc)) {
          lVar15 = 0;
          do {
            lVar8 = *(longlong *)(*(longlong *)(pcVar4 + 0x10) + lVar15 * 8);
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            pVar11 = (pthread_key_t)pcVar4;
            pvVar2 = _pthread_getspecific(pVar11);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar6 = FUN_01909dc0();
            FUN_00e7b820();
            local_e0 = uVar6;
            if (((uVar6 >> 0x20 != 0) && (local_a8._4_4_ != 0)) &&
               (cVar1 = FUN_00e7c020(), cVar1 != '\0')) {
              pvVar2 = _pthread_getspecific(pVar11);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar3 = FUN_0190a000();
              FUN_01909ea0(extraout_XMM0_Qa_01,uVar3);
              uVar6 = local_60;
              if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              local_40[0] = '\0';
              FUN_00d21140();
              if ((local_40[0] != '\0') && (uVar6 != 0)) {
                FUN_00d50b20();
              }
              if (uVar6 != 0) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            lVar15 = lVar15 + 1;
            pcVar4 = local_78;
            pcVar10 = local_78;
          } while (lVar15 < *(int *)(local_78 + 0xc));
        }
        pvVar2 = _pthread_getspecific((pthread_key_t)pcVar10);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_0190a000();
        FUN_01909ea0(extraout_XMM0_Qa_02,uVar3);
        local_48 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_40[0] = '\0';
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (0 < *(int *)((longlong)puVar9 + 0xc)) {
          lVar15 = 0;
          do {
            local_48 = *(ulonglong *)(puVar9[2] + lVar15 * 8);
            puVar13 = puVar9;
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            pvVar2 = _pthread_getspecific((pthread_key_t)puVar13);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_60 = FUN_01909dc0();
            iVar16 = *(int *)(local_70 + 0xc);
            uVar3 = extraout_XMM0_Qa_03;
            if (0 < iVar16) {
              lVar8 = 0;
              do {
                pVar11 = (pthread_key_t)local_70;
                pvVar2 = _pthread_getspecific(pVar11);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar6 = FUN_01909dc0();
                uVar3 = extraout_XMM0_Qa_04;
                if (((local_60._4_4_ != 0) && (uVar6 >> 0x20 != 0)) &&
                   (cVar1 = FUN_00e7c020(), uVar3 = extraout_XMM0_Qa_05, cVar1 == '\0')) {
                  pvVar2 = _pthread_getspecific(pVar11);
                  if (pvVar2 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar6 = FUN_01909dc0();
                  uVar3 = extraout_XMM0_Qa_06;
                  if (((local_60._4_4_ != 0) && (uVar6 >> 0x20 != 0)) &&
                     (cVar1 = FUN_00e7c000(), uVar3 = extraout_XMM0_Qa_07, cVar1 != '\0')) {
                    uVar3 = FUN_00d23620();
                  }
                  iVar16 = (int)lVar8;
                  break;
                }
                lVar8 = lVar8 + 1;
              } while (lVar8 < *(int *)(local_70 + 0xc));
            }
            local_40[0] = '\0';
            FUN_00d23370(uVar3,iVar16);
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            lVar15 = lVar15 + 1;
          } while (lVar15 < *(int *)((longlong)puVar9 + 0xc));
        }
        if (1 < *(int *)(local_70 + 0xc)) {
          lVar15 = 1;
          do {
            pVar11 = (pthread_key_t)local_70;
            pvVar2 = _pthread_getspecific(pVar11);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar6 = FUN_01909dc0();
            pvVar2 = _pthread_getspecific(pVar11);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_60 = FUN_01909dc0();
            local_48._4_4_ = (int)(uVar6 >> 0x20);
            if ((local_48._4_4_ != 0) && (local_60 >> 0x20 != 0)) {
              FUN_00e7c020();
            }
            lVar15 = lVar15 + 1;
            local_48 = uVar6;
          } while (lVar15 < *(int *)(local_70 + 0xc));
        }
        local_170 = local_68;
        local_168 = 0;
        local_160 = local_90;
        local_158 = 0;
        uVar3 = FUN_00e7bdb0();
        FUN_016e9760(0,&local_170,&local_160,uVar3);
        pcVar4 = local_78;
        iVar16 = *(int *)(*(longlong *)(unaff_RDI + 0x60) + 0xc);
        while (iVar16 != 0) {
          uVar3 = FUN_00d23340();
          local_60 = CONCAT71(local_60._1_7_,local_40[0]);
          pcVar10 = local_40;
          if (local_40[0] == '\0') {
            pcVar10 = (char *)&local_60;
          }
          *pcVar10 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            uVar3 = FUN_00d50b20();
          }
          if (((char)local_60 == '\0') && (local_48 != 0)) {
            uVar3 = FUN_00d50b00();
          }
          local_150 = local_48;
          local_148 = 1;
          FUN_016d7fb0(uVar3,1);
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          iVar16 = *(int *)(*(longlong *)(unaff_RDI + 0x60) + 0xc);
        }
        if (0 < *(int *)(local_70 + 0xc)) {
          lVar15 = 0;
          do {
            lVar8 = *(longlong *)(*(longlong *)(local_70 + 0x10) + lVar15 * 8);
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            local_138 = 1;
            local_140 = lVar8;
            FUN_016d8160();
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            lVar15 = lVar15 + 1;
          } while (lVar15 < *(int *)(local_70 + 0xc));
        }
        local_128 = 0;
        local_130 = 0;
        local_120 = 0;
        local_118 = 0;
        pVar11 = 0;
        FUN_016dcbf0(0,&local_120);
        FUN_016d63b0();
        pvVar2 = _pthread_getspecific(pVar11);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_018f9310();
        local_110 = local_c8;
        local_108 = 0;
        FUN_016d6df0(uVar3,0);
        if (puVar9 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if (pcVar4 != (char *)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_016f46e0;
    }
    pvVar2 = _pthread_getspecific(pVar11);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d23340();
    local_60 = CONCAT71(local_60._1_7_,local_40[0]);
    pcVar10 = (char *)&local_60;
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = pcVar10;
    }
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (pcVar4 != (char *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 == '\0') && (pcVar4 != (char *)0x0)) {
      FUN_00d50b00();
    }
    FUN_016d5920();
    if (pcVar4 != (char *)0x0) {
      FUN_00d50b20();
    }
    iVar16 = *(int *)(local_90 + 0xc);
  } while( true );
}


