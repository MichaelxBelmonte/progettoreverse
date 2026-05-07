// Function: FUN_00f29ac8
// Address: 00f29ac8
// Size: 5682 bytes
// Class: Unknown


/* WARNING: Type propagation algorithm not settling */

byte * FUN_00f29ac8(ulonglong *param_1,longlong param_2,byte *param_3,int param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  void *pvVar9;
  sbyte sVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong *puVar14;
  byte **ppbVar15;
  byte *pbVar16;
  int iVar17;
  byte *pbVar18;
  ulonglong uVar19;
  byte *pbVar20;
  ulonglong uVar21;
  byte *unaff_RSI;
  byte *pbVar22;
  undefined8 *unaff_RDI;
  size_t sVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined1 *puVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  undefined4 uVar33;
  byte *local_e0;
  ulonglong local_d8;
  uint local_d0;
  ulonglong *local_c8;
  byte *local_b0;
  longlong local_a8;
  byte *local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  byte *local_80 [4];
  ulonglong local_60;
  byte *local_58;
  int local_4c;
  byte *local_48;
  byte *local_40;
  
  pbVar18 = unaff_RSI + param_2;
  local_80[3] = (byte *)unaff_RDI[0xeb5];
  local_e0 = (byte *)unaff_RDI[0xed3];
  pbVar29 = unaff_RSI;
  if (param_4 == 0) goto LAB_00f29bb9;
  pbVar22 = (byte *)unaff_RDI[0xe99];
  lVar13 = unaff_RDI[0xe9a];
  pvVar9 = (void *)unaff_RDI[0xe9b];
  *(undefined4 *)((longlong)unaff_RDI + 0x7534) = 1;
  lVar12 = 0;
  do {
    local_80[lVar12] = (byte *)(ulonglong)*(uint *)((longlong)unaff_RDI + lVar12 * 4 + 0x683c);
    lVar12 = lVar12 + 1;
  } while (lVar12 != 3);
  if (param_3 == (byte *)0x0) {
    return (byte *)0xffffffffffffffec;
  }
  puVar14 = param_1 + 1;
  if (param_3 < &MACH_HEADER.cpusubtype) {
    local_d8 = (ulonglong)(byte)*param_1;
    switch(param_3) {
    case (byte *)0x7:
      local_d8 = local_d8 | (ulonglong)*(byte *)((longlong)param_1 + 6) << 0x30;
    case (byte *)0x6:
      local_d8 = local_d8 + ((ulonglong)*(byte *)((longlong)param_1 + 5) << 0x28);
    case (byte *)0x5:
      local_d8 = local_d8 + ((ulonglong)*(byte *)((longlong)param_1 + 4) << 0x20);
    case (byte *)0x4:
      local_d8 = local_d8 + (ulonglong)*(byte *)((longlong)param_1 + 3) * 0x1000000;
    case (byte *)0x3:
      local_d8 = local_d8 + (ulonglong)*(byte *)((longlong)param_1 + 2) * 0x10000;
    case (byte *)0x2:
      local_d8 = (ulonglong)*(byte *)((longlong)param_1 + 1) * 0x100 + local_d8;
    }
    if ((param_3 + -1)[(longlong)param_1] == 0) {
      return (byte *)0xffffffffffffffec;
    }
    local_d0 = LZCOUNT((uint)(param_3 + -1)[(longlong)param_1]) + (int)param_3 * -8 + 0x29;
    local_c8 = param_1;
  }
  else {
    local_c8 = (ulonglong *)(param_3 + (longlong)param_1 + -8);
    local_d8 = *local_c8;
    if (local_d8 >> 0x38 == 0) {
      return (byte *)0xffffffffffffffec;
    }
    local_d0 = LZCOUNT((uint)(byte)(local_d8 >> 0x38)) - 0x17;
    if ((byte *)0xffffffffffffff88 < param_3) {
      return (byte *)0xffffffffffffffec;
    }
  }
  local_48 = pbVar18;
  local_40 = local_80[3];
  uVar33 = FUN_00f295dc(param_1,*unaff_RDI);
  uVar33 = FUN_00f295dc(uVar33,unaff_RDI[2]);
  FUN_00f295dc(uVar33,unaff_RDI[1]);
  pbVar18 = local_80[1];
  puVar28 = (undefined1 *)(ulonglong)*(uint *)(local_88 + 4 + local_90 * 8);
  uVar26 = *(uint *)(local_a8 + 4 + (longlong)local_b0 * 8);
  uVar27 = (ulonglong)uVar26;
  uVar8 = *(uint *)(local_98 + 4 + (longlong)local_a0 * 8);
  bVar2 = *(byte *)(local_a8 + 2 + (longlong)local_b0 * 8);
  bVar3 = *(byte *)(local_88 + 2 + local_90 * 8);
  bVar4 = *(byte *)(local_98 + 2 + (longlong)local_a0 * 8);
  bVar5 = *(byte *)(local_a8 + 3 + (longlong)local_b0 * 8);
  bVar6 = *(byte *)(local_88 + 3 + local_90 * 8);
  bVar7 = *(byte *)(local_98 + 3 + (longlong)local_a0 * 8);
  local_58 = (byte *)(ulonglong)bVar7;
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      param_3 = local_80[uVar26 == 0];
      local_80[1] = local_80[uVar26 != 0];
      goto LAB_00f29dc6;
    }
    uVar21 = (ulonglong)local_d0;
    local_d0 = local_d0 + 1;
    lVar12 = (ulonglong)(uVar8 + (uVar26 == 0)) - ((longlong)(local_d8 << (uVar21 & 0x3f)) >> 0x3f);
    if (lVar12 == 3) {
      param_3 = local_80[0] + -1 + (local_80[0] + -1 == (byte *)0x0);
LAB_00f2b06a:
      local_80[2] = local_80[1];
    }
    else {
      param_3 = local_80[lVar12] + (local_80[lVar12] == (byte *)0x0);
      if (lVar12 != 1) goto LAB_00f2b06a;
    }
    local_80[1] = local_80[0];
    local_80[0] = param_3;
  }
  else {
    uVar21 = (ulonglong)local_d0;
    local_d0 = local_d0 + bVar4;
    param_3 = (byte *)(((local_d8 << (uVar21 & 0x3f)) >> ((ulonglong)(byte)-bVar4 & 0x3f)) +
                      (ulonglong)uVar8);
    local_80[1] = local_80[0];
    local_80[2] = pbVar18;
LAB_00f29dc6:
    local_80[0] = param_3;
  }
  if (bVar3 != 0) {
    uVar21 = (ulonglong)local_d0;
    local_d0 = local_d0 + bVar3;
    puVar28 = puVar28 + ((local_d8 << (uVar21 & 0x3f)) >> ((ulonglong)(byte)-bVar3 & 0x3f));
  }
  uVar21 = (ulonglong)local_d0;
  iVar24 = (int)param_1;
  if ((0x1e < (byte)(bVar3 + bVar2 + bVar4)) && (local_d0 < 0x41)) {
    if (local_c8 < puVar14) {
      if (local_c8 == param_1) goto LAB_00f29e1a;
      uVar21 = (ulonglong)(uint)((int)local_c8 - iVar24);
      if (param_1 <= (ulonglong *)((longlong)local_c8 - (ulonglong)(local_d0 >> 3))) {
        uVar21 = (ulonglong)(local_d0 >> 3);
      }
      local_d0 = local_d0 + (int)uVar21 * -8;
    }
    else {
      uVar21 = (ulonglong)(local_d0 >> 3);
      local_d0 = local_d0 & 7;
    }
    local_c8 = (ulonglong *)((longlong)local_c8 - uVar21);
    uVar21 = (ulonglong)local_d0;
    local_d8 = *local_c8;
  }
