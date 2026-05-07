// Function: FUN_01a2e7e0
// Address: 01a2e7e0
// Size: 3318 bytes
// Class: MUScalePitchSystem


ulonglong FUN_01a2e7e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  void *pvVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  pthread_key_t pVar13;
  uint uVar14;
  char *pcVar15;
  longlong *unaff_RSI;
  longlong *plVar16;
  undefined7 uVar17;
  bool bVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar19;
  longlong *local_1c0;
  undefined1 local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  longlong *local_1a0;
  undefined1 local_198;
  undefined1 local_188;
  undefined1 local_178;
  ulonglong local_170;
  ulonglong local_168;
  longlong *local_160;
  undefined8 local_158;
  longlong local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  float local_d0;
  float local_cc;
  longlong *local_c8;
  longlong local_c0;
  char local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  longlong *local_a0;
  longlong local_98;
  char local_90;
  uint local_74;
  longlong *local_70;
  byte local_64;
  char local_58 [8];
  ulonglong local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38 [8];
  
  if (*param_2 == 0) {
    uVar8 = 0;
    goto LAB_01a2f4d2;
  }
  local_160 = param_2;
  local_c8 = param_1;
  FUN_01a58dc0();
  plVar2 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *plVar2 + 0x20))();
  plVar3 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b20();
      }
      goto LAB_01a2e8ae;
    }
LAB_01a2e8d8:
    local_a4 = (undefined4)CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
