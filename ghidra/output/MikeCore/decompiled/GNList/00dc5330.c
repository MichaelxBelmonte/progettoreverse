// Function: FUN_00dc5330
// Address: 00dc5330
// Size: 2130 bytes
// Class: GNList
// String references:
//   "%@%@"


void FUN_00dc5330(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  char cVar10;
  short sVar11;
  undefined8 *unaff_RDI;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined7 uVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong local_160;
  longlong local_158;
  undefined *local_150;
  code *local_148;
  longlong local_138;
  undefined1 local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined4 local_118;
  longlong local_110;
  char local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  undefined8 *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  uint local_b4;
  undefined8 *local_b0;
  char local_a8;
  undefined8 *local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  undefined8 *local_80;
  int local_74;
  undefined8 *local_70;
  char local_68 [8];
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined8 *local_40;
  short local_36;
  undefined4 local_34;
  
  FUN_00d6caf0();
  puVar8 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00dc5393;
    }
  }
  else if (local_70 != (undefined8 *)0x0) {
LAB_00dc5393:
    local_80 = puVar8;
    FUN_00c9fe20();
    puVar8 = local_70;
    local_138 = CONCAT71(local_138._1_7_,local_68[0]);
    plVar7 = (longlong *)local_68;
    if (local_68[0] == '\0') {
      plVar7 = &local_138;
    }
    *(char *)plVar7 = '\0';
    if ((local_68[0] != '\0') && (puVar8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    iVar5 = *(int *)((longlong)puVar8 + 0xc);
    if ((char)local_138 != '\0') {
      FUN_00d50b20();
    }
    if (0 < iVar5) {
      FUN_00c9fe20();
      puVar8 = local_70;
      plVar7 = (longlong *)local_68;
      if (local_68[0] == '\0') {
        plVar7 = &local_138;
      }
      local_138 = CONCAT71(local_138._1_7_,local_68[0]);
      *(char *)plVar7 = '\0';
      if ((local_68[0] != '\0') && (puVar8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      puVar16 = local_80;
      if ((char)local_138 == '\0') {
        if (puVar8 == (undefined8 *)0x0) goto LAB_00dc5b98;
        FUN_00d50b00();
      }
      else if (puVar8 == (undefined8 *)0x0) goto LAB_00dc5b98;
      local_130 = 0;
      local_138 = 0;
      local_128 = puVar8;
      local_118 = 0;
      local_120 = 0;
      if (0 < *(int *)((longlong)puVar8 + 0xc)) {
        local_148 = DAT_025795c0;
        uVar9 = 0;
        local_150 = &DAT_025795a8;
        local_100 = puVar8;
        do {
          lVar1 = *(longlong *)(puVar8[2] + (ulonglong)uVar9 * 8);
          local_e0 = '\0';
          local_138 = lVar1;
          local_e8 = lVar1;
          local_b4 = uVar9;
          FUN_01de4130((ulonglong)uVar9,&local_e8);
          puVar2 = local_70;
          if (local_68[0] == '\0') {
            if (((local_70 != (undefined8 *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
               (local_70 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_68[0] = '\0';
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          puVar13 = puVar2;
          local_158 = lVar1;
          if (puVar2 != (undefined8 *)0x0) {
            iVar5 = FUN_00d8c7a0();
            if (iVar5 < 1) {
              FUN_00d50b00();
            }
            else {
              local_36 = 0;
              local_34 = 0;
              iVar15 = 0;
              sVar11 = 0;
              local_74 = 0;
              iVar5 = 0;
              do {
                uVar4 = FUN_00d8cbc0();
                if ((sVar11 == 0) && (uVar4 == 0x26)) {
                  local_36 = 0;
                  sVar11 = 0x26;
                  iVar5 = iVar15;
                }
                else if ((sVar11 == 0x26) && (uVar4 == 0x23)) {
LAB_00dc55cc:
                  sVar11 = 0x23;
                }
                else if (sVar11 == 0x78) {
                  if ((uVar4 == 0x3b) && (local_36 != 0)) {
                    puVar8 = (undefined8 *)FUN_00e8fc40();
                    FUN_00d4ff40();
                    *puVar8 = local_150;
                    (*local_148)();
                    local_40 = puVar13;
                    if (puVar2 == puVar13) {
                      if (0 < iVar5) {
                        FUN_00d97ce0();
                        puVar16 = local_70;
                        local_98 = 0;
                        if (local_68[0] == '\0') {
                          if (local_70 != (undefined8 *)0x0) {
                            FUN_00d50b00();
                          }
                        }
                        else {
                          local_68[0] = '\0';
                        }
                        puVar13 = local_40;
                        local_98 = '\x01';
                        local_a0 = puVar16;
                        FUN_00d8dbf0();
                        if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_68[0] != '\0') && (local_70 != (undefined8 *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                    }
                    else {
                      local_f0 = '\0';
                      local_f8 = puVar13;
                      FUN_00d8dbf0();
                      if ((local_f0 != '\0') && (local_f8 != (undefined8 *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (local_74 + 1 < iVar5) {
                        FUN_00e7b4e0();
                        FUN_00d8e3d0();
                        puVar16 = local_70;
                        local_88 = 0;
                        if (local_68[0] == '\0') {
                          if (local_70 != (undefined8 *)0x0) {
                            FUN_00d50b00();
                          }
                        }
                        else {
                          local_68[0] = '\0';
                        }
                        puVar13 = local_40;
                        local_88 = '\x01';
                        local_90 = puVar16;
                        FUN_00d8dbf0();
                        if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_68[0] != '\0') && (local_70 != (undefined8 *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                    }
                    FUN_00d8ea20();
                    FUN_00d8c7d0();
                    uVar14 = (undefined7)((ulonglong)puVar13 >> 8);
                    if (puVar8 == puVar13) {
                      uVar12 = local_34;
                      puVar8 = local_40;
                      if ((char)local_34 == '\0') {
                        FUN_00d50b00();
                        uVar12 = (int)CONCAT71(uVar14,1);
                        puVar8 = local_40;
                      }
                    }
                    else {
                      FUN_00d50b00();
                      uVar12 = (undefined4)CONCAT71(uVar14,1);
                      if (((char)local_34 != '\0') && (local_40 != (undefined8 *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    local_40 = puVar8;
                    FUN_00d50b20();
                    sVar11 = 0;
                    puVar13 = local_40;
                    local_74 = iVar15;
                    local_34 = uVar12;
                  }
                  else {
                    if ((ushort)(uVar4 - 0x30) < 10) {
                      local_36 = (uVar4 - 0x30) + local_36 * 0x10;
                    }
                    else if ((ushort)(uVar4 - 0x41) < 6) {
                      local_36 = uVar4 + local_36 * 0x10 + -0x37;
                    }
                    else {
                      if (5 < (ushort)(uVar4 - 0x61)) {
                        sVar11 = 0;
                        goto LAB_00dc5890;
                      }
                      local_36 = uVar4 + local_36 * 0x10 + -0x57;
                    }
                    sVar11 = 0x78;
                  }
                }
                else if ((sVar11 == 0x23) && (sVar11 = 0x78, (uVar4 | 0x20) != 0x78))
                goto LAB_00dc55cc;
LAB_00dc5890:
                iVar6 = FUN_00d8c7a0();
                iVar15 = iVar15 + 1;
              } while (iVar15 < iVar6);
              if (puVar2 == puVar13) {
                cVar10 = (char)local_34;
                puVar16 = local_80;
              }
              else {
                iVar5 = FUN_00d8c7a0();
                puVar16 = local_80;
                if (local_74 + 1 < iVar5) {
                  FUN_00d8f140();
                  local_160 = local_110;
                  FUN_00083ea0(2,&local_160);
                  FUN_00d8cb40();
                  puVar8 = local_b0;
                  if (local_b0 == puVar13) {
                    puVar8 = puVar13;
                    uVar12 = local_34;
                    if (((char)local_34 != '\0') || (puVar13 == (undefined8 *)0x0))
                    goto LAB_00dc5a30;
                    if (local_a8 != '\0') goto LAB_00dc59f9;
                    cVar10 = '\x01';
                    FUN_00d50b00();
                    cVar3 = '\x01';
                    if (local_a8 == '\0') goto LAB_00dc5a4a;
LAB_00dc5a39:
                    cVar10 = cVar3;
                    if (local_b0 != (undefined8 *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                  else if (local_a8 == '\0') {
                    if (local_b0 != (undefined8 *)0x0) {
                      FUN_00d50b00();
                    }
                    uVar12 = 1;
                    if (((char)local_34 != '\0') && (puVar13 != (undefined8 *)0x0)) {
                      FUN_00d50b20();
                    }
LAB_00dc5a30:
                    puVar13 = puVar8;
                    cVar10 = (char)uVar12;
                    cVar3 = cVar10;
                    if (local_a8 != '\0') goto LAB_00dc5a39;
                  }
                  else {
                    if (((char)local_34 != '\0') && (puVar13 != (undefined8 *)0x0)) {
                      FUN_00d50b20();
                    }
LAB_00dc59f9:
                    puVar13 = puVar8;
                    local_a8 = '\0';
                    cVar10 = '\x01';
                  }
LAB_00dc5a4a:
                  local_70 = (undefined8 *)&DAT_0253d630;
                  if ((local_48 != '\0') && (local_50 != 0)) {
                    FUN_00d50b20();
                  }
                  local_70 = &DAT_024c5048;
                  if ((local_58 != '\0') && (local_60 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_108 != '\0') && (local_110 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  cVar10 = (char)local_34;
                }
              }
              puVar8 = local_100;
              if ((cVar10 == '\0') && (puVar13 != (undefined8 *)0x0)) {
                FUN_00d50b00();
              }
            }
          }
          if (puVar2 != puVar13) {
            local_d0 = '\0';
            local_c8 = local_158;
            local_c0 = '\0';
            local_d8 = puVar13;
            FUN_00cd2930();
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_d0 != '\0') && (local_d8 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (puVar13 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (puVar2 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          uVar9 = local_b4 + 1;
          local_120 = CONCAT44(local_120._4_4_,uVar9);
        } while ((int)uVar9 < *(int *)((longlong)puVar8 + 0xc));
      }
      FUN_00018280();
      FUN_00d50b20();
      local_80 = puVar16;
    }
    goto LAB_00dc5b98;
  }
  local_80 = (undefined8 *)0x0;
LAB_00dc5b98:
  *unaff_RDI = local_80;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


