// Function: FUN_0078e820
// Address: 0078e820
// Size: 3891 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzer"


/* WARNING: Removing unreachable block (ram,0x0078f3a1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0078e820(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong **pplVar9;
  pthread_key_t pVar10;
  uint uVar11;
  longlong **pplVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *unaff_RDI;
  uint uVar15;
  bool bVar16;
  double dVar17;
  undefined8 uVar18;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70 [8];
  undefined8 *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  char local_50;
  longlong *local_48;
  char local_40;
  
  (**(code **)(*unaff_RDI + 0x498))();
  if (local_78 == (longlong *)0x0) {
    bVar16 = true;
  }
  else {
    (**(code **)(*unaff_RDI + 0x498))();
    FUN_00cb1f10();
    FUN_00d3ecf0();
    bVar16 = local_b0 != local_d0;
    if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar16) {
    FUN_00757c60();
    if (local_78 == (longlong *)0x0) {
      bVar16 = false;
    }
    else {
      FUN_00757c60();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if (local_b0 == (longlong *)0x0) {
        bVar16 = false;
      }
      else {
        FUN_00757c60();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_016c2e90();
        bVar16 = iVar4 == 0;
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar16) {
      FUN_00d403d0();
      lVar8 = DAT_026f6d10;
      if (DAT_026f6d10 != 0) {
        FUN_00d50b00();
      }
      local_e8 = 0;
      FUN_00d50b00();
      local_e8 = '\x01';
      local_140 = 0;
      local_138 = '\0';
      local_f0 = unaff_RDI;
      FUN_00d40470(&local_140,&local_f0,1,3);
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_78 + 0x450))();
    if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = DAT_026e1800;
    if (cVar2 != '\0') {
      if (DAT_026e1800 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      dVar17 = (double)FUN_00e7d6f0();
      uVar6 = (ulonglong)(dVar17 * DAT_023907c0);
      dVar17 = dVar17 * DAT_023907c0 - _DAT_023907c8;
      FUN_0071a120();
      if ((((local_70[0] == '\0') && (local_78 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_70[0] != '\0')) && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      bVar3 = (byte)(((longlong)dVar17 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
      local_b0 = plVar1;
      local_a8 = '\0';
      FUN_000175c0();
      plVar13 = local_78;
      if (local_70[0] == '\0') {
        if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
           (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70[0] = '\0';
      }
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar13 != (longlong *)0x0) {
        local_70[0] = '\0';
        local_78 = plVar13;
        bVar3 = FUN_00c70bc0();
        if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((plVar13 != (longlong *)0x0 & bVar3) != 0) {
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        pVar10 = 0x2572358;
        *puVar7 = &DAT_02572358;
        local_b8 = puVar7;
        (*DAT_02572370)();
        if ((undefined8 *)unaff_RDI[0x24] != (undefined8 *)0x0) {
          local_70[0] = '\0';
          local_78 = (longlong *)0x0;
          local_68 = (undefined8 *)unaff_RDI[0x24];
          local_60 = 0xffffffff;
          local_58 = 0;
          local_60._4_4_ = 0;
          while( true ) {
            if (local_60._4_4_ != 0) {
              if (local_60._4_4_ < 1) {
                iVar4 = -local_60._4_4_;
              }
              else {
                iVar4 = (int)local_60 - local_60._4_4_;
                local_60 = CONCAT44(local_60._4_4_,iVar4);
                FUN_00d23690();
                local_58 = local_58 + local_60._4_4_;
                iVar4 = 0;
              }
              local_60 = CONCAT44(iVar4,(int)local_60);
            }
            lVar8 = (longlong)(int)local_60;
            iVar4 = (int)local_60 + 1;
            local_60 = CONCAT44(local_60._4_4_,iVar4);
            if (*(int *)((longlong)local_68 + 0xc) <= iVar4) break;
            plVar1 = *(longlong **)(local_68[2] + 8 + lVar8 * 8);
            local_78 = plVar1;
            local_b0 = plVar1;
            if ((DAT_026e0c38 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
              _DAT_026e0b88 = FUN_000fddb0();
              _DAT_026e0b70 = "MUElementAnalyzer";
              _DAT_026e0b78 = 0x180;
              _DAT_026e0b80 = FUN_000fdd80;
              _DAT_026e0b90 = 0;
              uRam00000000026e0b98 = 0;
              _DAT_026e0ba0 = 0;
              _DAT_026e0c18 = 0;
              uRam00000000026e0c20 = 0;
              _DAT_026e0c28 = 0;
              DAT_026e0c2a = 1;
              _DAT_026e0ba8 = 0;
              uRam00000000026e0bb0 = 0;
              _DAT_026e0bb8 = 0;
              uRam00000000026e0bc0 = 0;
              _DAT_026e0bc8 = 0;
              uRam00000000026e0bd0 = 0;
              _DAT_026e0bd8 = 0;
              uRam00000000026e0be0 = 0;
              _DAT_026e0be8 = 0;
              uRam00000000026e0bf0 = 0;
              _DAT_026e0bf8 = 0;
              uRam00000000026e0c00 = 0;
              _DAT_026e0c08 = 0;
              uRam00000000026e0c10 = 0;
              DAT_026e0c33 = 0;
              _DAT_026e0c2b = 0;
              ___cxa_guard_release();
            }
            pplVar12 = (longlong **)&DAT_02802688;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x360))();
              cVar2 = FUN_00e85ea0();
              pplVar12 = &local_b0;
              if (cVar2 == '\0') {
                pplVar12 = (longlong **)&DAT_02802688;
              }
            }
            if (*pplVar12 != (longlong *)0x0) {
              uVar18 = FUN_00e33de0();
              lVar8 = DAT_0270b920;
              if (DAT_0270b920 != 0) {
                uVar18 = FUN_00d50b00();
              }
              local_130 = lVar8;
              local_128 = '\x01';
              FUN_000175c0(uVar18,&local_130);
              plVar1 = local_b0;
              FUN_0006e1c0();
              pplVar12 = (longlong **)&DAT_02802688;
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x360))();
                cVar2 = FUN_00e85ea0();
                pplVar12 = &local_b0;
                if (cVar2 == '\0') {
                  pplVar12 = (longlong **)&DAT_02802688;
                }
              }
              plVar1 = *pplVar12;
              if (*(char *)(pplVar12 + 1) == '\0') {
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar12 + 1) = 0;
              }
              if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_128 != '\0') && (local_130 != 0)) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar1 != (longlong *)0x0) {
                local_a8 = '\0';
                local_b0 = plVar1;
                FUN_00d21140();
                if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
          }
          puVar7 = local_68;
          FUN_0079bb70();
          pVar10 = (pthread_key_t)puVar7;
        }
        if (*(int *)((longlong)local_b8 + 0xc) != 0) {
          FUN_00757c60();
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cb110();
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          plVar1 = local_78;
          if (local_70[0] == '\0') {
            if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
               (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_70[0] = '\0';
          }
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            local_a8 = '\0';
            local_b0 = (longlong *)0x0;
            local_a0 = plVar1;
            local_90 = 0;
            local_98 = 0;
            if (0 < *(int *)((longlong)plVar1 + 0xc)) {
              uVar15 = 0;
              do {
                local_b0 = *(longlong **)(plVar1[2] + (ulonglong)uVar15 * 8);
                uVar11 = uVar15;
                pvVar5 = _pthread_getspecific(uVar15);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e7210();
                iVar4 = *(int *)((longlong)local_78 + 0xc);
                if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (iVar4 == 1) {
                  pvVar5 = _pthread_getspecific(uVar11);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012e7210();
                  FUN_00d23310();
                  plVar13 = local_78;
                  local_d0 = (longlong *)CONCAT71(local_d0._1_7_,local_70[0]);
                  pplVar12 = &local_d0;
                  pplVar9 = (longlong **)local_70;
                  if (local_70[0] == '\0') {
                    pplVar9 = pplVar12;
                  }
                  *(char *)pplVar9 = '\0';
                  if ((local_70[0] != '\0') && (plVar13 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  pVar10 = (pthread_key_t)pplVar12;
                  local_80 = plVar13;
                  if (((char)local_d0 == '\0') && (plVar13 != (longlong *)0x0)) {
                    FUN_00d50b00();
                  }
                  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  local_78 = local_80;
                  local_70[0] = '\0';
                  cVar2 = FUN_00d23d70();
                  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (cVar2 == '\0') {
                    pvVar5 = _pthread_getspecific(pVar10);
                    if (pvVar5 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01264240();
                    local_88 = local_78;
                    if ((((local_70[0] == '\0') && (local_78 != (longlong *)0x0)) &&
                        (FUN_00d50b00(), local_70[0] != '\0')) && (local_78 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_70[0] = '\0';
                    local_78 = (longlong *)0x0;
                    local_68 = local_b8;
                    local_60 = 0xffffffff;
                    local_58 = 0;
                    while( true ) {
                      lVar8 = (longlong)(int)local_60;
                      iVar4 = (int)local_60 + 1;
                      local_60 = CONCAT44(local_60._4_4_,iVar4);
                      bVar16 = true;
                      if (*(int *)((longlong)local_68 + 0xc) <= iVar4) break;
                      local_78 = *(longlong **)(local_68[2] + 8 + lVar8 * 8);
                      pvVar5 = _pthread_getspecific((pthread_key_t)local_68[2]);
                      if (pvVar5 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01264240();
                      plVar13 = local_48;
                      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      plVar14 = local_88;
                      if (plVar13 == local_88) {
                        if (local_78 != (longlong *)0x0) {
                          local_c0 = local_78;
                          if (local_70[0] == '\0') {
                            FUN_00d50b00();
                          }
                          else {
                            local_70[0] = '\0';
                          }
                          bVar16 = false;
                          plVar13 = local_c0;
                          goto LAB_0078f4a6;
                        }
                        break;
                      }
                      if (local_60._4_4_ != 0) {
                        if (local_60._4_4_ < 1) {
                          iVar4 = -local_60._4_4_;
                        }
                        else {
                          local_60 = CONCAT44(local_60._4_4_,(int)local_60 - local_60._4_4_);
                          FUN_00d23690();
                          local_58 = local_58 + local_60._4_4_;
                          iVar4 = 0;
                        }
                        local_60 = CONCAT44(iVar4,(int)local_60);
                      }
                    }
                    plVar13 = (longlong *)0x0;
                    plVar14 = local_88;
LAB_0078f4a6:
                    FUN_001159b0();
                    local_c0 = plVar13;
                    if (plVar13 != (longlong *)0x0) {
                      local_70[0] = '\0';
                      local_78 = plVar14;
                      cVar2 = FUN_00ca18c0();
                      plVar13 = local_80;
                      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (cVar2 == '\0') {
                        local_d0 = local_c0;
                        local_100 = plVar13;
                        FUN_00083ea0(2,&local_100);
                        FUN_00790070();
                        local_e0 = local_48;
                        local_d8 = 0;
                        if (local_40 == '\0') {
                          if (local_48 != (longlong *)0x0) {
                            FUN_00d50b00();
                          }
                        }
                        else {
                          local_40 = '\0';
                        }
                        plVar14 = local_88;
                        local_d8 = '\x01';
                        local_120 = local_88;
                        local_118 = '\0';
                        FUN_0076f1c0();
                        if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        local_78 = (longlong *)&DAT_0253d630;
                        if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
                          FUN_00d50b20();
                        }
                        local_78 = &DAT_024c5048;
                        if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      else {
                        local_110 = local_88;
                        local_108 = '\0';
                        FUN_0076f110();
                        local_78 = plVar13;
                        local_70[0] = '\0';
                        FUN_00d235a0();
                        plVar14 = local_88;
                        if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      if (!bVar16) {
                        FUN_00d50b20();
                      }
                    }
                    if (plVar14 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                  if (local_80 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                }
                uVar15 = uVar15 + 1;
                local_98 = CONCAT44(local_98._4_4_,uVar15);
              } while ((int)uVar15 < *(int *)((longlong)plVar1 + 0xc));
            }
            FUN_000be170();
            FUN_00d50b20();
            if (local_b8 == (undefined8 *)0x0) {
              return;
            }
          }
        }
        FUN_00d50b20();
      }
    }
  }
  return;
}


