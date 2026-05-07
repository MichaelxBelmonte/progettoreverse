// Function: FUN_001227e0
// Address: 001227e0
// Size: 4917 bytes
// Class: MUAudioFileSource
// String references:
//   "%@.tempo.%@"


void FUN_001227e0(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  longlong **pplVar8;
  longlong **pplVar9;
  pthread_key_t pVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 uVar15;
  double dVar16;
  longlong *local_1f0;
  undefined1 local_1e8;
  longlong *local_1e0;
  undefined1 local_1d8;
  longlong *local_1d0;
  undefined1 local_1c8;
  undefined1 local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined1 local_190;
  longlong *local_188;
  undefined1 local_180;
  longlong *local_178;
  undefined1 local_170;
  longlong *local_168;
  undefined1 local_160;
  longlong local_158;
  undefined1 local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  undefined8 local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  double local_c0;
  double local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  int local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40 [8];
  longlong *local_38;
  
  if (*(longlong **)(unaff_RDI + 0x148) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x148) + 0x920))();
    FUN_00d6f370();
    local_148 = DAT_026e1880;
    if (DAT_026e1880 != 0) {
      FUN_00d50b00();
    }
    local_140 = '\x01';
    FUN_00d70ea0();
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  iVar5 = FUN_01d70da0();
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)(unaff_RDI + 0x150) + 0x10) + (longlong)iVar5 * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  uVar6 = FUN_003b9000();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  switch(uVar6) {
  case 0:
    (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
    FUN_00d50b00();
    local_130 = '\x01';
    local_138 = (longlong *)(unaff_RDI + 0x70);
    FUN_007faee0();
    if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
      (**(code **)(*local_138 + 0x10))();
      FUN_00d50b20();
    }
    local_128 = *unaff_RSI;
    local_120 = '\0';
    FUN_007faf50();
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    FUN_007fdfe0();
    FUN_007fdff0();
    *(undefined1 *)(unaff_RDI + 0xb1) = 1;
    break;
  case 1:
    dVar16 = 0.0;
    FUN_00e7b500(DAT_023908c8);
    if (*unaff_RSI != 0) {
      local_78._0_1_ = '\0';
      local_80 = (longlong *)0x0;
      local_70 = *(longlong *)(*unaff_RSI + 0x10);
      local_68 = 0;
      if (0 < *(int *)(local_70 + 0xc)) {
        local_50 = (longlong *)0x0;
        local_108 = 0;
        plVar14 = (longlong *)0x0;
        bVar3 = false;
        do {
          local_80 = *(longlong **)(*(longlong *)(local_70 + 0x10) + (longlong)local_68 * 8);
          FUN_00124d30((longlong)local_68,&local_80);
          lVar1 = CONCAT71(uStack_47,local_48);
          if ((((local_40[0] == '\0') && (lVar1 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
          local_c0 = (double)FUN_0011edf0(0,1);
          local_1f0 = local_80;
          local_1e8 = 0;
          local_b8 = dVar16;
          uVar15 = FUN_00124e00(local_c0,&local_1f0,param_3,param_4,0);
          bVar4 = bVar3;
          if ((local_50 == (longlong *)0x0) && (lVar1 != 0)) {
            if (*(int *)(lVar1 + 0xc) == 0) {
              local_50 = (longlong *)0x0;
            }
            else {
              local_38 = plVar14;
              FUN_00d23310();
              local_b0._0_1_ = local_40[0];
              pplVar9 = &local_b0;
              pplVar8 = (longlong **)local_40;
              if (local_40[0] == '\0') {
                pplVar8 = pplVar9;
              }
              lVar1 = CONCAT71(uStack_47,local_48);
              *(char *)pplVar8 = '\0';
              if ((local_40[0] != '\0') && (lVar1 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)pplVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e8920();
              local_50 = (longlong *)CONCAT71(local_90._1_7_,(char)local_90);
              if (local_50 == (longlong *)0x0) {
                local_50 = (longlong *)0x0;
              }
              else if (local_88 == '\0') {
                uVar15 = FUN_00d50b00();
                local_108 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
                if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_88 = '\0';
                local_108 = CONCAT71(local_90._1_7_,1);
              }
              if (((char)local_b0 != '\0') && (lVar1 != 0)) {
                FUN_00d50b20();
              }
              (**(code **)(*local_80 + 0x3f0))();
              plVar14 = local_38;
              plVar13 = (longlong *)CONCAT71(uStack_47,local_48);
              if (plVar13 == local_38) {
                if ((!bVar3) && (plVar13 != (longlong *)0x0)) {
                  bVar4 = true;
                  if (local_40[0] != '\0') goto LAB_001230a7;
                  FUN_00d50b00();
                  bVar4 = true;
                }
              }
              else {
                plVar14 = plVar13;
                if (local_40[0] != '\0') {
                  bVar4 = true;
                  if ((bVar3) && (local_38 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_001230a7;
                }
                if (plVar13 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                bVar4 = true;
                if ((bVar3) && (local_38 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_40[0] != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
                FUN_00d50b20();
              }
            }
LAB_001230a7:
            uVar15 = FUN_00d50b20();
            bVar3 = bVar4;
          }
          else if (lVar1 != 0) goto LAB_001230a7;
          local_68 = local_68 + 1;
        } while (local_68 < *(int *)(local_70 + 0xc));
        if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
        lVar1 = DAT_026e1890;
        if ((((local_50 != (longlong *)0x0) && (plVar14 != (longlong *)0x0)) &&
            (*(longlong *)(unaff_RDI + 0xc0) != 0)) && (*(char *)(unaff_RDI + 0xb0) == '\0')) {
          if (DAT_026e1890 != 0) {
            uVar15 = FUN_00d50b00();
          }
          local_118 = lVar1;
          local_110 = '\x01';
          FUN_01e57260(uVar15,&local_118);
          plVar13 = local_80;
          if ((char)local_78 == '\0') {
            if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
               (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_78._0_1_ = '\0';
          }
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          plVar11 = plVar13;
          if (*(longlong **)(unaff_RDI + 0xc0) == (longlong *)0x0) {
LAB_001236dc:
            FUN_007585f0();
            plVar12 = local_80;
            if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar12 != (longlong *)0x0) {
              FUN_007585f0();
              plVar11 = local_80;
              plVar12 = plVar13;
              if (plVar13 != local_80) {
                if ((char)local_78 != '\0') {
                  if (plVar13 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  goto LAB_001237c4;
                }
                if (local_80 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                plVar12 = plVar11;
                if (plVar13 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
              }
              plVar11 = plVar12;
              if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x468))();
            plVar12 = local_80;
            if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar12 == (longlong *)0x0) goto LAB_001236dc;
            (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x468))();
            (**(code **)(*(longlong *)CONCAT71(uStack_47,local_48) + 0x390))();
            if (plVar13 == local_80) {
LAB_00123783:
              if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              plVar11 = local_80;
              if ((char)local_78 == '\0') {
                if (local_80 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                if (plVar13 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                goto LAB_00123783;
              }
              if (plVar13 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              local_78._0_1_ = '\0';
            }
            if ((local_40[0] != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
              FUN_00d50b20();
            }
          }
LAB_001237c4:
          local_1d8 = 0;
          local_1e0 = plVar11;
          FUN_001166a0();
          plVar13 = local_80;
          plVar12 = plVar11;
          if (local_80 == plVar11) {
LAB_0012382a:
            plVar13 = plVar12;
            if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((char)local_78 == '\0') {
              if (local_80 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              plVar12 = plVar13;
              if (plVar11 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              goto LAB_0012382a;
            }
            if (plVar11 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00b5dfe0();
          FUN_00df1af0();
          local_1a0 = CONCAT71(local_b0._1_7_,(char)local_b0);
          local_d0 = plVar13;
          uVar15 = FUN_00083ea0(2,&local_1a0);
          FUN_00d8cb40(uVar15,&local_80);
          local_f8 = 0;
          local_100 = CONCAT71(local_90._1_7_,(char)local_90);
          if (local_88 == '\0') {
            if (local_100 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          local_f8 = '\x01';
          FUN_00b5dfe0();
          local_f0 = local_d0;
          local_e8 = 0;
          if (local_c8 == '\0') {
            if (local_d0 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c8 = '\0';
          }
          local_e8 = '\x01';
          (**(code **)(*plVar14 + 0x4f8))(&local_f0,&local_100);
          lVar1 = CONCAT71(uStack_47,local_48);
          if (local_40[0] == '\0') {
            if (((lVar1 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
               (CONCAT71(uStack_47,local_48) != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40[0] = '\0';
          }
          if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
            FUN_00d50b20();
          }
          local_80 = (longlong *)&DAT_0253d630;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          local_80 = &DAT_024c5048;
          if (((char)local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (CONCAT71(local_b0._1_7_,(char)local_b0) != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (CONCAT71(local_e0._1_7_,(char)local_e0) != 0)) {
            FUN_00d50b20();
          }
          local_1d0 = local_50;
          local_1c8 = 0;
          local_1b8 = 0;
          FUN_00125420(local_c0,local_b8);
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (plVar13 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((bVar3) && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_108 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    break;
  case 2:
    FUN_00ca1380();
    plVar14 = local_80;
    local_48 = (char)local_78;
    pplVar9 = &local_78;
    if ((char)local_78 == '\0') {
      pplVar9 = (longlong **)&local_48;
    }
    *(undefined1 *)pplVar9 = 0;
    if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar5 = *(int *)((longlong)plVar14 + 0xc);
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    if (iVar5 == 1) {
      FUN_00ca1380();
      plVar14 = local_80;
      local_90._0_1_ = (char)local_78;
      pplVar9 = &local_78;
      if ((char)local_78 == '\0') {
        pplVar9 = &local_90;
      }
      *(undefined1 *)pplVar9 = 0;
      if (((char)local_78 != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      plVar13 = local_80;
      pplVar9 = (longlong **)&local_48;
      if ((char)local_78 != '\0') {
        pplVar9 = &local_78;
      }
      local_48 = (char)local_78;
      *(undefined1 *)pplVar9 = 0;
      if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 == '\0') && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if (((char)local_90 != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)((longlong)plVar13 + 0xc)) {
        local_1b0 = plVar13;
        local_1a8 = 0;
        pVar10 = 0;
        local_c0 = (double)FUN_0011edf0(0,1);
        local_b8 = param_2;
        FUN_00d23310();
        plVar14 = local_80;
        pplVar9 = &local_90;
        if ((char)local_78 != '\0') {
          pplVar9 = &local_78;
        }
        local_90._0_1_ = (char)local_78;
        *(undefined1 *)pplVar9 = 0;
        if (((char)local_78 != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_50 = plVar14;
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
        local_178 = (longlong *)CONCAT71(uStack_47,local_48);
        local_38 = local_178;
        if (local_40[0] == '\0') {
          if (local_178 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_170 = 1;
        FUN_00c9fe20();
        plVar14 = local_80;
        local_e0._0_1_ = (char)local_78;
        pplVar9 = &local_e0;
        if ((char)local_78 != '\0') {
          pplVar9 = &local_78;
        }
        *(undefined1 *)pplVar9 = 0;
        if (((char)local_78 != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23310();
        plVar13 = local_80;
        pplVar9 = &local_78;
        if ((char)local_78 == '\0') {
          pplVar9 = &local_b0;
        }
        local_b0._0_1_ = (char)local_78;
        *(undefined1 *)pplVar9 = 0;
        if (((char)local_78 != '\0') && (plVar13 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar11 = local_50;
        if (((char)local_b0 == '\0') && (plVar13 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        local_198 = plVar13;
        local_190 = 1;
        FUN_00125420(local_c0,local_b8);
        if (plVar13 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_e0 != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_38 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_90 != '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    break;
  case 3:
    FUN_00ca1380();
    plVar14 = local_80;
    local_48 = (char)local_78;
    pplVar9 = &local_78;
    if ((char)local_78 == '\0') {
      pplVar9 = (longlong **)&local_48;
    }
    *(undefined1 *)pplVar9 = 0;
    if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar5 = *(int *)((longlong)plVar14 + 0xc);
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    if (iVar5 == 1) {
      FUN_00ca1380();
      plVar14 = local_80;
      local_90._0_1_ = (char)local_78;
      pplVar9 = &local_78;
      if ((char)local_78 == '\0') {
        pplVar9 = &local_90;
      }
      *(undefined1 *)pplVar9 = 0;
      if (((char)local_78 != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      plVar13 = local_80;
      pplVar9 = (longlong **)&local_48;
      if ((char)local_78 != '\0') {
        pplVar9 = &local_78;
      }
      local_48 = (char)local_78;
      *(undefined1 *)pplVar9 = 0;
      if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_50 = plVar13;
      if ((local_48 == '\0') && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if (((char)local_90 != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)((longlong)local_50 + 0xc)) {
        dVar16 = 0.0;
        local_c0 = (double)FUN_00e7b500(DAT_023908c8);
        local_b8 = dVar16;
        iVar5 = FUN_01d70da0();
        if (iVar5 == 1) {
          local_c0 = *(double *)(unaff_RDI + 0x90);
          local_b8 = *(double *)(unaff_RDI + 0x98) - local_c0;
        }
        FUN_00d23310();
        plVar14 = local_80;
        pplVar9 = &local_78;
        pplVar8 = &local_90;
        if ((char)local_78 != '\0') {
          pplVar8 = pplVar9;
        }
        local_90._0_1_ = (char)local_78;
        *(undefined1 *)pplVar8 = 0;
        if (((char)local_78 != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pVar10 = (pthread_key_t)pplVar9;
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
        lVar1 = CONCAT71(uStack_47,local_48);
        if (local_40[0] == '\0') {
          if (((lVar1 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if (((char)local_90 != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        local_168 = (longlong *)CONCAT71(uStack_47,local_48);
        local_38 = local_168;
        if (local_40[0] == '\0') {
          if (local_168 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_160 = 1;
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7fb0();
        lVar2 = CONCAT71(local_90._1_7_,(char)local_90);
        if (local_88 == '\0') {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        local_150 = 1;
        local_158 = lVar2;
        FUN_00c9fe20();
        plVar14 = local_80;
        local_d0 = (longlong *)CONCAT71(local_d0._1_7_,(char)local_78);
        pplVar9 = &local_d0;
        if ((char)local_78 != '\0') {
          pplVar9 = &local_78;
        }
        *(undefined1 *)pplVar9 = 0;
        if (((char)local_78 != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23310();
        plVar13 = local_80;
        pplVar9 = &local_78;
        if ((char)local_78 == '\0') {
          pplVar9 = &local_e0;
        }
        local_e0._0_1_ = (char)local_78;
        *(undefined1 *)pplVar9 = 0;
        if (((char)local_78 != '\0') && (plVar13 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_e0 == '\0') && (plVar13 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        local_188 = plVar13;
        local_180 = 1;
        FUN_001256c0(local_c0,local_b8);
        if (plVar13 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_d0 != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (CONCAT71(local_b0._1_7_,(char)local_b0) != 0)) {
          FUN_00d50b20();
        }
        if (local_38 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    break;
  default:
    goto switchD_001228f7_default;
  }
  FUN_01e54790();
switchD_001228f7_default:
  return;
}