LAB_00f29e1a:
  iVar17 = (int)uVar21;
  if (bVar2 != 0) {
    iVar17 = iVar17 + (uint)bVar2;
    uVar27 = uVar27 + ((local_d8 << (uVar21 & 0x3f)) >> ((ulonglong)(byte)-bVar2 & 0x3f));
  }
  sVar10 = (bVar5 < 0x41) * ('@' - bVar5);
  local_b0 = (byte *)((((local_d8 >> ((ulonglong)(byte)-(char)(iVar17 + (uint)bVar5) & 0x3f)) <<
                       sVar10) >> sVar10) +
                     (ulonglong)*(ushort *)(local_a8 + (longlong)local_b0 * 8));
  iVar17 = iVar17 + (uint)bVar5 + (uint)bVar6;
  sVar10 = (bVar6 < 0x41) * ('@' - bVar6);
  local_90 = (((local_d8 >> ((ulonglong)(byte)-(char)iVar17 & 0x3f)) << sVar10) >> sVar10) +
             (ulonglong)*(ushort *)(local_88 + local_90 * 8);
  local_d0 = iVar17 + (uint)bVar7;
  sVar10 = (bVar7 < 0x41) * ('@' - bVar7);
  local_a0 = (byte *)((((local_d8 >> ((ulonglong)(byte)-(char)local_d0 & 0x3f)) << sVar10) >> sVar10
                      ) + (ulonglong)*(ushort *)(local_98 + (longlong)local_a0 * 8));
  pbVar18 = local_40 + uVar27;
  pbVar20 = (byte *)unaff_RDI[0xed3];
  pbVar31 = local_40;
  local_80[0] = param_3;
  if (pbVar18 <= pbVar20) {
    do {
      pbVar20 = local_80[0];
      if ((local_e0 < pbVar18) ||
         (pbVar30 = puVar28 + uVar27, pbVar18 + -0x20 < pbVar29 + (longlong)pbVar30)) {
        param_3 = local_e0;
        pbVar30 = (byte *)FUN_00f299af(local_80 + 3,pbVar18 + -0x20,local_e0,pbVar22,pvVar9);
      }
      else {
        pbVar32 = pbVar29 + uVar27;
        uVar11 = *(undefined8 *)(pbVar31 + 8);
        *(undefined8 *)pbVar29 = *(undefined8 *)pbVar31;
        *(undefined8 *)(pbVar29 + 8) = uVar11;
        if (0x10 < uVar27) {
          uVar11 = *(undefined8 *)(pbVar31 + 0x18);
          *(undefined8 *)(pbVar29 + 0x10) = *(undefined8 *)(pbVar31 + 0x10);
          *(undefined8 *)(pbVar29 + 0x18) = uVar11;
          if (0x10 < (longlong)(uVar27 - 0x10)) {
            lVar12 = 0;
            do {
              uVar11 = *(undefined8 *)(pbVar31 + lVar12 + 0x20 + 8);
              pbVar16 = pbVar29 + lVar12 + 0x20;
              *(undefined8 *)pbVar16 = *(undefined8 *)(pbVar31 + lVar12 + 0x20);
              *(undefined8 *)(pbVar16 + 8) = uVar11;
              uVar11 = *(undefined8 *)(pbVar31 + lVar12 + 0x30 + 8);
              *(undefined8 *)(pbVar16 + 0x10) = *(undefined8 *)(pbVar31 + lVar12 + 0x30);
              *(undefined8 *)(pbVar16 + 0x18) = uVar11;
              lVar12 = lVar12 + 0x20;
            } while (pbVar16 + 0x20 < pbVar32);
          }
        }
        pbVar31 = pbVar32 + -(longlong)local_80[0];
        local_80[3] = pbVar18;
        if (pbVar32 + -(longlong)pbVar22 < local_80[0]) {
          if (pbVar32 + -lVar13 < local_80[0]) {
            return (byte *)0xffffffffffffffec;
          }
          lVar12 = (longlong)pbVar31 - (longlong)pbVar22;
          local_58 = pbVar30;
          if ((void *)((longlong)((longlong)pvVar9 + lVar12) + (longlong)puVar28) <= pvVar9) {
            _memmove(pvVar9,puVar28,(size_t)param_3);
            pbVar30 = local_58;
            goto LAB_00f2a07d;
          }
          local_40 = (byte *)CONCAT44(local_40._4_4_,param_4);
          _memmove(pvVar9,(void *)-lVar12,(size_t)param_3);
          pbVar32 = pbVar32 + -lVar12;
          puVar28 = puVar28 + lVar12;
          pbVar31 = pbVar22;
          pbVar30 = local_58;
        }
        else {
          local_40 = (byte *)CONCAT44(local_40._4_4_,param_4);
        }
        param_4 = (int)local_40;
        if (pbVar20 < &MACH_HEADER.ncmds) {
          if ((byte *)((longlong)&MACH_HEADER.cputype + 3) < pbVar20) {
            *(undefined8 *)pbVar32 = *(undefined8 *)pbVar31;
          }
          else {
            iVar17 = *(int *)(&DAT_023e4ca0 + (longlong)pbVar20 * 4);
            *pbVar32 = *pbVar31;
            pbVar32[1] = pbVar31[1];
            pbVar32[2] = pbVar31[2];
            pbVar32[3] = pbVar31[3];
            pbVar18 = pbVar31 + *(uint *)(&DAT_023e4c80 + (longlong)pbVar20 * 4);
            pbVar31 = pbVar31 + ((ulonglong)*(uint *)(&DAT_023e4c80 + (longlong)pbVar20 * 4) -
                                (longlong)iVar17);
            *(undefined4 *)(pbVar32 + 4) = *(undefined4 *)pbVar18;
          }
          if (&MACH_HEADER.cpusubtype < puVar28) {
            pbVar18 = pbVar31 + 8;
            pbVar20 = pbVar32 + 8;
            if ((longlong)pbVar20 - (longlong)pbVar18 < 0x10) {
              do {
                *(undefined8 *)pbVar20 = *(undefined8 *)pbVar18;
                pbVar20 = pbVar20 + 8;
                pbVar18 = pbVar18 + 8;
              } while (pbVar20 < pbVar32 + (longlong)puVar28);
            }
            else {
              uVar11 = *(undefined8 *)(pbVar31 + 0x10);
              *(undefined8 *)pbVar20 = *(undefined8 *)pbVar18;
              *(undefined8 *)(pbVar32 + 0x10) = uVar11;
              if (0x18 < (longlong)puVar28) {
                lVar12 = 0;
                do {
                  uVar11 = *(undefined8 *)(pbVar31 + lVar12 + 0x18 + 8);
                  pbVar18 = pbVar32 + lVar12 + 0x18;
                  *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar31 + lVar12 + 0x18);
                  *(undefined8 *)(pbVar18 + 8) = uVar11;
                  uVar11 = *(undefined8 *)(pbVar31 + lVar12 + 0x28 + 8);
                  *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)(pbVar31 + lVar12 + 0x28);
                  *(undefined8 *)(pbVar18 + 0x18) = uVar11;
                  lVar12 = lVar12 + 0x20;
                } while (pbVar18 + 0x20 < pbVar32 + (longlong)puVar28);
              }
            }
          }
        }
        else {
          uVar11 = *(undefined8 *)(pbVar31 + 8);
          *(undefined8 *)pbVar32 = *(undefined8 *)pbVar31;
          *(undefined8 *)(pbVar32 + 8) = uVar11;
          if (0x10 < (longlong)puVar28) {
            lVar12 = 0x10;
            do {
              uVar11 = *(undefined8 *)(pbVar31 + lVar12 + 8);
              pbVar18 = pbVar32 + lVar12;
              *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar31 + lVar12);
              *(undefined8 *)(pbVar18 + 8) = uVar11;
              uVar11 = *(undefined8 *)(pbVar31 + lVar12 + 0x10 + 8);
              *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)(pbVar31 + lVar12 + 0x10);
              *(undefined8 *)(pbVar18 + 0x18) = uVar11;
              lVar12 = lVar12 + 0x20;
            } while (pbVar18 + 0x20 < puVar28 + (longlong)pbVar32);
          }
        }
      }
