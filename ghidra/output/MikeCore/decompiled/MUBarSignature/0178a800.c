// Function: FUN_0178a800
// Address: 0178a800
// Size: 5681 bytes
// Class: MUBarSignature


undefined8 * FUN_0178a800(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  void *pvVar9;
  int extraout_var;
  int extraout_var_00;
  undefined8 **ppuVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int extraout_var_01;
  undefined8 **ppuVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  pthread_key_t pVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  byte bVar22;
  int iStack_124;
  int iStack_11c;
  undefined8 local_108;
  char local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  uint local_cc;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  longlong *local_90;
  char local_81;
  longlong *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  char local_68;
  longlong *local_60;
  char local_58 [8];
  undefined8 *local_50;
  undefined8 local_48;
  int local_40;
  undefined8 *local_38;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  local_d8 = puVar7;
  (*DAT_02572370)();
  puVar7 = (undefined8 *)*param_2;
  if ((puVar7 != (undefined8 *)0x0) && (*(int *)((longlong)puVar7 + 0xc) != 0)) {
    local_b8._0_1_ = '\0';
    local_c0 = (undefined8 *)0x0;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    local_a8._4_4_ = 0;
    local_b0 = puVar7;
    local_80 = param_2;
    while( true ) {
      if (local_a8._4_4_ != 0) {
        if (local_a8._4_4_ < 1) {
          iVar20 = -local_a8._4_4_;
        }
        else {
          iVar20 = (pthread_key_t)local_a8 - local_a8._4_4_;
          local_a8 = CONCAT44(local_a8._4_4_,iVar20);
          FUN_00d23690();
          local_a0 = local_a0 + local_a8._4_4_;
          iVar20 = 0;
        }
        local_a8 = CONCAT44(iVar20,(pthread_key_t)local_a8);
      }
      lVar8 = (longlong)(int)(pthread_key_t)local_a8;
      iVar20 = (pthread_key_t)local_a8 + 1;
      local_a8 = CONCAT44(local_a8._4_4_,iVar20);
      if (*(int *)((longlong)local_b0 + 0xc) <= iVar20) break;
      lVar19 = local_b0[2];
      local_c0 = *(undefined8 **)(lVar19 + 8 + lVar8 * 8);
      pvVar9 = _pthread_getspecific((pthread_key_t)lVar19);
      pVar18 = (pthread_key_t)lVar19;
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      plVar15 = local_60;
      if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar15 != (undefined8 *)0x0) {
        pvVar9 = _pthread_getspecific(pVar18);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar9 = _pthread_getspecific(pVar18);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        puVar7 = local_70;
        if (local_68 == '\0') {
          if (local_70 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        local_60 = puVar7;
        local_58[0] = '\0';
        FUN_00d21140();
        if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar7 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_001159b0();
    if (*(int *)((longlong)local_d8 + 0xc) != 0) {
      FUN_00d23310();
      puVar7 = local_c0;
      ppuVar14 = &local_b8;
      ppuVar10 = (undefined8 **)&local_108;
      if ((char)local_b8 != '\0') {
        ppuVar10 = ppuVar14;
      }
      local_108 = (undefined8 *)CONCAT71(local_108._1_7_,(char)local_b8);
      *(undefined1 *)ppuVar10 = 0;
      if (((char)local_b8 != '\0') && (puVar7 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      pVar18 = (pthread_key_t)ppuVar14;
      pvVar9 = _pthread_getspecific(pVar18);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01267000();
      pvVar9 = _pthread_getspecific(pVar18);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      local_38 = local_60;
      if (local_58[0] == '\0') {
        if (((local_60 != (undefined8 *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
           (local_60 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58[0] = '\0';
      }
      if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_108 != '\0') && (puVar7 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iStack_124 = (int)((ulonglong)param_1 >> 0x20);
      if (iStack_124 == 0) {
        local_108 = (undefined8 *)FUN_00e7bdb0();
      }
      else {
        pvVar9 = _pthread_getspecific(pVar18);
        if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pVar18 = (pthread_key_t)local_38;
        }
        local_108 = (undefined8 *)FUN_016caaa0();
      }
      iStack_11c = (int)((ulonglong)param_3 >> 0x20);
      if (iStack_11c == 0) {
        FUN_00e7bdb0();
        iVar20 = extraout_var;
      }
      else {
        pvVar9 = _pthread_getspecific(pVar18);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016caaa0();
        iVar20 = extraout_var_00;
      }
      FUN_00d23310();
      puVar7 = local_c0;
      local_70 = (undefined8 *)CONCAT71(local_70._1_7_,(char)local_b8);
      ppuVar14 = &local_70;
      ppuVar10 = &local_b8;
      if ((char)local_b8 == '\0') {
        ppuVar10 = ppuVar14;
      }
      *(undefined1 *)ppuVar10 = 0;
      if (((char)local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)ppuVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508450();
      plVar15 = local_60;
      if (local_58[0] == '\0') {
        if (local_60 != (undefined8 *)0x0) {
          FUN_00d50b00();
          goto LAB_0178adae;
        }
        if (*(longlong *)(unaff_RSI + 0x30) != 0) {
          *(undefined8 *)(unaff_RSI + 0x30) = 0;
          local_78 = (undefined8 *)CONCAT71(local_78._1_7_,1);
          goto LAB_0178ade4;
        }
      }
      else {
        local_58[0] = '\0';
LAB_0178adae:
        puVar13 = *(undefined8 **)(unaff_RSI + 0x30);
        if (puVar13 != plVar15) {
          local_78 = (undefined8 *)CONCAT71(local_78._1_7_,plVar15 == (undefined8 *)0x0);
          if (plVar15 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          *(longlong **)(unaff_RSI + 0x30) = plVar15;
          if (puVar13 != (undefined8 *)0x0) {
LAB_0178ade4:
            FUN_00d50b20();
          }
        }
        if (plVar15 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_70 != '\0') && (puVar7 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      puVar7 = local_c0;
      ppuVar14 = &local_70;
      ppuVar10 = &local_b8;
      if ((char)local_b8 == '\0') {
        ppuVar10 = ppuVar14;
      }
      local_70 = (undefined8 *)CONCAT71(local_70._1_7_,(char)local_b8);
      *(undefined1 *)ppuVar10 = 0;
      if (((char)local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)ppuVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01267000();
      puVar13 = *(undefined8 **)(unaff_RSI + 0x38);
      plVar15 = puVar13;
      if (puVar13 != local_60) {
        if (local_58[0] == '\0') {
          if (local_60 == (undefined8 *)0x0) {
            plVar15 = (undefined8 *)0x0;
            goto LAB_0178aebb;
          }
          FUN_00d50b00();
          puVar13 = *(undefined8 **)(unaff_RSI + 0x38);
          *(longlong **)(unaff_RSI + 0x38) = local_60;
          plVar15 = local_60;
        }
        else {
          local_58[0] = '\0';
          plVar15 = local_60;
LAB_0178aebb:
          *(longlong **)(unaff_RSI + 0x38) = plVar15;
        }
        if (puVar13 != (undefined8 *)0x0) {
          FUN_00d50b20();
          plVar15 = local_60;
        }
      }
      if ((local_58[0] != '\0') && (plVar15 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_70 != '\0') && (puVar7 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d242c0();
      uVar11 = FUN_00d216c0();
      local_cc = (uint)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
      bVar5 = false;
      bVar22 = 0;
      plVar15 = (longlong *)0x0;
      do {
        plVar12 = (longlong *)FUN_00e8fc40();
        FUN_0111d0d0();
        (**(code **)(*plVar12 + 0x18))();
        local_80 = plVar12;
        if ((bool)(bVar22 & plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &DAT_02572358;
        (*pcVar3)();
        local_78 = puVar7;
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &DAT_02572358;
        (*pcVar3)();
        puVar13 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar13 = &DAT_02572358;
        (*pcVar3)();
        local_e0 = puVar13;
        FUN_00e7bcc0();
        FUN_00e7bcc0();
        FUN_00e7bcc0();
        FUN_00e7bcc0();
        puVar13 = (undefined8 *)FUN_00e7bcc0();
        local_f0 = FUN_00e7bcc0();
        local_b8._0_1_ = '\0';
        local_c0 = (undefined8 *)0x0;
        local_b0 = local_d8;
        local_a8 = 0xffffffff;
        local_a0 = 0;
        local_a8._4_4_ = 0;
        while( true ) {
          if (local_a8._4_4_ != 0) {
            if (local_a8._4_4_ < 1) {
              iVar21 = -local_a8._4_4_;
            }
            else {
              iVar21 = (pthread_key_t)local_a8 - local_a8._4_4_;
              local_a8 = CONCAT44(local_a8._4_4_,iVar21);
              FUN_00d23690();
              local_a0 = local_a0 + local_a8._4_4_;
              iVar21 = 0;
            }
            local_a8 = CONCAT44(iVar21,(pthread_key_t)local_a8);
          }
          lVar8 = (longlong)(int)(pthread_key_t)local_a8;
          iVar21 = (pthread_key_t)local_a8 + 1;
          local_a8 = CONCAT44(local_a8._4_4_,iVar21);
          if (*(int *)((longlong)local_b0 + 0xc) <= iVar21) break;
          lVar19 = local_b0[2];
          local_c0 = *(undefined8 **)(lVar19 + 8 + lVar8 * 8);
          local_f8 = FUN_0178c570(lVar19,0);
          if (*(int *)((longlong)local_78 + 0xc) == 0) {
LAB_0178bc1c:
            if (local_81 != '\0') {
LAB_0178bc26:
              if ((local_108._4_4_ != 0) && (local_f8._4_4_ != 0)) {
                cVar4 = FUN_00e7c020();
                if (cVar4 != '\0') goto LAB_0178b0e0;
              }
              if (((iVar20 == 0) || (local_f8._4_4_ == 0)) ||
                 (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
                local_60 = local_c0;
                local_58[0] = '\0';
                FUN_00d21140();
                if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
          else {
            pvVar9 = _pthread_getspecific((pthread_key_t)lVar19);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar11 = FUN_00d23310();
            plVar15 = local_60;
            local_70 = (undefined8 *)CONCAT71(local_70._1_7_,local_58[0]);
            ppuVar14 = (undefined8 **)local_58;
            if (local_58[0] == '\0') {
              ppuVar14 = &local_70;
            }
            *(char *)ppuVar14 = '\0';
            if ((local_58[0] != '\0') && (plVar15 != (undefined8 *)0x0)) {
              uVar11 = FUN_00d50b20();
            }
            if (((char)local_70 == '\0') && (plVar15 != (undefined8 *)0x0)) {
              uVar11 = FUN_00d50b00();
            }
            FUN_0178c570(uVar11,0);
            pVar18 = 0;
            local_98 = (undefined8 *)FUN_016c4630(0,1);
            if (plVar15 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            pvVar9 = _pthread_getspecific(pVar18);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_c8 = (undefined8 *)FUN_016c4630(0,1);
            if ((((ulonglong)local_c8 >> 0x20 == 0) || (local_98._4_4_ == 0)) ||
               (cVar4 = FUN_00e7c020(), cVar4 == '\0')) {
              pVar18 = *(int *)((longlong)local_b0 + 0xc) - 1;
              if ((pthread_key_t)local_a8 != pVar18) goto LAB_0178bc1c;
            }
            else {
              pVar18 = *(int *)((longlong)local_b0 + 0xc) - 1;
            }
            if ((pthread_key_t)local_a8 == pVar18) {
              pvVar9 = _pthread_getspecific(pVar18);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              pVar18 = 0;
              FUN_016c47d0(0,local_f8);
              uVar6 = FUN_0123ffa0();
              local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,uVar6);
              local_70 = local_98;
              FUN_00e7c260();
              local_c8 = local_70;
              if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (((iStack_124 != 0) && (local_98._4_4_ != 0)) &&
               (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
              local_98 = param_1;
            }
            iVar21 = local_c8._4_4_;
            puVar16 = local_c8;
            if (((iStack_11c != 0) && (local_c8._4_4_ != 0)) &&
               (cVar4 = FUN_00e7c020(), iVar21 = iStack_11c, puVar16 = param_3, cVar4 == '\0')) {
              iVar21 = local_c8._4_4_;
              if (local_98._4_4_ != 0) goto LAB_0178b41e;
LAB_0178b450:
              plVar15 = (longlong *)FUN_00e8fc40();
              FUN_01794ea0();
              (**(code **)(*plVar15 + 0x18))();
              *(undefined8 **)((longlong)plVar15 + 0xc) = local_98;
              *(undefined8 **)((longlong)plVar15 + 0x14) = local_c8;
              puVar16 = *(undefined8 **)(unaff_RSI + 0x50);
              local_90 = plVar15;
              if (puVar16 != local_78) {
                FUN_00d50b00();
                *(undefined8 **)(unaff_RSI + 0x50) = local_78;
                if (puVar16 != (undefined8 *)0x0) {
                  FUN_00d50b20();
                }
              }
              if (*(longlong *)(unaff_RSI + 0x48) != 0) {
                *(undefined8 *)(unaff_RSI + 0x48) = 0;
                FUN_00d50b20();
              }
              if (((*(longlong *)(unaff_RSI + 0x30) != 0) && (local_f0 >> 0x20 != 0)) &&
                 ((local_98._4_4_ != 0 &&
                  ((local_f0 >> 0x20 != 0 && (cVar4 = FUN_00e7c020(), cVar4 == '\0')))))) {
                pvVar9 = _pthread_getspecific(pVar18);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar9 = _pthread_getspecific(pVar18);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar11 = FUN_016c4760();
                pVar18 = 0;
                FUN_01510b20(0,uVar11,&local_f0,0);
                puVar16 = *(undefined8 **)(unaff_RSI + 0x28);
                plVar15 = puVar16;
                if (puVar16 != local_60) {
                  if (local_58[0] == '\0') {
                    if (local_60 == (undefined8 *)0x0) {
                      plVar15 = (undefined8 *)0x0;
                      goto LAB_0178b5bb;
                    }
                    FUN_00d50b00();
                    puVar16 = *(undefined8 **)(unaff_RSI + 0x28);
                    *(longlong **)(unaff_RSI + 0x28) = local_60;
                    plVar15 = local_60;
                  }
                  else {
                    local_58[0] = '\0';
                    plVar15 = local_60;
LAB_0178b5bb:
                    *(longlong **)(unaff_RSI + 0x28) = plVar15;
                  }
                  pVar18 = (pthread_key_t)puVar16;
                  if (puVar16 != (undefined8 *)0x0) {
                    FUN_00d50b20();
                    plVar15 = local_60;
                  }
                }
                if ((local_58[0] != '\0') && (plVar15 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_f0._4_4_ != 0) {
                  pvVar9 = _pthread_getspecific(pVar18);
                  if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                    pVar18 = (pthread_key_t)local_38;
                  }
                  local_f0 = FUN_016caaa0();
                }
              }
              FUN_0178c910();
              plVar15 = local_60;
              if ((local_58[0] == '\0') && (local_60 != (undefined8 *)0x0)) {
                FUN_00d50b00();
              }
              local_60 = local_90;
              local_58[0] = '\0';
              FUN_00d21140();
              if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (!bVar5) {
                FUN_01790bd0();
              }
              puVar16 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar16 = &DAT_02572358;
              (*pcVar3)();
              FUN_01787bb0();
              if (*(char *)(unaff_RSI + 0x40) == '\0') {
                local_58[0] = 0;
                local_60 = (longlong *)0x0;
                local_48 = 0xffffffff;
                local_40 = 0;
                local_48._4_4_ = 0;
                local_50 = puVar16;
                while( true ) {
                  if (local_48._4_4_ != 0) {
                    if (local_48._4_4_ < 1) {
                      iVar21 = -local_48._4_4_;
                    }
                    else {
                      iVar21 = (int)local_48 - local_48._4_4_;
                      local_48 = CONCAT44(local_48._4_4_,iVar21);
                      FUN_00d23690();
                      local_40 = local_40 + local_48._4_4_;
                      iVar21 = 0;
                    }
                    local_48 = CONCAT44(iVar21,(int)local_48);
                  }
                  lVar8 = (longlong)(int)local_48;
                  iVar21 = (int)local_48 + 1;
                  local_48 = CONCAT44(local_48._4_4_,iVar21);
                  if (*(int *)((longlong)local_50 + 0xc) <= iVar21) break;
                  lVar19 = local_50[2];
                  local_60 = *(longlong **)(lVar19 + 8 + lVar8 * 8);
                  pvVar9 = _pthread_getspecific((pthread_key_t)lVar19);
                  pVar18 = (pthread_key_t)lVar19;
                  if ((pvVar9 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
                    puVar1 = *(undefined8 **)((longlong)local_60 + 0x20);
                  }
                  else {
                    pVar18 = (pthread_key_t)local_80;
                    puVar1 = *(undefined8 **)((longlong)local_60 + 0x20);
                  }
                  if (puVar1 != (undefined8 *)0x0) {
                    FUN_00d50b00();
                  }
                  pvVar9 = _pthread_getspecific(pVar18);
                  if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                    pVar18 = (pthread_key_t)local_38;
                  }
                  uVar11 = FUN_016c4760();
                  pvVar9 = _pthread_getspecific(pVar18);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar17 = FUN_016c4760();
                  local_68 = '\0';
                  local_70 = puVar1;
                  FUN_012502a0(uVar17,uVar11,(int)local_48 != 0 || local_40 != 0);
                  if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (puVar1 != (undefined8 *)0x0) {
                    FUN_00d50b20();
                  }
                  local_70 = *(undefined8 **)((longlong)local_60 + 0x14);
                  FUN_00e7b970();
                  local_e8 = local_70;
                  if (*(char *)((longlong)local_60 + 0x50) != '\0') {
                    FUN_00e7b820();
                  }
                  if (*(char *)((longlong)local_60 + 0x51) != '\0') {
                    FUN_00e7b820();
                  }
                  FUN_00e7b820();
                  iVar21 = 0;
                  do {
                    cVar4 = FUN_01716980();
                    if (cVar4 != '\0') {
                      plVar12 = *(longlong **)(unaff_RSI + 0x28);
                      pvVar9 = _pthread_getspecific((pthread_key_t)uVar17);
                      if (pvVar9 != (void *)0x0) {
                        plVar12 = *(longlong **)(unaff_RSI + 0x28);
                        lVar8 = FUN_00e8b990();
                        if (lVar8 != 0) {
                          plVar12 = (longlong *)
                                    plVar12[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                        }
                      }
                      cVar4 = (**(code **)(*plVar12 + 0x3b8))();
                      if (cVar4 == '\0') goto LAB_0178b8c3;
                    }
                    iVar21 = iVar21 + 1;
                  } while (iVar21 != 0xc);
                  FUN_00e7b820();
LAB_0178b8c3:
                }
                FUN_01798230();
                if (*(int *)((longlong)puVar16 + 0xc) == 1) {
                  local_60 = local_c8;
                  FUN_00e7b970();
                  local_70 = local_60;
                  FUN_00e7b820();
                }
              }
              else {
                pvVar9 = _pthread_getspecific(pVar18);
                if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  pVar18 = (pthread_key_t)local_80;
                }
                pvVar9 = _pthread_getspecific(pVar18);
                if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  pVar18 = (pthread_key_t)local_38;
                }
                uVar11 = FUN_016c4760();
                pvVar9 = _pthread_getspecific(pVar18);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar17 = FUN_016c4760();
                local_58[0] = '\0';
                local_60 = plVar15;
                FUN_012502a0(uVar17,uVar11,0);
                if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
              }
              local_60 = local_78;
              local_58[0] = '\0';
              FUN_00d21140();
              if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              puVar16 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar16 = &DAT_02572358;
              (*pcVar3)();
              if (local_78 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              if (plVar15 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
              if (local_90 != (longlong *)0x0) {
                FUN_00d50b20();
                local_78 = puVar16;
                goto LAB_0178bc1c;
              }
              local_78 = puVar16;
              if (local_81 == '\0') goto LAB_0178b0e0;
              goto LAB_0178bc26;
            }
            local_c8 = puVar16;
            if (local_98._4_4_ == 0) goto LAB_0178b450;
LAB_0178b41e:
            if ((iVar21 == 0) || (cVar4 = FUN_00e7c020(), cVar4 != '\0')) goto LAB_0178b450;
          }
LAB_0178b0e0:
        }
        FUN_0015ed50();
        if (*(int *)((longlong)local_78 + 0xc) != 0) {
          local_c0 = local_78;
          local_b8._0_1_ = '\0';
          FUN_00d21140();
          if (((char)local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_70 = (undefined8 *)((ulonglong)local_70 & 0xffffffff00000000);
        local_90 = (longlong *)((ulonglong)local_90 & 0xffffffff00000000);
        if ((extraout_var_01 != 0) && (cVar4 = FUN_00e7c650(), cVar4 != '\0')) {
          local_c0 = puVar13;
          FUN_00e7bdc0();
          local_60 = local_c0;
          uVar6 = FUN_00e7c810();
          local_90 = (longlong *)CONCAT44(local_90._4_4_,uVar6);
        }
        puVar13 = local_e0;
        pVar18 = 1;
        if (DAT_023b1e88 < (double)local_90._0_4_) {
          bVar5 = true;
        }
        puVar16 = *(undefined8 **)(unaff_RSI + 0x68);
        if (puVar16 != local_e0) {
          pVar18 = 1;
          if (local_e0 != (undefined8 *)0x0) {
            pVar18 = 1;
            FUN_00d50b00();
          }
          *(undefined8 **)(unaff_RSI + 0x68) = puVar13;
          if (puVar16 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        if (puVar13 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if (puVar7 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        plVar15 = local_80;
        bVar22 = 1;
        uVar2 = local_cc & 1;
        local_cc = 0;
      } while (uVar2 != 0);
      pvVar9 = _pthread_getspecific(pVar18);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018847e0();
      *unaff_RDI = plVar15;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (local_38 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_0178ac38;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_0178ac38:
  FUN_00d50b20();
  return unaff_RDI;
}


