// Function: FUN_0134d090
// Address: 0134d090
// Size: 7901 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x0134edb3) */
/* WARNING: Removing unreachable block (ram,0x0134edbf) */
/* WARNING: Removing unreachable block (ram,0x0134edee) */
/* WARNING: Removing unreachable block (ram,0x0134edfa) */
/* WARNING: Removing unreachable block (ram,0x0134ee5d) */
/* WARNING: Removing unreachable block (ram,0x0134ee69) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0134d090(double param_1,double param_2)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong **pplVar11;
  longlong *plVar12;
  longlong lVar13;
  byte bVar14;
  pthread_key_t in_ECX;
  longlong **pplVar15;
  ulonglong uVar16;
  pthread_key_t pVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  double dVar23;
  double extraout_XMM0_Qa;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong *local_128;
  char local_120;
  longlong *local_d0;
  longlong *local_b8;
  longlong *local_b0;
  char local_a8;
  longlong **local_a0;
  longlong *local_98;
  longlong **local_80;
  double local_78;
  longlong *local_70;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  undefined4 uStack_44;
  char local_40;
  longlong *local_38;
  
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  plVar4 = local_68;
  if ((((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  plVar5 = local_68;
  if (((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_60[0] != '\0' && (local_68 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  uVar20 = *(uint *)((longlong)plVar5 + 0xc);
  uVar21 = (ulonglong)uVar20;
  if (0 < (int)uVar20) {
    do {
      uVar1 = uVar21 - 1;
      plVar12 = (longlong *)(uVar1 & 0xffffffff);
      pvVar7 = _pthread_getspecific((pthread_key_t)uVar1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef8d0();
      local_38 = local_68;
      if (((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
         ((FUN_00d50b00(), local_60[0] != '\0' && (local_68 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar12 = local_38;
      }
      FUN_01266fe0();
      plVar22 = local_68;
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar22 != (longlong *)0x0) {
        pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar12 = local_38;
        }
        FUN_012641c0();
        local_70 = local_68;
        if (local_60[0] == '\0') {
          if (local_68 == (longlong *)0x0) goto LAB_0134d360;
          FUN_00d50b00();
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_68 == (longlong *)0x0) {
LAB_0134d360:
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfcb0();
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dd790();
          plVar22 = local_68;
          if (local_60[0] == '\0') {
            if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
               (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_60[0] = '\0';
          }
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar20 = *(uint *)((longlong)plVar22 + 0xc);
          if (0 < (int)uVar20) {
            lVar8 = (ulonglong)uVar20 + 1;
            do {
              uVar20 = uVar20 - 1;
              plVar12 = (longlong *)(ulonglong)uVar20;
              pvVar7 = _pthread_getspecific(uVar20);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_011ef8d0();
              plVar22 = local_68;
              if (((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
                 ((FUN_00d50b00(), local_60[0] != '\0' && (local_68 != (longlong *)0x0)))) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
              if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                plVar12 = local_38;
              }
              FUN_01266fe0();
              pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              if (local_68 == local_b0) {
                pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_98 = (longlong *)FUN_0125a280();
                pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
                if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  plVar12 = local_38;
                }
                local_78 = (double)FUN_01259520();
                if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((double)((ulonglong)((double)local_98 - local_78) & _DAT_023908f0) <
                    DAT_023b67d8) {
                  if (plVar22 != (longlong *)0x0) {
                    FUN_00d50b00();
                    FUN_00d50b20();
                    local_70 = plVar22;
                  }
                  break;
                }
              }
              else {
                if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if (plVar22 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              lVar8 = lVar8 + -1;
            } while (1 < lVar8);
          }
          FUN_00d50b20();
        }
        pVar17 = (pthread_key_t)plVar12;
        if (local_70 == (longlong *)0x0) {
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar12 = local_38;
          }
          pVar17 = (pthread_key_t)plVar12;
          pvVar7 = _pthread_getspecific(pVar17);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de9b0();
          FUN_01259540();
          pvVar7 = _pthread_getspecific(pVar17);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a5f0();
        }
        else {
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar17 = (pthread_key_t)local_70;
          }
          dVar23 = (double)FUN_01264170();
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar17 = (pthread_key_t)local_70;
          }
          FUN_012708c0();
          plVar12 = local_68;
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar12 == (longlong *)0x0) {
            bVar2 = false;
            local_d0 = (longlong *)0x0;
          }
          else {
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (pthread_key_t)local_70;
            }
            FUN_012708c0();
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff00();
            local_d0 = local_68;
            plVar12 = local_68;
            if (local_68 == (longlong *)0x0) {
              local_d0 = (longlong *)0x0;
              bVar2 = false;
            }
            else if (local_60[0] == '\0') {
              FUN_00d50b00();
              bVar2 = true;
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60[0] = '\0';
              bVar2 = true;
            }
            pVar17 = (pthread_key_t)plVar12;
            if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar17 = (pthread_key_t)local_38;
          }
          uVar10 = FUN_0126e7e0();
          bVar3 = true;
          if (local_68 == (longlong *)0x0) {
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (pthread_key_t)local_70;
            }
            uVar10 = FUN_0126e7e0();
            bVar3 = true;
            if (local_b0 == (longlong *)0x0) {
              pvVar7 = _pthread_getspecific(pVar17);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pVar17 = (pthread_key_t)local_38;
              }
              local_98 = (longlong *)FUN_01264170();
              pvVar7 = _pthread_getspecific(pVar17);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pVar17 = (pthread_key_t)local_70;
              }
              uVar10 = FUN_01264170();
              bVar3 = DAT_023934c8 <
                      (double)((ulonglong)((double)local_98 / param_1 - extraout_XMM0_Qa / param_2)
                              & _DAT_023908f0);
            }
            if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
              uVar10 = FUN_00d50b20();
            }
          }
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            uVar10 = FUN_00d50b20();
          }
          if (bVar3) {
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126e7e0();
            plVar12 = local_68;
            FUN_01111330();
            pplVar15 = (longlong **)&DAT_02802688;
            if (plVar12 != (longlong *)0x0) {
              (**(code **)(*plVar12 + 0x360))();
              cVar6 = FUN_00e85ea0();
              pplVar15 = &local_68;
              if (cVar6 == '\0') {
                pplVar15 = (longlong **)&DAT_02802688;
              }
            }
            local_a0 = (longlong **)*pplVar15;
            if (*(char *)(pplVar15 + 1) == '\0') {
              if (local_a0 != (longlong **)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar15 + 1) = 0;
            }
            pVar17 = (pthread_key_t)pplVar15;
            if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126e7e0();
            plVar12 = local_68;
            FUN_01111330();
            pplVar15 = (longlong **)&DAT_02802688;
            if (plVar12 != (longlong *)0x0) {
              (**(code **)(*plVar12 + 0x360))();
              cVar6 = FUN_00e85ea0();
              pplVar15 = &local_68;
              if (cVar6 == '\0') {
                pplVar15 = (longlong **)&DAT_02802688;
              }
            }
            local_80 = (longlong **)*pplVar15;
            if (*(char *)(pplVar15 + 1) == '\0') {
              if (local_80 != (longlong **)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar15 + 1) = 0;
            }
            if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_a0 == (longlong **)0x0) {
              pplVar11 = (longlong **)FUN_011114e0();
              (*(code *)(*pplVar11)[3])();
              local_a0 = pplVar11;
              pvVar7 = _pthread_getspecific((pthread_key_t)pplVar15);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pplVar15 = local_a0;
              }
              FUN_013ef430(_DAT_02391038,_DAT_02391038);
              pvVar7 = _pthread_getspecific((pthread_key_t)pplVar15);
              pplVar11 = local_a0;
              if ((pvVar7 != (void *)0x0) &&
                 (lVar8 = FUN_00e8b990(), pplVar11 = local_a0, lVar8 != 0)) {
                pplVar15 = local_a0;
                pplVar11 = (longlong **)local_a0[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              (*(code *)(*pplVar11)[0x83])(0,0);
              if ((local_1f8 != '\0') && (local_200 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)pplVar15);
              pplVar11 = local_a0;
              if ((pvVar7 != (void *)0x0) &&
                 (lVar8 = FUN_00e8b990(), pplVar11 = local_a0, lVar8 != 0)) {
                pplVar15 = local_a0;
                pplVar11 = (longlong **)local_a0[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              (*(code *)(*pplVar11)[0x83])(param_1,param_1);
              if ((local_1e8 != '\0') && (local_1f0 != 0)) {
                FUN_00d50b20();
              }
            }
            pVar17 = (pthread_key_t)pplVar15;
            if (local_80 == (longlong **)0x0) {
              pplVar11 = (longlong **)FUN_011114e0();
              (*(code *)(*pplVar11)[3])();
              local_80 = pplVar11;
              pvVar7 = _pthread_getspecific((pthread_key_t)pplVar15);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pplVar15 = local_80;
              }
              FUN_013ef430(_DAT_02391038,_DAT_02391038);
              pvVar7 = _pthread_getspecific((pthread_key_t)pplVar15);
              pplVar11 = local_80;
              if ((pvVar7 != (void *)0x0) &&
                 (lVar8 = FUN_00e8b990(), pplVar11 = local_80, lVar8 != 0)) {
                pplVar15 = local_80;
                pplVar11 = (longlong **)local_80[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              (*(code *)(*pplVar11)[0x83])(0,0);
              if ((local_1d8 != '\0') && (local_1e0 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)pplVar15);
              pplVar11 = local_80;
              if ((pvVar7 != (void *)0x0) &&
                 (lVar8 = FUN_00e8b990(), pplVar11 = local_80, lVar8 != 0)) {
                pplVar15 = local_80;
                pplVar11 = (longlong **)local_80[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              pVar17 = (pthread_key_t)pplVar15;
              (*(code *)(*pplVar11)[0x83])(param_2,param_2);
              if ((local_1c8 != '\0') && (local_1d0 != 0)) {
                FUN_00d50b20();
              }
            }
            plVar12 = (longlong *)FUN_011114e0();
            (**(code **)(*plVar12 + 0x18))();
            local_98 = plVar12;
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (pthread_key_t)local_98;
            }
            FUN_013ef430(_DAT_02391038,_DAT_02391038);
            pvVar7 = _pthread_getspecific(pVar17);
            pplVar15 = local_a0;
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), pplVar15 = local_a0, lVar8 != 0)
               ) {
              pplVar15 = (longlong **)local_a0[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
            FUN_013f2b00();
            local_b8 = local_68;
            if (local_68 == (longlong *)0x0) {
              uVar18 = (undefined4)CONCAT71((int7)((ulonglong)pplVar15 >> 8),1);
              uVar16 = 0;
              local_b8 = (longlong *)0x0;
            }
            else {
              plVar12 = local_68;
              if (local_60[0] == '\0') {
                FUN_00d50b00();
                uVar18 = 0;
                if (local_60[0] != '\0') {
                  uVar16 = CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
                  if (local_68 != (longlong *)0x0) {
                    FUN_00d50b20();
                    uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
                    uVar18 = 0;
                  }
                  goto LAB_0134e063;
                }
              }
              uVar18 = 0;
              uVar16 = CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
            }
LAB_0134e063:
            pvVar7 = _pthread_getspecific((pthread_key_t)uVar16);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar24 = (double)FUN_01264170();
            if (local_b8 != (longlong *)0x0) {
              local_60[0] = '\0';
              local_68 = (longlong *)0x0;
              local_58 = local_b8;
              local_50 = 0xffffffff;
              local_48 = 0;
              local_50._4_4_ = 0;
              while( true ) {
                if (local_50._4_4_ != 0) {
                  if (local_50._4_4_ < 1) {
                    iVar19 = -local_50._4_4_;
                  }
                  else {
                    iVar19 = (int)local_50 - local_50._4_4_;
                    local_50 = CONCAT44(local_50._4_4_,iVar19);
                    FUN_00d23690();
                    local_48 = local_48 + local_50._4_4_;
                    iVar19 = 0;
                  }
                  local_50 = CONCAT44(iVar19,(int)local_50);
                }
                lVar8 = (longlong)(int)local_50;
                iVar19 = (int)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,iVar19);
                if (*(int *)((longlong)local_58 + 0xc) <= iVar19) break;
                plVar12 = (longlong *)local_58[2];
                local_68 = (longlong *)plVar12[lVar8 + 1];
                pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
                plVar22 = local_98;
                if ((pvVar7 != (void *)0x0) &&
                   (lVar8 = FUN_00e8b990(), plVar22 = local_98, lVar8 != 0)) {
                  plVar12 = local_98;
                  plVar22 = (longlong *)local_98[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                }
                pVar17 = (pthread_key_t)plVar12;
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_78 = (double)FUN_013faed0();
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar10 = FUN_013faf20();
                (**(code **)(*plVar22 + 0x418))(local_78 * (dVar24 / param_1),uVar10);
                if ((local_1b8 != '\0') && (local_1c0 != 0)) {
                  FUN_00d50b20();
                }
              }
              FUN_01a81420();
            }
            FUN_00d23340();
            plVar12 = local_68;
            local_b0 = (longlong *)CONCAT71(local_b0._1_7_,local_60[0]);
            pplVar15 = &local_b0;
            pplVar11 = (longlong **)local_60;
            if (local_60[0] == '\0') {
              pplVar11 = pplVar15;
            }
            *(char *)pplVar11 = '\0';
            if ((local_60[0] != '\0') && (plVar12 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific((pthread_key_t)pplVar15);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_78 = (double)FUN_013faed0();
            if (((char)local_b0 != '\0') && (plVar12 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d23340();
            plVar12 = local_68;
            local_b0 = (longlong *)CONCAT71(local_b0._1_7_,local_60[0]);
            pplVar15 = &local_b0;
            pplVar11 = (longlong **)local_60;
            if (local_60[0] == '\0') {
              pplVar11 = pplVar15;
            }
            *(char *)pplVar11 = '\0';
            if ((local_60[0] != '\0') && (plVar12 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pVar17 = (pthread_key_t)pplVar15;
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar25 = (double)FUN_013faf20();
            if (((char)local_b0 != '\0') && (plVar12 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013f2b00();
            plVar12 = local_68;
            if (local_68 == local_b8) {
              bVar14 = (byte)uVar18 & local_b8 != (longlong *)0x0;
              pVar17 = CONCAT31((int3)((uint)uVar18 >> 8),bVar14);
              if (bVar14 != 1) {
                cVar6 = (char)uVar16;
                goto joined_r0x0134e49e;
              }
              cVar6 = '\x01';
              if (local_60[0] == '\0') {
                FUN_00d50b00();
                goto LAB_0134e477;
              }
            }
            else if (local_60[0] == '\0') {
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar14 = (byte)(uVar16 & 0xffffffff) & local_b8 != (longlong *)0x0;
              pVar17 = (pthread_key_t)CONCAT71((int7)((uVar16 & 0xffffffff) >> 8),bVar14);
              cVar6 = '\x01';
              local_b8 = plVar12;
              if (bVar14 == 1) {
                FUN_00d50b20();
LAB_0134e477:
                cVar6 = '\x01';
              }
joined_r0x0134e49e:
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar14 = (byte)(uVar16 & 0xffffffff) & local_b8 != (longlong *)0x0;
              pVar17 = (pthread_key_t)CONCAT71((int7)((uVar16 & 0xffffffff) >> 8),bVar14);
              cVar6 = '\x01';
              if (bVar14 == 1) {
                FUN_00d50b20();
                local_b8 = plVar12;
              }
              else {
                local_b8 = local_68;
              }
            }
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (pthread_key_t)local_70;
            }
            dVar26 = (double)FUN_01264170();
            if (local_b8 != (longlong *)0x0) {
              dVar24 = (dVar24 / param_1) * local_78;
              local_60[0] = '\0';
              local_68 = (longlong *)0x0;
              local_58 = local_b8;
              local_50 = 0xffffffff;
              local_48 = 0;
              local_50._4_4_ = 0;
              while( true ) {
                if (local_50._4_4_ != 0) {
                  if (local_50._4_4_ < 1) {
                    iVar19 = -local_50._4_4_;
                  }
                  else {
                    iVar19 = (int)local_50 - local_50._4_4_;
                    local_50 = CONCAT44(local_50._4_4_,iVar19);
                    FUN_00d23690();
                    local_48 = local_48 + local_50._4_4_;
                    iVar19 = 0;
                  }
                  local_50 = CONCAT44(iVar19,(int)local_50);
                }
                lVar8 = (longlong)(int)local_50;
                iVar19 = (int)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,iVar19);
                if (*(int *)((longlong)local_58 + 0xc) <= iVar19) break;
                plVar12 = *(longlong **)(local_58[2] + 8 + lVar8 * 8);
                local_68 = plVar12;
                if (iVar19 != 0 || local_48 != 0) {
                  pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
                  plVar22 = local_98;
                  if ((pvVar7 != (void *)0x0) &&
                     (lVar8 = FUN_00e8b990(), plVar22 = local_98, lVar8 != 0)) {
                    plVar12 = local_98;
                    plVar22 = (longlong *)local_98[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                  }
                  pVar17 = (pthread_key_t)plVar12;
                  pvVar7 = _pthread_getspecific(pVar17);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_78 = (double)FUN_013faed0();
                  pvVar7 = _pthread_getspecific(pVar17);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar27 = (double)FUN_013faf20();
                  (**(code **)(*plVar22 + 0x418))
                            (local_78 * (dVar26 / param_2) + dVar24 + 0.0,dVar27 + dVar25 + 0.0);
                  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              FUN_01a81420();
              pVar17 = (pthread_key_t)lVar8;
            }
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (pthread_key_t)local_a0;
            }
            FUN_013f2b00();
            uVar20 = *(uint *)((longlong)local_68 + 0xc);
            if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (2 < (int)uVar20) {
              pvVar7 = _pthread_getspecific(pVar17);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pVar17 = (pthread_key_t)local_98;
              }
              FUN_013f2b00();
              iVar19 = *(int *)((longlong)local_68 + 0xc);
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((int)uVar20 < iVar19) {
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013f2b00();
                lVar8 = local_68[2];
                lVar9 = *(longlong *)(lVar8 + (ulonglong)(uVar20 - 2) * 8);
                if (lVar9 != 0) {
                  FUN_00d50b00();
                }
                pVar17 = (pthread_key_t)lVar8;
                if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013f2b00();
                pVar17 = uVar20 - 1;
                local_78 = *(double *)(local_68[2] + (ulonglong)pVar17 * 8);
                if (local_78 != 0.0) {
                  FUN_00d50b00();
                }
                if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar7 = _pthread_getspecific(pVar17);
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  pVar17 = (pthread_key_t)local_98;
                }
                FUN_013f2b00();
                lVar8 = *(longlong *)(local_68[2] + (ulonglong)uVar20 * 8);
                if (lVar8 != 0) {
                  FUN_00d50b00();
                }
                if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar7 = _pthread_getspecific(pVar17);
                if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar17 = SUB84(local_78,0);
                }
                dVar24 = (double)FUN_013faf20();
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar25 = (double)FUN_013faf20();
                pvVar7 = _pthread_getspecific(pVar17);
                if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar17 = SUB84(local_78,0);
                }
                dVar26 = (double)FUN_013faed0();
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar27 = (double)FUN_013faed0();
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar28 = (double)FUN_013faf20();
                pvVar7 = _pthread_getspecific(pVar17);
                if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar17 = SUB84(local_78,0);
                }
                dVar29 = (double)FUN_013faf20();
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar30 = (double)FUN_013faed0();
                pvVar7 = _pthread_getspecific(pVar17);
                if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar17 = SUB84(local_78,0);
                }
                dVar31 = (double)FUN_013faed0();
                if ((double)((ulonglong)
                             ((dVar28 - dVar29) / (dVar30 - dVar31) -
                             (dVar24 - dVar25) / (dVar26 - dVar27)) & _DAT_023908f0) < DAT_02391030)
                {
                  pvVar7 = _pthread_getspecific(pVar17);
                  if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                    pVar17 = (pthread_key_t)local_98;
                  }
                  FUN_013f3080();
                }
                if (lVar8 != 0) {
                  FUN_00d50b20();
                }
                if (local_78 != 0.0) {
                  FUN_00d50b20();
                }
                if (lVar9 != 0) {
                  FUN_00d50b20();
                }
              }
            }
            if ((cVar6 != '\0') && (local_b8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_80 != (longlong **)0x0) {
              FUN_00d50b20();
            }
            if (local_a0 != (longlong **)0x0) {
              FUN_00d50b20();
            }
            local_78 = (double)((ulonglong)local_78 & 0xffffffff00000000);
          }
          else {
            local_78 = (double)CONCAT44(local_78._4_4_,
                                        (int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1));
            local_98 = (longlong *)0x0;
          }
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar17 = (pthread_key_t)local_38;
          }
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar17 = (pthread_key_t)local_38;
          }
          dVar24 = (double)FUN_01264170();
          FUN_01259540(dVar23 + dVar24);
          if (local_98 != (longlong *)0x0) {
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (pthread_key_t)local_38;
            }
            FUN_0125e7c0();
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de9b0();
            FUN_012902c0();
            if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01290740();
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126dd90();
          }
          if (local_d0 != (longlong *)0x0) {
            local_b0 = local_38;
            FUN_00083ea0(2);
            FUN_00790070();
            if (local_120 == '\0') {
              if (local_128 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_120 = '\0';
            }
            local_b0 = local_128;
            local_a8 = '\0';
            FUN_00d21140();
            if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_128 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_68 = (longlong *)&DAT_0253d630;
            if ((local_40 != '\0') && (CONCAT44(uStack_44,local_48) != 0)) {
              FUN_00d50b20();
            }
            local_68 = &DAT_024c5048;
            if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (bVar2) {
              FUN_00d50b20();
            }
          }
          if (SUB81(local_78,0) == '\0' && local_98 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      bVar2 = 1 < (longlong)uVar21;
      uVar21 = uVar1;
    } while (bVar2);
    if (plVar5 == (longlong *)0x0) goto LAB_0134f006;
  }
  FUN_00d50b20();
LAB_0134f006:
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