LAB_00f2a07d:
      if ((byte *)0xffffffffffffff88 < pbVar30) {
        return pbVar30;
      }
      pbVar29 = pbVar29 + (longlong)pbVar30;
      param_4 = param_4 + -1;
      pbVar18 = local_48;
      if (param_4 == 0) goto LAB_00f2adb7;
      uVar21 = (ulonglong)local_d0;
      local_40 = (byte *)CONCAT44(local_40._4_4_,param_4);
      if (uVar21 < 0x41) {
        if (local_c8 < puVar14) {
          if (local_c8 == param_1) goto LAB_00f2a109;
          uVar27 = (ulonglong)(uint)((int)local_c8 - iVar24);
          if (param_1 <= (ulonglong *)((longlong)local_c8 - (ulonglong)(local_d0 >> 3))) {
            uVar27 = (ulonglong)(local_d0 >> 3);
          }
          local_d0 = local_d0 + (int)uVar27 * -8;
        }
        else {
          uVar27 = (ulonglong)(local_d0 >> 3);
          local_d0 = local_d0 & 7;
        }
        local_c8 = (ulonglong *)((longlong)local_c8 - uVar27);
        uVar21 = (ulonglong)local_d0;
        local_d8 = *local_c8;
      }
LAB_00f2a109:
      puVar28 = (undefined1 *)(ulonglong)*(uint *)(local_88 + 4 + local_90 * 8);
      uVar26 = *(uint *)(local_a8 + 4 + (longlong)local_b0 * 8);
      uVar27 = (ulonglong)uVar26;
      uVar8 = *(uint *)(local_98 + 4 + (longlong)local_a0 * 8);
      bVar2 = *(byte *)(local_a8 + 2 + (longlong)local_b0 * 8);
      param_3 = (byte *)(ulonglong)bVar2;
      bVar3 = *(byte *)(local_88 + 2 + local_90 * 8);
      bVar4 = *(byte *)(local_98 + 2 + (longlong)local_a0 * 8);
      bVar5 = *(byte *)(local_a8 + 3 + (longlong)local_b0 * 8);
      local_60 = (ulonglong)bVar5;
      bVar6 = *(byte *)(local_88 + 3 + local_90 * 8);
      local_58 = (byte *)(ulonglong)*(ushort *)(local_98 + (longlong)local_a0 * 8);
      bVar7 = *(byte *)(local_98 + 3 + (longlong)local_a0 * 8);
      if (bVar4 < 2) {
        if (bVar4 == 0) {
          local_80[0] = local_80[uVar26 == 0];
          ppbVar15 = local_80 + (uVar26 != 0);
        }
        else {
          uVar19 = uVar21 & 0x3f;
          uVar21 = (ulonglong)((int)uVar21 + 1);
          lVar12 = (ulonglong)(uVar8 + (uVar26 == 0)) - ((longlong)(local_d8 << uVar19) >> 0x3f);
          if (lVar12 == 3) {
            local_80[0] = local_80[0] + -1 + (local_80[0] + -1 == (byte *)0x0);
LAB_00f2a4cb:
            local_80[2] = local_80[1];
          }
          else {
            local_80[0] = local_80[lVar12] + (local_80[lVar12] == (byte *)0x0);
            if (lVar12 != 1) goto LAB_00f2a4cb;
          }
          ppbVar15 = local_80;
        }
      }
      else {
        uVar19 = uVar21 & 0x3f;
        uVar21 = (ulonglong)((int)uVar21 + (uint)bVar4);
        local_80[0] = (byte *)(((local_d8 << uVar19) >> ((ulonglong)(byte)-bVar4 & 0x3f)) +
                              (ulonglong)uVar8);
        local_80[2] = local_80[1];
        ppbVar15 = local_80;
      }
      local_80[1] = *ppbVar15;
      if (bVar3 != 0) {
        uVar19 = uVar21 & 0x3f;
        uVar21 = (ulonglong)((int)uVar21 + (uint)bVar3);
        puVar28 = puVar28 + ((local_d8 << uVar19) >> ((ulonglong)(byte)-bVar3 & 0x3f));
      }
      if ((0x1e < (byte)(bVar3 + bVar2 + bVar4)) && (uVar26 = (uint)uVar21, uVar26 < 0x41)) {
        if (local_c8 < puVar14) {
          if (local_c8 == param_1) goto LAB_00f2a222;
          uVar19 = (ulonglong)(uint)((int)local_c8 - iVar24);
          if (param_1 <= (ulonglong *)((longlong)local_c8 - (uVar21 >> 3))) {
            uVar19 = uVar21 >> 3;
          }
          uVar26 = uVar26 + (int)uVar19 * -8;
        }
        else {
          uVar19 = uVar21 >> 3;
          uVar26 = uVar26 & 7;
        }
        local_c8 = (ulonglong *)((longlong)local_c8 - uVar19);
        uVar21 = (ulonglong)uVar26;
        local_d8 = *local_c8;
      }
