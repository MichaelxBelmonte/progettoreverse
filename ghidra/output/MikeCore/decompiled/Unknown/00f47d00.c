// Function: FUN_00f47d00
// Address: 00f47d00
// Size: 9931 bytes
// Class: Unknown
// String references:
//   "incorrect header check"
//   "unknown compression method"
//   "invalid window size"
//   "unknown header flags set"
//   "header crc mismatch"
//   "invalid block type"
//   "invalid stored block lengths"
//   "too many length or distance symbols"
//   "invalid code lengths set"
//   "invalid bit length repeat"
//   "invalid code -- missing end-of-block"
//   "invalid literal/lengths set"
//   "invalid distances set"
//   "invalid literal/length code"
//   "invalid distance code"
//   "invalid distance too far back"
//   "incorrect data check"
//   "incorrect length check"


int FUN_00f47d00(void)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  size_t sVar11;
  undefined2 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  char *pcVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte bVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint *puVar25;
  undefined1 *puVar26;
  byte bVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  int unaff_ESI;
  uint uVar32;
  ushort *puVar33;
  longlong *unaff_RDI;
  uint *puVar34;
  uint *puVar35;
  uint *puVar36;
  ulonglong uVar37;
  uint *puVar38;
  size_t sVar39;
  uint *puVar40;
  ulonglong uVar41;
  ushort uVar42;
  undefined1 *puVar43;
  uint uVar44;
  void *pvVar45;
  uint uVar46;
  ulonglong uVar47;
  undefined *puVar48;
  bool bVar49;
  undefined1 auVar50 [16];
  undefined8 *puVar51;
  undefined8 *puVar52;
  undefined8 *puVar53;
  undefined8 *puVar54;
  undefined *local_60;
  uint *local_50;
  int local_38;
  
  if ((((((unaff_RDI == (longlong *)0x0) || (unaff_RDI[8] == 0)) || (unaff_RDI[9] == 0)) ||
       ((puVar5 = (undefined8 *)unaff_RDI[7], puVar5 == (undefined8 *)0x0 ||
        ((longlong *)*puVar5 != unaff_RDI)))) ||
      ((uVar29 = *(uint *)(puVar5 + 1), 0x1f < uVar29 - 0x3f34 ||
       (puVar43 = (undefined1 *)unaff_RDI[3], puVar43 == (undefined1 *)0x0)))) ||
     ((puVar38 = (uint *)*unaff_RDI, puVar38 == (uint *)0x0 && ((int)unaff_RDI[1] != 0)))) {
    return -2;
  }
  puVar1 = (uint *)(puVar5 + 1);
  if (uVar29 == 0x3f3f) {
    *puVar1 = 0x3f40;
    uVar29 = 0x3f40;
  }
  uVar15 = *(uint *)(unaff_RDI + 1);
  uVar32 = *(uint *)(unaff_RDI + 4);
  local_60 = (undefined *)puVar5[10];
  local_50 = (uint *)(ulonglong)*(uint *)(puVar5 + 0xb);
  puVar2 = puVar5 + 4;
  puVar3 = puVar5 + 0xab;
  puVar53 = puVar5 + 0xf;
  puVar54 = puVar5 + 0x13;
  puVar4 = puVar5 + 99;
  local_38 = 0;
  puVar31 = (uint *)(ulonglong)uVar15;
  puVar52 = puVar5 + 0x12;
  uVar30 = uVar32;