LAB_01a2e8de:
    local_64 = 0;
  }
  else {
    if (local_40 == (longlong *)0x0) goto LAB_01a2e8d8;
LAB_01a2e8ae:
    cVar4 = (**(code **)(*plVar3 + 0x80))();
    if (cVar4 == '\0') {
      local_a4 = 0;
      goto LAB_01a2e8de;
    }
    local_64 = (**(code **)(*plVar3 + 0x50))();
    local_64 = local_64 ^ 1;
    local_a4 = 0;
  }
  cVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" + *plVar2))
                    ();
  if (cVar4 == '\0') {
    local_50 = 0;
    local_48 = (longlong *)0x0;
    uVar8 = 0;
  }
  else {
    iVar5 = FUN_01d3a5a0();
    uVar19 = extraout_XMM0_Da;
    if ((iVar5 == 1) && (iVar5 = FUN_01d3b630(), uVar19 = extraout_XMM0_Da_00, iVar5 == 1)) {
      (**(code **)(*plVar2 + 0xe58))();
      local_a0 = local_40;
      if ((local_38[0] == '\0') &&
         (((local_40 != (longlong *)0x0 && (FUN_00d50b00(), local_38[0] != '\0')) &&
          (local_40 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      FUN_01d3abf0();
      local_158 = FUN_01e466c0();
      (**(code **)(*plVar2 + 0xeb0))();
      local_cc = (float)(**(code **)(*plVar2 + 0xc00))(local_158._4_4_);
      iVar5 = FUN_01d3b620();
      if (iVar5 != 2) {
        FUN_01a58e40();
        if (local_40 == (longlong *)0x0) {
          bVar18 = false;
        }
        else {
          FUN_01a58e40();
          bVar18 = *(int *)(local_98 + 0xc) != 0;
          if (local_90 != '\0') {
            FUN_00d50b20();
          }
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar18) {
          FUN_01a58e40();
          FUN_00d23340();
          local_70 = local_40;
          param_1 = (longlong *)CONCAT71((int7)((ulonglong)param_1 >> 8),local_38[0]);
          pcVar15 = local_58;
          if (local_38[0] != '\0') {
            pcVar15 = local_38;
          }
          local_58[0] = local_38[0];
          *pcVar15 = '\0';
          if ((local_38[0] != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_70 == (longlong *)0x0) {
            local_b0 = 0;
            local_70 = (longlong *)0x0;
          }
          else {
            local_b0 = CONCAT71((int7)((ulonglong)local_70 >> 8),1);
            if (local_58[0] == '\0') {
              FUN_00d50b00();
            }
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = (longlong *)0x0;
          local_b0 = 0;
        }
        local_50 = 0;
        local_48 = (longlong *)0x0;
        local_74 = 0;
        local_170 = 0;
        local_168 = 0;
LAB_01a2eccb:
        plVar11 = (longlong *)*local_c8;
        cVar4 = (char)local_c8[1];
        plVar16 = (longlong *)*unaff_RSI;
        if (plVar16 == plVar11) {
          if (cVar4 != '\0') {
            if (((char)unaff_RSI[1] == '\0') && (plVar11 != (longlong *)0x0)) {
              cVar4 = '\x01';
              FUN_00d50b00();
              goto LAB_01a2ed30;
            }
            goto LAB_01a2ed35;
          }
        }
        else {
          lVar1 = unaff_RSI[1];
          if ((cVar4 != '\0') && (plVar11 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          *unaff_RSI = (longlong)plVar11;
          if (((char)lVar1 != '\0') && (plVar16 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a2ed30:
          *(char *)(unaff_RSI + 1) = cVar4;
LAB_01a2ed35:
          plVar11 = (longlong *)*unaff_RSI;
          plVar16 = plVar11;
        }
        if (plVar11 == (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x658))();
          plVar16 = local_40;
          plVar11 = (longlong *)*unaff_RSI;
          if (plVar11 == local_40) {
            if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
              if (local_38[0] == '\0') {
                FUN_00d50b00();
                goto LAB_01a2eded;
              }
              goto LAB_01a2ed9a;
            }
LAB_01a2eda4:
            if (*unaff_RSI != 0) goto LAB_01a2edad;
LAB_01a2edfc:
            uVar8 = 0;
          }
          else {
            lVar1 = unaff_RSI[1];
            if (local_38[0] != '\0') {
              *unaff_RSI = (longlong)local_40;
              if (((char)lVar1 != '\0') && (plVar11 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_01a2ed9a:
              *(undefined1 *)(unaff_RSI + 1) = 1;
              local_38[0] = '\0';
              goto LAB_01a2eda4;
            }
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            *unaff_RSI = (longlong)plVar16;
            if (((char)lVar1 != '\0') && (plVar11 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01a2eded:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            if (*unaff_RSI == 0) goto LAB_01a2edfc;
LAB_01a2edad:
            iVar5 = FUN_01d3a5a0();
            uVar8 = CONCAT71((int7)((ulonglong)plVar16 >> 8),iVar5 != 6);
          }
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar8 == '\0') goto LAB_01a2f3b7;
          plVar16 = (longlong *)*unaff_RSI;
        }
        iVar5 = FUN_01d3a5a0();
        pVar13 = (pthread_key_t)param_1;
        if (iVar5 == 5) {
          uVar6 = (**(code **)(*plVar2 + 0xd08))();
          param_1 = (longlong *)(ulonglong)uVar6;
          uVar8 = FUN_01d3b590();
          if ((uVar8 & 8) != 0) {
            param_1 = (longlong *)0x0;
          }
          if ((local_170 & 1) == 0) {
            FUN_01a58e40();
            plVar11 = local_40;
            if (local_38[0] == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_178 = 1;
            local_1c0 = local_a0;
            local_1b8 = 0;
            pVar13 = (pthread_key_t)&local_1c0;
            uVar9 = FUN_01a25ee0();
            if (plVar11 != (longlong *)0x0) {
              uVar9 = FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              uVar9 = FUN_00d50b20();
            }
            local_170 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
          }
          if ((local_70 != (longlong *)0x0) && ((local_168 & 1) != 0)) {
            pvVar10 = _pthread_getspecific(pVar13);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            plVar11 = (longlong *)FUN_00e8b990();
            (**(code **)(*plVar11 + 0x3b8))();
          }
          FUN_01d3abf0();
          uVar9 = FUN_01e466c0();
          local_158 = uVar9;
          local_d0 = (float)(**(code **)(*plVar2 + 0xc00))((int)((ulonglong)uVar9 >> 0x20));
          local_1b0 = plVar2;
          local_1a8 = 0;
          (**(code **)(*plVar2 + 0xa00))();
          plVar16 = local_40;
          if (local_38[0] == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38[0] = '\0';
          }
          FUN_01a58e40();
          local_c0 = local_98;
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          local_b8 = '\x01';
          local_1a0 = local_a0;
          local_198 = 0;
          FUN_01a26560(local_d0 - local_cc,&local_c0,&local_1a0,1);
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if (plVar16 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_70 != (longlong *)0x0) {
            pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            puVar12 = (undefined8 *)FUN_00e8b990();
            param_1 = (longlong *)*puVar12;
            local_168 = (*(code *)param_1[0x78])();
          }
          (**(code **)((longlong)&linkedit_data_command_000013e8.cmd + *plVar2))
                    ((undefined4)local_158);
          if ((local_74 & 1) != 0) {
            (**(code **)(*plVar2 + 0x930))((undefined4)local_158);
            (**(code **)(*plVar3 + 0x98))();
          }
        }
        iVar5 = FUN_01d3a5a0();
        if (iVar5 == 4 && local_64 == 1) {
          uVar6 = FUN_01d3b590();
          uVar14 = (uVar6 & 2) >> 1;
          param_1 = (longlong *)(ulonglong)uVar14;
          if (((local_74 & 1) == 0) == SUB41(uVar14,0)) {
            if ((uVar6 & 2) == 0) {
              (**(code **)(*plVar3 + 0x90))();
              local_120 = local_48;
              local_118 = '\0';
              (**(code **)(*plVar3 + 0x118))();
              local_74 = 0;
              if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
                FUN_00d50b20();
                local_74 = 0;
              }
            }
            else {
              local_140 = *local_160;
              local_138 = '\0';
              uVar9 = FUN_0039e8b0();
              plVar11 = local_40;
              uVar17 = (undefined7)((ulonglong)plVar16 >> 8);
              if (local_40 == local_48) {
                if (((char)local_50 == '\0') && (local_40 != (longlong *)0x0)) {
                  plVar11 = local_48;
                  if (local_38[0] != '\0') goto LAB_01a2f262;
                  uVar8 = CONCAT71(uVar17,1);
                  FUN_00d50b00();
                }
                else {
                  uVar8 = local_50 & 0xffffffff;
                }
LAB_01a2f2c3:
                if ((local_38[0] == '\0') || (local_40 == (longlong *)0x0)) {
                  local_50 = uVar8 & 0xffffffff;
                }
                else {
                  FUN_00d50b20();
                  local_50 = uVar8 & 0xffffffff;
                }
              }
              else {
                if (local_38[0] == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  uVar8 = CONCAT71(uVar17,1);
                  if (((char)local_50 == '\0') || (local_48 == (longlong *)0x0)) {
                    local_48 = plVar11;
                  }
                  else {
                    FUN_00d50b20();
                    local_48 = plVar11;
                  }
                  goto LAB_01a2f2c3;
                }
                if (((char)local_50 != '\0') && (local_48 != (longlong *)0x0)) {
                  uVar9 = FUN_00d50b20();
                }
LAB_01a2f262:
                local_38[0] = '\0';
                local_50 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                local_48 = plVar11;
              }
              if ((local_138 != '\0') && (local_140 != 0)) {
                FUN_00d50b20();
              }
              local_130 = local_48;
              local_128 = '\0';
              (**(code **)(*plVar3 + 0x110))();
              if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              (**(code **)(*plVar2 + 0x930))((undefined4)local_158);
              param_1 = (longlong *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
              local_74 = (uint)param_1;
              (**(code **)(*plVar3 + 0x88))();
            }
          }
        }
        if (*local_c8 != 0) {
          *local_c8 = 0;
          if ((char)local_c8[1] != '\0') {
            FUN_00d50b20();
          }
          *(undefined1 *)(local_c8 + 1) = 0;
        }
        goto LAB_01a2eccb;
      }
      uVar6 = (**(code **)(*plVar2 + 0xd08))();
      uVar7 = FUN_01d3b590();
      uVar8 = 3;
      if ((uVar7 & 8) == 0) {
        uVar8 = (ulonglong)uVar6;
      }
      FUN_01a58e40();
      plVar2 = local_40;
      if (local_38[0] == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_188 = 1;
      FUN_01a2b260(DAT_02390124,uVar8);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_50 = 0;
      local_48 = (longlong *)0x0;
      goto LAB_01a2f488;
    }
    local_f0 = *unaff_RSI;
    local_e8 = '\0';
    local_e0 = *local_160;
    local_d8 = '\0';
    uVar8 = FUN_01a58d30(uVar19,&local_e0);
    uVar8 = uVar8 & 0xffffffff;
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    local_48 = (longlong *)0x0;
    local_50 = 0;
    local_158 = CONCAT44(local_158._4_4_,(undefined4)local_158);
    if ((local_e8 != '\0') &&
       (local_158 = CONCAT44(local_158._4_4_,(undefined4)local_158), local_f0 != 0)) {
      FUN_00d50b20();
      local_50 = 0;
      local_48 = (longlong *)0x0;
    }
  }
  goto LAB_01a2f49b;
LAB_01a2f3b7:
  local_110 = *unaff_RSI;
  local_108 = '\0';
  FUN_0199eb40();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_74 & 1) != 0) {
    (**(code **)(*plVar3 + 0x90))();
    if (local_48 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
    }
    else {
      local_100 = local_48;
      local_f8 = '\0';
      (**(code **)(*plVar3 + 0x118))();
      if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01a262a0();
  (**(code **)(*plVar2 + 0xeb0))();
  if (((char)local_b0 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a2f488:
  uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01a2f49b:
  if ((char)local_a4 == '\0') {
    (**(code **)(*plVar3 + 0x10))();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (((char)local_50 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a2f4d2:
  return uVar8 & 0xffffffff;
}


