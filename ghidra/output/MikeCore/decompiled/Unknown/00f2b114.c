// Function: FUN_00f2b114
// Address: 00f2b114
// Size: 2328 bytes
// Class: Unknown


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_00f2b114(ulonglong *param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  sbyte sVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong lVar15;
  ulonglong *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  void *pvVar21;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  byte bVar22;
  int iVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  undefined1 *puVar29;
  undefined4 uVar30;
  ulonglong local_b8;
  uint local_b0;
  ulonglong *local_a8;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60 [3];
  undefined8 *local_48;
  undefined8 *local_40;
  int local_34;
  
  if (*(int *)(unaff_RDI + 0xed4) == 0) {
    param_2 = param_2 + (longlong)unaff_RSI;
  }
  else {
    param_2 = unaff_RDI[0xed2];
  }
  local_48 = (undefined8 *)unaff_RDI[0xeb5];
  puVar20 = (undefined8 *)(unaff_RDI[0xeb9] + (longlong)local_48);
  puVar25 = unaff_RSI;
  if (param_4 != 0) {
    puVar10 = (undefined8 *)unaff_RDI[0xe99];
    lVar15 = unaff_RDI[0xe9a];
    pvVar21 = (void *)unaff_RDI[0xe9b];
    *(undefined4 *)((longlong)unaff_RDI + 0x7534) = 1;
    lVar13 = 0;
    do {
      local_60[lVar13] = (ulonglong)*(uint *)((longlong)unaff_RDI + lVar13 * 4 + 0x683c);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    if (param_3 == (undefined8 *)0x0) {
      return (undefined1 *)0xffffffffffffffec;
    }
    puVar1 = param_1 + 1;
    if (param_3 < &MACH_HEADER.cpusubtype) {
      local_b8 = (ulonglong)(byte)*param_1;
      switch(param_3) {
      case (undefined8 *)0x7:
        local_b8 = local_b8 | (ulonglong)*(byte *)((longlong)param_1 + 6) << 0x30;
      case (undefined8 *)0x6:
        local_b8 = local_b8 + ((ulonglong)*(byte *)((longlong)param_1 + 5) << 0x28);
      case (undefined8 *)0x5:
        local_b8 = local_b8 + ((ulonglong)*(byte *)((longlong)param_1 + 4) << 0x20);
      case (undefined8 *)0x4:
        local_b8 = local_b8 + (ulonglong)*(byte *)((longlong)param_1 + 3) * 0x1000000;
      case (undefined8 *)0x3:
        local_b8 = local_b8 + (ulonglong)*(byte *)((longlong)param_1 + 2) * 0x10000;
      case (undefined8 *)0x2:
        local_b8 = (ulonglong)*(byte *)((longlong)param_1 + 1) * 0x100 + local_b8;
      }
      if (((undefined1 *)((longlong)param_3 + -1))[(longlong)param_1] == 0) {
        return (undefined1 *)0xffffffffffffffec;
      }
      local_b0 = LZCOUNT((uint)(byte)((undefined1 *)((longlong)param_3 + -1))[(longlong)param_1]) +
                 (int)param_3 * -8 + 0x29;
      local_a8 = param_1;
    }
    else {
      local_a8 = (ulonglong *)((byte *)((longlong)param_3 + (longlong)param_1) + -8);
      local_b8 = *local_a8;
      if (local_b8 >> 0x38 == 0) {
        return (undefined1 *)0xffffffffffffffec;
      }
      local_b0 = LZCOUNT((uint)(byte)(local_b8 >> 0x38)) - 0x17;
      if ((undefined8 *)0xffffffffffffff88 < param_3) {
        return (undefined1 *)0xffffffffffffffec;
      }
    }
    uVar30 = FUN_00f295dc(param_1,*unaff_RDI);
    uVar30 = FUN_00f295dc(uVar30,unaff_RDI[2]);
    FUN_00f295dc(uVar30,unaff_RDI[1]);
LAB_00f2b375:
    do {
      local_40 = puVar25;
      local_34 = param_4;
      puVar29 = (undefined1 *)(ulonglong)*(uint *)(local_68 + 4 + local_70 * 8);
      uVar8 = *(uint *)(local_88 + 4 + local_90 * 8);
      uVar24 = (ulonglong)uVar8;
      uVar9 = *(uint *)(local_78 + 4 + local_80 * 8);
      bVar3 = *(byte *)(local_88 + 2 + local_90 * 8);
      bVar4 = *(byte *)(local_68 + 2 + local_70 * 8);
      bVar22 = *(byte *)(local_78 + 2 + local_80 * 8);
      bVar5 = *(byte *)(local_88 + 3 + local_90 * 8);
      bVar6 = *(byte *)(local_68 + 3 + local_70 * 8);
      bVar7 = *(byte *)(local_78 + 3 + local_80 * 8);
      iVar23 = (uint)bVar3 + (uint)bVar4;
      if (bVar22 < 2) {
        if (bVar22 == 0) {
          uVar28 = local_60[uVar8 == 0];
          puVar16 = local_60 + (uVar8 != 0);
        }
        else {
          uVar28 = (ulonglong)local_b0;
          local_b0 = local_b0 + 1;
          lVar13 = (ulonglong)(uVar9 + (uVar8 == 0)) -
                   ((longlong)(local_b8 << (uVar28 & 0x3f)) >> 0x3f);
          if (lVar13 == 3) {
            uVar28 = (local_60[0] - 1) + (ulonglong)(local_60[0] - 1 == 0);
          }
          else {
            uVar28 = local_60[lVar13] + (ulonglong)(local_60[lVar13] == 0);
            puVar16 = local_60;
            if (lVar13 == 1) goto LAB_00f2b463;
          }
          local_60[2] = local_60[1];
          puVar16 = local_60;
        }
      }
      else {
        uVar28 = (ulonglong)local_b0;
        local_b0 = local_b0 + bVar22;
        uVar28 = ((local_b8 << (uVar28 & 0x3f)) >> ((ulonglong)(byte)-bVar22 & 0x3f)) +
                 (ulonglong)uVar9;
        local_60[2] = local_60[1];
        puVar16 = local_60;
      }
LAB_00f2b463:
      bVar22 = (char)iVar23 + bVar22;
      uVar8 = CONCAT31((int3)((uint)iVar23 >> 8),bVar22);
      param_3 = (undefined8 *)(ulonglong)uVar8;
      local_60[1] = *puVar16;
      local_60[0] = uVar28;
      if (bVar4 != 0) {
        uVar18 = (ulonglong)local_b0;
        local_b0 = local_b0 + bVar4;
        puVar29 = puVar29 + ((local_b8 << (uVar18 & 0x3f)) >> ((ulonglong)(byte)-bVar4 & 0x3f));
      }
      uVar18 = (ulonglong)local_b0;
      if ((0x1e < bVar22) && (local_b0 < 0x41)) {
        if (local_a8 < puVar1) {
          if (local_a8 == param_1) goto LAB_00f2b4ab;
          uVar18 = (ulonglong)(uint)((int)local_a8 - (int)param_1);
          if (param_1 <= (ulonglong *)((longlong)local_a8 - (ulonglong)(local_b0 >> 3))) {
            uVar18 = (ulonglong)(local_b0 >> 3);
          }
          local_b0 = local_b0 + (int)uVar18 * -8;
        }
        else {
          uVar18 = (ulonglong)(local_b0 >> 3);
          local_b0 = local_b0 & 7;
        }
        local_a8 = (ulonglong *)((longlong)local_a8 - uVar18);
        uVar18 = (ulonglong)local_b0;
        local_b8 = *local_a8;
      }
LAB_00f2b4ab:
      iVar23 = (int)uVar18;
      if (bVar3 != 0) {
        iVar23 = iVar23 + (uint)bVar3;
        uVar24 = uVar24 + ((local_b8 << (uVar18 & 0x3f)) >> ((ulonglong)(byte)-bVar3 & 0x3f));
      }
      sVar11 = (bVar5 < 0x41) * ('@' - bVar5);
      local_90 = (((local_b8 >> ((ulonglong)(byte)-(char)(iVar23 + (uint)bVar5) & 0x3f)) << sVar11)
                 >> sVar11) + (ulonglong)*(ushort *)(local_88 + local_90 * 8);
      iVar23 = iVar23 + (uint)bVar5 + (uint)bVar6;
      sVar11 = (bVar6 < 0x41) * ('@' - bVar6);
      local_70 = (((local_b8 >> ((ulonglong)(byte)-(char)iVar23 & 0x3f)) << sVar11) >> sVar11) +
                 (ulonglong)*(ushort *)(local_68 + local_70 * 8);
      local_b0 = iVar23 + (uint)bVar7;
      sVar11 = (bVar7 < 0x41) * ('@' - bVar7);
      local_80 = (((local_b8 >> ((ulonglong)(byte)-(char)local_b0 & 0x3f)) << sVar11) >> sVar11) +
                 (ulonglong)*(ushort *)(local_78 + local_80 * 8);
      if ((puVar20 < (undefined8 *)((longlong)local_48 + uVar24)) ||
         (puVar14 = puVar29 + uVar24,
         (undefined1 *)(param_2 - 0x20U) < (undefined1 *)((longlong)puVar25 + (longlong)puVar14))) {
        param_3 = puVar10;
        puVar14 = (undefined1 *)FUN_00f2970d(puVar20,&local_48,puVar10,lVar15);
      }
      else {
        puVar27 = (undefined8 *)((longlong)puVar25 + uVar24);
        uVar12 = local_48[1];
        *puVar25 = *local_48;
        puVar25[1] = uVar12;
        if (0x10 < uVar24) {
          uVar12 = local_48[3];
          puVar25[2] = local_48[2];
          puVar25[3] = uVar12;
          if (0x10 < (longlong)(uVar24 - 0x10)) {
            lVar13 = 0;
            do {
              puVar17 = (undefined8 *)((longlong)local_48 + lVar13 + 0x20);
              uVar12 = puVar17[1];
              puVar26 = (undefined8 *)((longlong)puVar25 + lVar13 + 0x20);
              *puVar26 = *puVar17;
              puVar26[1] = uVar12;
              puVar17 = (undefined8 *)((longlong)local_48 + lVar13 + 0x30);
              uVar12 = puVar17[1];
              puVar26[2] = *puVar17;
              puVar26[3] = uVar12;
              lVar13 = lVar13 + 0x20;
            } while (puVar26 + 4 < puVar27);
          }
        }
        local_48 = (undefined8 *)((longlong)local_48 + uVar24);
        puVar26 = (undefined8 *)((longlong)puVar27 - uVar28);
        if ((ulonglong)((longlong)puVar27 - (longlong)puVar10) < uVar28) {
          if ((ulonglong)((longlong)puVar27 - lVar15) < uVar28) {
            return (undefined1 *)0xffffffffffffffec;
          }
          lVar13 = (longlong)((longlong)puVar27 - uVar28) - (longlong)puVar10;
          if ((void *)((longlong)((longlong)pvVar21 + lVar13) + (longlong)puVar29) <= pvVar21) {
            _memmove(pvVar21,puVar29,uVar8);
            puVar25 = local_40;
            goto LAB_00f2b64d;
          }
          _memmove(pvVar21,(void *)-lVar13,uVar8);
          puVar27 = (undefined8 *)((longlong)puVar27 - lVar13);
          puVar29 = puVar29 + lVar13;
          puVar26 = puVar10;
        }
        puVar25 = local_40;
        if (uVar28 < 0x10) {
          if (uVar28 < 8) {
            iVar23 = *(int *)(&DAT_023e4ca0 + uVar28 * 4);
            *(undefined1 *)puVar27 = *(undefined1 *)puVar26;
            *(undefined1 *)((longlong)puVar27 + 1) = *(undefined1 *)((longlong)puVar26 + 1);
            *(undefined1 *)((longlong)puVar27 + 2) = *(undefined1 *)((longlong)puVar26 + 2);
            *(undefined1 *)((longlong)puVar27 + 3) = *(undefined1 *)((longlong)puVar26 + 3);
            puVar2 = (undefined4 *)
                     ((longlong)puVar26 + (ulonglong)*(uint *)(&DAT_023e4c80 + uVar28 * 4));
            puVar26 = (undefined8 *)
                      ((longlong)puVar26 +
                      ((ulonglong)*(uint *)(&DAT_023e4c80 + uVar28 * 4) - (longlong)iVar23));
            *(undefined4 *)((longlong)puVar27 + 4) = *puVar2;
          }
          else {
            *puVar27 = *puVar26;
          }
          if (&MACH_HEADER.cpusubtype < puVar29) {
            puVar19 = puVar26 + 1;
            puVar17 = puVar27 + 1;
            if ((longlong)puVar17 - (longlong)puVar19 < 0x10) {
              do {
                *puVar17 = *puVar19;
                puVar17 = puVar17 + 1;
                puVar19 = puVar19 + 1;
              } while (puVar17 < puVar29 + (longlong)puVar27);
            }
            else {
              uVar12 = puVar26[2];
              *puVar17 = *puVar19;
              puVar27[2] = uVar12;
              if (0x18 < (longlong)puVar29) {
                lVar13 = 0;
                do {
                  puVar19 = (undefined8 *)((longlong)puVar26 + lVar13 + 0x18);
                  uVar12 = puVar19[1];
                  puVar17 = (undefined8 *)((longlong)puVar27 + lVar13 + 0x18);
                  *puVar17 = *puVar19;
                  puVar17[1] = uVar12;
                  puVar19 = (undefined8 *)((longlong)puVar26 + lVar13 + 0x28);
                  uVar12 = puVar19[1];
                  puVar17[2] = *puVar19;
                  puVar17[3] = uVar12;
                  lVar13 = lVar13 + 0x20;
                } while (puVar17 + 4 < puVar29 + (longlong)puVar27);
              }
            }
          }
        }
        else {
          uVar12 = puVar26[1];
          *puVar27 = *puVar26;
          puVar27[1] = uVar12;
          if (0x10 < (longlong)puVar29) {
            lVar13 = 0x10;
            do {
              uVar12 = ((undefined8 *)((longlong)puVar26 + lVar13))[1];
              puVar17 = (undefined8 *)(lVar13 + (longlong)puVar27);
              *puVar17 = *(undefined8 *)((longlong)puVar26 + lVar13);
              puVar17[1] = uVar12;
              puVar19 = (undefined8 *)((longlong)puVar26 + lVar13 + 0x10);
              uVar12 = puVar19[1];
              puVar17[2] = *puVar19;
              puVar17[3] = uVar12;
              lVar13 = lVar13 + 0x20;
            } while (puVar17 + 4 < puVar29 + (longlong)puVar27);
          }
        }
      }
LAB_00f2b64d:
      if ((undefined1 *)0xffffffffffffff88 < puVar14) {
        return puVar14;
      }
      puVar25 = (undefined8 *)((longlong)puVar25 + (longlong)puVar14);
      param_4 = local_34 + -1;
      if (param_4 == 0) goto LAB_00f2b959;
      if (local_b0 < 0x41) {
        if (local_a8 < puVar1) {
          if (local_a8 == param_1) goto LAB_00f2b375;
          uVar24 = (ulonglong)(uint)((int)local_a8 - (int)param_1);
          if (param_1 <= (ulonglong *)((longlong)local_a8 - (ulonglong)(local_b0 >> 3))) {
            uVar24 = (ulonglong)(local_b0 >> 3);
          }
          local_b0 = local_b0 + (int)uVar24 * -8;
        }
        else {
          uVar24 = (ulonglong)(local_b0 >> 3);
          local_b0 = local_b0 & 7;
        }
        local_a8 = (ulonglong *)((longlong)local_a8 - uVar24);
        local_b8 = *local_a8;
      }
    } while( true );
  }
LAB_00f2b994:
  pvVar21 = (void *)((longlong)puVar20 - (longlong)local_48);
  puVar29 = (undefined1 *)0xffffffffffffffba;
  if (pvVar21 <= (void *)(param_2 - (longlong)puVar25)) {
    if (puVar25 == (undefined8 *)0x0) {
      lVar15 = 0;
    }
    else {
      _memcpy(param_1,pvVar21,(size_t)param_3);
      lVar15 = (longlong)puVar25 + (longlong)pvVar21;
    }
    puVar29 = (undefined1 *)(lVar15 - (longlong)unaff_RSI);
  }
  return puVar29;
LAB_00f2b959:
  if (local_b0 < 0x41) {
    if (puVar1 <= local_a8) {
      return (undefined1 *)0xffffffffffffffec;
    }
    if (local_a8 != param_1) {
      return (undefined1 *)0xffffffffffffffec;
    }
    if (local_b0 < 0x40) {
      return (undefined1 *)0xffffffffffffffec;
    }
  }
  lVar15 = 0;
  do {
    param_1 = (ulonglong *)(ulonglong)(uint)local_60[lVar15];
    *(uint *)((longlong)unaff_RDI + lVar15 * 4 + 0x683c) = (uint)local_60[lVar15];
    lVar15 = lVar15 + 1;
  } while (lVar15 != 3);
  goto LAB_00f2b994;
}