LAB_00f47e32:
  do {
    sVar39 = (size_t)puVar31;
    puVar25 = &switchD_00f47e53::switchdataD_00f4a3cc;
    bVar20 = (byte)local_50;
    puVar40 = puVar38;
    puVar48 = local_60;
    iVar28 = 1;
    puVar51 = puVar52;
    switch(uVar29) {
    case 0x3f34:
      uVar29 = *(uint *)(puVar5 + 2);
      if (uVar29 == 0) {
        *puVar1 = 0x3f40;
        goto LAB_00f498c9;
      }
      if ((uint)local_50 < 0x10) {
        puVar25 = local_50;
        puVar40 = puVar38;
        if (sVar39 == 0) {
LAB_00f4a38f:
          local_50._0_4_ = (uint)puVar25;
          sVar39 = 0;
          puVar38 = puVar40;
          puVar48 = local_60;
          iVar28 = local_38;
          goto switchD_00f47e53_caseD_3f50;
        }
        uVar23 = sVar39 - 1;
        puVar40 = (uint *)((longlong)puVar38 + 1);
        local_60 = local_60 + ((ulonglong)(byte)*puVar38 << (bVar20 & 0x3f));
        puVar25 = local_50 + 2;
        if ((uint)local_50 < 8) {
          if (uVar23 == 0) goto LAB_00f4a38f;
          uVar23 = sVar39 - 2;
          puVar40 = (uint *)((longlong)puVar38 + 2);
          local_60 = local_60 +
                     ((ulonglong)*(byte *)((longlong)puVar38 + 1) << ((byte)puVar25 & 0x3f));
          puVar25 = local_50 + 4;
        }
        puVar31 = (uint *)(ulonglong)uVar23;
        local_50 = (uint *)((ulonglong)puVar25 & 0xffffffff);
        puVar38 = puVar40;
        puVar48 = local_60;
      }
      if (((uVar29 & 2) == 0) || (puVar48 != &DAT_00008b1f)) {
        if (puVar5[6] != 0) {
          *(undefined4 *)(puVar5[6] + 0x48) = 0xffffffff;
        }
        if (((uVar29 & 1) == 0) ||
           (0x842108421084210 <
            (((ulonglong)puVar48 >> 8) + (ulonglong)(((uint)puVar48 & 0xff) << 8)) *
            -0x1084210842108421)) {
          pcVar17 = "incorrect header check";
          local_60 = puVar48;
          goto LAB_00f49fd2;
        }
        if (((uint)puVar48 & 0xf) != 8) {
LAB_00f49fcb:
          pcVar17 = "unknown compression method";
          local_60 = puVar48;
          goto LAB_00f49fd2;
        }
        local_60 = (undefined *)((ulonglong)puVar48 >> 4);
        uVar23 = (uint)local_60 & 0xf;
        uVar46 = uVar23 + 8;
        uVar29 = *(uint *)(puVar5 + 7);
        if (*(uint *)(puVar5 + 7) == 0) {
          *(uint *)(puVar5 + 7) = uVar46;
          uVar29 = uVar46;
        }
        if ((uVar23 < 8) && (uVar46 <= uVar29)) {
          *(int *)((longlong)puVar5 + 0x1c) = 0x100 << (sbyte)uVar23;
          *(undefined4 *)(puVar5 + 3) = 0;
          lVar16 = FUN_00f42bd0(uVar23,0);
          local_50 = (uint *)0x0;
          puVar5[4] = lVar16;
          unaff_RDI[0xc] = lVar16;
          *(uint *)(puVar5 + 1) = (uint)(((ulonglong)puVar48 & 0x2000) == 0) * 2 + 0x3f3d;
          local_60 = (undefined *)0x0;
        }
        else {
          local_50 = (uint *)(ulonglong)((int)local_50 - 4);
          unaff_RDI[6] = (longlong)"invalid window size";
          *puVar1 = 0x3f51;
        }
        uVar29 = *puVar1;
      }
      else {
        if (*(int *)(puVar5 + 7) == 0) {
          *(undefined4 *)(puVar5 + 7) = 0xf;
        }
        uVar19 = FUN_00f43510(puVar25,0);
        *puVar2 = uVar19;
        uVar19 = FUN_00f43510();
        *puVar2 = uVar19;
        *puVar1 = 0x3f35;
        local_50 = (uint *)0x0;
        local_60 = (undefined *)0x0;
        uVar29 = *puVar1;
      }
      break;
    case 0x3f35:
      if (0xf < (uint)local_50) {
LAB_00f48beb:
        sVar39 = (size_t)puVar31;
        *(int *)(puVar5 + 3) = (int)local_60;
        puVar48 = local_60;
        if ((char)local_60 != '\b') goto LAB_00f49fcb;
        if (((ulonglong)local_60 & 0xe000) == 0) {
          if ((uint *)puVar5[6] != (uint *)0x0) {
            uVar29 = (uint)((ulonglong)local_60 >> 8) & 1;
            puVar25 = (uint *)(ulonglong)uVar29;
            *(uint *)puVar5[6] = uVar29;
          }
          if ((((ulonglong)local_60 & 0x200) != 0) && ((*(byte *)(puVar5 + 2) & 4) != 0)) {
            uVar19 = FUN_00f43510(puVar25,2);
            *puVar2 = uVar19;
          }
          *puVar1 = 0x3f36;
          local_50 = (uint *)0x0;
          local_60 = (undefined *)0x0;
          goto LAB_00f48d74;
        }
        pcVar17 = "unknown header flags set";
        goto LAB_00f49fd2;
      }
      if (sVar39 != 0) {
        uVar29 = sVar39 - 1;
        puVar40 = (uint *)((longlong)puVar38 + 1);
        local_60 = local_60 + ((ulonglong)(byte)*puVar38 << (bVar20 & 0x3f));
        puVar25 = local_50 + 2;
        if ((uint)local_50 < 8) {
          if (uVar29 == 0) goto LAB_00f4a1c2;
          uVar29 = sVar39 - 2;
          puVar40 = (uint *)((longlong)puVar38 + 2);
          local_60 = local_60 +
                     ((ulonglong)*(byte *)((longlong)puVar38 + 1) << ((byte)puVar25 & 0x3f));
          puVar25 = local_50 + 4;
        }
        puVar31 = (uint *)(ulonglong)uVar29;
        local_50 = (uint *)((ulonglong)puVar25 & 0xffffffff);
        puVar38 = puVar40;
        goto LAB_00f48beb;
      }
      goto LAB_00f4a0c2;
    case 0x3f36:
      sVar11 = sVar39;
      if ((uint)local_50 < 0x20) {
LAB_00f48d74:
        uVar23 = (uint)local_50;
        puVar25 = puVar38;
        puVar48 = local_60;
        uVar29 = uVar23;
        if (sVar39 != 0) {
          puVar25 = (uint *)((longlong)puVar38 + 1);
          local_60 = local_60 + ((ulonglong)(byte)*puVar38 << ((byte)local_50 & 0x3f));
          puVar40 = puVar25;
          sVar11 = sVar39 - 1;
          if (uVar23 < 0x18) {
            puVar48 = local_60;
            uVar29 = (uint)(local_50 + 2);
            if (sVar39 - 1 == 0) goto LAB_00f4a1f9;
            puVar25 = (uint *)((longlong)puVar38 + 2);
            local_60 = local_60 +
                       ((ulonglong)*(byte *)((longlong)puVar38 + 1) << ((byte)(local_50 + 2) & 0x3f)
                       );
            puVar40 = puVar25;
            sVar11 = sVar39 - 2;
            if (uVar23 < 0x10) {
              puVar48 = local_60;
              uVar29 = (uint)(local_50 + 4);
              if (sVar39 - 2 == 0) goto LAB_00f4a1f9;
              puVar25 = (uint *)((longlong)puVar38 + 3);
              local_60 = local_60 +
                         ((ulonglong)*(byte *)((longlong)puVar38 + 2) <<
                         ((byte)(local_50 + 4) & 0x3f));
              puVar40 = puVar25;
              sVar11 = sVar39 - 3;
              if (uVar23 < 8) {
                puVar48 = local_60;
                uVar29 = (uint)(local_50 + 6);
                if (sVar39 - 3 == 0) goto LAB_00f4a1f9;
                puVar25 = (uint *)((ulonglong)(local_50 + 6) & 0xffffffff);
                local_60 = local_60 +
                           ((ulonglong)*(byte *)((longlong)puVar38 + 3) << ((byte)puVar25 & 0x3f));
                puVar40 = puVar38 + 1;
                sVar11 = sVar39 - 4;
              }
            }
          }
          goto LAB_00f48e16;
        }
      }
      else {
LAB_00f48e16:
        sVar39 = sVar11;
        if (puVar5[6] != 0) {
          *(undefined **)(puVar5[6] + 8) = local_60;
        }
        if (((*(byte *)((longlong)puVar5 + 0x19) & 2) != 0) && ((*(byte *)(puVar5 + 2) & 4) != 0)) {
          uVar19 = FUN_00f43510(puVar25,4);
          *puVar2 = uVar19;
        }
        *puVar1 = 0x3f37;
        local_50 = (uint *)0x0;
        local_60 = (undefined *)0x0;
LAB_00f48e7f:
        puVar25 = puVar40;
        puVar48 = local_60;
        uVar29 = (uint)local_50;
        if (sVar39 != 0) {
          puVar25 = (uint *)(ulonglong)(sVar39 - 1);
          puVar38 = (uint *)((longlong)puVar40 + 1);
          local_60 = local_60 + ((ulonglong)(byte)*puVar40 << ((byte)local_50 & 0x3f));
          puVar31 = puVar25;
          if ((uint)local_50 < 8) {
            puVar25 = puVar38;
            puVar48 = local_60;
            uVar29 = (uint)(local_50 + 2);
            if (sVar39 - 1 == 0) goto LAB_00f4a1f9;
            puVar38 = (uint *)((longlong)puVar40 + 2);
            puVar25 = (uint *)((ulonglong)(local_50 + 2) & 0xffffffff);
            local_60 = local_60 +
                       ((ulonglong)*(byte *)((longlong)puVar40 + 1) << ((byte)puVar25 & 0x3f));
            puVar31 = (uint *)(ulonglong)(sVar39 - 2);
          }
LAB_00f48ed0:
          sVar39 = (size_t)puVar31;
          lVar16 = puVar5[6];
          if (lVar16 != 0) {
            *(uint *)(lVar16 + 0x10) = (uint)local_60 & 0xff;
            puVar25 = (uint *)((ulonglong)local_60 >> 8);
            *(int *)(lVar16 + 0x14) = (int)((ulonglong)local_60 >> 8);
          }
          if (((*(byte *)((longlong)puVar5 + 0x19) & 2) != 0) && ((*(byte *)(puVar5 + 2) & 4) != 0))
          {
            uVar19 = FUN_00f43510(puVar25,2);
            *puVar2 = uVar19;
          }
          *(undefined4 *)(puVar5 + 1) = 0x3f38;
          uVar23 = *(uint *)(puVar5 + 3);
          local_60 = (undefined *)0x0;
          local_50 = (uint *)0x0;
          local_50._0_4_ = 0;
          if ((uVar23 & 0x400) != 0) goto LAB_00f48f74;
          goto LAB_00f48f5a;
        }
      }
      goto LAB_00f4a1f9;
    case 0x3f37:
      if ((uint)local_50 < 0x10) goto LAB_00f48e7f;
      goto LAB_00f48ed0;
    case 0x3f38:
      uVar23 = *(uint *)(puVar5 + 3);
      if ((uVar23 & 0x400) == 0) {
LAB_00f48f5a:
        puVar25 = puVar38;
        if (puVar5[6] != 0) {
          *(undefined8 *)(puVar5[6] + 0x18) = 0;
        }
LAB_00f4902e:
        *puVar1 = 0x3f39;
        local_50 = (uint *)(ulonglong)(uint)local_50;
        puVar38 = puVar25;
        puVar48 = local_60;
        goto switchD_00f47e53_caseD_3f39;
      }
      puVar25 = puVar38;
      if (0xf < (uint)local_50) {
LAB_00f48fc9:
        *(int *)((longlong)puVar5 + 0x5c) = (int)local_60;
        lVar16 = puVar5[6];
        if (lVar16 != 0) {
          *(int *)(lVar16 + 0x20) = (int)local_60;
        }
        if (((uVar23 & 0x200) != 0) && ((*(byte *)(puVar5 + 2) & 4) != 0)) {
          uVar19 = FUN_00f43510(lVar16,2);
          *puVar2 = uVar19;
        }
        local_60 = (undefined *)0x0;
        local_50._0_4_ = 0;
        goto LAB_00f4902e;
      }
LAB_00f48f74:
      puVar25 = puVar38;
      puVar48 = local_60;
      uVar29 = (uint)local_50;
      if (sVar39 != 0) {
        uVar46 = sVar39 - 1;
        puVar25 = (uint *)((longlong)puVar38 + 1);
        local_60 = local_60 + ((ulonglong)(byte)*puVar38 << ((byte)local_50 & 0x3f));
        if ((uint)local_50 < 8) {
          puVar48 = local_60;
          uVar29 = (uint)(local_50 + 2);
          if (uVar46 == 0) goto LAB_00f4a1f9;
          uVar46 = sVar39 - 2;
          puVar25 = (uint *)((longlong)puVar38 + 2);
          local_60 = local_60 +
                     ((ulonglong)*(byte *)((longlong)puVar38 + 1) << ((byte)(local_50 + 2) & 0x3f));
        }
        puVar31 = (uint *)(ulonglong)uVar46;
        goto LAB_00f48fc9;
      }
      goto LAB_00f4a1f9;
    case 0x3f39:
switchD_00f47e53_caseD_3f39:
      uVar29 = *(uint *)(puVar5 + 3);
      if ((uVar29 & 0x400) != 0) {
        uVar23 = *(uint *)((longlong)puVar5 + 0x5c);
        puVar40 = (uint *)(ulonglong)uVar23;
        if ((uint)puVar31 < uVar23) {
          puVar40 = puVar31;
        }
        iVar28 = (int)puVar40;
        if (iVar28 != 0) {
          lVar16 = puVar5[6];
          if ((lVar16 != 0) && (*(longlong *)(lVar16 + 0x18) != 0)) {
            uVar46 = *(uint *)(lVar16 + 0x24);
            uVar13 = *(int *)(lVar16 + 0x20) - uVar23;
            if (uVar13 <= uVar46 && uVar46 - uVar13 != 0) {
              puVar25 = (uint *)(ulonglong)(uVar46 - uVar13);
              if (uVar13 + iVar28 <= uVar46) {
                puVar25 = puVar40;
              }
              _memcpy((void *)(ulonglong)uVar23,puVar25,uVar46);
              uVar29 = *(uint *)(puVar5 + 3);
            }
          }
          if (((uVar29 & 0x200) != 0) && ((*(byte *)(puVar5 + 2) & 4) != 0)) {
            uVar19 = FUN_00f43510();
            *puVar2 = uVar19;
          }
          puVar31 = (uint *)(ulonglong)((uint)puVar31 - iVar28);
          puVar38 = (uint *)((longlong)puVar38 + (longlong)puVar40);
          uVar23 = *(int *)((longlong)puVar5 + 0x5c) - iVar28;
          *(uint *)((longlong)puVar5 + 0x5c) = uVar23;
        }
        sVar39 = (size_t)puVar31;
        iVar28 = local_38;
        if (uVar23 != 0) goto switchD_00f47e53_caseD_3f50;
      }
      *(undefined4 *)((longlong)puVar5 + 0x5c) = 0;
      *(undefined4 *)(puVar5 + 1) = 0x3f3a;
    case 0x3f3a:
      uVar23 = *(uint *)(puVar5 + 3);
      if ((uVar23 & 0x800) != 0) {
        puVar25 = puVar38;
        uVar29 = (uint)local_50;
        if ((int)puVar31 == 0) {
LAB_00f4a1f9:
          local_50._0_4_ = uVar29;
          sVar39 = 0;
          puVar38 = puVar25;
          iVar28 = local_38;
        }
        else {
          lVar16 = puVar5[6];
          if (lVar16 == 0) {
            puVar40 = (uint *)0x0;
            do {
              bVar49 = *(byte *)((longlong)puVar38 + (longlong)puVar40) == 0;
              puVar40 = (uint *)((longlong)puVar40 + 1);
              bVar6 = !bVar49;
              if (bVar49) break;
            } while (puVar40 < puVar31);
          }
          else {
            puVar40 = (uint *)((longlong)&MACH_HEADER.magic + 1);
            bVar20 = (byte)*puVar38;
            while( true ) {
              if ((lVar16 != 0) && (lVar18 = *(longlong *)(lVar16 + 0x28), lVar18 != 0)) {
                uVar29 = *(uint *)((longlong)puVar5 + 0x5c);
                if (uVar29 < *(uint *)(lVar16 + 0x30)) {
                  *(uint *)((longlong)puVar5 + 0x5c) = uVar29 + 1;
                  *(byte *)(lVar18 + (ulonglong)uVar29) = bVar20;
                }
              }
              bVar6 = bVar20 != 0;
              if ((bVar20 == 0) || (puVar31 <= puVar40)) break;
              lVar16 = puVar5[6];
              puVar40 = (uint *)((longlong)puVar40 + 1);
              bVar20 = ((byte *)((longlong)puVar38 + -1))[(longlong)puVar40];
            }
            uVar23 = *(uint *)(puVar5 + 3);
          }
          if (((uVar23 & 0x200) != 0) && ((*(byte *)(puVar5 + 2) & 4) != 0)) {
            uVar19 = FUN_00f43510(uVar23,(ulonglong)puVar40 & 0xffffffff);
            *puVar2 = uVar19;
          }
          sVar39 = (int)puVar31 - (int)puVar40;
          puVar31 = (uint *)(ulonglong)sVar39;
          puVar38 = (uint *)((longlong)puVar38 + ((ulonglong)puVar40 & 0xffffffff));
          iVar28 = local_38;
          if (!bVar6) goto LAB_00f4925d;
        }
        goto switchD_00f47e53_caseD_3f50;
      }
      if (puVar5[6] != 0) {
        *(undefined8 *)(puVar5[6] + 0x28) = 0;
      }
LAB_00f4925d:
      *(undefined4 *)((longlong)puVar5 + 0x5c) = 0;
      *(undefined4 *)(puVar5 + 1) = 0x3f3b;
switchD_00f47e53_caseD_3f3b:
      uVar23 = *(uint *)(puVar5 + 3);
      if ((uVar23 & 0x1000) == 0) {
        if (puVar5[6] != 0) {
          *(undefined8 *)(puVar5[6] + 0x38) = 0;
        }
      }
      else {
        puVar25 = puVar38;
        uVar29 = (uint)local_50;
        if ((int)puVar31 == 0) goto LAB_00f4a1f9;
        lVar16 = puVar5[6];
        if (lVar16 == 0) {
          puVar40 = (uint *)0x0;
          do {
            bVar49 = *(byte *)((longlong)puVar38 + (longlong)puVar40) == 0;
            puVar40 = (uint *)((longlong)puVar40 + 1);
            bVar6 = !bVar49;
            if (bVar49) break;
          } while (puVar40 < puVar31);
        }
        else {
          puVar40 = (uint *)((longlong)&MACH_HEADER.magic + 1);
          bVar20 = (byte)*puVar38;
          while( true ) {
            if ((lVar16 != 0) && (lVar18 = *(longlong *)(lVar16 + 0x38), lVar18 != 0)) {
              uVar29 = *(uint *)((longlong)puVar5 + 0x5c);
              if (uVar29 < *(uint *)(lVar16 + 0x40)) {
                *(uint *)((longlong)puVar5 + 0x5c) = uVar29 + 1;
                *(byte *)(lVar18 + (ulonglong)uVar29) = bVar20;
              }
            }
            bVar6 = bVar20 != 0;
            if ((bVar20 == 0) || (puVar31 <= puVar40)) break;
            lVar16 = puVar5[6];
            puVar40 = (uint *)((longlong)puVar40 + 1);
            bVar20 = ((byte *)((longlong)puVar38 + -1))[(longlong)puVar40];
          }
          uVar23 = *(uint *)(puVar5 + 3);
        }
        if (((uVar23 & 0x200) != 0) && ((*(byte *)(puVar5 + 2) & 4) != 0)) {
          uVar19 = FUN_00f43510(uVar23,(ulonglong)puVar40 & 0xffffffff);
          *puVar2 = uVar19;
        }
        sVar39 = (int)puVar31 - (int)puVar40;
        puVar31 = (uint *)(ulonglong)sVar39;
        puVar38 = (uint *)((longlong)puVar38 + ((ulonglong)puVar40 & 0xffffffff));
        iVar28 = local_38;
        if (bVar6) goto switchD_00f47e53_caseD_3f50;
      }
      *puVar1 = 0x3f3c;
      puVar40 = puVar38;
switchD_00f47e53_caseD_3f3c:
      uVar29 = (uint)local_50;
      puVar38 = puVar40;
      local_60 = puVar48;
      if ((*(uint *)(puVar5 + 3) & 0x200) != 0) {
        if (uVar29 < 0x10) {
          iVar28 = (int)puVar31;
          if (iVar28 == 0) {
LAB_00f4a19f:
            local_50._0_4_ = uVar29;
            sVar39 = 0;
            iVar28 = local_38;
            goto switchD_00f47e53_caseD_3f50;
          }
          uVar23 = iVar28 - 1;
          puVar38 = (uint *)((longlong)puVar40 + 1);
          puVar48 = puVar48 + ((ulonglong)(byte)*puVar40 << ((byte)local_50 & 0x3f));
          puVar25 = local_50 + 2;
          if (uVar29 < 8) {
            uVar29 = (uint)puVar25;
            if (uVar23 == 0) goto LAB_00f4a19f;
            uVar23 = iVar28 - 2;
            puVar38 = (uint *)((longlong)puVar40 + 2);
            puVar48 = puVar48 + ((ulonglong)*(byte *)((longlong)puVar40 + 1) <<
                                ((byte)puVar25 & 0x3f));
            puVar25 = local_50 + 4;
          }
          puVar31 = (uint *)(ulonglong)uVar23;
          local_50 = (uint *)((ulonglong)puVar25 & 0xffffffff);
        }
        if (((*(byte *)(puVar5 + 2) & 4) != 0) &&
           (puVar48 != (undefined *)(ulonglong)(ushort)*puVar2)) {
          pcVar17 = "header crc mismatch";
          local_60 = puVar48;
LAB_00f49fd2:
          unaff_RDI[6] = (longlong)pcVar17;
          *puVar1 = 0x3f51;
          uVar29 = *puVar1;
          break;
        }
        local_60 = (undefined *)0x0;
        local_50 = (uint *)0x0;
      }
      lVar16 = puVar5[6];
      if (lVar16 != 0) {
        *(uint *)(lVar16 + 0x44) = *(uint *)(puVar5 + 3) >> 9 & 1;
        *(undefined4 *)(lVar16 + 0x48) = 1;
      }
      uVar19 = FUN_00f43510();
      *puVar2 = uVar19;
      unaff_RDI[0xc] = uVar19;
      *puVar1 = 0x3f3f;
      uVar29 = *puVar1;
      break;
    case 0x3f3b:
      goto switchD_00f47e53_caseD_3f3b;
    case 0x3f3c:
      goto switchD_00f47e53_caseD_3f3c;
    case 0x3f3d:
      if (0x1f < (uint)local_50) goto LAB_00f489d9;
      if (sVar39 == 0) goto LAB_00f4a0c2;
      uVar29 = sVar39 - 1;
      puVar40 = (uint *)((longlong)puVar38 + 1);
      local_60 = local_60 + ((ulonglong)(byte)*puVar38 << (bVar20 & 0x3f));
      puVar25 = local_50;
      if ((uint)local_50 < 0x18) {
        puVar25 = local_50 + 2;
        if (uVar29 == 0) {
LAB_00f4a3bd:
          local_50._0_4_ = (uint)puVar25;
          puVar38 = puVar40;
          goto LAB_00f4a0c2;
        }
        uVar29 = sVar39 - 2;
        puVar40 = (uint *)((longlong)puVar38 + 2);
        local_60 = local_60 +
                   ((ulonglong)*(byte *)((longlong)puVar38 + 1) << ((byte)puVar25 & 0x3f));
        if (0xf < (uint)local_50) goto LAB_00f489d0;
        puVar25 = local_50 + 4;
        if (uVar29 == 0) goto LAB_00f4a3bd;
        bVar20 = (byte)puVar25;
        puVar25 = (uint *)(ulonglong)(sVar39 - 3);
        puVar40 = (uint *)((longlong)puVar38 + 3);
        local_60 = local_60 + ((ulonglong)*(byte *)((longlong)puVar38 + 2) << (bVar20 & 0x3f));
        puVar31 = puVar25;
        if ((uint)local_50 < 8) {
          puVar25 = local_50 + 6;
          if (sVar39 - 3 == 0) goto LAB_00f4a3bd;
          puVar40 = puVar38 + 1;
          puVar25 = (uint *)((ulonglong)puVar25 & 0xffffffff);
          local_60 = local_60 +
                     ((ulonglong)*(byte *)((longlong)puVar38 + 3) << ((byte)puVar25 & 0x3f));
          puVar31 = (uint *)(ulonglong)(sVar39 - 4);
        }
      }
      else {
LAB_00f489d0:
        puVar31 = (uint *)(ulonglong)uVar29;
      }
LAB_00f489d9:
      uVar29 = (uint)local_60;
      uVar19 = (ulonglong)
               (uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 | uVar29 << 0x18)
      ;
      *puVar2 = uVar19;
      unaff_RDI[0xc] = uVar19;
      *puVar1 = 0x3f3e;
      puVar48 = (undefined *)0x0;
      local_50._0_4_ = 0;
    case 0x3f3e:
      if (*(int *)((longlong)puVar5 + 0x14) == 0) {
        unaff_RDI[3] = (longlong)puVar43;
        *(uint *)(unaff_RDI + 4) = uVar32;
        *unaff_RDI = (longlong)puVar40;
        *(int *)(unaff_RDI + 1) = (int)puVar31;
        puVar5[10] = puVar48;
        *(uint *)(puVar5 + 0xb) = (uint)local_50;
        return 2;
      }
      uVar19 = FUN_00f42bd0(puVar25,0);
      *puVar2 = uVar19;
      unaff_RDI[0xc] = uVar19;
      *puVar1 = 0x3f3f;
      puVar38 = puVar40;
switchD_00f47e53_caseD_3f3f:
      sVar39 = (size_t)puVar31;
      iVar28 = local_38;
      if (unaff_ESI - 5U < 2) goto switchD_00f47e53_caseD_3f50;
switchD_00f47e53_caseD_3f40:
      bVar20 = (byte)(uint)local_50;
      if (*(int *)((longlong)puVar5 + 0xc) == 0) {
        if ((uint)local_50 < 3) {
          puVar25 = puVar38;
          uVar29 = (uint)local_50;
          if ((int)puVar31 != 0) {
            local_50._0_4_ = (uint)local_50 + 8;
            puVar31 = (uint *)(ulonglong)((int)puVar31 - 1);
            uVar29 = *puVar38;
            puVar38 = (uint *)((longlong)puVar38 + 1);
            puVar48 = puVar48 + ((ulonglong)(byte)uVar29 << (bVar20 & 0x3f));
            goto LAB_00f48aa9;
          }
          goto LAB_00f4a1f9;
        }
LAB_00f48aa9:
        sVar39 = (size_t)puVar31;
        *(uint *)((longlong)puVar5 + 0xc) = (uint)puVar48 & 1;
        uVar29 = 0x3f41;
        switch((uint)((ulonglong)puVar48 >> 1) & 3) {
        case 1:
          puVar5[0xd] = &DAT_023e75e0;
          puVar5[0xf] = 0x500000009;
          puVar5[0xe] = &DAT_023e7de0;
          *(undefined4 *)(puVar5 + 1) = 0x3f47;
          if (unaff_ESI != 6) goto LAB_00f48b25;
          puVar48 = (undefined *)((ulonglong)puVar48 >> 3);
          local_50._0_4_ = (uint)local_50 - 3;
          iVar28 = local_38;
          goto switchD_00f47e53_caseD_3f50;
        case 2:
          uVar29 = 0x3f44;
          break;
        case 3:
          unaff_RDI[6] = (longlong)"invalid block type";
          uVar29 = 0x3f51;
        }
        *puVar1 = uVar29;
LAB_00f48b25:
        local_60 = (undefined *)((ulonglong)puVar48 >> 3);
        local_50 = (uint *)(ulonglong)((uint)local_50 - 3);
        uVar29 = *puVar1;
      }
      else {
        local_60 = (undefined *)((ulonglong)puVar48 >> (bVar20 & 7));
        local_50 = (uint *)(ulonglong)((uint)local_50 & 0xfffffff8);
        *puVar1 = 0x3f4e;
        uVar29 = *puVar1;
      }
      break;
    case 0x3f3f:
      goto switchD_00f47e53_caseD_3f3f;
    case 0x3f40:
      goto switchD_00f47e53_caseD_3f40;
    case 0x3f41:
      local_60 = (undefined *)((ulonglong)local_60 >> (bVar20 & 7));
      uVar19 = (ulonglong)local_50 & 0xfffffff8;
      local_50._0_4_ = (uint)local_50 & 0xfffffff8;
      if ((uint)local_50 < 0x20) {
        uVar47 = (ulonglong)(uint)local_50;
        if (sVar39 == 0) goto LAB_00f4a0c2;
        uVar23 = sVar39 - 1;
        puVar40 = (uint *)((longlong)puVar38 + 1);
        local_60 = local_60 + ((ulonglong)(byte)*puVar38 << ((byte)(uint)local_50 & 0x3f));
        puVar25 = (uint *)(uVar47 + 8);
        uVar29 = (uint)puVar25;
        if ((uint)local_50 < 0x18) {
          if (uVar23 == 0) {
LAB_00f4a1c2:
            local_50._0_4_ = (uint)puVar25;
            puVar38 = puVar40;
            goto LAB_00f4a0c2;
          }
          uVar23 = sVar39 - 2;
          puVar40 = (uint *)((longlong)puVar38 + 2);
          local_60 = local_60 +
                     ((ulonglong)*(byte *)((longlong)puVar38 + 1) << ((byte)puVar25 & 0x3f));
          puVar25 = (uint *)(uVar47 + 0x10);
          uVar29 = (uint)puVar25;
          if ((uint)local_50 < 0x10) {
            if (uVar23 == 0) goto LAB_00f4a1c2;
            uVar23 = sVar39 - 3;
            puVar40 = (uint *)((longlong)puVar38 + 3);
            local_60 = local_60 +
                       ((ulonglong)*(byte *)((longlong)puVar38 + 2) << ((byte)puVar25 & 0x3f));
            puVar25 = (uint *)(uVar47 + 0x18);
            uVar29 = (uint)puVar25;
            if (uVar19 == 0) {
              if (uVar23 == 0) goto LAB_00f4a1c2;
              uVar23 = sVar39 - 4;
              puVar40 = puVar38 + 1;
              local_60 = local_60 +
                         ((ulonglong)*(byte *)((longlong)puVar38 + 3) << ((byte)puVar25 & 0x3f));
              uVar29 = (uint)local_50 + 0x20;
            }
          }
        }
        puVar31 = (uint *)(ulonglong)uVar23;
        puVar38 = puVar40;
        local_50._0_4_ = uVar29;
      }
      sVar39 = (size_t)puVar31;
      local_50 = (uint *)(ulonglong)(uint)local_50;
      puVar25 = (uint *)((ulonglong)local_60 >> 0x10 ^ 0xffff);
      if ((uint *)((ulonglong)local_60 & 0xffff) == puVar25) {
        puVar48 = (undefined *)0x0;
        *(uint *)((longlong)puVar5 + 0x5c) = (uint)local_60 & 0xffff;
        *(undefined4 *)(puVar5 + 1) = 0x3f42;
        local_50 = (uint *)0x0;
        if (unaff_ESI != 6) goto switchD_00f47e53_caseD_3f42;
        local_50._0_4_ = 0;
        iVar28 = local_38;
        goto switchD_00f47e53_caseD_3f50;
      }
      unaff_RDI[6] = (longlong)"invalid stored block lengths";
      *puVar1 = 0x3f51;
      uVar29 = *puVar1;
      break;
    case 0x3f42:
switchD_00f47e53_caseD_3f42:
      *puVar1 = 0x3f43;
      local_60 = puVar48;
switchD_00f47e53_caseD_3f43:
      sVar39 = (size_t)puVar31;
      uVar29 = *(uint *)((longlong)puVar5 + 0x5c);
      if (uVar29 == 0) {
        *puVar1 = 0x3f3f;
        uVar29 = *puVar1;
      }
      else {
        if (sVar39 < uVar29) {
          uVar29 = sVar39;
        }
        if (uVar32 < uVar29) {
          uVar29 = uVar32;
        }
        puVar48 = local_60;
        iVar28 = local_38;
        if (uVar29 == 0) goto switchD_00f47e53_caseD_3f50;
        pvVar45 = (void *)(ulonglong)uVar29;
        _memcpy(puVar25,pvVar45,sVar39);
        puVar31 = (uint *)(ulonglong)(sVar39 - uVar29);
        puVar38 = (uint *)((longlong)puVar38 + (longlong)pvVar45);
        uVar32 = uVar32 - uVar29;
        puVar43 = puVar43 + (longlong)pvVar45;
        *(int *)((longlong)puVar5 + 0x5c) = *(int *)((longlong)puVar5 + 0x5c) - uVar29;
        uVar29 = *puVar1;
      }
      break;
    case 0x3f43:
      goto switchD_00f47e53_caseD_3f43;
    case 0x3f44:
      puVar40 = puVar38;
      uVar23 = (uint)local_50;
      if ((uint)local_50 < 0xe) {
        if (sVar39 == 0) goto LAB_00f4a0c2;
        uVar29 = sVar39 - 1;
        puVar40 = (uint *)((longlong)puVar38 + 1);
        local_60 = local_60 + ((ulonglong)(byte)*puVar38 << (bVar20 & 0x3f));
        puVar25 = local_50 + 2;
        uVar23 = (uint)puVar25;
        if ((uint)local_50 < 6) {
          if (uVar29 == 0) goto LAB_00f4a1c2;
          uVar29 = sVar39 - 2;
          puVar40 = (uint *)((longlong)puVar38 + 2);
          local_60 = local_60 +
                     ((ulonglong)*(byte *)((longlong)puVar38 + 1) << ((byte)puVar25 & 0x3f));
          uVar23 = (uint)local_50 + 0x10;
        }
        puVar31 = (uint *)(ulonglong)uVar29;
      }
      uVar13 = (uint)local_60 & 0x1f;
      *(uint *)((longlong)puVar5 + 0x84) = uVar13 + 0x101;
      uVar46 = (uint)((ulonglong)local_60 >> 5) & 0x1f;
      *(uint *)(puVar5 + 0x11) = uVar46 + 1;
      uVar29 = ((uint)((ulonglong)local_60 >> 10) & 0xf) + 4;
      *(uint *)(puVar5 + 0x10) = uVar29;
      local_60 = (undefined *)((ulonglong)local_60 >> 0xe);
      local_50 = (uint *)(ulonglong)(uVar23 - 0xe);
      puVar38 = puVar40;
      if ((0x1d < uVar13) || (0x1d < uVar46)) {
        pcVar17 = "too many length or distance symbols";
        goto LAB_00f49fd2;
      }
      *(undefined4 *)((longlong)puVar5 + 0x8c) = 0;
      *(undefined4 *)(puVar5 + 1) = 0x3f45;
      uVar23 = 0;
LAB_00f48c89:
      puVar33 = &DAT_023e75b0 + uVar23;
      do {
        uVar46 = (uint)local_50;
        if (uVar46 < 3) {
          local_50._0_4_ = uVar46;
          if ((int)puVar31 == 0) goto LAB_00f4a0c2;
          uVar46 = uVar46 + 8;
          puVar31 = (uint *)(ulonglong)((int)puVar31 - 1);
          uVar13 = *puVar38;
          puVar38 = (uint *)((longlong)puVar38 + 1);
          local_60 = local_60 + ((ulonglong)(byte)uVar13 << ((byte)local_50 & 0x3f));
        }
        uVar23 = uVar23 + 1;
        *(uint *)((longlong)puVar5 + 0x8c) = uVar23;
        *(ushort *)((longlong)puVar5 + (ulonglong)*puVar33 * 2 + 0x98) = (ushort)local_60 & 7;
        local_60 = (undefined *)((ulonglong)local_60 >> 3);
        local_50 = (uint *)(ulonglong)(uVar46 - 3);
        puVar33 = puVar33 + 1;
      } while (uVar23 < uVar29);
      goto LAB_00f48156;
    case 0x3f45:
      uVar29 = *(uint *)(puVar5 + 0x10);
      uVar23 = *(uint *)((longlong)puVar5 + 0x8c);
      if (uVar23 < uVar29) goto LAB_00f48c89;
LAB_00f48156:
      if (uVar23 < 0x13) {
        uVar19 = (ulonglong)uVar23;
        if ((3 - uVar23 & 3) != 0) {
          lVar16 = 0;
          do {
            *(undefined2 *)
             ((longlong)puVar5 + (ulonglong)(ushort)(&DAT_023e75b0)[uVar19 + lVar16] * 2 + 0x98) = 0
            ;
            lVar16 = lVar16 + 1;
          } while (((byte)~(byte)uVar23 & 3) != (uint)lVar16);
          uVar19 = uVar19 + lVar16;
        }
        if (2 < 0x12 - uVar23) {
          do {
            *(undefined2 *)
             ((longlong)puVar5 + (ulonglong)(ushort)(&DAT_023e75b0)[uVar19] * 2 + 0x98) = 0;
            *(undefined2 *)
             ((longlong)puVar5 + (ulonglong)(ushort)(&DAT_023e75b2)[uVar19] * 2 + 0x98) = 0;
            *(undefined2 *)
             ((longlong)puVar5 + (ulonglong)*(ushort *)(&DAT_023e75b4 + uVar19 * 2) * 2 + 0x98) = 0;
            lVar16 = uVar19 * 2;
            uVar19 = uVar19 + 4;
            *(undefined2 *)
             ((longlong)puVar5 + (ulonglong)*(ushort *)(&DAT_023e75b6 + lVar16) * 2 + 0x98) = 0;
          } while ((int)uVar19 != 0x13);
        }
        *(undefined4 *)((longlong)puVar5 + 0x8c) = 0x13;
      }
      puVar5[0x12] = puVar3;
      puVar5[0xd] = puVar3;
      *(undefined4 *)(puVar5 + 0xf) = 7;
      uVar19 = 0;
      local_38 = FUN_00f4a600(puVar52,0x13,puVar53,puVar4,puVar52,puVar53,puVar54);
      if (local_38 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0x8c) = 0;
        *(undefined4 *)(puVar5 + 1) = 0x3f46;
        local_38 = 0;
LAB_00f48554:
        iVar28 = *(int *)((longlong)puVar5 + 0x84);
        uVar29 = *(int *)(puVar5 + 0x11) + iVar28;
        if ((uint)uVar19 < uVar29) {
          lVar16 = puVar5[0xd];
          uVar23 = ~(-1 << (*(byte *)(puVar5 + 0xf) & 0x1f));
          do {
            uVar47 = (ulonglong)(uVar23 & (uint)local_60);
            bVar20 = *(byte *)(lVar16 + 1 + uVar47 * 4);
            uVar46 = (uint)local_50;
            puVar40 = puVar31;
            puVar25 = puVar38;
            if (uVar46 < bVar20) {
              do {
                puVar36 = (uint *)(ulonglong)((int)puVar40 - 1);
                if ((int)puVar40 == 0) {
                  local_50._0_4_ = uVar46 + (int)puVar31 * 8;
                  puVar38 = (uint *)((longlong)puVar38 + (longlong)puVar31);
                  goto LAB_00f4a100;
                }
                puVar34 = (uint *)((longlong)puVar25 + 1);
                local_60 = local_60 + ((ulonglong)(byte)*puVar25 << ((byte)local_50 & 0x3f));
                local_50 = local_50 + 2;
                uVar13 = uVar23 & (uint)local_60;
                bVar20 = *(byte *)(lVar16 + 1 + (ulonglong)uVar13 * 4);
                puVar40 = puVar36;
                puVar25 = puVar34;
              } while (local_50 < (uint *)(ulonglong)bVar20);
              uVar47 = (ulonglong)uVar13;
              local_50 = (uint *)((ulonglong)local_50 & 0xffffffff);
              puVar31 = puVar36;
              puVar38 = puVar34;
            }
            uVar46 = (uint)bVar20;
            uVar42 = *(ushort *)(lVar16 + 2 + uVar47 * 4);
            uVar44 = (uint)uVar19;
            uVar13 = (uint)local_50;
            if (0xf < uVar42) {
              if (uVar42 == 0x10) {
                if (uVar13 < uVar46 + 2) {
                  do {
                    iVar14 = (int)puVar31;
                    puVar31 = (uint *)(ulonglong)(iVar14 - 1);
                    if (iVar14 == 0) goto LAB_00f4a0cd;
                    uVar13 = *puVar38;
                    puVar38 = (uint *)((longlong)puVar38 + 1);
                    local_60 = local_60 + ((ulonglong)(byte)uVar13 << ((byte)local_50 & 0x3f));
                    local_50 = local_50 + 2;
                  } while (local_50 < (uint *)(ulonglong)(uVar46 + 2));
                }
                local_60 = (undefined *)((ulonglong)local_60 >> (bVar20 & 0x3f));
                uVar46 = (int)local_50 - uVar46;
                local_50 = (uint *)(ulonglong)uVar46;
                if (uVar44 != 0) {
                  uVar13 = (uint)*(ushort *)((longlong)puVar5 + (ulonglong)(uVar44 - 1) * 2 + 0x98);
                  uVar22 = ((uint)local_60 & 3) + 3;
                  local_60 = (undefined *)((ulonglong)local_60 >> 2);
                  uVar46 = uVar46 - 2;
                  goto LAB_00f4874d;
                }
              }
              else {
                if (uVar42 == 0x11) {
                  if (uVar13 < uVar46 + 3) {
                    do {
                      iVar14 = (int)puVar31;
                      puVar31 = (uint *)(ulonglong)(iVar14 - 1);
                      if (iVar14 == 0) goto LAB_00f4a0cd;
                      uVar13 = *puVar38;
                      puVar38 = (uint *)((longlong)puVar38 + 1);
                      local_60 = local_60 + ((ulonglong)(byte)uVar13 << ((byte)local_50 & 0x3f));
                      local_50 = local_50 + 2;
                    } while (local_50 < (uint *)(ulonglong)(uVar46 + 3));
                  }
                  uVar47 = (ulonglong)local_60 >> (bVar20 & 0x3f);
                  uVar22 = ((uint)uVar47 & 7) + 3;
                  local_60 = (undefined *)(uVar47 >> 3);
                  uVar46 = ((int)local_50 - uVar46) - 3;
                }
                else {
                  if (uVar13 < uVar46 + 7) {
                    do {
                      iVar14 = (int)puVar31;
                      puVar31 = (uint *)(ulonglong)(iVar14 - 1);
                      if (iVar14 == 0) goto LAB_00f4a0cd;
                      uVar13 = *puVar38;
                      puVar38 = (uint *)((longlong)puVar38 + 1);
                      local_60 = local_60 + ((ulonglong)(byte)uVar13 << ((byte)local_50 & 0x3f));
                      local_50 = local_50 + 2;
                    } while (local_50 < (uint *)(ulonglong)(uVar46 + 7));
                  }
                  uVar47 = (ulonglong)local_60 >> (bVar20 & 0x3f);
                  uVar22 = ((uint)uVar47 & 0x7f) + 0xb;
                  local_60 = (undefined *)(uVar47 >> 7);
                  uVar46 = ((int)local_50 - uVar46) - 7;
                }
                uVar13 = 0;
LAB_00f4874d:
                local_50 = (uint *)(ulonglong)uVar46;
                if (uVar22 + uVar44 <= uVar29) {
                  if ((uVar22 < 0x10) || (CARRY4(uVar22 - 1,uVar44))) {
LAB_00f48884:
                    uVar46 = uVar22 - 1;
                    uVar12 = (undefined2)uVar13;
                    if ((uVar22 & 3) != 0) {
                      uVar13 = 0;
                      do {
                        *(undefined2 *)
                         ((longlong)puVar5 + (ulonglong)((int)uVar19 + uVar13) * 2 + 0x98) = uVar12;
                        uVar13 = uVar13 + 1;
                      } while ((uVar22 & 3) != uVar13);
                      uVar22 = uVar22 - uVar13;
                      uVar19 = (ulonglong)((int)uVar19 + uVar13);
                    }
                    if (2 < uVar46) {
                      do {
                        iVar14 = (int)uVar19;
                        *(undefined2 *)((longlong)puVar5 + uVar19 * 2 + 0x98) = uVar12;
                        *(undefined2 *)((longlong)puVar5 + (ulonglong)(iVar14 + 1) * 2 + 0x98) =
                             uVar12;
                        *(undefined2 *)((longlong)puVar5 + (ulonglong)(iVar14 + 2) * 2 + 0x98) =
                             uVar12;
                        uVar19 = (ulonglong)(iVar14 + 4);
                        *(undefined2 *)((longlong)puVar5 + (ulonglong)(iVar14 + 3) * 2 + 0x98) =
                             uVar12;
                        uVar22 = uVar22 - 4;
                      } while (uVar22 != 0);
                    }
                  }
                  else {
                    uVar46 = uVar22 & 0xfffffff0;
                    auVar50 = pshuflw(ZEXT416(uVar13),ZEXT416(uVar13),0);
                    auVar50._4_4_ = auVar50._0_4_;
                    auVar50._8_4_ = auVar50._0_4_;
                    auVar50._12_4_ = auVar50._0_4_;
                    *(undefined1 (*) [16])((longlong)puVar5 + uVar19 * 2 + 0x98) = auVar50;
                    *(undefined1 (*) [16])((longlong)puVar5 + uVar19 * 2 + 0xa8) = auVar50;
                    if (uVar46 != 0x10) {
                      *(undefined1 (*) [16])
                       ((longlong)puVar5 + (ulonglong)(uVar44 + 0x10) * 2 + 0x98) = auVar50;
                      *(undefined1 (*) [16])
                       ((longlong)puVar5 + (ulonglong)(uVar44 + 0x10) * 2 + 0xa8) = auVar50;
                      if (uVar46 != 0x20) {
                        *(undefined1 (*) [16])
                         ((longlong)puVar5 + (ulonglong)(uVar44 + 0x20) * 2 + 0x98) = auVar50;
                        *(undefined1 (*) [16])
                         ((longlong)puVar5 + (ulonglong)(uVar44 + 0x20) * 2 + 0xa8) = auVar50;
                        if (uVar46 != 0x30) {
                          *(undefined1 (*) [16])
                           ((longlong)puVar5 + (ulonglong)(uVar44 + 0x30) * 2 + 0x98) = auVar50;
                          *(undefined1 (*) [16])
                           ((longlong)puVar5 + (ulonglong)(uVar44 + 0x30) * 2 + 0xa8) = auVar50;
                          if (uVar46 != 0x40) {
                            *(undefined1 (*) [16])
                             ((longlong)puVar5 + (ulonglong)(uVar44 + 0x40) * 2 + 0x98) = auVar50;
                            *(undefined1 (*) [16])
                             ((longlong)puVar5 + (ulonglong)(uVar44 + 0x40) * 2 + 0xa8) = auVar50;
                            if (uVar46 != 0x50) {
                              *(undefined1 (*) [16])
                               ((longlong)puVar5 + (ulonglong)(uVar44 + 0x50) * 2 + 0x98) = auVar50;
                              *(undefined1 (*) [16])
                               ((longlong)puVar5 + (ulonglong)(uVar44 + 0x50) * 2 + 0xa8) = auVar50;
                              if (uVar46 != 0x60) {
                                *(undefined1 (*) [16])
                                 ((longlong)puVar5 + (ulonglong)(uVar44 + 0x60) * 2 + 0x98) =
                                     auVar50;
                                *(undefined1 (*) [16])
                                 ((longlong)puVar5 + (ulonglong)(uVar44 + 0x60) * 2 + 0xa8) =
                                     auVar50;
                                if (uVar46 != 0x70) {
                                  *(undefined1 (*) [16])
                                   ((longlong)puVar5 + (ulonglong)(uVar44 + 0x70) * 2 + 0x98) =
                                       auVar50;
                                  *(undefined1 (*) [16])
                                   ((longlong)puVar5 + (ulonglong)(uVar44 + 0x70) * 2 + 0xa8) =
                                       auVar50;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    uVar19 = (ulonglong)(uVar44 + uVar46);
                    if (uVar22 != uVar46) {
                      uVar22 = uVar22 & 0xf;
                      goto LAB_00f48884;
                    }
                  }
                  *(int *)((longlong)puVar5 + 0x8c) = (int)uVar19;
                  goto LAB_00f488fd;
                }
              }
              unaff_RDI[6] = (longlong)"invalid bit length repeat";
              *puVar1 = 0x3f51;
              uVar29 = *puVar1;
              goto LAB_00f47e32;
            }
            local_60 = (undefined *)((ulonglong)local_60 >> (bVar20 & 0x3f));
            local_50 = (uint *)(ulonglong)(uVar13 - uVar46);
            *(uint *)((longlong)puVar5 + 0x8c) = uVar44 + 1;
            *(ushort *)((longlong)puVar5 + uVar19 * 2 + 0x98) = uVar42;
            uVar19 = (ulonglong)(uVar44 + 1);
LAB_00f488fd:
          } while ((uint)uVar19 < uVar29);
        }
        sVar39 = (size_t)puVar31;
        if (*(short *)(puVar5 + 0x53) == 0) {
          unaff_RDI[6] = (longlong)"invalid code -- missing end-of-block";
          *puVar1 = 0x3f51;
LAB_00f49c19:
          uVar29 = *puVar1;
        }
        else {
          puVar5[0x12] = puVar3;
          puVar5[0xd] = puVar3;
          *(undefined4 *)(puVar5 + 0xf) = 9;
          puVar51 = puVar52;
          local_38 = FUN_00f4a600(puVar52,iVar28,puVar53,puVar4,puVar52,puVar53,puVar54);
          if (local_38 == 0) {
            puVar5[0xe] = puVar5[0x12];
            *(undefined4 *)((longlong)puVar5 + 0x7c) = 6;
            local_38 = FUN_00f4a600(puVar52,*(undefined4 *)(puVar5 + 0x11),(longlong)puVar5 + 0x7c,
                                    puVar4);
            if (local_38 == 0) {
              local_38 = 0;
              *puVar1 = 0x3f47;
              if (unaff_ESI == 6) {
                puVar48 = local_60;
                iVar28 = 0;
                goto switchD_00f47e53_caseD_3f50;
              }
switchD_00f47e53_caseD_3f47:
              *puVar1 = 0x3f48;
              puVar52 = puVar51;
switchD_00f47e53_caseD_3f48:
              uVar29 = (uint)puVar31;
              uVar23 = (uint)local_50;
              if ((uVar29 < 6) || (uVar32 < 0x102)) {
                *(undefined4 *)((longlong)puVar5 + 0x1bec) = 0;
                lVar16 = puVar5[0xd];
                uVar46 = ~(-1 << (*(byte *)(puVar5 + 0xf) & 0x1f));
                uVar19 = (ulonglong)((uint)local_60 & uVar46);
                bVar20 = *(byte *)(lVar16 + 1 + uVar19 * 4);
                puVar36 = (uint *)(ulonglong)bVar20;
                puVar40 = puVar31;
                puVar25 = puVar38;
                if (uVar23 < bVar20) {
                  do {
                    puVar34 = (uint *)(ulonglong)((int)puVar40 - 1);
                    if ((int)puVar40 == 0) {
                      puVar40 = (uint *)((longlong)puVar38 + (longlong)puVar31);
                      uVar23 = uVar23 + uVar29 * 8;
                      goto LAB_00f4a0a5;
                    }
                    puVar35 = (uint *)((longlong)puVar25 + 1);
                    local_60 = local_60 + ((ulonglong)(byte)*puVar25 << ((byte)local_50 & 0x3f));
                    local_50 = local_50 + 2;
                    uVar13 = uVar46 & (uint)local_60;
                    bVar20 = *(byte *)(lVar16 + 1 + (ulonglong)uVar13 * 4);
                    puVar36 = (uint *)(ulonglong)bVar20;
                    puVar40 = puVar34;
                    puVar25 = puVar35;
                  } while (local_50 < puVar36);
                  uVar19 = (ulonglong)uVar13;
                  local_50 = (uint *)((ulonglong)local_50 & 0xffffffff);
                  puVar31 = puVar34;
                  puVar38 = puVar35;
                }
                bVar27 = *(byte *)(lVar16 + uVar19 * 4);
                uVar42 = *(ushort *)(lVar16 + 2 + uVar19 * 4);
                uVar23 = (uint)puVar36;
                uVar29 = (uint)local_50;
                if ((bVar27 == 0) || ((bVar27 & 0xf0) != 0)) {
                  uVar13 = 0;
                  uVar46 = uVar23;
                }
                else {
                  bVar7 = (byte)puVar36;
                  uVar46 = ~(-1 << (bVar27 + bVar7 & 0x1f));
                  uVar19 = (ulonglong)((((uint)local_60 & uVar46) >> (bVar7 & 0x1f)) + (uint)uVar42)
                  ;
                  bVar21 = *(byte *)(lVar16 + 1 + uVar19 * 4);
                  puVar40 = puVar38;
                  puVar25 = puVar31;
                  if (uVar29 < uVar23 + bVar21) {
                    do {
                      puVar34 = (uint *)(ulonglong)((int)puVar25 - 1);
                      if ((int)puVar25 == 0) {
                        local_50._0_4_ = uVar29 + (int)puVar31 * 8;
                        sVar39 = 0;
                        puVar38 = (uint *)((longlong)puVar38 + (longlong)puVar31);
                        puVar48 = local_60;
                        iVar28 = local_38;
                        goto switchD_00f47e53_caseD_3f50;
                      }
                      puVar35 = (uint *)((longlong)puVar40 + 1);
                      local_60 = local_60 + ((ulonglong)(byte)*puVar40 << ((byte)local_50 & 0x3f));
                      local_50 = local_50 + 2;
                      uVar13 = (((uint)local_60 & uVar46) >> (bVar7 & 0x1f)) + (uint)uVar42;
                      bVar21 = *(byte *)(lVar16 + 1 + (ulonglong)uVar13 * 4);
                      puVar40 = puVar35;
                      puVar25 = puVar34;
                    } while (local_50 < (uint *)((longlong)puVar36 + (ulonglong)bVar21));
                    uVar19 = (ulonglong)uVar13;
                    puVar38 = puVar35;
                    puVar31 = puVar34;
                  }
                  local_60 = (undefined *)((ulonglong)local_60 >> (bVar20 & 0x3f));
                  uVar42 = *(ushort *)(lVar16 + 2 + uVar19 * 4);
                  bVar27 = *(byte *)(lVar16 + uVar19 * 4);
                  uVar29 = (int)local_50 - uVar23;
                  bVar20 = bVar21;
                  uVar46 = (uint)bVar21;
                  uVar13 = uVar23;
                }
                local_60 = (undefined *)((ulonglong)local_60 >> (bVar20 & 0x3f));
                local_50 = (uint *)(ulonglong)(uVar29 - uVar46);
                *(uint *)((longlong)puVar5 + 0x1bec) = uVar13 + uVar46;
                *(uint *)((longlong)puVar5 + 0x5c) = (uint)uVar42;
                if (bVar27 == 0) {
                  *puVar1 = 0x3f4d;
LAB_00f49f09:
                  uVar29 = *puVar1;
                }
                else {
                  if ((bVar27 & 0x20) != 0) {
                    *(undefined4 *)((longlong)puVar5 + 0x1bec) = 0xffffffff;
                    *(undefined4 *)(puVar5 + 1) = 0x3f3f;
                    goto LAB_00f49f09;
                  }
                  if ((bVar27 & 0x40) == 0) {
                    uVar29 = bVar27 & 0xf;
                    *(uint *)((longlong)puVar5 + 100) = uVar29;
                    *(undefined4 *)(puVar5 + 1) = 0x3f49;
                    if ((bVar27 & 0xf) == 0) {
LAB_00f49a25:
                      iVar28 = *(int *)((longlong)puVar5 + 0x5c);
                    }
                    else {
LAB_00f482b5:
                      uVar23 = (uint)local_50;
                      puVar40 = puVar31;
                      puVar25 = puVar38;
                      if (uVar23 < uVar29) {
                        do {
                          uVar13 = (int)puVar40 - 1;
                          if ((int)puVar40 == 0) goto LAB_00f4a0b5;
                          puVar36 = (uint *)((longlong)puVar25 + 1);
                          local_60 = local_60 +
                                     ((ulonglong)(byte)*puVar25 << ((byte)local_50 & 0x3f));
                          uVar46 = (int)local_50 + 8;
                          local_50 = (uint *)(ulonglong)uVar46;
                          puVar40 = (uint *)(ulonglong)uVar13;
                          puVar25 = puVar36;
                        } while (uVar46 < uVar29);
                      }
                      else {
                        uVar13 = (uint)puVar31;
                        puVar36 = puVar38;
                        uVar46 = uVar23;
                      }
                      iVar28 = (~(-1 << ((byte)uVar29 & 0x1f)) & (uint)local_60) +
                               *(int *)((longlong)puVar5 + 0x5c);
                      *(int *)((longlong)puVar5 + 0x5c) = iVar28;
                      local_60 = (undefined *)((ulonglong)local_60 >> ((byte)uVar29 & 0x3f));
                      *(int *)((longlong)puVar5 + 0x1bec) =
                           *(int *)((longlong)puVar5 + 0x1bec) + uVar29;
                      puVar31 = (uint *)(ulonglong)uVar13;
                      local_50 = (uint *)(ulonglong)(uVar46 - uVar29);
                      puVar38 = puVar36;
                    }
                    *(int *)(puVar5 + 0x37e) = iVar28;
                    *(undefined4 *)(puVar5 + 1) = 0x3f4a;
switchD_00f47e53_caseD_3f4a:
                    lVar16 = puVar5[0xe];
                    uVar29 = ~(-1 << (*(byte *)((longlong)puVar5 + 0x7c) & 0x1f));
                    uVar19 = (ulonglong)((uint)local_60 & uVar29);
                    bVar20 = *(byte *)(lVar16 + 1 + uVar19 * 4);
                    puVar36 = (uint *)(ulonglong)bVar20;
                    uVar23 = (uint)local_50;
                    puVar40 = puVar31;
                    puVar25 = puVar38;
                    if (uVar23 < bVar20) {
                      do {
                        puVar34 = (uint *)(ulonglong)((int)puVar40 - 1);
                        if ((int)puVar40 == 0) {
                          local_50._0_4_ = uVar23 + (int)puVar31 * 8;
                          puVar38 = (uint *)((longlong)puVar38 + (longlong)puVar31);
                          goto LAB_00f4a100;
                        }
                        puVar35 = (uint *)((longlong)puVar25 + 1);
                        local_60 = local_60 + ((ulonglong)(byte)*puVar25 << ((byte)local_50 & 0x3f))
                        ;
                        local_50 = local_50 + 2;
                        uVar46 = uVar29 & (uint)local_60;
                        bVar20 = *(byte *)(lVar16 + 1 + (ulonglong)uVar46 * 4);
                        puVar36 = (uint *)(ulonglong)bVar20;
                        puVar40 = puVar34;
                        puVar25 = puVar35;
                      } while (local_50 < puVar36);
                      uVar19 = (ulonglong)uVar46;
                      puVar31 = puVar34;
                      puVar38 = puVar35;
                    }
                    uVar29 = (uint)puVar36;
                    bVar27 = *(byte *)(lVar16 + uVar19 * 4);
                    uVar42 = *(ushort *)(lVar16 + 2 + uVar19 * 4);
                    if ((bVar27 & 0xf0) == 0) {
                      bVar7 = (byte)puVar36;
                      uVar23 = ~(-1 << (bVar27 + bVar7 & 0x1f));
                      uVar19 = (ulonglong)
                               ((((uint)local_60 & uVar23) >> (bVar7 & 0x1f)) + (uint)uVar42);
                      bVar21 = *(byte *)(lVar16 + 1 + uVar19 * 4);
                      if ((uint)local_50 < uVar29 + bVar21) {
                        puVar34 = (uint *)((ulonglong)local_50 & 0xffffffff);
                        puVar40 = puVar38;
                        puVar25 = puVar31;
                        do {
                          iVar28 = (int)puVar25;
                          puVar25 = (uint *)(ulonglong)(iVar28 - 1);
                          if (iVar28 == 0) {
                            local_50._0_4_ = (uint)local_50 + (int)puVar31 * 8;
                            puVar38 = (uint *)((longlong)puVar38 + (longlong)puVar31);
LAB_00f4a100:
                            sVar39 = 0;
                            puVar48 = local_60;
                            iVar28 = local_38;
                            goto switchD_00f47e53_caseD_3f50;
                          }
                          uVar46 = *puVar40;
                          puVar40 = (uint *)((longlong)puVar40 + 1);
                          local_60 = local_60 + ((ulonglong)(byte)uVar46 << ((byte)puVar34 & 0x3f));
                          puVar34 = puVar34 + 2;
                          uVar46 = (((uint)local_60 & uVar23) >> (bVar7 & 0x1f)) + (uint)uVar42;
                          bVar21 = *(byte *)(lVar16 + 1 + (ulonglong)uVar46 * 4);
                        } while (puVar34 < (uint *)((longlong)puVar36 + (ulonglong)bVar21));
                        uVar19 = (ulonglong)uVar46;
                        puVar31 = puVar25;
                        puVar38 = puVar40;
                        local_50 = puVar34;
                      }
                      uVar23 = (uint)bVar21;
                      uVar42 = *(ushort *)(lVar16 + 2 + uVar19 * 4);
                      local_60 = (undefined *)((ulonglong)local_60 >> (bVar20 & 0x3f));
                      bVar27 = *(byte *)(lVar16 + uVar19 * 4);
                      local_50._0_4_ = (int)local_50 - uVar29;
                      iVar28 = uVar29 + *(int *)((longlong)puVar5 + 0x1bec);
                    }
                    else {
                      iVar28 = *(int *)((longlong)puVar5 + 0x1bec);
                      bVar21 = bVar20;
                      uVar23 = uVar29;
                    }
                    local_60 = (undefined *)((ulonglong)local_60 >> (bVar21 & 0x3f));
                    local_50 = (uint *)(ulonglong)((uint)local_50 - uVar23);
                    *(uint *)((longlong)puVar5 + 0x1bec) = iVar28 + uVar23;
                    if ((bVar27 & 0x40) != 0) {
                      unaff_RDI[6] = (longlong)"invalid distance code";
                      *puVar1 = 0x3f51;
                      goto LAB_00f49c19;
                    }
                    *(uint *)(puVar5 + 0xc) = (uint)uVar42;
                    uVar29 = bVar27 & 0xf;
                    *(uint *)((longlong)puVar5 + 100) = uVar29;
                    *(undefined4 *)(puVar5 + 1) = 0x3f4b;
LAB_00f49bca:
                    if (uVar29 != 0) {
                      uVar23 = (uint)local_50;
                      puVar40 = puVar31;
                      puVar25 = puVar38;
                      if (uVar23 < uVar29) {
                        do {
                          uVar46 = (int)puVar40 - 1;
                          if ((int)puVar40 == 0) goto LAB_00f4a0b5;
                          puVar36 = (uint *)((longlong)puVar25 + 1);
                          local_60 = local_60 +
                                     ((ulonglong)(byte)*puVar25 << ((byte)local_50 & 0x3f));
                          uVar13 = (int)local_50 + 8;
                          local_50 = (uint *)(ulonglong)uVar13;
                          puVar40 = (uint *)(ulonglong)uVar46;
                          puVar25 = puVar36;
                        } while (uVar13 < uVar29);
                      }
                      else {
                        uVar46 = (uint)puVar31;
                        puVar36 = puVar38;
                        uVar13 = uVar23;
                      }
                      *(uint *)(puVar5 + 0xc) =
                           *(int *)(puVar5 + 0xc) +
                           (~(-1 << ((byte)uVar29 & 0x1f)) & (uint)local_60);
                      local_60 = (undefined *)((ulonglong)local_60 >> ((byte)uVar29 & 0x3f));
                      *(int *)((longlong)puVar5 + 0x1bec) =
                           *(int *)((longlong)puVar5 + 0x1bec) + uVar29;
                      puVar31 = (uint *)(ulonglong)uVar46;
                      local_50 = (uint *)(ulonglong)(uVar13 - uVar29);
                      puVar38 = puVar36;
                    }
                    *puVar1 = 0x3f4c;
switchD_00f47e53_caseD_3f4c:
                    sVar39 = (size_t)puVar31;
                    if (uVar32 == 0) {
LAB_00f4a111:
                      uVar32 = 0;
                      puVar48 = local_60;
                      iVar28 = local_38;
                      goto switchD_00f47e53_caseD_3f50;
                    }
                    uVar29 = *(uint *)(puVar5 + 0xc);
                    if (uVar30 - uVar32 < uVar29) {
                      uVar29 = uVar29 - (uVar30 - uVar32);
                      if ((uVar29 <= *(uint *)(puVar5 + 8)) || (*(int *)(puVar5 + 0x37d) == 0)) {
                        uVar23 = *(uint *)((longlong)puVar5 + 0x44);
                        uVar46 = uVar29 - uVar23;
                        if (uVar29 < uVar23 || uVar46 == 0) {
                          uVar23 = uVar23 - uVar29;
                        }
                        else {
                          uVar23 = *(int *)((longlong)puVar5 + 0x3c) - uVar46;
                          uVar29 = uVar46;
                        }
                        puVar26 = (undefined1 *)((ulonglong)uVar23 + puVar5[9]);
                        uVar23 = *(uint *)((longlong)puVar5 + 0x5c);
                        if (uVar23 < uVar29) {
                          uVar29 = uVar23;
                        }
                        goto LAB_00f49cdf;
                      }
                      pcVar17 = "invalid distance too far back";
                      goto LAB_00f49fd2;
                    }
                    puVar26 = puVar43 + -(ulonglong)uVar29;
                    uVar23 = *(uint *)((longlong)puVar5 + 0x5c);
                    uVar29 = uVar23;
LAB_00f49cdf:
                    if (uVar32 < uVar29) {
                      uVar29 = uVar32;
                    }
                    *(uint *)((longlong)puVar5 + 0x5c) = uVar23 - uVar29;
                    uVar23 = uVar29;
                    if ((uVar29 - 1 < 0x1f) ||
                       ((uVar19 = (ulonglong)(uVar29 - 1) + 1, puVar43 < puVar26 + uVar19 &&
                        (puVar26 < puVar43 + uVar19)))) {
joined_r0x00f49d1f:
                      uVar46 = uVar23 - 1;
                      if ((uVar23 & 7) != 0) {
                        lVar16 = 0;
                        do {
                          puVar43[lVar16] = puVar26[lVar16];
                          lVar16 = lVar16 + 1;
                        } while ((uVar23 & 7) != (uint)lVar16);
                        puVar43 = puVar43 + lVar16;
                        uVar23 = uVar23 - (uint)lVar16;
                        puVar26 = puVar26 + lVar16;
                      }
                      if (6 < uVar46) {
                        lVar16 = 0;
                        do {
                          puVar43[lVar16] = puVar26[lVar16];
                          puVar43[lVar16 + 1] = puVar26[lVar16 + 1];
                          puVar43[lVar16 + 2] = puVar26[lVar16 + 2];
                          puVar43[lVar16 + 3] = puVar26[lVar16 + 3];
                          puVar43[lVar16 + 4] = puVar26[lVar16 + 4];
                          puVar43[lVar16 + 5] = puVar26[lVar16 + 5];
                          puVar43[lVar16 + 6] = puVar26[lVar16 + 6];
                          puVar43[lVar16 + 7] = puVar26[lVar16 + 7];
                          lVar16 = lVar16 + 8;
                        } while (uVar23 != (uint)lVar16);
                        puVar43 = puVar43 + lVar16;
                      }
                    }
                    else {
                      uVar41 = uVar19 & 0xffffffffffffffe0;
                      uVar37 = (uVar41 - 0x20 >> 5) + 1;
                      uVar47 = (ulonglong)((uint)uVar37 & 3);
                      if (uVar41 - 0x20 < 0x60) {
                        lVar16 = 0;
                      }
                      else {
                        lVar18 = -(uVar37 & 0xfffffffffffffffc);
                        lVar16 = 0;
                        do {
                          uVar8 = *(undefined8 *)((longlong)(puVar26 + lVar16) + 8);
                          uVar9 = *(undefined8 *)(puVar26 + lVar16 + 0x10);
                          uVar10 = *(undefined8 *)((longlong)(puVar26 + lVar16 + 0x10) + 8);
                          *(undefined8 *)(puVar43 + lVar16) = *(undefined8 *)(puVar26 + lVar16);
                          *(undefined8 *)((longlong)(puVar43 + lVar16) + 8) = uVar8;
                          *(undefined8 *)(puVar43 + lVar16 + 0x10) = uVar9;
                          *(undefined8 *)((longlong)(puVar43 + lVar16 + 0x10) + 8) = uVar10;
                          uVar8 = *(undefined8 *)((longlong)(puVar26 + lVar16 + 0x20) + 8);
                          uVar9 = *(undefined8 *)(puVar26 + lVar16 + 0x30);
                          uVar10 = *(undefined8 *)((longlong)(puVar26 + lVar16 + 0x30) + 8);
                          *(undefined8 *)(puVar43 + lVar16 + 0x20) =
                               *(undefined8 *)(puVar26 + lVar16 + 0x20);
                          *(undefined8 *)((longlong)(puVar43 + lVar16 + 0x20) + 8) = uVar8;
                          *(undefined8 *)(puVar43 + lVar16 + 0x30) = uVar9;
                          *(undefined8 *)((longlong)(puVar43 + lVar16 + 0x30) + 8) = uVar10;
                          uVar8 = *(undefined8 *)((longlong)(puVar26 + lVar16 + 0x40) + 8);
                          uVar9 = *(undefined8 *)(puVar26 + lVar16 + 0x50);
                          uVar10 = *(undefined8 *)((longlong)(puVar26 + lVar16 + 0x50) + 8);
                          *(undefined8 *)(puVar43 + lVar16 + 0x40) =
                               *(undefined8 *)(puVar26 + lVar16 + 0x40);
                          *(undefined8 *)((longlong)(puVar43 + lVar16 + 0x40) + 8) = uVar8;
                          *(undefined8 *)(puVar43 + lVar16 + 0x50) = uVar9;
                          *(undefined8 *)((longlong)(puVar43 + lVar16 + 0x50) + 8) = uVar10;
                          uVar8 = *(undefined8 *)(puVar26 + lVar16 + 0x70);
                          uVar9 = *(undefined8 *)((longlong)(puVar26 + lVar16 + 0x70) + 8);
                          *(undefined1 (*) [16])(puVar43 + lVar16 + 0x60) =
                               *(undefined1 (*) [16])(puVar26 + lVar16 + 0x60);
                          *(undefined8 *)(puVar43 + lVar16 + 0x70) = uVar8;
                          *(undefined8 *)((longlong)(puVar43 + lVar16 + 0x70) + 8) = uVar9;
                          lVar16 = lVar16 + 0x80;
                          lVar18 = lVar18 + 4;
                        } while (lVar18 != 0);
                      }
                      if (uVar47 != 0) {
                        lVar18 = 0;
                        do {
                          uVar8 = *(undefined8 *)(puVar26 + lVar18 + lVar16 + 0x10);
                          uVar9 = *(undefined8 *)((longlong)(puVar26 + lVar18 + lVar16 + 0x10) + 8);
                          *(undefined1 (*) [16])(puVar43 + lVar18 + lVar16) =
                               *(undefined1 (*) [16])(puVar26 + lVar18 + lVar16);
                          *(undefined8 *)(puVar43 + lVar18 + lVar16 + 0x10) = uVar8;
                          *(undefined8 *)((longlong)(puVar43 + lVar18 + lVar16 + 0x10) + 8) = uVar9;
                          lVar18 = lVar18 + 0x20;
                        } while (uVar47 << 5 != lVar18);
                      }
                      puVar43 = puVar43 + uVar41;
                      if (uVar19 != uVar41) {
                        puVar26 = puVar26 + uVar41;
                        uVar23 = uVar29 - (int)uVar41;
                        goto joined_r0x00f49d1f;
                      }
                    }
                    uVar32 = uVar32 - uVar29;
                    if (*(int *)((longlong)puVar5 + 0x5c) == 0) {
                      *puVar1 = 0x3f48;
                      uVar29 = *puVar1;
                    }
                    else {
                      uVar29 = *puVar1;
                    }
                  }
                  else {
                    unaff_RDI[6] = (longlong)"invalid literal/length code";
                    *puVar1 = 0x3f51;
                    uVar29 = *puVar1;
                  }
                }
              }
              else {
                unaff_RDI[3] = (longlong)puVar43;
                *(uint *)(unaff_RDI + 4) = uVar32;
                *unaff_RDI = (longlong)puVar38;
                *(uint *)(unaff_RDI + 1) = uVar29;
                puVar5[10] = local_60;
                *(uint *)(puVar5 + 0xb) = uVar23;
                FUN_00f46bc0();
                puVar43 = (undefined1 *)unaff_RDI[3];
                uVar32 = *(uint *)(unaff_RDI + 4);
                puVar38 = (uint *)*unaff_RDI;
                puVar31 = (uint *)(ulonglong)*(uint *)(unaff_RDI + 1);
                local_60 = (undefined *)puVar5[10];
                local_50 = (uint *)(ulonglong)*(uint *)(puVar5 + 0xb);
                if (*(int *)(puVar5 + 1) == 0x3f3f) {
                  *(undefined4 *)((longlong)puVar5 + 0x1bec) = 0xffffffff;
                  uVar29 = *puVar1;
                }
                else {
LAB_00f498c9:
                  uVar29 = *puVar1;
                }
              }
            }
            else {
              unaff_RDI[6] = (longlong)"invalid distances set";
              *puVar1 = 0x3f51;
              uVar29 = *puVar1;
              puVar52 = puVar51;
            }
          }
          else {
            unaff_RDI[6] = (longlong)"invalid literal/lengths set";
            *puVar1 = 0x3f51;
            uVar29 = *puVar1;
            puVar52 = puVar51;
          }
        }
      }
      else {
        unaff_RDI[6] = (longlong)"invalid code lengths set";
        *puVar1 = 0x3f51;
        uVar29 = *puVar1;
      }
      break;
    case 0x3f46:
      uVar19 = (ulonglong)*(uint *)((longlong)puVar5 + 0x8c);
      goto LAB_00f48554;
    case 0x3f47:
      goto switchD_00f47e53_caseD_3f47;
    case 0x3f48:
      goto switchD_00f47e53_caseD_3f48;
    case 0x3f49:
      uVar29 = *(uint *)((longlong)puVar5 + 100);
      if (uVar29 != 0) goto LAB_00f482b5;
      goto LAB_00f49a25;
    case 0x3f4a:
      goto switchD_00f47e53_caseD_3f4a;
    case 0x3f4b:
      uVar29 = *(uint *)((longlong)puVar5 + 100);
      goto LAB_00f49bca;
    case 0x3f4c:
      goto switchD_00f47e53_caseD_3f4c;
    case 0x3f4d:
      if (uVar32 == 0) goto LAB_00f4a111;
      *puVar43 = *(undefined1 *)((longlong)puVar5 + 0x5c);
      puVar43 = puVar43 + 1;
      uVar32 = uVar32 - 1;
      *(undefined4 *)(puVar5 + 1) = 0x3f48;
      uVar29 = *puVar1;
      break;
    case 0x3f4e:
      uVar29 = *(uint *)(puVar5 + 2);
      if (uVar29 == 0) {
        uVar29 = 0;
      }
      else {
        if ((uint)local_50 < 0x20) {
          puVar40 = puVar38;
          uVar23 = (uint)local_50;
          if (sVar39 == 0) {
LAB_00f4a0a5:
            sVar39 = 0;
            puVar38 = puVar40;
            puVar48 = local_60;
            iVar28 = local_38;
            local_50._0_4_ = uVar23;
            goto switchD_00f47e53_caseD_3f50;
          }
          uVar46 = sVar39 - 1;
          puVar40 = (uint *)((longlong)puVar38 + 1);
          local_60 = local_60 + ((ulonglong)(byte)*puVar38 << (bVar20 & 0x3f));
          puVar25 = local_50 + 2;
          uVar23 = (uint)puVar25;
          if ((uint)local_50 < 0x18) {
            if (uVar46 == 0) goto LAB_00f4a0a5;
            uVar46 = sVar39 - 2;
            puVar40 = (uint *)((longlong)puVar38 + 2);
            local_60 = local_60 +
                       ((ulonglong)*(byte *)((longlong)puVar38 + 1) << ((byte)puVar25 & 0x3f));
            puVar25 = local_50 + 4;
            uVar23 = (uint)puVar25;
            if ((uint)local_50 < 0x10) {
              if (uVar46 == 0) goto LAB_00f4a0a5;
              uVar46 = sVar39 - 3;
              puVar40 = (uint *)((longlong)puVar38 + 3);
              local_60 = local_60 +
                         ((ulonglong)*(byte *)((longlong)puVar38 + 2) << ((byte)puVar25 & 0x3f));
              puVar25 = local_50 + 6;
              uVar23 = (uint)puVar25;
              if ((uint)local_50 < 8) {
                if (uVar46 == 0) goto LAB_00f4a0a5;
                uVar46 = sVar39 - 4;
                puVar40 = puVar38 + 1;
                local_60 = local_60 +
                           ((ulonglong)*(byte *)((longlong)puVar38 + 3) << ((byte)puVar25 & 0x3f));
                puVar25 = local_50 + 8;
              }
            }
          }
          puVar31 = (uint *)(ulonglong)uVar46;
          local_50 = (uint *)((ulonglong)puVar25 & 0xffffffff);
          puVar38 = puVar40;
        }
        uVar30 = uVar30 - uVar32;
        unaff_RDI[5] = unaff_RDI[5] + (ulonglong)uVar30;
        puVar5[5] = puVar5[5] + (ulonglong)uVar30;
        uVar23 = uVar29 & 4;
        if ((uVar23 != 0) && (uVar30 != 0)) {
          if (*(int *)(puVar5 + 3) == 0) {
            lVar16 = FUN_00f42bd0();
          }
          else {
            lVar16 = FUN_00f43510();
          }
          puVar5[4] = lVar16;
          unaff_RDI[0xc] = lVar16;
          uVar29 = *(uint *)(puVar5 + 2);
          uVar23 = uVar29 & 4;
        }
        uVar46 = (uint)local_60;
        uVar30 = uVar32;
        if (uVar23 != 0) {
          puVar48 = (undefined *)
                    (ulonglong)
                    (uVar46 >> 0x18 | (uVar46 & 0xff0000) >> 8 | (uVar46 & 0xff00) << 8 |
                    uVar46 << 0x18);
          if (*(int *)(puVar5 + 3) != 0) {
            puVar48 = local_60;
          }
          if (puVar48 != (undefined *)puVar5[4]) {
            unaff_RDI[6] = (longlong)"incorrect data check";
            *puVar1 = 0x3f51;
            uVar29 = *puVar1;
            break;
          }
        }
        local_60 = (undefined *)0x0;
        local_50 = (uint *)0x0;
      }
      *puVar1 = 0x3f4f;
      goto LAB_00f49653;
    case 0x3f4f:
      uVar29 = *(uint *)(puVar5 + 2);
LAB_00f49653:
      sVar39 = (size_t)puVar31;
      if ((uVar29 == 0) || (*(int *)(puVar5 + 3) == 0)) {
LAB_00f4a17d:
        *puVar1 = 0x3f50;
        puVar48 = local_60;
        goto switchD_00f47e53_caseD_3f50;
      }
      if ((uint)local_50 < 0x20) {
        puVar40 = puVar38;
        uVar23 = (uint)local_50;
        if (sVar39 == 0) {
LAB_00f4a1e7:
          sVar39 = 0;
          puVar38 = puVar40;
          puVar48 = local_60;
          iVar28 = local_38;
          local_50._0_4_ = uVar23;
          goto switchD_00f47e53_caseD_3f50;
        }
        uVar46 = sVar39 - 1;
        puVar40 = (uint *)((longlong)puVar38 + 1);
        local_60 = local_60 + ((ulonglong)(byte)*puVar38 << ((byte)local_50 & 0x3f));
        uVar23 = (uint)(local_50 + 2);
        if ((uint)local_50 < 0x18) {
          if (uVar46 == 0) goto LAB_00f4a1e7;
          uVar46 = sVar39 - 2;
          puVar40 = (uint *)((longlong)puVar38 + 2);
          local_60 = local_60 +
                     ((ulonglong)*(byte *)((longlong)puVar38 + 1) << ((byte)(local_50 + 2) & 0x3f));
          uVar23 = (uint)(local_50 + 4);
          if ((uint)local_50 < 0x10) {
            if (uVar46 == 0) goto LAB_00f4a1e7;
            uVar46 = sVar39 - 3;
            puVar40 = (uint *)((longlong)puVar38 + 3);
            local_60 = local_60 +
                       ((ulonglong)*(byte *)((longlong)puVar38 + 2) << ((byte)(local_50 + 4) & 0x3f)
                       );
            uVar23 = (uint)(local_50 + 6);
            if ((uint)local_50 < 8) {
              if (uVar46 == 0) goto LAB_00f4a1e7;
              uVar46 = sVar39 - 4;
              puVar40 = puVar38 + 1;
              local_60 = local_60 +
                         ((ulonglong)*(byte *)((longlong)puVar38 + 3) <<
                         ((byte)(local_50 + 6) & 0x3f));
              uVar23 = (uint)local_50 + 0x20;
            }
          }
        }
        puVar31 = (uint *)(ulonglong)uVar46;
        local_50 = (uint *)(ulonglong)uVar23;
        puVar38 = puVar40;
      }
      sVar39 = (size_t)puVar31;
      if ((uVar29 & 4) == 0) {
        local_60 = (undefined *)0x0;
        local_50._0_4_ = 0;
        goto LAB_00f4a17d;
      }
      if (local_60 == (undefined *)(ulonglong)*(uint *)(puVar5 + 5)) {
        local_60 = (undefined *)0x0;
        local_50._0_4_ = 0;
        goto LAB_00f4a17d;
      }
      unaff_RDI[6] = (longlong)"incorrect length check";
      *puVar1 = 0x3f51;
      uVar29 = *puVar1;
      break;
    case 0x3f51:
      iVar28 = -3;
    case 0x3f50:
switchD_00f47e53_caseD_3f50:
      unaff_RDI[3] = (longlong)puVar43;
      *(uint *)(unaff_RDI + 4) = uVar32;
      *unaff_RDI = (longlong)puVar38;
      *(size_t *)(unaff_RDI + 1) = sVar39;
      puVar5[10] = puVar48;
      *(uint *)(puVar5 + 0xb) = (uint)local_50;
      if ((*(int *)((longlong)puVar5 + 0x3c) != 0) ||
         (((uVar30 != uVar32 && (*puVar1 < 0x3f51)) && ((*puVar1 < 0x3f4e || (unaff_ESI != 4)))))) {
        iVar14 = FUN_00f4a460();
        if (iVar14 != 0) {
          *puVar1 = 0x3f52;
          return -4;
        }
        sVar39 = *(size_t *)(unaff_RDI + 1);
        uVar32 = *(uint *)(unaff_RDI + 4);
      }
      uVar15 = uVar15 - sVar39;
      unaff_RDI[2] = unaff_RDI[2] + (ulonglong)uVar15;
      uVar30 = uVar30 - uVar32;
      unaff_RDI[5] = unaff_RDI[5] + (ulonglong)uVar30;
      puVar5[5] = puVar5[5] + (ulonglong)uVar30;
      if (((*(byte *)(puVar5 + 2) & 4) != 0) && (uVar30 != 0)) {
        if (*(int *)(puVar5 + 3) == 0) {
          uVar19 = FUN_00f42bd0();
        }
        else {
          uVar19 = FUN_00f43510();
        }
        *puVar2 = uVar19;
        unaff_RDI[0xc] = uVar19;
      }
      iVar14 = *(int *)(puVar5 + 1);
      iVar24 = -5;
      if (iVar28 != 0) {
        iVar24 = iVar28;
      }
      if (unaff_ESI == 4) {
        iVar28 = iVar24;
      }
      *(uint *)(unaff_RDI + 0xb) =
           (uint)(iVar14 == 0x3f42 || iVar14 == 0x3f47) * 0x100 +
           (uint)(iVar14 == 0x3f3f) * 0x80 +
           (uint)(*(int *)((longlong)puVar5 + 0xc) != 0) * 0x40 + *(int *)(puVar5 + 0xb);
      if (uVar15 != 0 || uVar30 != 0) {
        return iVar28;
      }
      return iVar24;
    case 0x3f52:
      return -4;
    default:
      return -2;
    }
  } while( true );
LAB_00f4a0cd:
  sVar39 = 0;
  puVar48 = local_60;
  iVar28 = local_38;
  goto switchD_00f47e53_caseD_3f50;
LAB_00f4a0b5:
  puVar38 = (uint *)((longlong)puVar38 + (longlong)puVar31);
  local_50._0_4_ = uVar23 + (int)puVar31 * 8;
LAB_00f4a0c2:
  sVar39 = 0;
  puVar48 = local_60;
  iVar28 = local_38;
  goto switchD_00f47e53_caseD_3f50;
}