LAB_00f2a222:
      iVar17 = (int)uVar21;
      if (bVar2 != 0) {
        iVar17 = iVar17 + (uint)bVar2;
        uVar27 = uVar27 + ((local_d8 << (uVar21 & 0x3f)) >> ((ulonglong)(byte)-bVar2 & 0x3f));
      }
      sVar10 = (bVar5 < 0x41) * ('@' - bVar5);
      local_b0 = (byte *)((((local_d8 >> ((ulonglong)(byte)-(char)(iVar17 + (uint)bVar5) & 0x3f)) <<
                           sVar10) >> sVar10) +
                         (ulonglong)*(ushort *)(local_a8 + (longlong)local_b0 * 8));
      iVar17 = iVar17 + (uint)bVar5 + (uint)bVar6;
      sVar10 = (bVar6 < 0x41) * ('@' - bVar6);
      local_90 = (((local_d8 >> ((ulonglong)(byte)-(char)iVar17 & 0x3f)) << sVar10) >> sVar10) +
                 (ulonglong)*(ushort *)(local_88 + local_90 * 8);
      local_d0 = iVar17 + (uint)bVar7;
      sVar10 = (bVar7 < 0x41) * ('@' - bVar7);
      local_a0 = local_58 +
                 (((local_d8 >> ((ulonglong)(byte)-(char)local_d0 & 0x3f)) << sVar10) >> sVar10);
      pbVar18 = local_80[3] + uVar27;
      pbVar20 = (byte *)unaff_RDI[0xed3];
      pbVar31 = local_80[3];
    } while (pbVar18 <= pbVar20);
  }
  if (param_4 < 1) {
    return (byte *)0xffffffffffffffec;
  }
  uVar21 = (longlong)pbVar20 - (longlong)pbVar31;
  pbVar20 = local_80[0];
  if (uVar21 != 0) {
    if ((ulonglong)((longlong)local_48 - (longlong)pbVar29) < uVar21) {
      return (byte *)0xffffffffffffffba;
    }
    local_40 = local_80[0];
    FUN_00f29676(unaff_RDI,uVar21);
    uVar27 = uVar27 - uVar21;
    pbVar29 = pbVar29 + uVar21;
    pbVar20 = local_40;
  }
  pbVar18 = local_48;
  local_40 = (byte *)CONCAT44(local_40._4_4_,param_4);
  local_80[3] = (byte *)((longlong)unaff_RDI + 0x76a4);
  local_e0 = (byte *)((longlong)unaff_RDI + 0x176a4);
  *(undefined4 *)(unaff_RDI + 0xed4) = 0;
  if (((longlong)uVar27 < 0x10001) &&
     (pbVar31 = puVar28 + uVar27, pbVar29 + (longlong)pbVar31 <= local_48 + -0x20)) {
    pbVar30 = pbVar29 + uVar27;
    uVar11 = *(undefined8 *)((longlong)unaff_RDI + 0x76ac);
    *(undefined8 *)pbVar29 = *(undefined8 *)local_80[3];
    *(undefined8 *)(pbVar29 + 8) = uVar11;
    if (0x10 < uVar27) {
      uVar11 = *(undefined8 *)((longlong)unaff_RDI + 0x76bc);
      *(undefined8 *)(pbVar29 + 0x10) = *(undefined8 *)((longlong)unaff_RDI + 0x76b4);
      *(undefined8 *)(pbVar29 + 0x18) = uVar11;
      if (0x10 < (longlong)(uVar27 - 0x10)) {
        lVar12 = 0;
        do {
          puVar1 = (undefined8 *)((longlong)unaff_RDI + lVar12 + 0x76c4);
          uVar11 = puVar1[1];
          pbVar18 = pbVar29 + lVar12 + 0x20;
          *(undefined8 *)pbVar18 = *puVar1;
          *(undefined8 *)(pbVar18 + 8) = uVar11;
          puVar1 = (undefined8 *)((longlong)unaff_RDI + lVar12 + 0x76d4);
          uVar11 = puVar1[1];
          *(undefined8 *)(pbVar18 + 0x10) = *puVar1;
          *(undefined8 *)(pbVar18 + 0x18) = uVar11;
          lVar12 = lVar12 + 0x20;
        } while (pbVar18 + 0x20 < pbVar30);
      }
    }
    local_80[3] = (byte *)((longlong)unaff_RDI + uVar27 + 0x76a4);
    pbVar32 = pbVar30 + -(longlong)pbVar20;
    if (pbVar30 + -(longlong)pbVar22 < pbVar20) {
      if (pbVar30 + -lVar13 < pbVar20) {
        return (byte *)0xffffffffffffffec;
      }
      lVar12 = (longlong)(pbVar30 + -(longlong)pbVar20) - (longlong)pbVar22;
      local_58 = pbVar31;
      if ((void *)((longlong)((longlong)pvVar9 + lVar12) + (longlong)puVar28) <= pvVar9) {
        _memmove(pvVar9,puVar28,(size_t)param_3);
        pbVar18 = local_48;
        pbVar31 = local_58;
        goto LAB_00f2a6f4;
      }
      _memmove(pvVar9,(void *)-lVar12,(size_t)param_3);
      pbVar30 = pbVar30 + -lVar12;
      puVar28 = puVar28 + lVar12;
      pbVar32 = pbVar22;
      pbVar31 = local_58;
    }
    pbVar18 = local_48;
    if (pbVar20 < &MACH_HEADER.ncmds) {
      if ((byte *)((longlong)&MACH_HEADER.cputype + 3) < pbVar20) {
        *(undefined8 *)pbVar30 = *(undefined8 *)pbVar32;
      }
      else {
        iVar17 = *(int *)(&DAT_023e4ca0 + (longlong)pbVar20 * 4);
        *pbVar30 = *pbVar32;
        pbVar30[1] = pbVar32[1];
        pbVar30[2] = pbVar32[2];
        pbVar30[3] = pbVar32[3];
        pbVar16 = pbVar32 + *(uint *)(&DAT_023e4c80 + (longlong)pbVar20 * 4);
        pbVar32 = pbVar32 + ((ulonglong)*(uint *)(&DAT_023e4c80 + (longlong)pbVar20 * 4) -
                            (longlong)iVar17);
        *(undefined4 *)(pbVar30 + 4) = *(undefined4 *)pbVar16;
      }
      if (&MACH_HEADER.cpusubtype < puVar28) {
        pbVar20 = pbVar32 + 8;
        pbVar16 = pbVar30 + 8;
        if ((longlong)pbVar16 - (longlong)pbVar20 < 0x10) {
          do {
            *(undefined8 *)pbVar16 = *(undefined8 *)pbVar20;
            pbVar16 = pbVar16 + 8;
            pbVar20 = pbVar20 + 8;
          } while (pbVar16 < pbVar30 + (longlong)puVar28);
        }
        else {
          uVar11 = *(undefined8 *)(pbVar32 + 0x10);
          *(undefined8 *)pbVar16 = *(undefined8 *)pbVar20;
          *(undefined8 *)(pbVar30 + 0x10) = uVar11;
          if (0x18 < (longlong)puVar28) {
            lVar12 = 0;
            do {
              uVar11 = *(undefined8 *)(pbVar32 + lVar12 + 0x18 + 8);
              pbVar20 = pbVar30 + lVar12 + 0x18;
              *(undefined8 *)pbVar20 = *(undefined8 *)(pbVar32 + lVar12 + 0x18);
              *(undefined8 *)(pbVar20 + 8) = uVar11;
              uVar11 = *(undefined8 *)(pbVar32 + lVar12 + 0x28 + 8);
              *(undefined8 *)(pbVar20 + 0x10) = *(undefined8 *)(pbVar32 + lVar12 + 0x28);
              *(undefined8 *)(pbVar20 + 0x18) = uVar11;
              lVar12 = lVar12 + 0x20;
            } while (pbVar20 + 0x20 < pbVar30 + (longlong)puVar28);
          }
        }
      }
    }
    else {
      uVar11 = *(undefined8 *)(pbVar32 + 8);
      *(undefined8 *)pbVar30 = *(undefined8 *)pbVar32;
      *(undefined8 *)(pbVar30 + 8) = uVar11;
      if (0x10 < (longlong)puVar28) {
        lVar12 = 0x10;
        do {
          uVar11 = *(undefined8 *)(pbVar32 + lVar12 + 8);
          pbVar20 = pbVar30 + lVar12;
          *(undefined8 *)pbVar20 = *(undefined8 *)(pbVar32 + lVar12);
          *(undefined8 *)(pbVar20 + 8) = uVar11;
          uVar11 = *(undefined8 *)(pbVar32 + lVar12 + 0x10 + 8);
          *(undefined8 *)(pbVar20 + 0x10) = *(undefined8 *)(pbVar32 + lVar12 + 0x10);
          *(undefined8 *)(pbVar20 + 0x18) = uVar11;
          lVar12 = lVar12 + 0x20;
        } while (pbVar20 + 0x20 < puVar28 + (longlong)pbVar30);
      }
    }
  }
  else {
    param_3 = pbVar22;
    pbVar31 = (byte *)FUN_00f2970d(local_e0,local_80 + 3,pbVar22,lVar13);
  }
