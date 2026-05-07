// Function: FUN_01bf7370
// Address: 01bf7370
// Size: 3361 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x01bf78c4) */
/* WARNING: Removing unreachable block (ram,0x01bf78d0) */
/* WARNING: Removing unreachable block (ram,0x01bf7cc3) */
/* WARNING: Removing unreachable block (ram,0x01bf7ccf) */
/* WARNING: Removing unreachable block (ram,0x01bf796b) */
/* WARNING: Removing unreachable block (ram,0x01bf7977) */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_01bf7370(pthread_key_t param_1,longlong *param_2)

{
  float fVar1;
  longlong *******ppppppplVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  float fVar6;
  bool bVar7;
  code *pcVar8;
  longlong *******ppppppplVar9;
  longlong *******ppppppplVar10;
  longlong *******ppppppplVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  void *pvVar15;
  longlong *******ppppppplVar16;
  longlong *******ppppppplVar17;
  longlong lVar18;
  ulonglong uVar19;
  pthread_key_t pVar20;
  longlong *******ppppppplVar21;
  longlong ******pppppplVar22;
  longlong *unaff_RSI;
  longlong *******unaff_RDI;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar24;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  longlong local_128;
  char local_120;
  float fStack_104;
  longlong *******local_f8;
  char local_f0;
  longlong *******local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_a8;
  char local_a0;
  longlong local_90;
  char local_88;
  char local_61;
  longlong *******local_58;
  char local_50;
  longlong *******local_48;
  undefined8 local_40;
  int local_38;
  
  uVar23 = FUN_01a58dc0();
  ppppppplVar9 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (longlong *******)0x0) goto LAB_01bf74d1;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
