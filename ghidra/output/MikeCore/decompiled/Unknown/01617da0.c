// Function: FUN_01617da0
// Address: 01617da0
// Size: 12196 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01618697) */
/* WARNING: Removing unreachable block (ram,0x016186a3) */

void FUN_01617da0(float param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined7 uVar15;
  char *pcVar13;
  undefined8 uVar14;
  ulonglong in_RCX;
  ulonglong uVar16;
  ulonglong uVar17;
  byte bVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong *unaff_RDI;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  uint7 uVar27;
  bool bVar28;
  bool bVar29;
  undefined4 uVar30;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  ulonglong local_1c0;
  char local_1b8;
  ulonglong local_1b0;
  char local_1a8;
  ulonglong local_1a0;
  char local_198;
  ulonglong local_190;
  char local_188;
  ulonglong local_180;
  char local_178;
  ulonglong local_170;
  char local_168;
  ulonglong local_160;
  char local_158;
  ulonglong local_150;
  char local_148;
  ulonglong local_140;
  char local_138;
  ulonglong local_130;
  undefined8 local_128;
  longlong local_100;
  ulonglong local_e0;
  ulonglong local_c8;
  ulonglong local_b8;
  ulonglong local_b0;
  char local_a8 [8];
  ulonglong local_a0;
  ulonglong local_98;
  int local_8c;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  int local_4c;
  ulonglong local_48;
  char local_40 [8];
  uint local_38;
  byte local_31;
  
  local_130 = in_RCX;
  local_128 = param_3;
  iVar7 = FUN_00e7d780(param_1 / DAT_023908d8);
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_02572358;
  uVar30 = (*DAT_02572370)();
  local_48 = *unaff_RDI;
  local_40[0] = '\0';
  FUN_00d214d0(uVar30,*(undefined4 *)((longlong)puVar11 + 0xc));
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  iVar8 = (int)local_128 + -1;
  if (*(int *)((longlong)puVar11 + 0xc) != 0) {
    iVar10 = (int)local_130;
    local_58 = 0;
    local_60 = 0;
    local_100 = 0;
    bVar2 = false;
    local_e0 = 0;
    bVar3 = false;
    local_98 = 0;
    local_b8 = 0;
    local_68 = 0;
    local_38 = 0;
    local_70 = 0;
    local_4c = 0;
    local_b0 = 0;
    bVar1 = false;
LAB_01617f11:
    uVar24 = *(ulonglong *)puVar11[2];
    if (uVar24 != 0) {
      FUN_00d50b00();
    }
    FUN_00d23620();
    uVar20 = 1;
LAB_01617f36:
    uVar22 = uVar24;
    uVar20 = uVar20 & 0xffffffff;
    uVar24 = local_68;
    uVar23 = local_38;
    do {
      local_31 = (byte)uVar20;
      local_8c = CONCAT31(local_8c._1_3_,local_31 == 0 && uVar22 != 0);
      local_80 = CONCAT44(local_80._4_4_,local_4c);
      lVar21 = local_100;
      local_68 = uVar24;
      local_38 = uVar23;
      do {
        do {
          local_a0 = local_70;
          FUN_015f8890();
          uVar24 = local_48;
          if (local_48 == local_b0) {
            uVar24 = local_b0;
            bVar5 = bVar1;
            if ((bVar1) || (local_48 == 0)) goto joined_r0x0161808e;
            bVar5 = true;
            if (local_40[0] == '\0') {
              FUN_00d50b00();
              goto LAB_01618073;
            }
          }
          else if (local_40[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            bVar5 = true;
            if ((bVar1) && (local_b0 != 0)) {
              FUN_00d50b20();
              local_b0 = uVar24;
LAB_01618073:
              uVar24 = local_b0;
              bVar5 = true;
            }
joined_r0x0161808e:
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar5 = true;
            if ((bVar1) && (local_b0 != 0)) {
              FUN_00d50b20();
            }
          }
          bVar1 = bVar5;
          local_100 = **(longlong **)(uVar24 + 0x10);
          if (lVar21 == local_100) {
            local_100 = lVar21;
            bVar5 = bVar2;
            if ((!bVar2) && (lVar21 != 0)) {
              FUN_00d50b00();
              bVar5 = true;
            }
          }
          else {
            if (local_100 != 0) {
              FUN_00d50b00();
            }
            bVar5 = true;
            if ((bVar2) && (lVar21 != 0)) {
              FUN_00d50b20();
            }
          }
          bVar2 = bVar5;
          local_78 = CONCAT44(local_78._4_4_,*(int *)(local_100 + 0xc));
          local_b0 = uVar24;
          if (*(int *)(local_100 + 0xc) < 1) {
LAB_016188f6:
            uVar24 = (ulonglong)local_31;
            goto LAB_01618900;
          }
          iVar25 = *(int *)(local_100 + 0x10) - iVar7;
          iVar26 = *(int *)(local_100 + 0x10) + iVar7;
          if (iVar25 < 0) {
            iVar25 = 0;
          }
          if ((int)local_128 <= iVar26) {
            iVar26 = iVar8;
          }
          if (local_98 != 0) {
            if ((char)local_b8 != '\0') {
              FUN_00d50b20();
            }
            local_b8 = 0;
          }
          if (iVar26 < iVar25) {
LAB_016188ed:
            local_98 = 0;
            goto LAB_016188f6;
          }
          local_78 = CONCAT44(local_78._4_4_,(int)local_78 + -1);
          local_88 = CONCAT44(local_88._4_4_,10000);
          local_98 = 0;
          do {
            uVar24 = local_60 & 0xffffffff;
            uVar12 = FUN_015fd900(iVar25,local_78 & 0xffffffff);
            uVar20 = local_48;
            cVar6 = (char)uVar24;
            if (local_48 == local_58) {
              local_60 = uVar24;
              if ((cVar6 == '\0') && (local_48 != 0)) {
                uVar24 = local_58;
                if (local_40[0] != '\0') goto LAB_0161826f;
                local_60 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                FUN_00d50b00();
              }
joined_r0x016183ca:
              if (local_58 == 0) goto LAB_01618285;
LAB_016182e9:
              cVar6 = FUN_015f86e0();
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              uVar16 = local_58;
              uVar24 = local_98;
              if (cVar6 != '\0') {
                iVar9 = *(int *)(local_58 + 0x10) - *(int *)(local_100 + 0x10);
                iVar19 = -iVar9;
                if (0 < iVar9) {
                  iVar19 = iVar9;
                }
                if (iVar19 < (int)local_88) {
                  if (local_98 == local_58) {
                    if (((char)local_60 == '\0') || ((char)local_b8 != '\0')) goto LAB_016181f4;
                    local_b8 = 1;
                    FUN_00d50b00();
                    local_88 = CONCAT44(local_88._4_4_,iVar19);
                    uVar20 = uVar24;
                  }
                  else {
                    if ((char)local_60 != '\0') {
                      FUN_00d50b00();
                      uVar20 = uVar16;
                    }
                    uVar24 = local_58;
                    if (((char)local_b8 == '\0') || (local_98 == 0)) {
                      local_b8 = local_60;
                      local_98 = local_58;
LAB_016181f4:
                      local_88 = CONCAT44(local_88._4_4_,iVar19);
                    }
                    else {
                      local_98 = local_58;
                      FUN_00d50b20();
                      local_b8 = local_60;
                      local_88 = CONCAT44(local_88._4_4_,iVar19);
                      uVar20 = uVar24;
                    }
                  }
                }
              }
            }
            else {
              if (local_40[0] == '\0') {
                if (local_48 != 0) {
                  uVar12 = FUN_00d50b00();
                }
                local_60 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                if ((cVar6 != '\0') && (local_58 != 0)) {
                  FUN_00d50b20();
                  local_58 = uVar20;
                  goto joined_r0x016183ca;
                }
              }
              else {
                uVar24 = uVar20;
                if ((cVar6 != '\0') && (local_58 != 0)) {
                  uVar12 = FUN_00d50b20();
                }
LAB_0161826f:
                local_40[0] = '\0';
                local_60 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                uVar20 = uVar24;
              }
              local_58 = uVar20;
              if (uVar20 != 0) goto LAB_016182e9;
LAB_01618285:
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            iVar25 = iVar25 + 1;
          } while (iVar26 + 1 != iVar25);
          if (local_98 == 0) goto LAB_016188ed;
          if (((*(longlong *)(local_100 + 0x78) != 0) &&
              (uVar24 = *(ulonglong *)(*(longlong *)(local_100 + 0x78) + 0x10), uVar24 != 0)) &&
             (uVar24 == local_98)) {
            if ((char)local_b8 != '\0') {
              FUN_00d50b20();
            }
            local_b8 = 0;
            goto LAB_016188ed;
          }
          uVar30 = FUN_015f88c0();
          uVar24 = local_a0;
          local_70 = local_48;
          uVar15 = (undefined7)(local_48 >> 8);
          if (local_a0 == local_48) {
            if (((char)local_80 == '\0') && (local_a0 != 0)) {
              local_4c = (int)CONCAT71(uVar15,1);
              if (local_40[0] != '\0') {
                local_70 = local_a0;
                goto LAB_01618574;
              }
              local_4c = (int)CONCAT71(uVar15,1);
              local_80 = local_80 & 0xffffffff00000000;
              uVar30 = FUN_00d50b00();
              local_70 = uVar24;
            }
            else {
              local_4c = (int)local_80;
              local_70 = uVar24;
            }
joined_r0x0161852e:
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              uVar30 = FUN_00d50b20();
            }
          }
          else {
            if (local_40[0] == '\0') {
              uVar12 = 0;
              if (local_48 != 0) {
                uVar12 = FUN_00d50b00();
                uVar30 = extraout_XMM0_Da;
              }
              local_4c = (int)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
              if (((char)local_80 != '\0') && (local_a0 != 0)) {
                local_a0 = local_70;
                uVar30 = FUN_00d50b20();
              }
              goto joined_r0x0161852e;
            }
            local_4c = (int)CONCAT71(uVar15,1);
            if (((char)local_80 != '\0') && (local_a0 != 0)) {
              local_a0 = local_48;
              uVar30 = FUN_00d50b20();
            }
          }
LAB_01618574:
          local_1b8 = '\0';
          local_1c0 = uVar22;
          FUN_015f9150(uVar30,&local_1c0);
          uVar16 = local_48;
          uVar24 = local_68;
          uVar15 = (undefined7)(uVar20 >> 8);
          if (local_68 == local_48) {
            if (((char)local_38 != '\0') || (local_68 == 0)) {
              uVar20 = (ulonglong)local_38;
              goto joined_r0x01618638;
            }
            if (local_40[0] == '\0') {
              local_38 = 0;
              FUN_00d50b00();
              goto LAB_01618660;
            }
LAB_016185f7:
            local_40[0] = '\0';
            uVar20 = CONCAT71(uVar15,1);
          }
          else {
            uVar24 = uVar16;
            if (local_40[0] != '\0') {
              if (((char)local_38 != '\0') && (local_68 != 0)) {
                local_68 = local_48;
                FUN_00d50b20();
              }
              goto LAB_016185f7;
            }
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            if (((char)local_38 != '\0') && (local_68 != 0)) {
              local_68 = uVar16;
              FUN_00d50b20();
            }
LAB_01618660:
            uVar20 = CONCAT71(uVar15,1);
joined_r0x01618638:
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_1b8 != '\0') && (local_1c0 != 0)) {
            FUN_00d50b20();
          }
          local_48 = local_70;
          local_40[0] = '\0';
          FUN_00d23f50();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          local_40[0] = '\0';
          local_48 = uVar22;
          FUN_00d23f50();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          local_40[0] = '\0';
          local_48 = uVar24;
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          local_48 = local_70;
          local_40[0] = '\0';
          iVar25 = FUN_00d237a0();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (iVar25 != -1) {
            FUN_00d23620();
          }
          local_40[0] = '\0';
          local_48 = uVar22;
          iVar25 = FUN_00d237a0();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (iVar25 != -1) {
            FUN_00d23620();
          }
          uVar23 = (uint)uVar20;
          if (uVar24 != uVar22) {
            if (((char)uVar20 != '\0') && (uVar24 != 0)) {
              FUN_00d50b00();
            }
            local_68 = uVar24;
            local_38 = uVar23;
            if ((local_31 != 0) && (uVar22 != 0)) {
              FUN_00d50b20();
              local_68 = uVar24;
              local_38 = uVar23;
            }
            goto LAB_01617f36;
          }
          local_80 = CONCAT44(local_80._4_4_,local_4c);
          lVar21 = local_100;
          local_68 = uVar24;
          local_38 = uVar23;
        } while ((char)uVar20 == '\0');
        local_80 = CONCAT44(local_80._4_4_,local_4c);
        local_a0 = local_70;
      } while ((char)local_8c != '\x01');
      uVar20 = 1;
      FUN_00d50b00();
    } while( true );
  }
  bVar1 = false;
  local_b0 = 0;
  local_4c = 0;
  local_70 = 0;
  local_38 = 0;
  local_68 = 0;
  local_b8 = 0;
  local_98 = 0;
  bVar3 = false;
  local_e0 = 0;
  bVar2 = false;
  local_100 = 0;
  local_60 = 0;
  local_58 = 0;
LAB_0161942e:
  if (0 < param_2) {
    local_88 = 0;
    local_78 = 0;
    uVar30 = FUN_00d216c0();
    local_48 = *unaff_RDI;
    local_40[0] = '\0';
    FUN_00d214d0(uVar30,*(undefined4 *)((longlong)puVar11 + 0xc));
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)((longlong)puVar11 + 0xc) != 0) {
      local_130 = (ulonglong)((int)local_130 - 2);
      local_78 = 0;
      local_88 = 0;
LAB_016194e1:
      uVar24 = *(ulonglong *)puVar11[2];
      if (uVar24 != 0) {
        FUN_00d50b00();
      }
      FUN_00d23620();
      uVar20 = 1;
      uVar22 = local_68;
      uVar23 = local_38;
      uVar16 = uVar24;
LAB_0161951d:
      local_a0 = uVar16;
      uVar17 = uVar24;
      bVar28 = uVar17 != 0;
      local_31 = (byte)uVar20;
      bVar29 = local_31 == '\0';
      local_c8 = local_78;
      local_78 = local_58;
      local_68 = uVar22;
      local_38 = uVar23;
      bVar5 = bVar1;
LAB_0161957f:
      local_8c = local_4c;
      local_80 = local_70;
      FUN_015f8890();
      uVar24 = local_48;
      if (local_48 == local_b0) {
        uVar24 = local_b0;
        bVar1 = bVar5;
        if ((bVar5) || (local_48 == 0)) goto joined_r0x0161966e;
        bVar1 = true;
        if (local_40[0] == '\0') {
          FUN_00d50b00();
          goto LAB_01619653;
        }
      }
      else if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        bVar1 = true;
        if ((bVar5) && (local_b0 != 0)) {
          FUN_00d50b20();
          local_b0 = uVar24;
LAB_01619653:
          uVar24 = local_b0;
          bVar1 = true;
        }
joined_r0x0161966e:
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar1 = true;
        if ((bVar5) && (local_b0 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar21 = **(longlong **)(uVar24 + 0x10);
      if (local_100 == lVar21) {
        if ((!bVar2) && (local_100 != 0)) {
          FUN_00d50b00();
          lVar21 = local_100;
          goto LAB_01619730;
        }
        iVar10 = *(int *)(local_100 + 0xc);
      }
      else {
        if (lVar21 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (local_100 != 0)) {
          FUN_00d50b20();
        }
LAB_01619730:
        bVar2 = true;
        iVar10 = *(int *)(lVar21 + 0xc);
        local_100 = lVar21;
      }
      local_b0 = uVar24;
      if (1 < iVar10) {
        uVar23 = *(int *)(local_100 + 0x10) - iVar7;
        iVar25 = *(int *)(local_100 + 0x10) + iVar7;
        if ((int)uVar23 < 0) {
          uVar23 = 0;
        }
        uVar24 = (ulonglong)uVar23;
        if ((int)local_128 <= iVar25) {
          iVar25 = iVar8;
        }
        if (local_98 != 0) {
          if ((char)local_b8 != '\0') {
            FUN_00d50b20();
          }
          local_b8 = 0;
        }
        if ((int)uVar23 <= iVar25) {
          local_4c = iVar10 + -1;
          local_70 = (ulonglong)(iVar10 - 2);
          local_58 = CONCAT44(local_58._4_4_,iVar25 + 1);
          iVar10 = 10000;
          local_98 = 0;
          do {
            uVar22 = local_60 & 0xffffffff;
            uVar12 = FUN_015fd900(uVar23,local_70);
            uVar20 = local_48;
            cVar6 = (char)uVar22;
            if (local_48 == local_78) {
              local_60 = uVar22;
              if ((cVar6 == '\0') && (local_48 != 0)) {
                uVar20 = local_78;
                if (local_40[0] != '\0') goto LAB_01619870;
                local_60 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                FUN_00d50b00();
              }
joined_r0x016199d1:
              if (local_78 == 0) goto LAB_01619886;
LAB_016198e9:
              cVar6 = FUN_015f86e0();
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if (cVar6 != '\0') {
                iVar26 = *(int *)(local_78 + 0x10) - *(int *)(local_100 + 0x10);
                iVar25 = -iVar26;
                if (0 < iVar26) {
                  iVar25 = iVar26;
                }
                if (iVar25 < iVar10) {
                  iVar10 = iVar25;
                  if (local_98 == local_78) {
                    if (((char)local_60 != '\0') && ((char)local_b8 == '\0')) {
                      local_b8 = 1;
                      FUN_00d50b00();
                    }
                  }
                  else {
                    if ((char)local_60 != '\0') {
                      FUN_00d50b00();
                    }
                    if (((char)local_b8 == '\0') || (local_98 == 0)) {
                      local_b8 = local_60;
                      local_98 = local_78;
                    }
                    else {
                      local_98 = local_78;
                      FUN_00d50b20();
                      local_b8 = local_60;
                    }
                  }
                }
              }
            }
            else {
              if (local_40[0] == '\0') {
                if (local_48 != 0) {
                  uVar12 = FUN_00d50b00();
                }
                local_60 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                if ((cVar6 != '\0') && (local_78 != 0)) {
                  FUN_00d50b20();
                  local_78 = uVar20;
                  goto joined_r0x016199d1;
                }
              }
              else {
                if ((cVar6 != '\0') && (local_78 != 0)) {
                  uVar12 = FUN_00d50b20();
                }
LAB_01619870:
                local_40[0] = '\0';
                local_60 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
              }
              local_78 = uVar20;
              if (uVar20 != 0) goto LAB_016198e9;
LAB_01619886:
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            uVar17 = local_a0;
            uVar23 = uVar23 + 1;
          } while ((uint)local_58 != uVar23);
          if (local_98 != 0) {
            if (local_c8 == 0) {
              uVar20 = local_88 & 0xffffffff;
            }
            else {
              if ((char)local_88 != '\0') {
                FUN_00d50b20();
              }
              uVar20 = 0;
            }
            do {
              uVar12 = FUN_015fd870(uVar24);
              uVar22 = local_48;
              if (local_48 == local_78) {
                local_88 = local_60;
                if (((char)local_60 == '\0') && (local_48 != 0)) {
                  uVar22 = local_78;
                  if (local_40[0] != '\0') goto LAB_01619ae1;
                  local_88 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                  FUN_00d50b00();
                }
joined_r0x01619ba5:
                if (local_78 == 0) goto LAB_01619af7;
LAB_01619b59:
                cVar6 = FUN_015f86c0();
                if ((local_40[0] != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                uVar22 = local_78;
                if (cVar6 == '\0') goto LAB_01619bb0;
              }
              else {
                if (local_40[0] == '\0') {
                  if (local_48 != 0) {
                    uVar12 = FUN_00d50b00();
                  }
                  local_88 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                  if (((char)local_60 != '\0') && (local_78 != 0)) {
                    FUN_00d50b20();
                    local_78 = uVar22;
                    goto joined_r0x01619ba5;
                  }
                }
                else {
                  if (((char)local_60 != '\0') && (local_78 != 0)) {
                    uVar12 = FUN_00d50b20();
                  }
LAB_01619ae1:
                  local_40[0] = '\0';
                  local_88 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                }
                local_78 = uVar22;
                if (uVar22 != 0) goto LAB_01619b59;
LAB_01619af7:
                if ((local_40[0] != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              uVar23 = (int)uVar24 + 1;
              uVar24 = (ulonglong)uVar23;
              local_60 = local_88 & 0xffffffff;
              if ((uint)local_58 == uVar23) {
                local_58 = 0;
                local_60 = local_88 & 0xffffffff;
                uVar24 = local_78;
                goto LAB_0161a0d0;
              }
            } while( true );
          }
        }
        local_98 = 0;
      }
      uVar20 = local_88 & 0xffffffff;
      uVar24 = local_78;
      local_58 = local_c8;
LAB_0161a0d0:
      uVar22 = uVar17;
      local_a0 = CONCAT44(local_a0._4_4_,(int)uVar20);
      uVar17 = local_68;
      bVar18 = local_31;
      uVar23 = local_38;
LAB_0161a0ee:
      local_4c = local_8c;
      local_70 = local_80;
      local_78 = local_58;
      local_68 = uVar17;
      local_58 = uVar24;
      local_38 = uVar23;
      bVar5 = bVar1;
      bVar28 = bVar3;
LAB_0161a145:
      local_8c = local_4c;
      local_80 = local_70;
      FUN_015f8890();
      uVar24 = local_48;
      uVar20 = local_a0 & 0xffffffff;
      if (local_48 == local_b0) {
        uVar24 = local_b0;
        bVar1 = bVar5;
        if ((bVar5) || (local_48 == 0)) goto joined_r0x0161a22e;
        bVar1 = true;
        if (local_40[0] == '\0') {
          FUN_00d50b00();
          goto LAB_0161a213;
        }
      }
      else if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        bVar1 = true;
        if ((bVar5) && (local_b0 != 0)) {
          FUN_00d50b20();
          local_b0 = uVar24;
LAB_0161a213:
          uVar24 = local_b0;
          bVar1 = true;
        }
joined_r0x0161a22e:
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar1 = true;
        if ((bVar5) && (local_b0 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d23340();
      uVar16 = local_48;
      local_a8[0] = local_40[0];
      pcVar13 = local_40;
      if (local_40[0] == '\0') {
        pcVar13 = local_a8;
      }
      *pcVar13 = '\0';
      if ((local_40[0] != '\0') && (uVar16 != 0)) {
        FUN_00d50b20();
      }
      local_b0 = uVar24;
      if (uVar16 == local_e0) {
        if ((bVar28) || (uVar16 == 0)) {
          bVar3 = bVar28;
          if ((local_a8[0] != '\0') && (uVar16 != 0)) {
            FUN_00d50b20();
            goto LAB_0161a3c0;
          }
        }
        else {
          bVar3 = true;
          if (local_a8[0] == '\0') {
            FUN_00d50b00();
          }
        }
        iVar10 = *(int *)(local_e0 + 0xc);
        if ((int)local_130 <= iVar10) goto LAB_0161ad7d;
LAB_0161a3fe:
        uVar23 = *(int *)(local_e0 + 0x10) - iVar7;
        iVar25 = *(int *)(local_e0 + 0x10) + iVar7;
        if ((int)uVar23 < 0) {
          uVar23 = 0;
        }
        uVar24 = (ulonglong)uVar23;
        if ((int)local_128 <= iVar25) {
          iVar25 = iVar8;
        }
        if (local_98 != 0) {
          if ((char)local_b8 != '\0') {
            FUN_00d50b20();
          }
          local_b8 = 0;
        }
        if ((int)uVar23 <= iVar25) {
          local_8c = iVar10 + 1;
          local_88 = (ulonglong)(iVar10 + 2);
          local_80 = CONCAT44(local_80._4_4_,10000);
          local_98 = 0;
          do {
            uVar16 = local_60 & 0xffffffff;
            uVar12 = FUN_015fd900(uVar23,local_88);
            uVar20 = local_48;
            cVar6 = (char)uVar16;
            if (local_48 == local_58) {
              local_60 = uVar16;
              if ((cVar6 == '\0') && (local_48 != 0)) {
                uVar20 = local_58;
                if (local_40[0] != '\0') goto LAB_0161a530;
                local_60 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                FUN_00d50b00();
              }
joined_r0x0161a68b:
              if (local_58 == 0) goto LAB_0161a546;
LAB_0161a5a9:
              cVar6 = FUN_015f86e0();
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if (cVar6 != '\0') {
                iVar26 = *(int *)(local_58 + 0x10) - *(int *)(local_100 + 0x10);
                iVar10 = -iVar26;
                if (0 < iVar26) {
                  iVar10 = iVar26;
                }
                if (iVar10 < (int)local_80) {
                  if (local_98 == local_58) {
                    if (((char)local_60 == '\0') || ((char)local_b8 != '\0')) goto LAB_0161a4a2;
                    local_b8 = 1;
                    FUN_00d50b00();
                    local_80 = CONCAT44(local_80._4_4_,iVar10);
                  }
                  else {
                    if ((char)local_60 != '\0') {
                      FUN_00d50b00();
                    }
                    if (((char)local_b8 == '\0') || (local_98 == 0)) {
                      local_b8 = local_60;
                      local_98 = local_58;
LAB_0161a4a2:
                      local_80 = CONCAT44(local_80._4_4_,iVar10);
                    }
                    else {
                      local_98 = local_58;
                      FUN_00d50b20();
                      local_b8 = local_60;
                      local_80 = CONCAT44(local_80._4_4_,iVar10);
                    }
                  }
                }
              }
            }
            else {
              if (local_40[0] == '\0') {
                if (local_48 != 0) {
                  uVar12 = FUN_00d50b00();
                }
                local_60 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                if ((cVar6 != '\0') && (local_58 != 0)) {
                  FUN_00d50b20();
                  local_58 = uVar20;
                  goto joined_r0x0161a68b;
                }
              }
              else {
                if ((cVar6 != '\0') && (local_58 != 0)) {
                  uVar12 = FUN_00d50b20();
                }
LAB_0161a530:
                local_40[0] = '\0';
                local_60 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
              }
              local_58 = uVar20;
              if (uVar20 != 0) goto LAB_0161a5a9;
LAB_0161a546:
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            iVar10 = local_8c;
            uVar23 = uVar23 + 1;
            uVar20 = local_a0 & 0xffffffff;
          } while (iVar25 + 1U != uVar23);
          if (local_98 != 0) {
            uVar16 = uVar20;
            if (local_78 != 0) {
              if ((char)local_a0 != '\0') {
                FUN_00d50b20();
              }
              local_88 = 0;
              uVar16 = local_88;
            }
            do {
              local_88 = uVar16;
              uVar16 = uVar24;
              FUN_015fd870(uVar24,iVar10);
              uVar17 = local_48;
              uVar15 = (undefined7)(uVar20 >> 8);
              if (local_48 == local_58) {
                if (((char)local_60 == '\0') && (local_48 != 0)) {
                  uVar17 = local_58;
                  if (local_40[0] != '\0') goto LAB_0161a7b1;
                  uVar20 = CONCAT71(uVar15,1);
                  FUN_00d50b00();
                }
                else {
                  uVar20 = local_60 & 0xffffffff;
                }
joined_r0x0161a871:
                if (local_58 == 0) goto LAB_0161a7c4;
LAB_0161a829:
                cVar6 = FUN_015f86c0();
                if ((local_40[0] != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                uVar17 = local_58;
                if (cVar6 == '\0') goto LAB_0161a880;
              }
              else {
                if (local_40[0] == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                  uVar20 = CONCAT71(uVar15,1);
                  if (((char)local_60 != '\0') && (local_58 != 0)) {
                    FUN_00d50b20();
                    local_58 = uVar17;
                    goto joined_r0x0161a871;
                  }
                }
                else {
                  if (((char)local_60 != '\0') && (local_58 != 0)) {
                    FUN_00d50b20();
                  }
LAB_0161a7b1:
                  local_40[0] = '\0';
                }
                uVar20 = CONCAT71(uVar15,1);
                local_58 = uVar17;
                if (uVar17 != 0) goto LAB_0161a829;
LAB_0161a7c4:
                if ((local_40[0] != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              uVar23 = (int)uVar24 + 1;
              uVar24 = (ulonglong)uVar23;
              uVar16 = local_88;
              local_60 = uVar20;
              if (iVar25 + 1U == uVar23) {
                local_78 = 0;
                uVar20 = local_88;
                goto LAB_0161ad7d;
              }
            } while( true );
          }
        }
        local_98 = 0;
      }
      else if (local_a8[0] == '\0') {
        if (uVar16 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        if (bVar28) {
          if (local_e0 == 0) goto LAB_0161a380;
          FUN_00d50b20();
          local_e0 = uVar16;
          goto LAB_0161a3c0;
        }
        iVar10 = *(int *)(uVar16 + 0xc);
        local_e0 = uVar16;
        if (iVar10 < (int)local_130) goto LAB_0161a3fe;
      }
      else if ((bVar28) && (local_e0 != 0)) {
        FUN_00d50b20();
        local_e0 = uVar16;
        bVar3 = true;
LAB_0161a3c0:
        iVar10 = *(int *)(local_e0 + 0xc);
        if (iVar10 < (int)local_130) goto LAB_0161a3fe;
      }
      else {
LAB_0161a380:
        bVar3 = true;
        iVar10 = *(int *)(uVar16 + 0xc);
        local_e0 = uVar16;
        if (iVar10 < (int)local_130) goto LAB_0161a3fe;
      }
LAB_0161ad7d:
      local_88 = uVar20;
      if ((bVar18 != '\0') && (uVar22 != 0)) {
        FUN_00d50b20();
      }
      if (*(int *)((longlong)puVar11 + 0xc) == 0) goto LAB_0161adfc;
      goto LAB_016194e1;
    }
  }
  local_88 = 0;
  local_78 = 0;
LAB_0161adfc:
  FUN_00d216c0();
  FUN_00d50b20();
  if ((bVar1) && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_4c != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_38 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_88 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_b8 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
LAB_01618900:
  uVar16 = uVar22;
  uVar20 = (ulonglong)local_38;
  uVar22 = local_68;
  do {
    local_31 = (byte)uVar24;
    local_8c = CONCAT31(local_8c._1_3_,local_31 == '\0' && uVar16 != 0);
    local_4c = (int)local_80;
    local_70 = local_a0;
    local_68 = uVar22;
    local_38 = (uint)uVar20;
    do {
      do {
        local_a0 = local_70;
        FUN_015f8890();
        uVar24 = local_48;
        if (local_48 == local_b0) {
          uVar24 = local_b0;
          bVar5 = bVar1;
          if ((bVar1) || (local_48 == 0)) goto joined_r0x01618a4e;
          bVar5 = true;
          if (local_40[0] == '\0') {
            FUN_00d50b00();
            goto LAB_01618a33;
          }
        }
        else if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          bVar5 = true;
          if ((bVar1) && (local_b0 != 0)) {
            FUN_00d50b20();
            local_b0 = uVar24;
LAB_01618a33:
            uVar24 = local_b0;
            bVar5 = true;
          }
joined_r0x01618a4e:
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar5 = true;
          if ((bVar1) && (local_b0 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar1 = bVar5;
        FUN_00d23340();
        uVar20 = local_48;
        local_a8[0] = local_40[0];
        pcVar13 = local_40;
        if (local_40[0] == '\0') {
          pcVar13 = local_a8;
        }
        *pcVar13 = '\0';
        if ((local_40[0] != '\0') && (uVar20 != 0)) {
          FUN_00d50b20();
        }
        if (uVar20 == local_e0) {
          if ((bVar3) || (uVar20 == 0)) {
            if ((local_a8[0] != '\0') && (uVar20 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar3 = true;
            if (local_a8[0] == '\0') {
              FUN_00d50b00();
            }
          }
        }
        else if (local_a8[0] == '\0') {
          if (uVar20 != 0) {
            FUN_00d50b00();
          }
          if ((!bVar3) || (local_e0 == 0)) goto LAB_01618ba0;
          FUN_00d50b20();
          local_e0 = uVar20;
          bVar3 = true;
        }
        else if ((bVar3) && (local_e0 != 0)) {
          FUN_00d50b20();
          local_e0 = uVar20;
          bVar3 = true;
        }
        else {
LAB_01618ba0:
          local_e0 = uVar20;
          bVar3 = true;
        }
        local_78 = CONCAT44(local_78._4_4_,*(int *)(local_e0 + 0xc));
        local_b0 = uVar24;
        if (iVar10 + -1 <= *(int *)(local_e0 + 0xc)) {
LAB_01619397:
          if ((local_31 != '\0') && (uVar16 != 0)) {
            FUN_00d50b20();
          }
          if (*(int *)((longlong)puVar11 + 0xc) == 0) goto LAB_0161942e;
          goto LAB_01617f11;
        }
        iVar25 = *(int *)(local_e0 + 0x10) - iVar7;
        iVar26 = *(int *)(local_e0 + 0x10) + iVar7;
        if (iVar25 < 0) {
          iVar25 = 0;
        }
        if ((int)local_128 <= iVar26) {
          iVar26 = iVar8;
        }
        if (local_98 != 0) {
          if ((char)local_b8 != '\0') {
            FUN_00d50b20();
          }
          local_b8 = 0;
        }
        if (iVar26 < iVar25) {
LAB_0161938e:
          local_98 = 0;
          goto LAB_01619397;
        }
        local_78 = CONCAT44(local_78._4_4_,(int)local_78 + 1);
        local_88 = CONCAT44(local_88._4_4_,10000);
        local_98 = 0;
        do {
          uVar20 = local_60 & 0xffffffff;
          uVar12 = FUN_015fd900(iVar25,local_78 & 0xffffffff);
          uVar24 = local_48;
          cVar6 = (char)uVar20;
          if (local_48 == local_58) {
            local_60 = uVar20;
            if ((cVar6 == '\0') && (local_48 != 0)) {
              uVar24 = local_58;
              if (local_40[0] != '\0') goto LAB_01618d10;
              local_60 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
              FUN_00d50b00();
            }
joined_r0x01618e6b:
            if (local_58 == 0) goto LAB_01618d26;
LAB_01618d89:
            cVar6 = FUN_015f86e0();
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (cVar6 != '\0') {
              iVar9 = *(int *)(local_58 + 0x10) - *(int *)(local_e0 + 0x10);
              iVar19 = -iVar9;
              if (0 < iVar9) {
                iVar19 = iVar9;
              }
              if (iVar19 < (int)local_88) {
                if (local_98 == local_58) {
                  if (((char)local_60 == '\0') || ((char)local_b8 != '\0')) goto LAB_01618c88;
                  local_b8 = 1;
                  FUN_00d50b00();
                  local_88 = CONCAT44(local_88._4_4_,iVar19);
                }
                else {
                  if ((char)local_60 != '\0') {
                    FUN_00d50b00();
                  }
                  if (((char)local_b8 == '\0') || (local_98 == 0)) {
                    local_b8 = local_60;
                    local_98 = local_58;
LAB_01618c88:
                    local_88 = CONCAT44(local_88._4_4_,iVar19);
                  }
                  else {
                    local_98 = local_58;
                    FUN_00d50b20();
                    local_b8 = local_60;
                    local_88 = CONCAT44(local_88._4_4_,iVar19);
                  }
                }
              }
            }
          }
          else {
            if (local_40[0] == '\0') {
              if (local_48 != 0) {
                uVar12 = FUN_00d50b00();
              }
              local_60 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
              if ((cVar6 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
                local_58 = uVar24;
                goto joined_r0x01618e6b;
              }
            }
            else {
              if ((cVar6 != '\0') && (local_58 != 0)) {
                uVar12 = FUN_00d50b20();
              }
LAB_01618d10:
              local_40[0] = '\0';
              local_60 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
            }
            local_58 = uVar24;
            if (uVar24 != 0) goto LAB_01618d89;
LAB_01618d26:
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          iVar25 = iVar25 + 1;
        } while (iVar26 + 1 != iVar25);
        if (local_98 == 0) goto LAB_0161938e;
        if (((*(longlong *)(local_e0 + 0x78) != 0) &&
            (uVar24 = *(ulonglong *)(*(longlong *)(local_e0 + 0x78) + 0x10), uVar24 != 0)) &&
           (uVar24 == local_98)) {
          if ((char)local_b8 != '\0') {
            FUN_00d50b20();
          }
          local_b8 = 0;
          goto LAB_0161938e;
        }
        uVar30 = FUN_015f88c0();
        uVar24 = local_70;
        local_a0 = local_48;
        uVar15 = (undefined7)(local_48 >> 8);
        if (local_70 == local_48) {
          if (((char)local_4c == '\0') && (local_70 != 0)) {
            local_80 = CONCAT44(local_80._4_4_,(int)CONCAT71(uVar15,1));
            if (local_40[0] != '\0') {
              local_a0 = local_70;
              goto LAB_01619004;
            }
            local_80 = CONCAT44(local_80._4_4_,(int)CONCAT71(uVar15,1));
            local_4c = 0;
            uVar30 = FUN_00d50b00();
            local_a0 = uVar24;
          }
          else {
            local_80 = CONCAT44(local_80._4_4_,local_4c);
            local_a0 = uVar24;
          }
joined_r0x01618fc1:
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            uVar30 = FUN_00d50b20();
          }
        }
        else {
          if (local_40[0] == '\0') {
            uVar12 = 0;
            if (local_48 != 0) {
              uVar12 = FUN_00d50b00();
              uVar30 = extraout_XMM0_Da_00;
            }
            local_80 = CONCAT44(local_80._4_4_,(int)CONCAT71((int7)((ulonglong)uVar12 >> 8),1));
            if (((char)local_4c != '\0') && (local_70 != 0)) {
              local_70 = local_a0;
              uVar30 = FUN_00d50b20();
            }
            goto joined_r0x01618fc1;
          }
          local_80 = CONCAT44(local_80._4_4_,(int)CONCAT71(uVar15,1));
          if (((char)local_4c != '\0') && (local_70 != 0)) {
            local_70 = local_48;
            uVar30 = FUN_00d50b20();
          }
        }
LAB_01619004:
        local_1a8 = '\0';
        local_1a0 = local_a0;
        local_198 = '\0';
        local_1b0 = uVar16;
        FUN_015f9150(uVar30,&local_1a0);
        uVar24 = local_48;
        uVar22 = local_68;
        uVar27 = (uint7)(uint3)((uint)(iVar26 + 1) >> 8);
        if (local_68 == local_48) {
          if (((char)local_38 != '\0') || (local_68 == 0)) {
            uVar20 = (ulonglong)local_38;
            goto joined_r0x016190d8;
          }
          if (local_40[0] == '\0') {
            local_38 = 0;
            FUN_00d50b00();
            goto LAB_01619100;
          }
LAB_01619097:
          local_40[0] = '\0';
          uVar20 = CONCAT71(uVar27,1);
        }
        else {
          uVar22 = uVar24;
          if (local_40[0] != '\0') {
            if (((char)local_38 != '\0') && (local_68 != 0)) {
              local_68 = local_48;
              FUN_00d50b20();
            }
            goto LAB_01619097;
          }
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          if (((char)local_38 != '\0') && (local_68 != 0)) {
            local_68 = uVar24;
            FUN_00d50b20();
          }
LAB_01619100:
          uVar20 = CONCAT71(uVar27,1);
joined_r0x016190d8:
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_198 != '\0') && (local_1a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1a8 != '\0') && (local_1b0 != 0)) {
          FUN_00d50b20();
        }
        local_48 = local_a0;
        local_40[0] = '\0';
        FUN_00d23f50();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        local_40[0] = '\0';
        local_48 = uVar16;
        FUN_00d23f50();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        local_40[0] = '\0';
        local_48 = uVar22;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        local_48 = local_a0;
        local_40[0] = '\0';
        iVar25 = FUN_00d237a0();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (iVar25 != -1) {
          FUN_00d23620();
        }
        local_40[0] = '\0';
        local_48 = uVar16;
        iVar25 = FUN_00d237a0();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (iVar25 != -1) {
          FUN_00d23620();
        }
        uVar23 = (uint)uVar20;
        if (uVar22 != uVar16) {
          if (((char)uVar20 != '\0') && (uVar22 != 0)) {
            FUN_00d50b00();
          }
          uVar24 = uVar20;
          local_68 = uVar22;
          local_38 = uVar23;
          if ((local_31 != '\0') && (uVar16 != 0)) {
            FUN_00d50b20();
            local_68 = uVar22;
            local_38 = uVar23;
          }
          goto LAB_01618900;
        }
        local_4c = (int)local_80;
        local_70 = local_a0;
        local_68 = uVar22;
        local_38 = uVar23;
      } while ((char)uVar20 == '\0');
    } while ((char)local_8c != '\x01');
    uVar24 = 1;
    FUN_00d50b00();
  } while( true );
LAB_01619bb0:
  if ((char)local_88 != '\0') {
    FUN_00d50b00();
  }
  local_190 = uVar22;
  local_188 = '\0';
  FUN_015f96d0();
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  uVar30 = FUN_015f88c0();
  uVar20 = local_80;
  local_70 = local_48;
  uVar15 = (undefined7)(local_48 >> 8);
  if (local_80 == local_48) {
    local_4c = local_8c;
    if (((char)local_8c == '\0') && (local_80 != 0)) {
      local_4c = (int)CONCAT71(uVar15,1);
      if (local_40[0] != '\0') {
        local_70 = local_80;
        goto LAB_01619d20;
      }
      local_4c = (int)CONCAT71(uVar15,1);
      local_8c = 0;
      uVar30 = FUN_00d50b00();
    }
joined_r0x01619ce9:
    local_70 = uVar20;
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      uVar30 = FUN_00d50b20();
    }
  }
  else {
    if (local_40[0] == '\0') {
      uVar12 = 0;
      if (local_48 != 0) {
        uVar12 = FUN_00d50b00();
        uVar30 = extraout_XMM0_Da_01;
      }
      local_4c = (int)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
      uVar20 = local_70;
      if (((char)local_8c != '\0') && (local_80 != 0)) {
        local_80 = local_70;
        uVar30 = FUN_00d50b20();
        uVar20 = local_70;
      }
      goto joined_r0x01619ce9;
    }
    local_4c = (int)CONCAT71(uVar15,1);
    if (((char)local_8c != '\0') && (local_80 != 0)) {
      local_80 = local_48;
      uVar30 = FUN_00d50b20();
    }
  }
LAB_01619d20:
  local_180 = local_70;
  local_178 = '\0';
  local_170 = uVar17;
  local_168 = '\0';
  FUN_015f9150(uVar30,&local_170);
  uVar20 = local_48;
  uVar22 = local_68;
  uVar15 = (undefined7)(uVar24 >> 8);
  if (local_68 == local_48) {
    if (((char)local_38 != '\0') || (local_68 == 0)) {
      uVar20 = (ulonglong)local_38;
      goto joined_r0x01619dd9;
    }
    if (local_40[0] == '\0') {
      local_38 = 0;
      FUN_00d50b00();
      goto LAB_01619df3;
    }
  }
  else {
    uVar22 = uVar20;
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      if (((char)local_38 != '\0') && (local_68 != 0)) {
        local_68 = uVar20;
        FUN_00d50b20();
      }
LAB_01619df3:
      uVar20 = CONCAT71(uVar15,1);
joined_r0x01619dd9:
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01619e07;
    }
    if (((char)local_38 != '\0') && (local_68 != 0)) {
      local_68 = local_48;
      FUN_00d50b20();
    }
  }
  local_40[0] = '\0';
  uVar20 = CONCAT71(uVar15,1);
LAB_01619e07:
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  local_48 = local_70;
  local_40[0] = '\0';
  FUN_00d23f50();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_48 = uVar17;
  local_40[0] = '\0';
  FUN_00d23f50();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_40[0] = '\0';
  local_48 = uVar22;
  FUN_00d21140();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_48 = local_70;
  local_40[0] = '\0';
  iVar10 = FUN_00d237a0();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (iVar10 != -1) {
    FUN_00d23620();
  }
  local_48 = local_a0;
  local_40[0] = '\0';
  iVar10 = FUN_00d237a0();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  uVar17 = local_a0;
  if (iVar10 != -1) {
    FUN_00d23620();
  }
  uVar23 = (uint)uVar20;
  if (uVar22 != uVar17) {
    if (((char)uVar20 != '\0') && (uVar22 != 0)) {
      FUN_00d50b00();
    }
    local_60 = local_88;
    local_58 = local_78;
    uVar24 = uVar22;
    uVar16 = uVar22;
    if (local_31 != '\0') {
      if (uVar17 != 0) {
        local_68 = uVar22;
        local_38 = uVar23;
        FUN_00d50b20();
        local_60 = local_88;
        local_58 = local_78;
      }
    }
    goto LAB_0161951d;
  }
  local_c8 = local_78;
  local_60 = local_88;
  local_68 = uVar22;
  local_38 = uVar23;
  bVar5 = bVar1;
  if ((char)uVar20 == '\0') goto LAB_0161957f;
  local_8c = local_4c;
  local_80 = local_70;
  if (bVar29 && bVar28) goto code_r0x0161a010;
  goto LAB_0161957f;
code_r0x0161a010:
  uVar20 = 1;
  FUN_00d50b00();
  local_60 = local_88;
  local_58 = local_78;
  uVar24 = uVar17;
  uVar16 = local_a0;
  goto LAB_0161951d;
LAB_0161a880:
  if ((char)uVar20 != '\0') {
    FUN_00d50b00();
  }
  local_160 = uVar17;
  local_158 = '\0';
  FUN_015f96a0();
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  uVar30 = FUN_015f88c0();
  uVar4 = local_48;
  uVar17 = local_70;
  uVar15 = (undefined7)(uVar24 >> 8);
  if (local_70 == local_48) {
    iVar10 = local_4c;
    if (((char)local_4c != '\0') || (local_70 == 0)) goto joined_r0x0161a96b;
    iVar10 = (int)CONCAT71(uVar15,1);
    if (local_40[0] == '\0') {
      local_4c = 0;
      uVar30 = FUN_00d50b00();
      goto LAB_0161a9a3;
    }
  }
  else {
    uVar17 = uVar4;
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        uVar30 = FUN_00d50b00();
      }
      if (((char)local_4c != '\0') && (local_70 != 0)) {
        local_70 = uVar4;
        uVar30 = FUN_00d50b20();
      }
LAB_0161a9a3:
      iVar10 = (int)CONCAT71(uVar15,1);
joined_r0x0161a96b:
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        uVar30 = FUN_00d50b20();
      }
    }
    else {
      iVar10 = (int)CONCAT71(uVar15,1);
      if (((char)local_4c != '\0') && (local_70 != 0)) {
        local_70 = local_48;
        uVar30 = FUN_00d50b20();
      }
    }
  }
  local_148 = '\0';
  local_138 = '\0';
  local_150 = uVar22;
  local_140 = uVar17;
  local_8c = iVar10;
  local_80 = uVar17;
  FUN_015f9150(uVar30,&local_140);
  uVar24 = local_48;
  uVar17 = local_68;
  if (local_68 == local_48) {
    local_31 = (char)local_38;
    if (((char)local_38 == '\0') && (local_68 != 0)) {
      if (local_40[0] != '\0') goto LAB_0161aa3d;
      local_31 = '\x01';
      local_38 = 0;
      FUN_00d50b00();
    }
  }
  else {
    uVar17 = uVar24;
    if (local_40[0] != '\0') {
      if (((char)local_38 != '\0') && (local_68 != 0)) {
        local_68 = local_48;
        FUN_00d50b20();
      }
LAB_0161aa3d:
      local_40[0] = '\0';
      local_31 = '\x01';
      goto LAB_0161aaaf;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    local_31 = '\x01';
    if (((char)local_38 != '\0') && (local_68 != 0)) {
      local_68 = uVar24;
      FUN_00d50b20();
    }
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_0161aaaf:
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  local_48 = local_80;
  local_40[0] = '\0';
  FUN_00d23f50();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_40[0] = '\0';
  local_48 = uVar22;
  FUN_00d23f50();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_40[0] = '\0';
  local_48 = uVar17;
  FUN_00d21140();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_48 = local_80;
  local_40[0] = '\0';
  iVar10 = FUN_00d237a0();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (iVar10 != -1) {
    FUN_00d23620();
  }
  local_40[0] = '\0';
  local_48 = uVar22;
  uVar14 = FUN_00d237a0();
  uVar12 = uVar14;
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((int)uVar14 != -1) {
    uVar12 = FUN_00d23620();
  }
  if (uVar17 != uVar22) {
    if ((local_31 != '\0') && (uVar17 != 0)) {
      uVar12 = FUN_00d50b00();
    }
    local_38 = (uint)CONCAT71((int7)((ulonglong)uVar12 >> 8),local_31);
    uVar24 = local_58;
    local_68 = uVar17;
    local_60 = uVar20;
    if ((bVar18 != '\0') && (local_38 = (uint)CONCAT71((int7)(local_58 >> 8),local_31), uVar22 != 0)
       ) {
      uVar12 = FUN_00d50b20();
      local_38 = (uint)CONCAT71((int7)((ulonglong)uVar12 >> 8),local_31);
      uVar24 = local_58;
      local_68 = uVar17;
      local_60 = uVar20;
    }
    goto LAB_0161a0d0;
  }
  local_4c = local_8c;
  local_70 = local_80;
  uVar23 = (uint)CONCAT71((int7)(uVar16 >> 8),local_31);
  local_78 = local_58;
  local_a0 = CONCAT44(local_a0._4_4_,(int)uVar20);
  local_68 = uVar17;
  local_60 = uVar20;
  local_38 = uVar23;
  bVar5 = bVar1;
  bVar28 = bVar3;
  if (local_31 == '\0') goto LAB_0161a145;
  if (bVar18 == '\0' && uVar22 != 0) goto code_r0x0161acb8;
  goto LAB_0161a145;
code_r0x0161acb8:
  bVar18 = '\x01';
  FUN_00d50b00();
  local_60 = local_a0 & 0xffffffff;
  uVar24 = local_58;
  goto LAB_0161a0ee;
}