LAB_00f2a6f4:
  if ((byte *)0xffffffffffffff88 < pbVar31) {
    return pbVar31;
  }
  pbVar29 = pbVar29 + (longlong)pbVar31;
  iVar17 = (int)local_40 + -1;
  if (iVar17 == 0) {
LAB_00f2adb7:
    if (local_d0 < 0x41) {
      if (puVar14 <= local_c8) {
        return (byte *)0xffffffffffffffec;
      }
      if (local_c8 != param_1) {
        return (byte *)0xffffffffffffffec;
      }
      pbVar18 = local_48;
      if (local_d0 < 0x40) {
        return (byte *)0xffffffffffffffec;
      }
    }
    lVar13 = 0;
    do {
      param_1 = (ulonglong *)(ulonglong)*(uint *)(local_80 + lVar13);
      *(uint *)((longlong)unaff_RDI + lVar13 * 4 + 0x683c) = *(uint *)(local_80 + lVar13);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
LAB_00f29bb9:
    sVar23 = (size_t)param_3;
    pbVar22 = local_80[3];
    if (*(int *)(unaff_RDI + 0xed4) == 2) {
      param_1 = (ulonglong *)(local_e0 + -(longlong)local_80[3]);
      if (pbVar18 + -(longlong)pbVar29 < param_1) {
        return (byte *)0xffffffffffffffba;
      }
      if (pbVar29 == (byte *)0x0) {
        pbVar29 = (byte *)0x0;
      }
      else {
        puVar14 = param_1;
        _memmove(param_1,param_1,sVar23);
        pbVar29 = pbVar29 + (longlong)param_1;
        param_1 = puVar14;
      }
      pbVar22 = (byte *)((longlong)unaff_RDI + 0x76a4);
      *(undefined4 *)(unaff_RDI + 0xed4) = 0;
      local_e0 = (byte *)((longlong)unaff_RDI + 0x176a4);
    }
    local_e0 = local_e0 + -(longlong)pbVar22;
    if (local_e0 <= pbVar18 + -(longlong)pbVar29) {
      if (pbVar29 == (byte *)0x0) {
        pbVar29 = (byte *)0x0;
      }
      else {
        _memcpy(param_1,local_e0,sVar23);
        pbVar29 = pbVar29 + (longlong)local_e0;
      }
      return pbVar29 + -(longlong)unaff_RSI;
    }
    return (byte *)0xffffffffffffffba;
  }
  uVar27 = (ulonglong)local_d0;
  pbVar20 = pbVar18;
  if (uVar27 < 0x41) {
    pbVar20 = local_48;
    if (local_c8 < puVar14) {
      if (local_c8 == param_1) goto LAB_00f2a793;
      uVar27 = (ulonglong)(uint)((int)local_c8 - iVar24);
      if (param_1 <= (ulonglong *)((longlong)local_c8 - (ulonglong)(local_d0 >> 3))) {
        uVar27 = (ulonglong)(local_d0 >> 3);
      }
      local_d0 = local_d0 + (int)uVar27 * -8;
    }
    else {
      uVar27 = (ulonglong)(local_d0 >> 3);
      local_d0 = local_d0 & 7;
    }
    local_c8 = (ulonglong *)((longlong)local_c8 - uVar27);
    uVar27 = (ulonglong)local_d0;
    local_d8 = *local_c8;
  }
LAB_00f2a793:
  if ((int)local_40 < 2) {
    return (byte *)0xffffffffffffffec;
  }
LAB_00f2a7e3:
  do {
    puVar28 = (undefined1 *)(ulonglong)*(uint *)(local_88 + 4 + local_90 * 8);
    uVar26 = *(uint *)(local_a8 + 4 + (longlong)local_b0 * 8);
    pbVar18 = (byte *)(ulonglong)uVar26;
    local_40 = pbVar18;
    uVar8 = *(uint *)(local_98 + 4 + (longlong)local_a0 * 8);
    bVar2 = *(byte *)(local_a8 + 2 + (longlong)local_b0 * 8);
    bVar3 = *(byte *)(local_88 + 2 + local_90 * 8);
    bVar4 = *(byte *)(local_98 + 2 + (longlong)local_a0 * 8);
    local_58 = (byte *)(ulonglong)*(ushort *)(local_a8 + (longlong)local_b0 * 8);
    bVar5 = *(byte *)(local_a8 + 3 + (longlong)local_b0 * 8);
    local_60 = (ulonglong)*(ushort *)(local_88 + local_90 * 8);
    bVar6 = *(byte *)(local_88 + 3 + local_90 * 8);
    bVar7 = *(byte *)(local_98 + 3 + (longlong)local_a0 * 8);
    local_4c = iVar17;
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        uVar25 = (int)uVar27 + 1;
        lVar12 = (ulonglong)(uVar8 + (uVar26 == 0)) -
                 ((longlong)(local_d8 << (uVar27 & 0x3f)) >> 0x3f);
        if (lVar12 == 3) {
          pbVar31 = local_80[0] + -1 + (local_80[0] + -1 == (byte *)0x0);
        }
        else {
          pbVar31 = local_80[lVar12] + (local_80[lVar12] == (byte *)0x0);
          if (lVar12 == 1) goto LAB_00f2a8a9;
        }
        local_80[2] = local_80[1];
        goto LAB_00f2a8a9;
      }
      pbVar31 = local_80[uVar26 == 0];
      ppbVar15 = local_80 + (uVar26 != 0);
    }
    else {
      uVar25 = (int)uVar27 + (uint)bVar4;
      pbVar31 = (byte *)(((local_d8 << (uVar27 & 0x3f)) >> ((ulonglong)(byte)-bVar4 & 0x3f)) +
                        (ulonglong)uVar8);
      local_80[2] = local_80[1];
LAB_00f2a8a9:
      uVar27 = (ulonglong)uVar25;
      ppbVar15 = local_80;
    }
    local_80[1] = *ppbVar15;
    local_80[0] = pbVar31;
    if (bVar3 != 0) {
      uVar21 = uVar27 & 0x3f;
      uVar27 = (ulonglong)((int)uVar27 + (uint)bVar3);
      puVar28 = puVar28 + ((local_d8 << uVar21) >> ((ulonglong)(byte)-bVar3 & 0x3f));
    }
    if ((0x1e < (byte)(bVar3 + bVar2 + bVar4)) && (uVar26 = (uint)uVar27, uVar26 < 0x41)) {
      if (local_c8 < puVar14) {
        if (local_c8 == param_1) goto LAB_00f2a923;
        uVar21 = (ulonglong)(uint)((int)local_c8 - iVar24);
        if (param_1 <= (ulonglong *)((longlong)local_c8 - (uVar27 >> 3))) {
          uVar21 = uVar27 >> 3;
        }
        uVar26 = uVar26 + (int)uVar21 * -8;
      }
      else {
        uVar21 = uVar27 >> 3;
        uVar26 = uVar26 & 7;
      }
      local_c8 = (ulonglong *)((longlong)local_c8 - uVar21);
      uVar27 = (ulonglong)uVar26;
      local_d8 = *local_c8;
    }