LAB_01bf73d7:
    cVar12 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                         (longlong)*ppppppplVar9))();
    if (cVar12 == '\0') {
      uVar19 = 0;
    }
    else {
      uVar23 = extraout_XMM0_Da;
      if (((*param_2 == 0) || (iVar13 = FUN_01d3a5a0(), uVar23 = extraout_XMM0_Da_00, iVar13 != 1))
         || (iVar13 = FUN_01d3b630(), uVar23 = extraout_XMM0_Da_01, iVar13 != 1)) {
        bVar5 = false;
        goto LAB_01bf74f0;
      }
      pvVar15 = _pthread_getspecific(param_1);
      if (pvVar15 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      ppppppplVar10 = local_58;
      if (((local_50 == '\0') && (local_58 != (longlong *******)0x0)) &&
         ((FUN_00d50b00(), local_50 != '\0' && (local_58 != (longlong *******)0x0)))) {
        FUN_00d50b20();
      }
      pvVar15 = _pthread_getspecific(param_1);
      if (pvVar15 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar13 = FUN_01326de0();
      ppppppplVar21 = unaff_RDI;
      if (iVar13 == 3) {
        FUN_01d3abf0();
        FUN_01e466c0();
        dVar3 = (double)FUN_00e7d6f0();
        ppppppplVar21 = (longlong *******)&local_58;
        do {
          (*(code *)(*ppppppplVar9)[0xcc])(SUB84(DAT_023934c8,0));
          ppppppplVar17 = local_58;
          ppppppplVar16 = (longlong *******)*unaff_RSI;
          if (ppppppplVar16 == local_58) {
            if (((char)unaff_RSI[1] == '\0') && (local_58 != (longlong *******)0x0)) {
              ppppppplVar17 = ppppppplVar16;
              if (local_50 != '\0') goto LAB_01bf76a6;
              FUN_00d50b00();
              goto LAB_01bf7675;
            }
LAB_01bf767e:
            ppppppplVar17 = (longlong *******)*unaff_RSI;
            if ((local_50 != '\0') && (local_58 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            lVar18 = unaff_RSI[1];
            if (local_50 == '\0') {
              if (local_58 != (longlong *******)0x0) {
                FUN_00d50b00();
              }
              *unaff_RSI = (longlong)ppppppplVar17;
              if (((char)lVar18 != '\0') && (ppppppplVar16 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
LAB_01bf7675:
              *(undefined1 *)(unaff_RSI + 1) = 1;
              goto LAB_01bf767e;
            }
            *unaff_RSI = (longlong)local_58;
            if (((char)lVar18 != '\0') && (ppppppplVar16 != (longlong *******)0x0)) {
              FUN_00d50b20();
              ppppppplVar17 = (longlong *******)*unaff_RSI;
            }
LAB_01bf76a6:
            *(undefined1 *)(unaff_RSI + 1) = 1;
          }
          if (ppppppplVar17 == (longlong *******)0x0) break;
          if ((local_61 != '\0') || ((*unaff_RSI != 0 && (iVar13 = FUN_01d3a5a0(), iVar13 == 6))))
          goto LAB_01bf8071;
          dVar4 = (double)FUN_00e7d6f0();
        } while (dVar4 - dVar3 <= DAT_023934c8);
        if (*param_2 != 0) {
          (*(code *)(*ppppppplVar9)[0xf6])();
          FUN_01cf74c0();
          if ((local_50 != '\0') && (local_58 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          ppppppplVar16 = (longlong *******)FUN_00e8fc40();
          FUN_00d4ff40();
          *ppppppplVar16 = (longlong ******)&DAT_02572358;
          pcVar8 = DAT_02572370;
          (*DAT_02572370)();
          ppppppplVar17 = (longlong *******)FUN_00e8fc40();
          FUN_00d4ff40();
          *ppppppplVar17 = (longlong ******)&DAT_02572358;
          (*pcVar8)();
          (*(code *)(*ppppppplVar9)[0x1c4])();
          ppppppplVar21 = local_58;
          if (local_50 == '\0') {
            if (local_58 != (longlong *******)0x0) {
              FUN_00d50b00();
              if ((local_50 != '\0') && (local_58 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01bf77c4;
            }
LAB_01bf79e7:
            local_50 = '\0';
            local_58 = (longlong *******)0x0;
            local_40 = 0xffffffff;
            local_38 = 0;
            local_48 = ppppppplVar17;
            while( true ) {
              lVar18 = (longlong)(int)local_40;
              iVar13 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar13);
              if (*(int *)((longlong)local_48 + 0xc) <= iVar13) break;
              local_58 = (longlong *******)local_48[2][lVar18 + 1];
              FUN_01976820();
              if (local_40._4_4_ != 0) {
                if (local_40 < 0) {
                  iVar13 = -local_40._4_4_;
                }
                else {
                  local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                  FUN_00d23690();
                  local_38 = local_38 + local_40._4_4_;
                  iVar13 = 0;
                }
                local_40 = CONCAT44(iVar13,(int)local_40);
              }
            }
            ppppppplVar21 = local_48;
            FUN_01a02090();
            bVar5 = false;
          }
          else {
            if (local_58 == (longlong *******)0x0) goto LAB_01bf79e7;
LAB_01bf77c4:
            local_50 = '\0';
            local_58 = (longlong *******)0x0;
            local_48 = ppppppplVar21;
            local_40 = 0xffffffff;
            local_38 = 0;
            local_40._4_4_ = 0;
            while( true ) {
              if (local_40._4_4_ != 0) {
                if (local_40._4_4_ < 1) {
                  iVar13 = -local_40._4_4_;
                }
                else {
                  iVar13 = (int)local_40 - local_40._4_4_;
                  local_40 = CONCAT44(local_40._4_4_,iVar13);
                  FUN_00d23690();
                  local_38 = local_38 + local_40._4_4_;
                  iVar13 = 0;
                }
                local_40 = CONCAT44(iVar13,(int)local_40);
              }
              lVar18 = (longlong)(int)local_40;
              iVar13 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar13);
              if (*(int *)((longlong)local_48 + 0xc) <= iVar13) break;
              local_58 = (longlong *******)local_48[2][lVar18 + 1];
              pvVar15 = _pthread_getspecific((pthread_key_t)local_48[2]);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e7c0();
              if (local_a0 == '\0') {
                if (local_a8 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_a0 = '\0';
              }
              uVar23 = FUN_00d21140();
              if (local_a8 != 0) {
                uVar23 = FUN_00d50b20();
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                uVar23 = FUN_00d50b20();
              }
              local_f8 = local_58;
              local_f0 = '\0';
              (*(code *)(*ppppppplVar9)[0x156])(uVar23,&local_f8);
              if (local_a0 == '\0') {
                if (local_a8 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_a0 = '\0';
              }
              local_90 = local_a8;
              local_88 = '\0';
              FUN_00d21140();
              if (local_a8 != 0) {
                FUN_00d50b20();
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_f0 != '\0') && (local_f8 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
            }
            ppppppplVar21 = local_48;
            FUN_001159b0();
            FUN_00d50b20();
            if (ppppppplVar17 != (longlong *******)0x0) goto LAB_01bf79e7;
            bVar5 = true;
          }
          bVar7 = true;
          fStack_104 = extraout_XMM0_Db;
LAB_01bf7a86:
          (*(code *)(*ppppppplVar9)[0xcb])();
          ppppppplVar11 = local_58;
          ppppppplVar2 = (longlong *******)*unaff_RSI;
          if (ppppppplVar2 != local_58) {
            lVar18 = unaff_RSI[1];
            if (local_50 != '\0') {
              *unaff_RSI = (longlong)local_58;
              if (((char)lVar18 != '\0') && (ppppppplVar2 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01bf7adc;
            }
            if (local_58 != (longlong *******)0x0) {
              FUN_00d50b00();
            }
            *unaff_RSI = (longlong)ppppppplVar11;
            if (((char)lVar18 != '\0') && (ppppppplVar2 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
LAB_01bf7b22:
            pVar20 = (pthread_key_t)ppppppplVar21;
            *(undefined1 *)(unaff_RSI + 1) = 1;
            if (*unaff_RSI == 0) goto LAB_01bf7e80;
LAB_01bf7b37:
            iVar13 = FUN_01d3a5a0();
            if ((local_50 != '\0') && (local_58 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
            pVar20 = (pthread_key_t)ppppppplVar21;
            if (iVar13 == 6) goto LAB_01bf7e94;
            FUN_01d3abf0();
            FUN_01e466c0();
            (**(code **)((longlong)&linkedit_data_command_000013e8.cmd + (longlong)*ppppppplVar9))()
            ;
            iVar13 = FUN_01d3a5a0();
            if (iVar13 == 5) {
              FUN_01d3abf0();
              FUN_01e466c0();
              uVar19 = FUN_01d3b590();
              if (ppppppplVar16 != (longlong *******)0x0) {
                local_50 = '\0';
                local_58 = (longlong *******)0x0;
                local_40 = 0xffffffff;
                local_38 = 0;
                fVar1 = *(float *)(&DAT_0241aee0 + (ulonglong)((uVar19 & 8) == 0) * 4);
                local_40._4_4_ = 0;
                local_48 = ppppppplVar16;
                while( true ) {
                  if (local_40._4_4_ != 0) {
                    if (local_40._4_4_ < 1) {
                      iVar13 = -local_40._4_4_;
                    }
                    else {
                      iVar13 = (int)local_40 - local_40._4_4_;
                      local_40 = CONCAT44(local_40._4_4_,iVar13);
                      FUN_00d23690();
                      local_38 = local_38 + local_40._4_4_;
                      iVar13 = 0;
                    }
                    local_40 = CONCAT44(iVar13,(int)local_40);
                  }
                  lVar18 = (longlong)(int)local_40;
                  iVar13 = (int)local_40 + 1;
                  local_40 = CONCAT44(local_40._4_4_,iVar13);
                  if (*(int *)((longlong)local_48 + 0xc) <= iVar13) break;
                  pppppplVar22 = local_48[2];
                  local_58 = (longlong *******)pppppplVar22[lVar18 + 1];
                  pvVar15 = _pthread_getspecific((pthread_key_t)pppppplVar22);
                  pVar20 = (pthread_key_t)pppppplVar22;
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013de560();
                  if ((local_88 == '\0') && (local_90 != 0)) {
                    FUN_00d50b00();
                  }
                  pvVar15 = _pthread_getspecific(pVar20);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014bc150();
                  fVar24 = (float)_powf();
                  fVar24 = fVar24 + (fStack_104 - extraout_XMM0_Db_00) * fVar1;
                  fVar6 = 0.0;
                  if ((0.0 <= fVar24) && (fVar6 = fVar24, DAT_02390d34 < fVar24)) {
                    fVar6 = DAT_02390d34;
                  }
                  pvVar15 = _pthread_getspecific(pVar20);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  _powf(fVar6,DAT_02390d30);
                  FUN_014bc100();
                  if (local_90 != 0) {
                    FUN_00d50b20();
                  }
                }
                ppppppplVar21 = local_48;
                FUN_001150f0();
              }
              if (!bVar5) {
                local_50 = '\0';
                local_58 = (longlong *******)0x0;
                local_40 = 0xffffffff;
                local_38 = 0;
                local_48 = ppppppplVar17;
                while( true ) {
                  lVar18 = (longlong)(int)local_40;
                  iVar13 = (int)local_40 + 1;
                  local_40 = CONCAT44(local_40._4_4_,iVar13);
                  if (*(int *)((longlong)local_48 + 0xc) <= iVar13) break;
                  local_58 = (longlong *******)local_48[2][lVar18 + 1];
                  (*(code *)(*local_58)[0xc4])();
                  if (local_40._4_4_ != 0) {
                    if (local_40 < 0) {
                      iVar13 = -local_40._4_4_;
                    }
                    else {
                      local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                      FUN_00d23690();
                      local_38 = local_38 + local_40._4_4_;
                      iVar13 = 0;
                    }
                    local_40 = CONCAT44(iVar13,(int)local_40);
                  }
                }
                ppppppplVar21 = local_48;
                FUN_01a02090();
              }
              bVar7 = false;
              (*(code *)(*unaff_RDI)[0x8b])();
              fStack_104 = extraout_XMM0_Db_00;
            }
            goto LAB_01bf7a86;
          }
          if (((char)unaff_RSI[1] == '\0') && (local_58 != (longlong *******)0x0)) {
            if (local_50 == '\0') {
              FUN_00d50b00();
              goto LAB_01bf7b22;
            }
LAB_01bf7adc:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            local_50 = '\0';
          }
          pVar20 = (pthread_key_t)ppppppplVar21;
          if (*unaff_RSI != 0) goto LAB_01bf7b37;
LAB_01bf7e80:
          if ((local_50 != '\0') && (local_58 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
LAB_01bf7e94:
          FUN_01e42030();
          ppppppplVar21 = local_58;
          if ((local_50 != '\0') && (local_58 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          if (ppppppplVar21 == (longlong *******)0x0) {
            if (!bVar5) {
              FUN_00d50b20();
            }
            if (ppppppplVar16 != (longlong *******)0x0) {
              FUN_00d50b20();
            }
          }
          else {
            if (!bVar5) {
              local_50 = '\0';
              local_58 = (longlong *******)0x0;
              local_40 = 0xffffffff;
              local_38 = 0;
              local_48 = ppppppplVar17;
              while( true ) {
                lVar18 = (longlong)(int)local_40;
                iVar13 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar13);
                if (*(int *)((longlong)local_48 + 0xc) <= iVar13) break;
                local_58 = (longlong *******)local_48[2][lVar18 + 1];
                FUN_01976820();
                if (local_40._4_4_ != 0) {
                  if (local_40 < 0) {
                    iVar13 = -local_40._4_4_;
                  }
                  else {
                    local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                    FUN_00d23690();
                    local_38 = local_38 + local_40._4_4_;
                    iVar13 = 0;
                  }
                  local_40 = CONCAT44(iVar13,(int)local_40);
                }
              }
              ppppppplVar17 = local_48;
              FUN_01a02090();
              pVar20 = (pthread_key_t)ppppppplVar17;
            }
            if (!bVar7) {
              (**(code **)("/usr/lib/libobjc.A.dylib" + (longlong)(*ppppppplVar9 + 3)))();
              pvVar15 = _pthread_getspecific(pVar20);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_e0 = '\0';
              local_e8 = ppppppplVar16;
              FUN_013880c0();
              if ((local_120 != '\0') && (local_128 != 0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
            }
            (*(code *)(*ppppppplVar9)[0xf6])();
            FUN_01cf74c0();
            if ((local_50 != '\0') && (local_58 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
            if (!bVar5) {
              FUN_00d50b20();
            }
            if (ppppppplVar16 != (longlong *******)0x0) {
              FUN_00d50b20();
            }
          }
        }
      }
LAB_01bf8071:
      uVar19 = CONCAT71((int7)((ulonglong)ppppppplVar21 >> 8),1);
      if (ppppppplVar10 != (longlong *******)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_58 != (longlong *******)0x0) goto LAB_01bf73d7;
LAB_01bf74d1:
    bVar5 = true;
LAB_01bf74f0:
    local_d8 = *unaff_RSI;
    local_d0 = '\0';
    local_c8 = *param_2;
    local_c0 = '\0';
    uVar14 = FUN_01a58d30(uVar23,&local_c8);
    uVar19 = (ulonglong)uVar14;
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if (bVar5) goto LAB_01bf7570;
  }
  FUN_00d50b20();
LAB_01bf7570:
  return uVar19 & 0xffffffff;
}


