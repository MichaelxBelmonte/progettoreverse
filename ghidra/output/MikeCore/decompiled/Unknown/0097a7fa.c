// Function: FUN_0097a7fa
// Address: 0097a7fa
// Size: 4555 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbinarydsig/BinaryCertif...
//   "Unknown arch passed to BinaryCertifierBase::verify in inArchsToVerify: \"%s\""
//   "bool pace::BinaryCertifierBase::verify(const boost::filesystem::path &, std::shared_ptr<TProtocol> ...


string * FUN_0097a7fa(ulong param_1,string *param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  byte bVar2;
  string sVar3;
  string sVar4;
  locale *plVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  string *psVar11;
  longlong lVar12;
  locale *plVar13;
  string *psVar14;
  void *pvVar15;
  longlong *plVar16;
  string *psVar17;
  ulonglong uVar18;
  int *piVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined7 uVar24;
  char *pcVar22;
  string *this;
  string **ppsVar23;
  string *psVar25;
  longlong lVar26;
  longlong lVar27;
  longlong *unaff_RDI;
  locale *plVar28;
  string *psVar29;
  locale *plVar30;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  string *local_res8;
  longlong local_res10;
  undefined *local_a98;
  undefined8 local_a90;
  undefined4 local_a58;
  undefined1 local_3a1;
  string *local_360;
  longlong local_358;
  string *local_330;
  string *local_328;
  undefined8 local_320;
  undefined4 local_318;
  locale *local_310;
  locale *local_308;
  locale *local_300;
  locale *local_2f8;
  string *local_1f8;
  undefined8 local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  string **local_1b8;
  string *local_1b0;
  string *local_1a8;
  ulonglong local_1a0;
  string *local_198;
  string *local_190;
  string *local_188;
  string *local_180;
  string *local_178;
  longlong local_170;
  ulonglong local_168;
  string *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong local_130;
  string *local_128;
  string *local_120;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  string *psStack_100;
  undefined8 local_f8;
  string *local_f0;
  undefined8 local_e8;
  string *psStack_e0;
  undefined8 local_d8;
  string *local_d0;
  undefined8 local_c8;
  string *psStack_c0;
  undefined8 local_b8;
  string *local_80;
  locale *local_78;
  locale *plStack_70;
  locale *local_68;
  longlong *local_58;
  string local_49;
  string *local_48;
  int local_3c;
  int local_38;
  
  local_128 = (string *)CONCAT44(local_128._4_4_,param_4);
  local_d0 = (string *)CONCAT44(local_d0._4_4_,param_1);
  local_a98 = &DAT_0251bf60;
  local_a90 = 0x100000001;
  local_120 = param_2;
  FUN_0097d480();
  local_320 = 0;
  local_328 = (string *)0x0;
  local_330 = (string *)0x0;
  local_318 = 0x101;
  local_a90 = 0x100000001;
  if (local_res8 != (string *)0x0) {
    FUN_0097ffec();
    *(longlong *)(local_res8 + 0x10) = 0;
    *(string **)local_res8 = local_res8 + 8;
    *(longlong *)(local_res8 + 8) = 0;
  }
  psVar25 = (string *)0x0;
  if ((param_3 != (longlong *)0x0) && ((char)local_d0 == '\0')) {
    psVar11 = operator_new(param_1);
    *(longlong *)(psVar11 + 0x10) = 0;
    *(longlong *)(psVar11 + 8) = 0;
    *(longlong *)psVar11 = 0;
    plVar30 = (locale *)*param_3;
    plVar5 = (locale *)param_3[1];
    plVar13 = plVar5;
    psVar25 = psVar11;
    if (plVar30 != plVar5) {
      local_48 = psVar11;
      do {
        uVar31 = std::locale::locale(plVar13);
        FUN_00991334(uVar31,&local_310);
        std::locale::~locale(plVar13);
        lVar12 = FUN_008d6858();
        uVar24 = (undefined7)((ulonglong)plVar13 >> 8);
        psVar25 = (string *)(ulonglong)((byte)local_c8._0_1_ >> 1);
        if ((local_c8 & 1) != 0) {
          psVar25 = psStack_c0;
        }
        bVar2 = *(byte *)(lVar12 + 0x358);
        pcVar22 = (char *)CONCAT71(uVar24,1);
        if ((bVar2 & 1) == 0) {
          psVar29 = (string *)(ulonglong)(bVar2 >> 1);
        }
        else {
          psVar29 = *(string **)(lVar12 + 0x360);
        }
        if (psVar25 == psVar29) {
          if ((bVar2 & 1) == 0) {
            lVar12 = lVar12 + 0x359;
          }
          else {
            lVar12 = *(longlong *)(lVar12 + 0x368);
          }
          pcVar22 = (char *)CONCAT71(uVar24,1);
          if ((local_c8 & 1) == 0) {
            if (psVar25 != (string *)0x0) {
              psVar25 = (string *)0x0;
              do {
                if (psVar25[(longlong)&local_c8 + 1] != psVar25[lVar12]) goto LAB_0097a9dc;
                psVar25 = psVar25 + 1;
              } while ((string *)(ulonglong)((byte)local_c8._0_1_ >> 1) != psVar25);
            }
          }
          else if ((psVar25 != (string *)0x0) &&
                  (iVar8 = _memcmp(pcVar22,psVar25,(uint)(byte)local_c8._0_1_), iVar8 != 0))
          goto LAB_0097a9dc;
        }
        else {
LAB_0097a9dc:
          lVar12 = FUN_008d6858();
          uVar24 = (undefined7)((ulonglong)pcVar22 >> 8);
          psVar25 = (string *)(ulonglong)((byte)local_c8._0_1_ >> 1);
          if ((local_c8 & 1) != 0) {
            psVar25 = psStack_c0;
          }
          bVar2 = *(byte *)(lVar12 + 0x340);
          pcVar22 = (char *)CONCAT71(uVar24,1);
          if ((bVar2 & 1) == 0) {
            psVar29 = (string *)(ulonglong)(bVar2 >> 1);
          }
          else {
            psVar29 = *(string **)(lVar12 + 0x348);
          }
          if (psVar25 == psVar29) {
            if ((bVar2 & 1) == 0) {
              lVar12 = lVar12 + 0x341;
            }
            else {
              lVar12 = *(longlong *)(lVar12 + 0x350);
            }
            pcVar22 = (char *)CONCAT71(uVar24,1);
            if ((local_c8 & 1) == 0) {
              if (psVar25 != (string *)0x0) {
                psVar25 = (string *)0x0;
                do {
                  if (psVar25[(longlong)&local_c8 + 1] != psVar25[lVar12]) goto LAB_0097aa8d;
                  psVar25 = psVar25 + 1;
                } while ((string *)(ulonglong)((byte)local_c8._0_1_ >> 1) != psVar25);
              }
            }
            else if ((psVar25 != (string *)0x0) &&
                    (iVar8 = _memcmp(pcVar22,psVar25,(uint)(byte)local_c8._0_1_), iVar8 != 0))
            goto LAB_0097aa8d;
          }
          else {
LAB_0097aa8d:
            lVar12 = FUN_008d6858();
            psVar25 = (string *)(ulonglong)((byte)local_c8._0_1_ >> 1);
            if ((local_c8 & 1) != 0) {
              psVar25 = psStack_c0;
            }
            bVar2 = *(byte *)(lVar12 + 0x370);
            if ((bVar2 & 1) == 0) {
              psVar29 = (string *)(ulonglong)(bVar2 >> 1);
            }
            else {
              psVar29 = *(string **)(lVar12 + 0x378);
            }
            if (psVar25 == psVar29) {
              if ((bVar2 & 1) == 0) {
                lVar12 = lVar12 + 0x371;
              }
              else {
                lVar12 = *(longlong *)(lVar12 + 0x380);
              }
              pcVar22 = (char *)CONCAT71((int7)((ulonglong)pcVar22 >> 8),1);
              if ((local_c8 & 1) == 0) {
                if (psVar25 != (string *)0x0) {
                  psVar25 = (string *)0x0;
                  do {
                    if (psVar25[(longlong)&local_c8 + 1] != psVar25[lVar12]) goto LAB_0097ab3a;
                    psVar25 = psVar25 + 1;
                  } while ((string *)(ulonglong)((byte)local_c8._0_1_ >> 1) != psVar25);
                }
              }
              else if ((psVar25 != (string *)0x0) &&
                      (iVar8 = _memcmp(pcVar22,psVar25,(uint)(byte)local_c8._0_1_), iVar8 != 0))
              goto LAB_0097ab3a;
            }
            else {
LAB_0097ab3a:
              FUN_00925fd0();
              psVar25 = (string *)FUN_00926010();
              local_308 = (locale *)FUN_009b6370;
              local_300 = (locale *)FUN_0094ef70;
              local_310 = plVar30;
              FUN_00983230();
              pcVar22 = 
              "bool pace::BinaryCertifierBase::verify(const boost::filesystem::path &, std::shared_ptr<TProtocol> *, const bool, const std::vector<std::string> *, const bool, pace::eden::DsigResultMap_T *, petpub::BinarySignature *)"
              ;
              FUN_00928ab0("bool pace::BinaryCertifierBase::verify(const boost::filesystem::path &, std::shared_ptr<TProtocol> *, const bool, const std::vector<std::string> *, const bool, pace::eden::DsigResultMap_T *, petpub::BinarySignature *)"
                           ,0x13f);
              FUN_009bd5cb();
            }
          }
        }
        local_78 = (locale *)0x0;
        plStack_70 = (locale *)0x0;
        local_68 = (locale *)0x0;
        FUN_00abf0f7();
        if (((ulonglong)local_78 & 1) != 0) {
          operator_delete(pcVar22);
        }
        local_68 = local_300;
        plStack_70 = local_308;
        local_78 = local_310;
        lVar12 = *(longlong *)(local_48 + 8);
        if (lVar12 == *(longlong *)(local_48 + 0x10)) {
          psVar25 = (string *)((lVar12 - *(longlong *)local_48 >> 3) * -0x5555555555555555);
          if ((string *)0xaaaaaaaaaaaaaaa < psVar25 + 1) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          psVar29 = psVar11 + 0x10;
          FUN_008d3ea0();
          std::string::string(psVar29,psVar25);
          plVar28 = local_300 + 0x18;
          local_300 = *(locale **)local_48;
          plVar13 = *(locale **)(local_48 + 8);
          local_310 = local_300;
          if (plVar13 != local_300) {
            do {
              *(undefined8 *)(local_308 + -8) = *(undefined8 *)(plVar13 + -8);
              uVar20 = *(undefined8 *)(plVar13 + -0x18);
              *(undefined8 *)(local_308 + -0x10) = *(undefined8 *)(plVar13 + -0x10);
              *(undefined8 *)(local_308 + -0x18) = uVar20;
              *(undefined8 *)(plVar13 + -0x18) = 0;
              *(undefined8 *)(plVar13 + -0x10) = 0;
              *(undefined8 *)(plVar13 + -8) = 0;
              plVar13 = plVar13 + -0x18;
              local_308 = local_308 + -0x18;
            } while (local_300 != plVar13);
            local_300 = *(locale **)(local_48 + 8);
            local_310 = *(locale **)local_48;
          }
          *(locale **)local_48 = local_308;
          *(locale **)(local_48 + 8) = plVar28;
          plVar28 = *(locale **)(local_48 + 0x10);
          *(locale **)(local_48 + 0x10) = local_2f8;
          plVar13 = local_2f8;
          local_308 = local_310;
          local_2f8 = plVar28;
          FUN_0088cd00();
        }
        else {
          plVar13 = (locale *)local_48;
          std::string::string(local_48,psVar25);
          *(longlong *)(local_48 + 8) = lVar12 + 0x18;
        }
        if (((ulonglong)local_78 & 1) != 0) {
          operator_delete(plVar13);
        }
        if ((local_c8 & 1) != 0) {
          operator_delete(plVar13);
        }
        plVar30 = plVar30 + 0x18;
        psVar25 = local_48;
      } while (plVar30 != plVar5);
    }
    param_1 = (ulong)plVar13;
  }
  local_f0 = (string *)0x0;
  if (local_res8 == (string *)0x0) {
    local_f0 = operator_new(param_1);
    *(longlong *)(local_f0 + 0x10) = 0;
    *(longlong *)(local_f0 + 8) = 0;
    *(string **)local_f0 = local_f0 + 8;
    local_310 = (locale *)0x0;
    FUN_0098003e();
    local_res8 = local_f0;
  }
  (**(code **)(*unaff_RDI + 0x10))();
  uVar18 = (ulonglong)local_128 & 0xff;
  psVar11 = &local_49;
  psVar29 = psVar25;
  cVar6 = (**(code **)(*local_158 + 0x10))(uVar18,psVar25,psVar11,local_res8);
  this = (string *)CONCAT71((int7)(uVar18 >> 8),local_49 != (string)0x0);
  if (cVar6 != '\x01' || local_49 != (string)0x0) {
    local_80 = (string *)0x0;
  }
  else {
    local_78 = (locale *)0x0;
    plStack_70 = (locale *)0x0;
    local_68 = (locale *)0x0;
    local_48 = psVar25;
    if (local_120 == (string *)0x0) {
      psVar29 = (string *)&local_a98;
      (**(code **)(*unaff_RDI + 0x30))();
    }
    else {
      FUN_008e30d2();
    }
    local_3a1 = 0;
    local_1d0 = FUN_009f3f64();
    pvVar15 = (void *)unaff_RDI[1];
    local_58 = (longlong *)unaff_RDI[2];
    if (local_58 != (longlong *)0x0) {
      LOCK();
      local_58[1] = local_58[1] + 1;
      UNLOCK();
    }
    local_108 = 0;
    psStack_100 = (string *)0x0;
    local_f8 = 0;
    FUN_009d4f26();
    std::string::string(this,psVar29);
    if ((local_108 & 1) != 0) {
      operator_delete(this);
    }
    local_f8 = local_b8;
    psStack_100 = psStack_c0;
    local_108 = local_c8;
    this = psStack_c0;
    FUN_009d5068();
    local_190 = local_328;
    if (local_330 == local_328) {
      local_80 = (string *)0x0;
    }
    else {
      local_1a0 = (ulonglong)&local_c8 | 1;
      local_168 = (ulonglong)&local_e8 | 1;
      local_1b8 = &psStack_e0;
      this = local_res8 + 8;
      local_80 = (string *)0x0;
      local_3c = 0;
      psVar25 = local_330;
      local_160 = this;
      do {
        local_128 = psVar25 + 0x78;
        local_1b0 = psVar25 + 0x79;
        local_120 = psVar25 + 0x90;
        local_198 = psVar25 + 0x91;
        local_d0 = psVar25 + 0x238;
        local_1a8 = psVar25 + 0x18;
        local_188 = psVar25 + 0x19;
        local_180 = psVar25 + 0x221;
        local_178 = psVar25 + 0x1a8;
        bVar7 = true;
        while (bVar7) {
          lVar12 = FUN_008d6858();
          if ((*(int *)(psVar25 + 0x14) <= *(int *)(lVar12 + 4)) &&
             (lVar12 = FUN_008d6858(), *(int *)(psVar25 + 0x21c) <= *(int *)(lVar12 + 8))) {
            if (pvVar15 == (void *)0x0) {
LAB_0097b2c1:
              pvVar15 = operator_new((ulong)this);
              ppsVar23 = &local_360;
              psVar11 = (string *)0x0;
              FUN_0098bd1c(ppsVar23,local_120,0,4);
              plVar16 = operator_new((ulong)ppsVar23);
              plVar16[2] = 0;
              plVar16[1] = 0;
              *plVar16 = (longlong)&DAT_02520728;
              plVar16[3] = (longlong)pvVar15;
              if (local_58 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_58 + 1;
                lVar12 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar12 == 0) {
                  (**(code **)(*local_58 + 0x10))();
                  std::__shared_weak_count::__release_weak();
                }
              }
            }
            else {
              local_c8 = 0;
              psStack_c0 = (string *)0x0;
              local_b8 = 0;
              local_d8 = 0;
              local_e8 = (string **)0x0;
              psStack_e0 = (string *)0x0;
              std::string::operator=(this,psVar29);
              std::string::operator=(this,psVar29);
              FUN_00abbdc0();
              plVar5 = local_308;
              plVar30 = local_310;
              this = (string *)(local_c8 & 0xff);
              psVar14 = (string *)(local_c8 >> 1 & 0x7f);
              psVar29 = psVar14;
              if ((local_c8 & 1) != 0) {
                psVar29 = psStack_c0;
              }
              sVar3 = psVar25[0x78];
              if (((byte)sVar3 & 1) == 0) {
                psVar17 = (string *)(ulonglong)((byte)sVar3 >> 1);
              }
              else {
                psVar17 = *(string **)(psVar25 + 0x80);
              }
              if (psVar29 == psVar17) {
                psVar17 = local_1b0;
                if (((byte)sVar3 & 1) != 0) {
                  psVar17 = *(string **)(psVar25 + 0x88);
                }
                if ((local_c8 & 1) == 0) {
                  if (psVar29 != (string *)0x0) {
                    this = (string *)0x0;
                    do {
                      if (this[(longlong)&local_c8 + 1] != psVar17[(longlong)this])
                      goto LAB_0097b248;
                      this = this + 1;
                    } while (psVar14 != this);
                  }
                }
                else if ((psVar29 != (string *)0x0) &&
                        (iVar8 = _memcmp(this,psVar29,(size_t)psVar11), iVar8 != 0))
                goto LAB_0097b248;
                this = (string *)((ulonglong)local_e8 & 0xff);
                psVar14 = (string *)((ulonglong)local_e8 >> 1 & 0x7f);
                psVar29 = psVar14;
                if (((ulonglong)local_e8 & 1) != 0) {
                  psVar29 = psStack_e0;
                }
                sVar3 = psVar25[0x90];
                if (((byte)sVar3 & 1) == 0) {
                  psVar17 = (string *)(ulonglong)((byte)sVar3 >> 1);
                }
                else {
                  psVar17 = *(string **)(psVar25 + 0x98);
                }
                if (psVar29 != psVar17) goto LAB_0097b248;
                psVar17 = local_198;
                if (((byte)sVar3 & 1) != 0) {
                  psVar17 = *(string **)(psVar25 + 0xa0);
                }
                if (((ulonglong)local_e8 & 1) == 0) {
                  if (psVar29 != (string *)0x0) {
                    this = (string *)0x0;
                    do {
                      if (this[(longlong)&local_e8 + 1] != psVar17[(longlong)this])
                      goto LAB_0097b248;
                      this = this + 1;
                    } while (psVar14 != this);
                  }
                }
                else if ((psVar29 != (string *)0x0) &&
                        (iVar8 = _memcmp(this,psVar29,(size_t)psVar11), iVar8 != 0))
                goto LAB_0097b248;
                lVar12 = (longlong)plVar5 - (longlong)plVar30;
                this = local_360;
                if (lVar12 != local_358 - (longlong)local_360) goto LAB_0097b248;
                if (plVar30 != plVar5) {
                  lVar26 = 0;
                  do {
                    if (plVar30[lVar26] != *(locale *)(local_360 + lVar26)) goto LAB_0097b248;
                    lVar26 = lVar26 + 1;
                  } while (lVar12 != lVar26);
                }
              }
              else {
LAB_0097b248:
                if (local_58 != (longlong *)0x0) {
                  LOCK();
                  plVar16 = local_58 + 1;
                  lVar12 = *plVar16;
                  *plVar16 = *plVar16 + -1;
                  UNLOCK();
                  if (lVar12 == 0) {
                    (**(code **)(*local_58 + 0x10))();
                    std::__shared_weak_count::__release_weak();
                  }
                }
                pvVar15 = (void *)0x0;
                local_58 = (longlong *)0x0;
              }
              if (plVar30 != (locale *)0x0) {
                operator_delete(this);
              }
              if (((ulonglong)local_e8 & 1) != 0) {
                operator_delete(this);
              }
              if ((local_c8 & 1) != 0) {
                operator_delete(this);
              }
              plVar16 = local_58;
              if (pvVar15 == (void *)0x0) goto LAB_0097b2c1;
            }
            local_58 = plVar16;
            this = (string *)&local_c8;
            psVar29 = psVar25;
            FUN_0097bef4();
            FUN_008dfe28();
            psVar14 = (string *)FUN_0098006e();
            FUN_008dfe28();
            psVar17 = (string *)FUN_0098006e();
            if ((psVar25 + 0x240 != psVar14) && (psVar25 + 0x240 != psVar17)) {
              local_1b8[1] = (string *)0x0;
              *local_1b8 = (string *)0x0;
              local_e8 = local_1b8;
              local_310 = (locale *)CONCAT44(local_310._4_4_,local_a58);
              FUN_00980158(local_1b8,&local_310);
              psVar29 = psVar14 + 0x38;
              this = psVar17 + 0x38;
              psVar11 = (string *)&local_1d0;
              cVar6 = FUN_0098c286(this,psVar29,psVar11,&local_e8);
              if (cVar6 != '\0') {
                sVar3 = *local_1a8;
                this = (string *)(ulonglong)(byte)sVar3;
                if (((byte)sVar3 & 1) == 0) {
                  uVar18 = (ulonglong)((byte)sVar3 >> 1);
                }
                else {
                  uVar18 = *(ulonglong *)(psVar25 + 0x20);
                }
                if (uVar18 != 0) {
                  psVar29 = (string *)(ulonglong)((byte)sVar3 >> 1);
                  if (((byte)sVar3 & 1) != 0) {
                    psVar29 = *(string **)(psVar25 + 0x20);
                  }
                  sVar4 = psVar25[0x220];
                  if (((byte)sVar4 & 1) == 0) {
                    psVar14 = (string *)(ulonglong)((byte)sVar4 >> 1);
                  }
                  else {
                    psVar14 = *(string **)(psVar25 + 0x228);
                  }
                  if (psVar29 == psVar14) {
                    psVar14 = local_180;
                    if (((byte)sVar4 & 1) != 0) {
                      psVar14 = *(string **)(psVar25 + 0x230);
                    }
                    if (((byte)sVar3 & 1) == 0) {
                      if (psVar29 != (string *)0x0) {
                        this = (string *)0x0;
                        do {
                          psVar29 = (string *)
                                    CONCAT71((int7)((ulonglong)psVar29 >> 8),
                                             (psVar25 + 0x19)[(longlong)this]);
                          if ((psVar25 + 0x19)[(longlong)this] != psVar14[(longlong)this])
                          goto LAB_0097b901;
                          this = this + 1;
                        } while ((string *)(ulonglong)((byte)sVar3 >> 1) != this);
                      }
                    }
                    else if ((psVar29 != (string *)0x0) &&
                            (iVar8 = _memcmp(this,psVar29,(size_t)psVar11), iVar8 != 0))
                    goto LAB_0097b901;
                    psVar29 = (string *)&local_310;
                    FUN_0097c240();
                    FUN_0097c422();
                    psVar14 = *(string **)(psVar25 + 0x1c8);
                    this = *(string **)(psVar25 + 0x1d0);
                    if (psVar14 != this) {
                      this = this + -(longlong)psVar14;
                      psVar17 = (string *)0x0;
                      do {
                        psVar29 = local_1f8;
                        if (psVar14[(longlong)psVar17] != local_1f8[(longlong)psVar17])
                        goto LAB_0097b8f5;
                        psVar17 = psVar17 + 1;
                      } while (this != psVar17);
                    }
                    lVar12 = *(longlong *)(psVar25 + 0x1f0);
                    lVar26 = *(longlong *)(psVar25 + 0x1f8);
                    if (lVar26 != lVar12) {
                      if (lVar12 == lVar26) {
                        local_110 = 0;
                        local_118 = 0;
                        iVar8 = local_3c;
                      }
                      else {
                        local_38 = local_3c;
                        local_118 = 0;
                        local_110 = 0;
                        local_170 = lVar26;
                        do {
                          piVar19 = (int *)FUN_008d6858();
                          iVar8 = local_38;
                          if ((((*(int *)(lVar12 + 0xc) <= *piVar19) &&
                               ((uVar31 = extraout_XMM0_Da, *(char *)(lVar12 + 0x132) == '\0' ||
                                (iVar9 = FUN_009d561e(), uVar31 = extraout_XMM0_Da_00,
                                iVar8 = local_38, -1 < iVar9)))) &&
                              ((*(char *)(lVar12 + 0x133) == '\0' ||
                               (iVar9 = FUN_009d561e(), uVar31 = extraout_XMM0_Da_01,
                               iVar8 = local_38, iVar9 < 1)))) &&
                             ((local_130 = lVar12 + 0x70, *(char *)(lVar12 + 0x136) == '\0' ||
                              (psVar29 = (string *)FUN_009801f4(), uVar31 = extraout_XMM0_Da_02,
                              iVar8 = local_38, psVar29 != local_160)))) {
                            (**(code **)(*local_158 + 0x30))(uVar31,lVar12);
                            if (local_1c8 == 0) {
                              FUN_00925fd0();
                              uVar20 = FUN_00926010();
                              uVar31 = FUN_00928ab0(
                                                  "bool pace::BinaryCertifierBase::verify(const boost::filesystem::path &, std::shared_ptr<TProtocol> *, const bool, const std::vector<std::string> *, const bool, pace::eden::DsigResultMap_T *, petpub::BinarySignature *)"
                                                  ,0x287);
                              FUN_009bd5cb(uVar31,uVar20);
                            }
                            else {
                              lVar26 = *(longlong *)(lVar12 + 0x118);
                              if (lVar26 != *(longlong *)(lVar12 + 0x120)) {
                                lVar27 = 0;
                                do {
                                  if (*(char *)(lVar26 + lVar27) !=
                                      *(char *)(*(longlong *)(local_1c8 + 0x118) + lVar27)) {
                                    FUN_00925fd0();
                                    uVar20 = FUN_00926010();
                                    uVar21 = FUN_00928ab0(
                                                  "bool pace::BinaryCertifierBase::verify(const boost::filesystem::path &, std::shared_ptr<TProtocol> *, const bool, const std::vector<std::string> *, const bool, pace::eden::DsigResultMap_T *, petpub::BinarySignature *)"
                                                  ,0x272);
                                    local_3c = (int)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
                                    FUN_009bd5cb(extraout_XMM0_Da_03,uVar20);
                                    goto LAB_0097b716;
                                  }
                                  lVar27 = lVar27 + 1;
                                } while (*(longlong *)(lVar12 + 0x120) - lVar26 != lVar27);
                              }
                              local_110 = local_110 + 1;
                            }
                            local_3c = 0;
                            iVar9 = 0;
                            if (local_38 != 0) {
LAB_0097b716:
                              bVar2 = (byte)local_3c;
                              if (*(char *)(lVar12 + 0x136) != '\0') {
                                psVar11 = local_res8;
                                cVar6 = FUN_0097c7c4(local_130,&local_78,local_res8,(byte)local_3c);
                                iVar9 = 0x11;
                                if (cVar6 != '\0') {
                                  local_3c = local_38;
                                  goto LAB_0097b77d;
                                }
                              }
                              iVar8 = local_38;
                              iVar9 = 0x11;
                              psVar11 = (string *)(ulonglong)bVar2;
                              FUN_0097c83a(local_res8,&local_78,psVar11,0);
                              local_3c = iVar8;
                            }
LAB_0097b77d:
                            if (local_1c0 != (longlong *)0x0) {
                              LOCK();
                              plVar16 = local_1c0 + 1;
                              lVar26 = *plVar16;
                              *plVar16 = *plVar16 + -1;
                              UNLOCK();
                              if (lVar26 == 0) {
                                (**(code **)(*local_1c0 + 0x10))();
                                std::__shared_weak_count::__release_weak();
                              }
                            }
                            local_118 = local_118 + 1;
                            iVar8 = local_3c;
                            if (iVar9 != 0) break;
                          }
                          lVar12 = lVar12 + 0x140;
                          local_38 = iVar8;
                        } while (lVar12 != local_170);
                      }
                      uVar10 = (uint)(byte)local_80;
                      psVar29 = (string *)((longlong)&MACH_HEADER.magic + 1);
                      this = (string *)(ulonglong)uVar10;
                      if (local_118 == local_110) {
                        this = (string *)((longlong)&MACH_HEADER.magic + 1);
                      }
                      local_80 = this;
                      local_3c = iVar8;
                      if (local_118 == 0) {
                        this = (string *)(ulonglong)uVar10;
                        local_80 = this;
                      }
                    }
LAB_0097b8f5:
                    FUN_008db522();
                  }
                }
              }
LAB_0097b901:
              FUN_00992e70();
            }
          }
          bVar7 = false;
          if (local_80 != (string *)0x0) {
            FUN_0097c8dc();
            this = local_res8;
            FUN_0097c83a(local_res8,&local_310,0,1);
            if (((ulonglong)local_310 & 1) != 0) {
              operator_delete(this);
            }
            goto LAB_0097b984;
          }
        }
        psVar25 = psVar25 + 0x260;
      } while (psVar25 != local_190);
    }
LAB_0097b984:
    if ((local_108 & 1) != 0) {
      operator_delete(this);
    }
    psVar25 = local_48;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_58 + 1;
      lVar12 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*local_58 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if (((ulonglong)local_78 & 1) != 0) {
      operator_delete(this);
    }
    if (local_80 != (string *)0x0) {
      if (local_res10 != 0) {
        FUN_008e35e8();
      }
      if (psVar25 != (string *)0x0) {
        lVar12 = *(longlong *)psVar25;
        lVar26 = *(longlong *)(psVar25 + 8);
        if (lVar12 != lVar26) {
          do {
            psVar11 = (string *)FUN_009801f4();
            psVar25 = local_48;
            if (psVar11 == local_res8 + 8) {
              local_80 = (string *)0x0;
              break;
            }
            lVar12 = lVar12 + 0x18;
          } while (lVar26 != lVar12);
        }
      }
    }
  }
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_150 + 1;
    lVar12 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*local_150 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_0098003e();
  if (psVar25 != (string *)0x0) {
    FUN_0088cae0();
    operator_delete(this);
  }
  FUN_008e3056();
  return local_80;
}