LAB_00f2a923:
    iVar17 = (int)uVar27;
    if (bVar2 != 0) {
      iVar17 = iVar17 + (uint)bVar2;
      pbVar18 = pbVar18 + ((local_d8 << (uVar27 & 0x3f)) >> ((ulonglong)(byte)-bVar2 & 0x3f));
    }
    sVar10 = (bVar5 < 0x41) * ('@' - bVar5);
    local_b0 = local_58 +
               (((local_d8 >> ((ulonglong)(byte)-(char)(iVar17 + (uint)bVar5) & 0x3f)) << sVar10) >>
               sVar10);
    iVar17 = iVar17 + (uint)bVar5 + (uint)bVar6;
    sVar10 = (bVar6 < 0x41) * ('@' - bVar6);
    local_90 = (((local_d8 >> ((ulonglong)(byte)-(char)iVar17 & 0x3f)) << sVar10) >> sVar10) +
               local_60;
    local_d0 = iVar17 + (uint)bVar7;
    sVar10 = (bVar7 < 0x41) * ('@' - bVar7);
    local_a0 = (byte *)((((local_d8 >> ((ulonglong)(byte)-(char)local_d0 & 0x3f)) << sVar10) >>
                        sVar10) + (ulonglong)*(ushort *)(local_98 + (longlong)local_a0 * 8));
    if ((local_e0 < local_80[3] + (longlong)pbVar18) ||
       (pbVar30 = pbVar18 + (longlong)puVar28,
       pbVar20 + 0xffffffffffffffe0 < pbVar29 + (longlong)pbVar30)) {
      param_3 = pbVar22;
      pbVar30 = (byte *)FUN_00f2970d(local_e0,local_80 + 3,pbVar22,lVar13);
    }
    else {
      pbVar32 = pbVar29 + (longlong)pbVar18;
      uVar11 = *(undefined8 *)(local_80[3] + 8);
      *(undefined8 *)pbVar29 = *(undefined8 *)local_80[3];
      *(undefined8 *)(pbVar29 + 8) = uVar11;
      if (&MACH_HEADER.ncmds < pbVar18) {
        uVar11 = *(undefined8 *)(local_80[3] + 0x18);
        *(undefined8 *)(pbVar29 + 0x10) = *(undefined8 *)(local_80[3] + 0x10);
        *(undefined8 *)(pbVar29 + 0x18) = uVar11;
        if (0x10 < (longlong)(pbVar18 + -0x10)) {
          lVar12 = 0;
          do {
            uVar11 = *(undefined8 *)(local_80[3] + lVar12 + 0x20 + 8);
            pbVar16 = pbVar29 + lVar12 + 0x20;
            *(undefined8 *)pbVar16 = *(undefined8 *)(local_80[3] + lVar12 + 0x20);
            *(undefined8 *)(pbVar16 + 8) = uVar11;
            uVar11 = *(undefined8 *)(local_80[3] + lVar12 + 0x30 + 8);
            *(undefined8 *)(pbVar16 + 0x10) = *(undefined8 *)(local_80[3] + lVar12 + 0x30);
            *(undefined8 *)(pbVar16 + 0x18) = uVar11;
            lVar12 = lVar12 + 0x20;
          } while (pbVar16 + 0x20 < pbVar32);
        }
      }
      local_80[3] = local_80[3] + (longlong)pbVar18;
      pbVar18 = pbVar32 + -(longlong)pbVar31;
      param_3 = pbVar22;
      if (pbVar32 + -(longlong)pbVar22 < pbVar31) {
        if (pbVar32 + -lVar13 < pbVar31) {
          return (byte *)0xffffffffffffffec;
        }
        lVar12 = (longlong)(pbVar32 + -(longlong)pbVar31) - (longlong)pbVar22;
        if ((void *)((longlong)((longlong)pvVar9 + lVar12) + (longlong)puVar28) <= pvVar9) {
          _memmove(pvVar9,puVar28,(size_t)pbVar22);
          goto LAB_00f2aad4;
        }
        _memmove(pvVar9,(void *)-lVar12,(size_t)pbVar22);
        pbVar32 = pbVar32 + -lVar12;
        puVar28 = puVar28 + lVar12;
        pbVar18 = pbVar22;
      }
      if ((byte *)((longlong)&MACH_HEADER.filetype + 3) < pbVar31) {
        uVar11 = *(undefined8 *)(pbVar18 + 8);
        *(undefined8 *)pbVar32 = *(undefined8 *)pbVar18;
        *(undefined8 *)(pbVar32 + 8) = uVar11;
        if (0x10 < (longlong)puVar28) {
          lVar12 = 0x10;
          do {
            uVar11 = *(undefined8 *)(pbVar18 + lVar12 + 8);
            pbVar31 = pbVar32 + lVar12;
            *(undefined8 *)pbVar31 = *(undefined8 *)(pbVar18 + lVar12);
            *(undefined8 *)(pbVar31 + 8) = uVar11;
            uVar11 = *(undefined8 *)(pbVar18 + lVar12 + 0x10 + 8);
            *(undefined8 *)(pbVar31 + 0x10) = *(undefined8 *)(pbVar18 + lVar12 + 0x10);
            *(undefined8 *)(pbVar31 + 0x18) = uVar11;
            lVar12 = lVar12 + 0x20;
          } while (pbVar31 + 0x20 < puVar28 + (longlong)pbVar32);
        }
      }
      else {
        if ((byte *)((longlong)&MACH_HEADER.cputype + 3) < pbVar31) {
          *(undefined8 *)pbVar32 = *(undefined8 *)pbVar18;
        }
        else {
          iVar17 = *(int *)(&DAT_023e4ca0 + (longlong)pbVar31 * 4);
          *pbVar32 = *pbVar18;
          pbVar32[1] = pbVar18[1];
          pbVar32[2] = pbVar18[2];
          pbVar32[3] = pbVar18[3];
          pbVar16 = pbVar18 + *(uint *)(&DAT_023e4c80 + (longlong)pbVar31 * 4);
          pbVar18 = pbVar18 + ((ulonglong)*(uint *)(&DAT_023e4c80 + (longlong)pbVar31 * 4) -
                              (longlong)iVar17);
          *(undefined4 *)(pbVar32 + 4) = *(undefined4 *)pbVar16;
        }
        if ((undefined1 *)((longlong)&MACH_HEADER.cpusubtype + 1) <= puVar28) {
          pbVar31 = pbVar18 + 8;
          pbVar16 = pbVar32 + 8;
          if ((longlong)pbVar16 - (longlong)pbVar31 < 0x10) {
            do {
              *(undefined8 *)pbVar16 = *(undefined8 *)pbVar31;
              pbVar16 = pbVar16 + 8;
              pbVar31 = pbVar31 + 8;
            } while (pbVar16 < pbVar32 + (longlong)puVar28);
          }
          else {
            uVar11 = *(undefined8 *)(pbVar18 + 0x10);
            *(undefined8 *)pbVar16 = *(undefined8 *)pbVar31;
            *(undefined8 *)(pbVar32 + 0x10) = uVar11;
            if (0x18 < (longlong)puVar28) {
              lVar12 = 0;
              do {
                uVar11 = *(undefined8 *)(pbVar18 + lVar12 + 0x18 + 8);
                pbVar31 = pbVar32 + lVar12 + 0x18;
                *(undefined8 *)pbVar31 = *(undefined8 *)(pbVar18 + lVar12 + 0x18);
                *(undefined8 *)(pbVar31 + 8) = uVar11;
                uVar11 = *(undefined8 *)(pbVar18 + lVar12 + 0x28 + 8);
                *(undefined8 *)(pbVar31 + 0x10) = *(undefined8 *)(pbVar18 + lVar12 + 0x28);
                *(undefined8 *)(pbVar31 + 0x18) = uVar11;
                lVar12 = lVar12 + 0x20;
              } while (pbVar31 + 0x20 < pbVar32 + (longlong)puVar28);
            }
          }
        }
      }
    }
LAB_00f2aad4:
    if ((byte *)0xffffffffffffff88 < pbVar30) {
      return pbVar30;
    }
    pbVar29 = pbVar29 + (longlong)pbVar30;
    iVar17 = local_4c + -1;
    pbVar18 = local_48;
    if (iVar17 == 0) goto LAB_00f2adb7;
    uVar27 = (ulonglong)local_d0;
    if (uVar27 < 0x41) {
      if (local_c8 < puVar14) {
        if (local_c8 == param_1) goto LAB_00f2a7e3;
        uVar26 = (int)local_c8 - iVar24;
        if (param_1 <= (ulonglong *)((longlong)local_c8 - (ulonglong)(local_d0 >> 3))) {
          uVar26 = local_d0 >> 3;
        }
        local_d0 = local_d0 + uVar26 * -8;
      }
      else {
        uVar26 = local_d0 >> 3;
        local_d0 = local_d0 & 7;
      }
      local_c8 = (ulonglong *)((longlong)local_c8 - (ulonglong)uVar26);
      uVar27 = (ulonglong)local_d0;
      local_d8 = *local_c8;
    }
  } while( true );
}


