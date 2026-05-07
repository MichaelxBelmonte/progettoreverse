// Function: FUN_017551c0
// Address: 017551c0
// Size: 8144 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01756641) */
/* WARNING: Removing unreachable block (ram,0x0175664a) */
/* WARNING: Removing unreachable block (ram,0x017555ce) */
/* WARNING: Removing unreachable block (ram,0x017555d7) */
/* WARNING: Removing unreachable block (ram,0x01755668) */
/* WARNING: Removing unreachable block (ram,0x01755671) */
/* WARNING: Removing unreachable block (ram,0x01756559) */
/* WARNING: Removing unreachable block (ram,0x01756562) */
/* WARNING: Removing unreachable block (ram,0x017562b6) */
/* WARNING: Removing unreachable block (ram,0x017562bf) */
/* WARNING: Removing unreachable block (ram,0x01755fa7) */
/* WARNING: Removing unreachable block (ram,0x01755fb0) */
/* WARNING: Removing unreachable block (ram,0x017558e6) */
/* WARNING: Removing unreachable block (ram,0x017558ef) */
/* WARNING: Removing unreachable block (ram,0x01756d63) */
/* WARNING: Removing unreachable block (ram,0x01756d70) */
/* WARNING: Removing unreachable block (ram,0x0175524a) */
/* WARNING: Removing unreachable block (ram,0x01755253) */
/* WARNING: Removing unreachable block (ram,0x01755537) */
/* WARNING: Removing unreachable block (ram,0x01755540) */
/* WARNING: Removing unreachable block (ram,0x017559a9) */
/* WARNING: Removing unreachable block (ram,0x017559b2) */
/* WARNING: Removing unreachable block (ram,0x0175658b) */
/* WARNING: Removing unreachable block (ram,0x01756594) */
/* WARNING: Removing unreachable block (ram,0x01756e95) */
/* WARNING: Removing unreachable block (ram,0x01756e9e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017551c0(pthread_key_t param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  pthread_key_t pVar19;
  undefined8 uVar20;
  code *pcVar21;
  code *pcVar22;
  longlong *unaff_RDI;
  code *pcVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  longlong local_238;
  char local_230;
  longlong local_228;
  char local_220;
  longlong local_218;
  char local_210;
  code *local_208;
  char local_200;
  float local_1f8;
  float local_1f4;
  int local_1f0;
  int local_1ec;
  code *local_1e8;
  longlong local_1e0;
  char local_1d8;
  code *local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  code *local_150;
  char local_148;
  code *local_140;
  char local_138;
  undefined8 *local_130;
  undefined8 local_128;
  int local_110;
  int local_10c;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_d8;
  char local_d0;
  int local_b4;
  uint local_94;
  code *local_70;
  code *local_68;
  byte local_51;
  longlong local_50;
  code *local_48;
  char local_40;
  
  pcVar7 = local_48;
  pcVar1 = (code *)unaff_RDI[0xc];
  if (pcVar1 != (code *)0x0) {
    FUN_00d50b00();
  }
  pvVar12 = _pthread_getspecific(param_1);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770f00();
  if ((local_40 == '\0') && (local_48 != (code *)0x0)) {
    FUN_00d50b00();
  }
  local_1e8 = local_48;
  pvVar12 = _pthread_getspecific(param_1);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar8 = FUN_017731c0(DAT_02390124);
  if (cVar8 != '\0') {
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar25 = DAT_027cd5a0;
    if (DAT_027cd5a0 != 0) {
      FUN_00d50b00();
    }
    lVar17 = DAT_027cd5c0;
    if (DAT_027cd5c0 != 0) {
      FUN_00d50b00();
    }
    local_238 = lVar17;
    local_230 = '\x01';
    local_228 = 0;
    local_220 = '\0';
    FUN_00d31230(&local_228,&local_238);
    local_1c8 = 0;
    if (local_40 == '\0') {
      if (local_48 != (code *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_1c8 = '\x01';
    local_1d0 = local_48;
    FUN_0176fd70();
    if ((local_1c8 != '\0') && (local_1d0 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_220 != '\0') && (local_228 != 0)) {
      FUN_00d50b20();
    }
    if ((local_230 != '\0') && (local_238 != 0)) {
      FUN_00d50b20();
    }
    if (lVar25 != 0) {
      FUN_00d50b20();
    }
    goto LAB_01757228;
  }
  FUN_017bf740();
  local_1b8 = 0;
  if (local_d0 == '\0') {
    if (local_d8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_d0 = '\0';
  }
  local_1b8 = '\x01';
  local_1c0 = local_d8;
  FUN_017582c0();
  if (local_40 == '\0') {
    if (local_48 != (code *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  puVar13 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &DAT_02572358;
  local_128 = DAT_02572370;
  (*DAT_02572370)();
  uVar26 = *(uint *)(local_48 + 0xc);
  if (0 < (int)uVar26) {
    lVar25 = (ulonglong)uVar26 + 1;
    do {
      uVar26 = uVar26 - 1;
      lVar17 = *(longlong *)(pcVar7 + 0x10);
      pcVar21 = *(code **)(lVar17 + (ulonglong)uVar26 * 8);
      if (pcVar21 != (code *)0x0) {
        FUN_00d50b00();
      }
      pvVar12 = _pthread_getspecific((pthread_key_t)lVar17);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017aac20();
      if (local_40 == '\0') {
        if (local_48 != (code *)0x0) {
          FUN_00d50b00();
          goto LAB_01755550;
        }
      }
      else if (local_48 != (code *)0x0) {
LAB_01755550:
        lVar17 = DAT_027cd5c8;
        if (DAT_027cd5c8 != 0) {
          FUN_00d50b00();
        }
        local_218 = lVar17;
        local_210 = '\x01';
        cVar8 = (**(code **)(*(longlong *)local_48 + 0x50))();
        if ((local_210 != '\0') && (local_218 != 0)) {
          FUN_00d50b20();
        }
        if (cVar8 != '\0') {
          local_40 = '\0';
          FUN_00d21140();
          FUN_00d23620();
          local_48 = pcVar21;
        }
        FUN_00d50b20();
      }
      if (pcVar21 != (code *)0x0) {
        FUN_00d50b20();
      }
      lVar25 = lVar25 + -1;
    } while (1 < lVar25);
  }
  if (0 < *(int *)((longlong)puVar13 + 0xc)) {
    lVar25 = 0;
    do {
      local_48 = *(code **)(puVar13[2] + lVar25 * 8);
      if (local_48 != (code *)0x0) {
        FUN_00d50b00();
      }
      local_40 = '\0';
      FUN_00d23370();
      if (local_48 != (code *)0x0) {
        FUN_00d50b20();
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < *(int *)((longlong)puVar13 + 0xc));
  }
  puVar14 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar14 = &DAT_02572358;
  (*local_128)();
  local_130 = puVar14;
  puVar14 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar14 = &DAT_02572358;
  (*local_128)();
  puVar15 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar15 = &DAT_02572358;
  (*local_128)();
  puVar16 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar19 = 0x25683c0;
  *puVar16 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  cVar8 = FUN_0173f680();
  pvVar12 = _pthread_getspecific(pVar19);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_1f8 = (float)FUN_017708f0();
  pvVar12 = _pthread_getspecific(pVar19);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_1ec = FUN_01770c70();
  iVar27 = *(int *)(local_1e8 + 0xc);
  pvVar12 = _pthread_getspecific(pVar19);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  bVar9 = FUN_01770870();
  if (0 < *(int *)(pcVar7 + 0xc)) {
    local_94 = (uint)bVar9;
    iVar27 = iVar27 - local_94;
    local_b4 = 10000;
    lVar25 = 0;
    do {
      pcVar21 = pcVar7;
      pvVar12 = _pthread_getspecific((pthread_key_t)pcVar7);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017aa5e0();
      if ((local_40 == '\0') && (local_48 != (code *)0x0)) {
        FUN_00d50b00();
      }
      pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
      if ((pvVar12 == (void *)0x0) || (lVar17 = FUN_00e8b990(), lVar17 == 0)) {
        pcVar22 = *(code **)(local_48 + 0x60);
      }
      else {
        pcVar22 = *(code **)(*(longlong *)
                              (local_48 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8 + 0x20) +
                            0x60);
      }
      if (pcVar22 != (code *)0x0) {
        FUN_00d50b00();
      }
      pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01770f00();
      if ((local_40 == '\0') && (local_48 != (code *)0x0)) {
        FUN_00d50b00();
      }
      iVar24 = *(int *)(local_48 + 0xc);
      pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
      if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
        pcVar21 = pcVar22;
      }
      uVar26 = FUN_01770870();
      pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
      if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
        pcVar21 = pcVar22;
      }
      cVar10 = FUN_017731c0(DAT_02390124);
      if (cVar10 == '\0') {
        pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
        if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          pcVar21 = pcVar1;
        }
        cVar10 = FUN_01770870();
        if (cVar10 != '\0') {
          pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
          if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            pcVar21 = pcVar22;
          }
          cVar10 = FUN_01770870();
          if (cVar10 == '\0') goto LAB_01755ba2;
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
        if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          pcVar21 = pcVar22;
        }
        fVar30 = (float)FUN_017708f0();
        if ((local_1f8 != fVar30) || (NAN(local_1f8) || NAN(fVar30))) goto LAB_01755ba2;
        pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
        if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          pcVar21 = pcVar22;
        }
        iVar11 = FUN_01770c70();
        if (iVar11 < local_1ec) goto LAB_01755ba2;
        local_110 = iVar24 - (uVar26 & 0xff);
        if (cVar8 == '\0') {
LAB_01755d8f:
          lVar17 = unaff_RDI[0xb];
          if (lVar17 != 0) {
            FUN_00d50b00();
          }
          pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar11 = FUN_01736c50();
          if (lVar17 != 0) {
            FUN_00d50b20();
          }
          pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
          if ((pvVar12 == (void *)0x0) || (lVar17 = FUN_00e8b990(), lVar17 == 0)) {
            lVar17 = *(longlong *)(local_48 + 0x58);
          }
          else {
            lVar17 = *(longlong *)
                      (*(longlong *)
                        (local_48 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8 + 0x20) + 0x58);
          }
          if (lVar17 != 0) {
            FUN_00d50b00();
          }
          pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_10c = FUN_01736c50();
          if (lVar17 != 0) {
            FUN_00d50b20();
          }
          local_1f4 = (float)(**(code **)(*unaff_RDI + 0x3a0))();
          pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
          pcVar23 = local_48;
          if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            pcVar23 = *(code **)(local_48 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8 + 0x20);
          }
          fVar30 = (float)(**(code **)(*(longlong *)pcVar23 + 0x3a0))();
          if (iVar27 < 2) {
            local_51 = 1;
            bVar5 = false;
            local_68 = (code *)0x0;
            bVar29 = false;
            local_70 = (code *)0x0;
LAB_0175650d:
            iVar11 = local_110 - iVar27;
            iVar24 = -iVar11;
            if (0 < iVar11) {
              iVar24 = iVar11;
            }
            if (iVar24 <= local_b4) {
              local_40 = '\0';
              FUN_00d21140();
              local_b4 = iVar24;
              if (local_51 != 0) {
                local_40 = '\0';
                FUN_00d21140();
              }
            }
          }
          else {
            local_1f0 = (iVar24 - (uVar26 & 0xff)) + -1;
            local_10c = local_10c + 1;
            uVar20 = CONCAT71((int7)((ulonglong)pcVar21 >> 8),1);
            iVar24 = 1;
            bVar5 = false;
            local_51 = 1;
            local_68 = (code *)0x0;
            bVar29 = false;
            local_70 = (code *)0x0;
            do {
              cVar10 = (char)uVar20;
              uVar33 = (**(code **)(*unaff_RDI + 0x3a0))();
              local_128 = (code *)CONCAT44(local_128._4_4_,uVar33);
              FUN_01740240(uVar33,iVar24 + iVar11);
              if (local_40 == '\0') {
                if (local_48 != (code *)0x0) {
                  FUN_00d50b00();
                  goto LAB_01755fc0;
                }
LAB_01756050:
                if (local_70 == (code *)0x0) {
                  bVar6 = true;
                  local_70 = (code *)0x0;
                  iVar28 = local_1f0;
                }
                else {
                  if (bVar29) {
                    FUN_00d50b20();
                  }
                  bVar6 = true;
                  local_70 = (code *)0x0;
                  iVar28 = local_1f0;
                  bVar29 = false;
                }
              }
              else {
                if (local_48 == (code *)0x0) goto LAB_01756050;
LAB_01755fc0:
                pvVar12 = _pthread_getspecific((pthread_key_t)uVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01739580();
                if (local_48 == local_70) {
                  pcVar21 = local_70;
                  bVar4 = bVar29;
                  if ((!bVar29) && (local_48 != (code *)0x0)) {
                    bVar4 = true;
                    if (local_40 != '\0') goto LAB_01756114;
                    FUN_00d50b00();
                    bVar4 = true;
                  }
LAB_01756100:
                  if ((local_40 != '\0') && (local_48 != (code *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  pcVar21 = local_48;
                  if (local_40 == '\0') {
                    if (local_48 != (code *)0x0) {
                      FUN_00d50b00();
                    }
                    bVar4 = true;
                    if ((bVar29) && (local_70 != (code *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_01756100;
                  }
                  bVar4 = true;
                  if ((bVar29) && (local_70 != (code *)0x0)) {
                    FUN_00d50b20();
                  }
                }
LAB_01756114:
                bVar6 = false;
                local_70 = pcVar21;
                iVar28 = local_1f0;
                bVar29 = bVar4;
              }
              local_1f0 = iVar28;
              if (1 < local_110) {
                local_128._4_4_ = (undefined4)((ulonglong)local_128 >> 0x20);
                local_128 = (code *)CONCAT44(local_128._4_4_,(float)local_128 - local_1f4);
                do {
                  pvVar12 = _pthread_getspecific((pthread_key_t)uVar20);
                  pcVar21 = local_48;
                  if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                    pcVar21 = *(code **)(local_48 +
                                        (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8 + 0x20);
                  }
                  fVar31 = (float)(**(code **)(*(longlong *)pcVar21 + 0x3a0))();
                  if ((float)((uint)((float)local_128 - (fVar31 - fVar30)) & _DAT_02390140) <=
                      DAT_02390124) {
                    pvVar12 = _pthread_getspecific((pthread_key_t)uVar20);
                    if (pvVar12 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01740240();
                    if (local_40 == '\0') {
                      if (local_48 != (code *)0x0) {
                        FUN_00d50b00();
                        goto LAB_017562c4;
                      }
                    }
                    else if (local_48 != (code *)0x0) {
LAB_017562c4:
                      local_128 = local_48;
                      pvVar12 = _pthread_getspecific((pthread_key_t)uVar20);
                      if (pvVar12 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01739580();
                      if (local_48 == local_68) {
                        bVar4 = bVar5;
                        if ((!bVar5) && (local_48 != (code *)0x0)) {
                          bVar4 = true;
                          pcVar21 = local_68;
                          if (local_40 != '\0') goto LAB_01756433;
                          FUN_00d50b00();
                          bVar4 = true;
                        }
LAB_0175641f:
                        pcVar21 = local_68;
                        if ((local_40 != '\0') && (local_48 != (code *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      else if (local_40 == '\0') {
                        if (local_48 != (code *)0x0) {
                          FUN_00d50b00();
                        }
                        bVar4 = true;
                        pcVar21 = local_48;
                        if ((bVar5) && (local_68 != (code *)0x0)) {
                          FUN_00d50b20();
                          local_68 = local_48;
                          goto LAB_0175641f;
                        }
                      }
                      else {
                        bVar4 = true;
                        if ((bVar5) && (local_68 != (code *)0x0)) {
                          FUN_00d50b20();
                          local_68 = local_48;
                          pcVar21 = local_68;
                        }
                        else {
                          local_68 = local_48;
                          pcVar21 = local_68;
                        }
                      }
LAB_01756433:
                      local_68 = pcVar21;
                      local_94 = 0;
                      if ((local_70 != (code *)0x0) && (local_68 != (code *)0x0)) {
                        local_208 = local_68;
                        local_200 = '\0';
                        local_94 = (**(code **)(*(longlong *)local_70 + 0x50))();
                        if ((local_200 != '\0') && (local_208 != (code *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      FUN_00d50b20();
                      bVar3 = false;
                      bVar2 = false;
                      bVar5 = bVar4;
                      goto joined_r0x017564aa;
                    }
                    if (local_68 != (code *)0x0) {
                      if (bVar5) {
                        FUN_00d50b20();
                      }
                      bVar5 = false;
                    }
                    local_68 = (code *)0x0;
                    bVar3 = false;
                    bVar2 = false;
                    local_94 = 0;
                    goto joined_r0x017564aa;
                  }
                  iVar28 = iVar28 + -1;
                } while (iVar28 != 0);
              }
              bVar3 = true;
              bVar2 = true;
joined_r0x017564aa:
              if (!bVar6) {
                FUN_00d50b20();
                bVar2 = bVar3;
              }
              if (bVar2) {
                if (cVar10 == '\0') goto LAB_0175650d;
                goto LAB_01756599;
              }
              local_51 = local_51 & -((byte)local_94 & 1);
              iVar24 = iVar24 + 1;
              uVar20 = CONCAT71((int7)((ulonglong)uVar20 >> 8),iVar24 < iVar27);
            } while (iVar24 != iVar27);
            if (iVar24 >= iVar27) goto LAB_0175650d;
          }
LAB_01756599:
          if ((bVar5) && (local_68 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if ((bVar29) && (local_70 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          bVar9 = FUN_0173f680();
          pcVar21 = (code *)CONCAT71((int7)((ulonglong)pcVar21 >> 8),local_110 == iVar27);
          if ((bVar9 & local_110 == iVar27) != 1) goto LAB_01755d8f;
          fVar30 = (float)(**(code **)(*unaff_RDI + 0x3a0))();
          if (iVar27 < 1) goto LAB_01755ba2;
          if (iVar27 < 2) {
            pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
            pcVar21 = local_48;
            if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pcVar21 = *(code **)(local_48 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8 + 0x20)
              ;
            }
            iVar24 = 0;
            (**(code **)(*(longlong *)pcVar21 + 0x3a0))();
LAB_01756623:
            local_40 = '\0';
            uVar33 = FUN_00d21140();
            iVar11 = *(int *)(puVar16 + 3);
            FUN_00c8e340(uVar33,1);
            *(int *)(puVar16[2] + (longlong)iVar11) = iVar24;
          }
          else {
            iVar24 = 0;
            do {
              pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
              pcVar23 = local_48;
              if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                pcVar23 = *(code **)(local_48 +
                                    (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8 + 0x20);
              }
              fVar31 = (float)(**(code **)(*(longlong *)pcVar23 + 0x3a0))();
              iVar11 = 1;
              bVar29 = true;
              while( true ) {
                local_128 = (code *)(**(code **)(*unaff_RDI + 0x3a0))();
                pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
                pcVar23 = local_48;
                if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                  pcVar23 = *(code **)(local_48 +
                                      (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8 + 0x20);
                }
                fVar32 = (float)(**(code **)(*(longlong *)pcVar23 + 0x3a0))();
                if (DAT_02390124 <
                    (float)((uint)(((float)local_128 - fVar30) - (fVar32 - fVar31)) & _DAT_02390140)
                   ) break;
                iVar11 = iVar11 + 1;
                bVar29 = iVar11 < iVar27;
                if (iVar27 == iVar11) goto LAB_01756623;
              }
              if (!bVar29) goto LAB_01756623;
              iVar24 = iVar24 + 1;
            } while (iVar24 != iVar27);
          }
        }
        if (local_48 != (code *)0x0) goto LAB_01755ba2;
      }
      else {
LAB_01755ba2:
        FUN_00d50b20();
      }
      if (pcVar22 != (code *)0x0) {
        FUN_00d50b20();
      }
      if (local_48 != (code *)0x0) {
        FUN_00d50b20();
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < *(int *)(pcVar7 + 0xc));
  }
  pcVar21 = pcVar7;
  if (*(int *)((longlong)puVar14 + 0xc) == 0) {
    if (*(int *)((longlong)puVar15 + 0xc) != 0) {
      if (*(int *)((longlong)puVar15 + 0xc) < 1) {
LAB_01756f6a:
        iVar27 = *(int *)((longlong)puVar15 + 0xc);
      }
      else {
        lVar25 = 0;
        do {
          pcVar22 = *(code **)(puVar15[2] + lVar25 * 8);
          if (pcVar22 != (code *)0x0) {
            FUN_00d50b00();
          }
          local_40 = '\0';
          cVar8 = FUN_00d23d70();
          pVar19 = (pthread_key_t)pcVar21;
          local_48 = pcVar22;
          if (cVar8 != '\0') {
            if (pcVar22 == (code *)0x0) goto LAB_01756f6a;
            FUN_00d50b00();
            FUN_00d50b20();
            goto LAB_01756f86;
          }
          if (pcVar22 != (code *)0x0) {
            FUN_00d50b20();
          }
          lVar25 = lVar25 + 1;
          iVar27 = *(int *)((longlong)puVar15 + 0xc);
        } while (lVar25 < iVar27);
      }
      pVar19 = (pthread_key_t)pcVar21;
      if ((iVar27 != 0) && (pcVar22 = *(code **)puVar15[2], pcVar22 != (code *)0x0)) {
        FUN_00d50b00();
        goto LAB_01756f86;
      }
    }
LAB_01756fbe:
    pvVar12 = _pthread_getspecific((pthread_key_t)pcVar21);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d8ede0();
    local_138 = 0;
    if (local_40 == '\0') {
      if (local_48 != (code *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_138 = '\x01';
    local_140 = local_48;
    FUN_0176fd70();
    if ((local_138 != '\0') && (local_140 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (code *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (*(int *)((longlong)puVar14 + 0xc) < 1) {
LAB_01756ee6:
      pcVar21 = (code *)(ulonglong)*(uint *)((longlong)puVar14 + 0xc);
    }
    else {
      local_50 = 0;
      do {
        pVar19 = (pthread_key_t)pcVar21;
        FUN_016ab300();
        lVar25 = unaff_RDI[0xc];
        if (lVar25 != 0) {
          FUN_00d50b00();
        }
        pvVar12 = _pthread_getspecific(pVar19);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar33 = FUN_01770c90();
        local_1b0 = local_108;
        local_1a8 = 0;
        if (local_100 == '\0') {
          if (local_108 != 0) {
            uVar33 = FUN_00d50b00();
          }
        }
        else {
          local_100 = '\0';
        }
        local_1a8 = '\x01';
        FUN_016ac280(uVar33,&local_1b0);
        if (local_48 == (code *)0x0) {
          bVar29 = false;
        }
        else {
          FUN_016ab300();
          lVar17 = *(longlong *)(puVar14[2] + local_50 * 8);
          lVar18 = local_50;
          pvVar12 = _pthread_getspecific((pthread_key_t)local_50);
          pVar19 = (pthread_key_t)lVar18;
          if ((pvVar12 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
            lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar18 + 0x154) & 1) * 8);
          }
          lVar17 = *(longlong *)(lVar17 + 0x60);
          if (lVar17 != 0) {
            FUN_00d50b00();
          }
          pvVar12 = _pthread_getspecific(pVar19);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar33 = FUN_01770c90();
          local_190 = local_f8;
          local_188 = 0;
          if (local_f0 == '\0') {
            if (local_f8 != 0) {
              uVar33 = FUN_00d50b00();
            }
          }
          else {
            local_f0 = '\0';
          }
          local_188 = '\x01';
          FUN_016ac280(uVar33,&local_190);
          bVar29 = local_1e0 != 0;
          if ((local_1d8 != '\0') && (local_1e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_188 != '\0') && (local_190 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
          if (lVar17 != 0) {
            FUN_00d50b20();
          }
          if ((local_198 != '\0') && (local_1a0 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1a8 != '\0') && (local_1b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if (lVar25 != 0) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (bVar29) {
          FUN_016ab300();
          lVar25 = unaff_RDI[0xc];
          if (lVar25 != 0) {
            FUN_00d50b00();
          }
          pvVar12 = _pthread_getspecific(pVar19);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar33 = FUN_01770c90();
          local_180 = local_108;
          local_178 = 0;
          if (local_100 == '\0') {
            if (local_108 != 0) {
              uVar33 = FUN_00d50b00();
            }
          }
          else {
            local_100 = '\0';
          }
          local_178 = '\x01';
          FUN_016ac280(uVar33,&local_180);
          FUN_016ab300();
          lVar17 = *(longlong *)(puVar14[2] + local_50 * 8);
          lVar18 = local_50;
          pvVar12 = _pthread_getspecific((pthread_key_t)local_50);
          pVar19 = (pthread_key_t)lVar18;
          if ((pvVar12 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
            lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar18 + 0x154) & 1) * 8);
          }
          lVar17 = *(longlong *)(lVar17 + 0x60);
          if (lVar17 != 0) {
            FUN_00d50b00();
          }
          pvVar12 = _pthread_getspecific(pVar19);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar33 = FUN_01770c90();
          local_160 = local_f8;
          local_158 = 0;
          if (local_f0 == '\0') {
            if (local_f8 != 0) {
              uVar33 = FUN_00d50b00();
            }
          }
          else {
            local_f0 = '\0';
          }
          local_158 = '\x01';
          FUN_016ac280(uVar33,&local_160);
          local_170 = local_1e0;
          local_168 = 0;
          if (local_1d8 == '\0') {
            if (local_1e0 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_1d8 = '\0';
          }
          local_168 = '\x01';
          cVar8 = (**(code **)(*(longlong *)local_48 + 0x50))();
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1d8 != '\0') && (local_1e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
          if (lVar17 != 0) {
            FUN_00d50b20();
          }
          if ((local_198 != '\0') && (local_1a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != 0)) {
            FUN_00d50b20();
          }
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if (lVar25 != 0) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if (cVar8 != '\0') {
            pcVar22 = *(code **)(puVar14[2] + local_50 * 8);
            if (pcVar22 == (code *)0x0) goto LAB_01756ee6;
            FUN_00d50b00();
            pVar19 = (pthread_key_t)local_50;
            goto LAB_01756f86;
          }
        }
        local_50 = local_50 + 1;
        pcVar21 = (code *)(longlong)*(int *)((longlong)puVar14 + 0xc);
      } while (local_50 < (longlong)pcVar21);
    }
    if (0 < (int)pcVar21) {
      pcVar22 = (code *)((ulonglong)pcVar21 & 0xffffffff);
      pcVar21 = (code *)0x0;
      do {
        if (*(int *)(puVar16[2] + (longlong)pcVar21 * 4) == 0) {
          pcVar22 = *(code **)(puVar14[2] + (longlong)pcVar21 * 8);
          if (pcVar22 != (code *)0x0) {
            FUN_00d50b00();
            pVar19 = (pthread_key_t)pcVar21;
            goto LAB_01756f86;
          }
          break;
        }
        pcVar21 = pcVar21 + 1;
      } while (pcVar22 != pcVar21);
    }
    pVar19 = (pthread_key_t)pcVar21;
    pcVar22 = *(code **)puVar14[2];
    if (pcVar22 == (code *)0x0) goto LAB_01756fbe;
    FUN_00d50b00();
LAB_01756f86:
    pvVar12 = _pthread_getspecific(pVar19);
    if ((pvVar12 != (void *)0x0) && (lVar25 = FUN_00e8b990(), lVar25 != 0)) {
      pVar19 = (pthread_key_t)pcVar1;
    }
    pvVar12 = _pthread_getspecific(pVar19);
    if ((pvVar12 == (void *)0x0) || (lVar25 = FUN_00e8b990(), lVar25 == 0)) {
      lVar25 = *(longlong *)(pcVar22 + 0x60);
    }
    else {
      lVar25 = *(longlong *)
                (*(longlong *)(pcVar22 + (ulonglong)(*(uint *)(lVar25 + 0x154) & 1) * 8 + 0x20) +
                0x60);
    }
    if (lVar25 != 0) {
      FUN_00d50b00();
    }
    pvVar12 = _pthread_getspecific(pVar19);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01770c90();
    local_148 = 0;
    if (local_40 == '\0') {
      if (local_48 != (code *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_148 = '\x01';
    local_150 = local_48;
    FUN_0176fd70();
    if ((local_148 != '\0') && (local_150 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar25 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (puVar16 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar15 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar14 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_130 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar13 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (pcVar7 != (code *)0x0) {
    FUN_00d50b20();
  }
LAB_01757228:
  if (local_1e8 != (code *)0x0) {
    FUN_00d50b20();
  }
  if (pcVar1 != (code *)0x0) {
    FUN_00d50b20();
  }
  return;
}


