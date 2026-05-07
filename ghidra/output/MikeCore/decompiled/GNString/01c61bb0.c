// Function: FUN_01c61bb0
// Address: 01c61bb0
// Size: 2746 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01c61bb0(char *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  longlong lVar6;
  int iVar7;
  void *pvVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  char *in_RCX;
  longlong lVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar19 [16];
  float fVar20;
  longlong local_190;
  char local_188;
  longlong local_128;
  undefined1 local_120;
  char *local_118;
  undefined8 uStack_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  char *local_c8;
  undefined8 uStack_c0;
  int local_b4;
  double local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  char local_90;
  char *local_88;
  undefined8 local_80;
  int local_78;
  char local_69;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_c8 = param_1;
  uStack_c0 = in_XMM0_Qb;
  iVar7 = FUN_01d3a5a0();
  if ((((iVar7 == 1) && (iVar7 = FUN_01d3b620(), iVar7 == 1)) &&
      (iVar7 = FUN_01d3b630(), iVar7 == 1)) && (*param_2 != 0)) {
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
      FUN_01c427d0();
    }
    local_a0 = param_2;
    dVar13 = (double)FUN_01c5c560();
    local_69 = '\0';
    lVar9 = unaff_RDI[0x31];
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar14 = FUN_01909dc0();
    dVar15 = (double)FUN_016c98e0(uVar14,0);
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)unaff_RDI[0x2e];
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    dVar16 = (double)(**(code **)(*plVar2 + 0x388))();
    FUN_00d50b20();
    local_108 = unaff_RDI[0x31];
    if (local_108 != 0) {
      FUN_00d50b00();
    }
    local_100 = '\x01';
    FUN_016cbba0();
    lVar9 = local_98;
    if (local_90 == '\0') {
      if (((local_98 != 0) && (FUN_00d50b00(), local_90 != '\0')) && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_90 = '\0';
    }
    local_a8 = lVar9;
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    uVar12 = 0;
    do {
      local_118 = local_c8;
      uStack_110 = uStack_c0;
      do {
        (**(code **)(*unaff_RDI + 0x658))();
        lVar11 = local_98;
        lVar9 = *unaff_RSI;
        if (lVar9 == local_98) {
          if (((char)unaff_RSI[1] != '\0') || (local_98 == 0)) goto joined_r0x01c61ede;
          if (local_90 == '\0') {
            FUN_00d50b00();
            goto LAB_01c61eea;
          }
          *(undefined1 *)(unaff_RSI + 1) = 1;
        }
        else {
          lVar6 = unaff_RSI[1];
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
            *unaff_RSI = lVar11;
            if (((char)lVar6 != '\0') && (lVar9 != 0)) {
              FUN_00d50b20();
            }
LAB_01c61eea:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            lVar11 = *unaff_RSI;
joined_r0x01c61ede:
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            *unaff_RSI = local_98;
            if (((char)lVar6 != '\0') && (lVar9 != 0)) {
              FUN_00d50b20();
              lVar11 = *unaff_RSI;
            }
            *(undefined1 *)(unaff_RSI + 1) = 1;
          }
          if (lVar11 == 0) goto LAB_01c625cc;
        }
        iVar7 = FUN_01d3a5a0();
        if ((iVar7 == 6) && (iVar7 = FUN_01d3b630(), iVar7 == 1)) goto LAB_01c625cc;
        iVar7 = FUN_01d3a5a0();
      } while (iVar7 != 5);
      FUN_01d3abf0();
      local_c8 = (char *)FUN_01e466c0();
      plVar2 = (longlong *)unaff_RDI[0x2e];
      uStack_c0 = extraout_XMM0_Qb;
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_b0 = (double)(**(code **)(*plVar2 + 0x388))();
      FUN_00d50b20();
      bVar5 = local_118._0_4_ <= local_c8._0_4_;
      lVar9 = unaff_RDI[0x31];
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_b4 = (uint)bVar5 * 2 + -1;
      local_f8 = *local_a0;
      local_f0 = '\0';
      dVar17 = (double)FUN_01700dd0();
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      lVar9 = unaff_RDI[0x31];
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01909dc0();
      dVar18 = (double)FUN_016c98e0();
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      local_b0 = (local_b0 - dVar16) * dVar13 + dVar15;
      dVar18 = (dVar17 - dVar18) * _DAT_0241ea70 + dVar18;
      bVar5 = dVar18 <= local_b0;
      if (local_c8._0_4_ < local_118._0_4_) {
        bVar5 = local_b0 <= dVar18;
      }
      FUN_01c62ad0();
      FUN_01c41970();
      pcVar3 = (char *)unaff_RDI[0x40];
      if (pcVar3 != (char *)0x0) {
        FUN_00d50b00();
        local_90 = '\0';
        local_98 = 0;
        local_80 = 0xffffffff;
        local_78 = 0;
        local_118 = pcVar3;
        local_88 = pcVar3;
        while( true ) {
          lVar9 = (longlong)(int)local_80;
          iVar7 = (int)local_80 + 1;
          local_80 = CONCAT44(local_80._4_4_,iVar7);
          in_RCX = local_88;
          if (*(int *)(local_88 + 0xc) <= iVar7) break;
          in_RCX = *(char **)(local_88 + 0x10);
          local_98 = *(longlong *)(in_RCX + lVar9 * 8 + 8);
          FUN_01c82aa0();
          lVar9 = *local_a0;
          if ((local_188 != '\0') && (local_190 != 0)) {
            FUN_00d50b20();
          }
          if (lVar9 == local_190) {
            plVar2 = (longlong *)unaff_RDI[0x2e];
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            auVar19._0_8_ = (**(code **)(*plVar2 + 0x390))(local_b0);
            auVar19._8_8_ = extraout_XMM0_Qb_00;
            fVar20 = (float)unaff_RDI[0x49];
            if (((fVar20 != (float)auVar19._0_8_) || (NAN(fVar20) || NAN((float)auVar19._0_8_))) ||
               ((float)((ulonglong)unaff_RDI[0x49] >> 0x20) !=
                (float)(*(ulonglong *)(local_98 + 0x1c) >> 0x20))) {
              auVar4._8_8_ = 0;
              auVar4._0_8_ = *(ulonglong *)(local_98 + 0x1c);
              auVar19 = blendps(auVar19,auVar4,2);
              unaff_RDI[0x49] = auVar19._0_8_;
              (**(code **)(*unaff_RDI + 0x620))();
            }
            FUN_00d50b20();
            break;
          }
          if (local_80._4_4_ != 0) {
            if (local_80._4_4_ < 1) {
              iVar7 = -local_80._4_4_;
            }
            else {
              local_80 = CONCAT44(local_80._4_4_,(int)local_80 - local_80._4_4_);
              FUN_00d23690();
              local_78 = local_78 + local_80._4_4_;
              iVar7 = 0;
            }
            local_80 = CONCAT44(iVar7,(int)local_80);
          }
        }
        FUN_01c79df0();
        FUN_00d50b20();
      }
      pVar10 = (pthread_key_t)in_RCX;
      if (bVar5) {
        lVar9 = unaff_RDI[0x31];
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        local_e0 = '\x01';
        local_e8 = lVar9;
        FUN_016cbba0();
        lVar9 = local_98;
        if (local_90 == '\0') {
          if (((local_98 != 0) && (FUN_00d50b00(), local_90 != '\0')) && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_90 = '\0';
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        lVar11 = unaff_RDI[0x31];
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific(pVar10);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_d8 = *local_a0;
        local_d0 = '\0';
        in_RCX = &local_69;
        FUN_016fc1e0(in_RCX,local_b4);
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
        lVar11 = unaff_RDI[0x31];
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        uVar14 = FUN_01c44d20();
        lVar6 = local_98;
        if (local_90 == '\0') {
          if (local_98 != 0) {
            uVar14 = FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        local_120 = 1;
        local_128 = lVar6;
        FUN_01c44700(uVar14,&local_128);
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x620))();
        *(undefined1 *)(unaff_RDI + 0x3a) = 1;
        (**(code **)(*unaff_RDI + 0x620))();
        if (unaff_RDI[0x31] != 0) {
          FUN_00d50b00();
          pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016c1150();
          FUN_00d50b20();
        }
        uVar12 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
      }
    } while (local_69 == '\0');
LAB_01c625cc:
    if ((uVar12 & 1) != 0) {
      FUN_01c62c70();
    }
    FUN_01c62ad0();
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_01c429a0();
      FUN_00d50b20();
    }
  }
  else {
    uVar12 = 0;
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar12 & 0xffffff01;
}


