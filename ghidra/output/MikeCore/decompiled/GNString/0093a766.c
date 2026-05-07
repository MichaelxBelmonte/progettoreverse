// Function: FUN_0093a766
// Address: 0093a766
// Size: 5019 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "A iLok2 auth (p:0x%08X, a:0x%08X, i:0x%08X) has an invalid record type (0x%02X)"
//   "static void pace::AuthorizationVerifier::populateAuthDataIlok2(petpub::AuthChain &, const EEPROM_Au...
//   "The auth time limit does not have the ILok2EnforcesExpiration bit set!  Flags: %d"
//   "The auth count limit does not have both the ILok2EnforcesExpiration bit and AutoAdvanceForCryptoCom...


void FUN_0093a766(longlong param_1,longlong *param_2,ulonglong param_3,char *param_4,
                 undefined1 param_5,undefined1 param_6,char param_7,char param_8,ulonglong param_9)

{
  longlong *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  char cVar6;
  ushort uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  void *pvVar23;
  byte bVar24;
  byte *unaff_RSI;
  longlong unaff_RDI;
  int *piVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  char cVar29;
  bool bVar30;
  undefined8 local_res8;
  char local_res10;
  char local_res18;
  char local_res20;
  undefined8 local_1b0;
  code *local_1a8;
  code *local_1a0;
  longlong local_a0;
  longlong local_88;
  longlong local_50;
  
  if ((*unaff_RSI & 7) == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00983230();
    FUN_00983230();
    local_1a8 = FUN_0094fb68;
    local_1a0 = FUN_0094fb6e;
    FUN_00983230();
    FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthDataIlok2(petpub::AuthChain &, const EEPROM_AuthRecordStruct &, const vector<EEPROM_StorageRecordStruct> &, const EEPROM_StorageRecordStruct *, size_t, bool &, const boost::posix_time::ptime &, bool, bool, bool, bool, bool, bool, bool, uint64_t, int32_t)"
                 ,&DAT_00001e38);
    FUN_009bd14b();
    local_1b0 = unaff_RSI;
  }
  plVar1 = (longlong *)(unaff_RDI + 8);
  lVar26 = *(longlong *)(unaff_RDI + 8);
  uVar21 = (*(longlong *)(unaff_RDI + 0x10) - lVar26 >> 4) * -0x7dc11f7047dc11f7;
  if (uVar21 < param_3 || uVar21 - param_3 == 0) {
    FUN_008f8528();
    lVar26 = *plVar1;
  }
  else {
    lVar15 = param_3 * 0x390;
    if ((*(int *)(lVar26 + 8 + lVar15) != *(int *)(unaff_RSI + 8)) ||
       (*(int *)(lVar26 + 0xc + lVar15) != *(int *)(unaff_RSI + 4))) {
      if ((*(byte *)(lVar26 + 0x1e0 + lVar15) & 1) == 0) {
        *(undefined2 *)(lVar26 + 0x1e0 + lVar15) = 0;
      }
      else {
        **(undefined1 **)(lVar26 + 0x1f0 + lVar15) = 0;
        *(undefined8 *)(lVar26 + 0x1e8 + lVar15) = 0;
      }
      lVar26 = *plVar1;
      if ((*(byte *)(lVar26 + 0x1f8 + lVar15) & 1) == 0) {
        *(undefined2 *)(lVar26 + 0x1f8 + lVar15) = 0;
      }
      else {
        **(undefined1 **)(lVar26 + 0x208 + lVar15) = 0;
        *(undefined8 *)(lVar26 + 0x200 + lVar15) = 0;
      }
      lVar26 = *plVar1;
      if ((*(byte *)(lVar26 + 0x210 + lVar15) & 1) == 0) {
        *(undefined2 *)(lVar26 + 0x210 + lVar15) = 0;
      }
      else {
        **(undefined1 **)(lVar26 + 0x220 + lVar15) = 0;
        *(undefined8 *)(lVar26 + 0x218 + lVar15) = 0;
      }
      lVar26 = *plVar1;
      if ((*(byte *)(lVar26 + 0x228 + lVar15) & 1) == 0) {
        *(undefined2 *)(lVar26 + 0x228 + lVar15) = 0;
      }
      else {
        **(undefined1 **)(lVar26 + 0x238 + lVar15) = 0;
        *(undefined8 *)(lVar26 + 0x230 + lVar15) = 0;
      }
      lVar26 = *plVar1;
      if ((*(byte *)(lVar26 + 0x240 + lVar15) & 1) == 0) {
        *(undefined2 *)(lVar26 + 0x240 + lVar15) = 0;
      }
      else {
        **(undefined1 **)(lVar26 + 0x250 + lVar15) = 0;
        *(undefined8 *)(lVar26 + 0x248 + lVar15) = 0;
      }
      lVar26 = *plVar1;
      if ((*(byte *)(lVar26 + 600 + lVar15) & 1) == 0) {
        *(undefined2 *)(lVar26 + 600 + lVar15) = 0;
      }
      else {
        **(undefined1 **)(lVar26 + 0x268 + lVar15) = 0;
        *(undefined8 *)(lVar26 + 0x260 + lVar15) = 0;
      }
      lVar26 = *plVar1;
      if ((*(byte *)(lVar26 + 0x270 + lVar15) & 1) == 0) {
        *(undefined2 *)(lVar26 + 0x270 + lVar15) = 0;
      }
      else {
        **(undefined1 **)(lVar26 + 0x280 + lVar15) = 0;
        *(undefined8 *)(lVar26 + 0x278 + lVar15) = 0;
      }
      lVar26 = *plVar1;
      if (*(int *)(lVar26 + 0x10 + lVar15) != *(int *)(unaff_RSI + 0xc)) {
        *(undefined1 *)(lVar26 + 0x387 + lVar15) = 0;
      }
    }
  }
  lVar15 = param_3 * 0x390;
  *(undefined4 *)(lVar26 + 8 + lVar15) = *(undefined4 *)(unaff_RSI + 8);
  *(undefined4 *)(lVar26 + 0xc + lVar15) = *(undefined4 *)(unaff_RSI + 4);
  *(undefined4 *)(lVar26 + 0x10 + lVar15) = *(undefined4 *)(unaff_RSI + 0xc);
  *(undefined4 *)(lVar26 + 0x14 + lVar15) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined8 *)(lVar26 + 0x30 + lVar15) =
       *(undefined8 *)(&DAT_023bdde8 + (*(ushort *)(unaff_RSI + 2) >> 3 & 0x18));
  uVar16 = 1;
  bVar9 = false;
  switch(unaff_RSI[1]) {
  case 1:
    goto switchD_0093ab01_caseD_1;
  case 2:
    uVar16 = 2;
    break;
  case 3:
    uVar16 = 4;
    break;
  case 4:
    uVar16 = 8;
    break;
  case 5:
    uVar16 = 0x10;
    break;
  case 6:
    uVar16 = 0x20;
    break;
  case 7:
    uVar16 = 0x40;
    break;
  case 8:
    bVar9 = true;
    uVar16 = 0x80;
    goto switchD_0093ab01_caseD_1;
  case 9:
    uVar16 = 0x100;
    break;
  case 10:
    uVar16 = 0x200;
    break;
  case 0xb:
    uVar16 = 0x400;
    break;
  case 0xc:
    uVar16 = 0x800;
    break;
  case 0xd:
    uVar16 = 0x1000;
    break;
  case 0xe:
    bVar9 = true;
    uVar16 = 0x2000;
    goto switchD_0093ab01_caseD_1;
  default:
    lVar17 = FUN_008e4ece();
    uVar16 = *(undefined8 *)(lVar17 + 0x38);
  }
  bVar9 = false;
switchD_0093ab01_caseD_1:
  *(undefined8 *)(lVar26 + 0x38 + lVar15) = uVar16;
  lVar17 = *(longlong *)(lVar26 + 0x18 + lVar15);
  uVar21 = *(longlong *)(lVar26 + 0x20 + lVar15) - lVar17;
  if (uVar21 < 4) {
    FUN_0088d550();
  }
  else if (uVar21 != 4) {
    *(longlong *)(lVar26 + 0x20 + lVar15) = lVar17 + 4;
  }
  FUN_009740dc();
  cVar29 = (*(ushort *)(unaff_RSI + 2) & 0x420) != 0;
  pcVar3 = (char *)(lVar26 + 0x37d + lVar15);
  pcVar3[-0x325] = cVar29;
  pcVar3[0] = '\0';
  pcVar3[1] = '\0';
  pcVar3[-0x324] = '\0';
  pcVar3[-0x335] = '\0';
  pcVar3[-0x334] = '\0';
  pcVar3[-0x333] = '\0';
  pcVar3[-0x332] = '\0';
  pcVar3[-0x331] = '\0';
  pcVar3[-0x330] = '\0';
  pcVar3[-0x32f] = '\0';
  pcVar3[-0x32e] = '\0';
  lVar17 = *param_2;
  lVar22 = param_2[1] - lVar17;
  if (lVar22 != 0) {
    pcVar2 = (char *)(lVar26 + 0x58 + lVar15);
    uVar21 = 1;
    lVar28 = 0;
    bVar11 = true;
    bVar12 = true;
    bVar10 = false;
    bVar13 = false;
    bVar8 = false;
    bVar30 = false;
    do {
      iVar27 = *(int *)(lVar17 + 4 + lVar28);
      if (iVar27 == -0x80000000) {
        cVar29 = *(char *)(lVar17 + lVar28);
        if (cVar29 == -0x70) {
          uVar7 = *(ushort *)(unaff_RSI + 2);
          if ((uVar7 >> 10 & 1) != 0) {
            if ((param_7 != '\0') && (*(longlong *)(pcVar3 + -0x335) == 0)) {
              bVar24 = *(byte *)(lVar17 + 0xf + lVar28);
              uVar14 = (uint)bVar24;
              *(ulonglong *)(pcVar3 + -0x335) =
                   ((ulonglong)((uVar14 & 0x20) >> 5) * 0x10000 + 0x1000 +
                    ((ulonglong)((uVar14 & 0x40) >> 6) << 0xe |
                    (ulonglong)((char)bVar24 < '\0') << 0xc) |
                   (ulonglong)((uVar14 & 0x10) >> 4) << 0x12) + 0x54000;
            }
            if (((!bVar13) && ((uVar7 & 0x38) == 0x38)) && (*pcVar2 != '\0')) {
              if ((*(byte *)(lVar17 + 0xf + lVar28) & 2) != 0) {
                FUN_0093a0f8(*(undefined4 *)(lVar17 + lVar28 + 0x1c),local_res8);
                FUN_008e8fb4();
                FUN_008e844a();
                *pcVar3 = '\x01';
                bVar10 = true;
                if ((pcVar2[0x8b] == '\0') && (bVar11 = false, *(longlong *)(pcVar2 + 0x60) == 0)) {
                  bVar12 = false;
                }
              }
              lVar17 = *param_2;
              if ((*(byte *)(lVar17 + 0xf + lVar28) & 1) != 0) {
                if (local_res18 == '\x01' && local_res20 == '\0') {
                  FUN_0097413b();
                  FUN_009740dc();
                  lVar17 = *param_2;
                }
                FUN_0093a51a(*(undefined4 *)(lVar17 + 0x1c + lVar28),local_res18);
                FUN_008ea352();
                FUN_008e969a();
                pcVar3[1] = '\x01';
                if (pcVar2[0xe2] == '\0') {
                  bVar12 = false;
                  bVar11 = false;
                }
                bVar10 = true;
              }
              pcVar3[-0x324] = '\x01';
            }
          }
        }
        else if (cVar29 == -0x7e) {
          if (((unaff_RSI[3] & 0x40) != 0) && (*pcVar2 != '\0')) {
            if (bVar10) {
              *pcVar3 = '\0';
              bVar10 = false;
              pcVar3[-0x324] = '\0';
              bVar12 = true;
              bVar11 = true;
            }
            FUN_0093bb90(local_res20,local_res18,param_5,param_6);
            FUN_008ea352();
            FUN_008e969a();
            if (pcVar2[0xc0] == '\0') {
              pcVar3[1] = '\x01';
              if (pcVar2[0xe2] == '\0') {
                bVar12 = false;
                bVar11 = false;
              }
LAB_0093b3ee:
              if (pcVar2[0xd0] == '\0') {
                bVar24 = 0;
              }
              else {
                bVar24 = pcVar2[0xe1] ^ 1;
              }
            }
            else if ((*(byte *)(*param_2 + 2 + lVar28) & 0x11) == 0) {
              bVar24 = 1;
              cVar29 = '\x01';
              if (local_res10 != '\0') {
                FUN_00925fd0();
                FUN_00926010();
                local_1b0 = (byte *)(*param_2 + 2 + lVar28);
                local_1a8 = FUN_00ac1c88;
                local_1a0 = FUN_00ac1c8e;
                FUN_00983230();
                FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthDataIlok2(petpub::AuthChain &, const EEPROM_AuthRecordStruct &, const vector<EEPROM_StorageRecordStruct> &, const EEPROM_StorageRecordStruct *, size_t, bool &, const boost::posix_time::ptime &, bool, bool, bool, bool, bool, bool, bool, uint64_t, int32_t)"
                             ,&DAT_00001f40);
                FUN_009bd14b();
                cVar29 = pcVar2[0xc0];
              }
              pcVar2[0xe2] = '\0';
              pcVar3[1] = '\x01';
              bVar11 = false;
              bVar12 = false;
              if (cVar29 == '\0') goto LAB_0093b3ee;
            }
            else {
              pcVar3[1] = '\x01';
              if (pcVar2[0xe2] == '\0') {
                bVar12 = false;
                bVar11 = false;
              }
              bVar24 = 1;
            }
            pcVar3[-0x324] = bVar24;
            goto LAB_0093b6b2;
          }
        }
        else if (((cVar29 == -0x7f) && ((unaff_RSI[3] & 0x20) != 0)) && (*pcVar2 != '\0')) {
          if (bVar10) {
            pcVar3[1] = '\0';
            bVar10 = false;
            pcVar3[-0x324] = '\0';
            bVar12 = true;
            bVar11 = true;
          }
          FUN_00938c6a(local_res10,local_res8);
          FUN_008e8fb4();
          FUN_008e844a();
          if (bVar9) {
            lVar17 = *param_2;
            *(uint *)(pcVar2 + 0x80) = (uint)*(byte *)(lVar17 + 1 + lVar28);
            pcVar2[0x92] = '\x01';
            *(uint *)(pcVar2 + 0x84) = (uint)*(byte *)(lVar17 + 3 + lVar28);
            pcVar2[0x93] = '\x01';
            FUN_00938842();
          }
          if ((*(byte *)(*param_2 + 2 + lVar28) & 1) == 0) {
            if (local_res10 != '\0') {
              FUN_00925fd0();
              FUN_00926010();
              local_1b0 = (byte *)(*param_2 + 2 + lVar28);
              local_1a8 = FUN_00ac1c88;
              local_1a0 = FUN_00ac1c8e;
              FUN_00983230();
              FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthDataIlok2(petpub::AuthChain &, const EEPROM_AuthRecordStruct &, const vector<EEPROM_StorageRecordStruct> &, const EEPROM_StorageRecordStruct *, size_t, bool &, const boost::posix_time::ptime &, bool, bool, bool, bool, bool, bool, bool, uint64_t, int32_t)"
                           ,&DAT_00001efc);
              FUN_009bd14b();
            }
            pcVar2[0x8b] = '\0';
            pcVar2[0x60] = '\0';
            pcVar2[0x61] = '\0';
            pcVar2[0x62] = '\0';
            pcVar2[99] = '\0';
            pcVar2[100] = '\0';
            pcVar2[0x65] = '\0';
            pcVar2[0x66] = '\0';
            pcVar2[0x67] = '\0';
            *pcVar3 = '\x01';
            bVar12 = false;
            bVar11 = false;
          }
          else {
            cVar29 = pcVar2[0x8b];
            *pcVar3 = '\x01';
            if (cVar29 == '\0') {
              if (*(longlong *)(pcVar2 + 0x60) == 0) {
                bVar12 = false;
              }
              else if (pcVar2[0x8a] != '\0') {
                bVar8 = true;
              }
              bVar11 = false;
            }
          }
          if ((pcVar2[0x48] & 1U) == 0) {
            uVar20 = (ulonglong)((byte)pcVar2[0x48] >> 1);
          }
          else {
            uVar20 = *(ulonglong *)(pcVar2 + 0x50);
          }
          pcVar3[-0x324] = uVar20 != 0;
LAB_0093b6b2:
          bVar13 = true;
        }
      }
      else {
        if (param_7 != '\0') {
          lVar18 = FUN_008e4ece();
          lVar17 = *param_2;
          if ((iVar27 == *(int *)(lVar18 + 0x74)) && (*(char *)(lVar17 + lVar28) == -0x7c)) {
            pcVar3[-0x335] = '\0';
            pcVar3[-0x334] = '\0';
            pcVar3[-0x333] = '\0';
            pcVar3[-0x332] = '\0';
            pcVar3[-0x331] = '\0';
            pcVar3[-0x330] = '\0';
            pcVar3[-0x32f] = '\0';
            pcVar3[-0x32e] = '\0';
            FUN_009740dc();
            uVar14 = (uint)local_1b0._3_1_;
            *(ulonglong *)(pcVar3 + -0x335) =
                 (ulonglong)((char)local_1b0._3_1_ < '\0') * 0x1000 + 0x1000 |
                 *(ulonglong *)(pcVar3 + -0x335) |
                 (ulonglong)((uVar14 & 0x10) >> 4) * 0x40000 + 0x40000 |
                 (ulonglong)((uVar14 & 0x20) >> 5) * 0x10000 + 0x10000 |
                 (ulonglong)((uVar14 & 0x40) >> 6) * 0x4000 + 0x4000;
            goto LAB_0093b59a;
          }
        }
        iVar27 = *(int *)(lVar17 + 4 + lVar28);
        lVar17 = FUN_008e4ece();
        if (((iVar27 == *(int *)(lVar17 + 0x60)) && (*(char *)(*param_2 + lVar28) == -0x7f)) &&
           (*pcVar2 != '\0')) {
          lVar17 = *plVar1;
          *(undefined4 *)(lVar17 + 0x158 + lVar15) = *(undefined4 *)(*param_2 + 4 + lVar28);
          lVar18 = *(longlong *)(lVar17 + 0x160 + lVar15);
          uVar20 = *(longlong *)(lVar17 + 0x168 + lVar15) - lVar18;
          if (uVar20 < 4) {
            FUN_0088d550();
          }
          else if (uVar20 != 4) {
            *(longlong *)(lVar17 + 0x168 + lVar15) = lVar18 + 4;
          }
          FUN_009740dc();
          local_88 = FUN_009585b8();
          if (*(int *)(*param_2 + 8 + lVar28) != 0) {
            local_88 = FUN_009a3b9c();
            FUN_009f35cc();
          }
          local_a0 = FUN_009585b8();
          if (*(int *)(*param_2 + 0x10 + lVar28) != 0) {
            local_a0 = FUN_009a3b9c();
            FUN_009f35cc();
          }
          lVar17 = *plVar1;
          *(undefined8 *)(lVar17 + 0x1a8 + lVar15) = 0;
          *(undefined2 *)(lVar17 + 0x1d2 + lVar15) = 0;
          lVar17 = FUN_009585b8();
          if (local_88 == lVar17) {
            bVar30 = false;
            lVar17 = FUN_009585b8();
            if (local_a0 != lVar17) {
              bVar30 = *(int *)(*param_2 + 8 + lVar28) == 0;
            }
          }
          else if (*(int *)(*param_2 + 0x10 + lVar28) == 0) {
            bVar30 = true;
          }
          else {
            bVar30 = false;
            lVar17 = FUN_009585b8();
            if (local_a0 != lVar17) {
              bVar30 = local_88 < local_a0;
            }
          }
          lVar17 = *plVar1;
          *(bool *)(lVar17 + 0x1d3 + lVar15) = bVar30;
          if (param_9 != 0) {
            lVar17 = FUN_009585b8();
            if (local_88 == lVar17) {
              uVar20 = 0;
            }
            else {
              uVar20 = FUN_009f39a9();
            }
            lVar17 = FUN_009585b8();
            uVar19 = 0xffffffffffffffff;
            if (local_a0 != lVar17) {
              uVar19 = FUN_009f39a9();
            }
            pcVar4 = (char *)(*plVar1 + 0x1d3 + lVar15);
            if ((param_9 < uVar20) || (uVar19 < param_9)) {
              *pcVar4 = '\0';
              cVar29 = '\0';
            }
            else {
              cVar29 = *pcVar4;
            }
            if (cVar29 == '\0') {
              bVar12 = false;
              bVar11 = false;
            }
            pvVar23 = (void *)((longlong)&MACH_HEADER.magic + 1);
            FUN_0097e7bc(1,1);
            FUN_00953fa0();
            FUN_009f4dea();
            pbVar5 = (byte *)(*plVar1 + 0x1b0 + lVar15);
            if ((*pbVar5 & 1) != 0) {
              operator_delete(pvVar23);
            }
            *(code **)(pbVar5 + 0x10) = local_1a0;
            *(code **)(pbVar5 + 8) = local_1a8;
            *(byte **)pbVar5 = local_1b0;
            lVar17 = *plVar1;
            *(undefined1 *)(lVar17 + 0x1d9 + lVar15) = 1;
          }
          *(undefined1 *)(lVar17 + 0x37f + lVar15) = 1;
          bVar30 = true;
        }
      }
LAB_0093b59a:
      if ((ulonglong)(lVar22 >> 5) <= uVar21) goto LAB_0093b6e9;
      lVar17 = *param_2;
      uVar21 = uVar21 + 1;
      lVar28 = lVar28 + 0x20;
    } while( true );
  }
  bVar12 = true;
  bVar30 = false;
  bVar8 = false;
  bVar11 = true;
LAB_0093b71a:
  if ((cVar29 != '\0') &&
     ((((*(ushort *)(unaff_RSI + 2) >> 0xd & 1) != 0 && (*pcVar3 == '\0')) ||
      (((*(ushort *)(unaff_RSI + 2) >> 0xe & 1) != 0 && (pcVar3[1] == '\0')))))) {
    bVar12 = false;
    bVar11 = false;
  }
  uVar21 = *(ulonglong *)(pcVar3 + -0x335);
  if ((uVar21 == 0) && (param_7 != '\0')) {
    pcVar3[-0x335] = '\0';
    pcVar3[-0x334] = 'P';
    pcVar3[-0x333] = '\x05';
    pcVar3[-0x332] = '\0';
    pcVar3[-0x331] = '\0';
    pcVar3[-0x330] = '\0';
    pcVar3[-0x32f] = '\0';
    pcVar3[-0x32e] = '\0';
    uVar21 = 0x55000;
  }
  cVar6 = *pcVar3;
  bVar24 = pcVar3[1];
  if (cVar6 == '\0') {
    uVar20 = (ulonglong)bVar24 + 1;
    iVar27 = 100;
    if (bVar24 != 0) {
      iVar27 = 0x3c;
    }
LAB_0093b7e1:
    uVar21 = uVar21 | uVar20;
    *(ulonglong *)(pcVar3 + -0x335) = uVar21;
    piVar25 = (int *)(lVar26 + 0x50 + lVar15);
    *piVar25 = iVar27;
    if (bVar30) {
      *piVar25 = 0x2e;
      iVar27 = 0x2e;
    }
  }
  else {
    if (bVar24 == 0) {
      uVar20 = 4;
      iVar27 = 0x50;
      goto LAB_0093b7e1;
    }
    uVar21 = uVar21 | 8;
    *(ulonglong *)(pcVar3 + -0x335) = uVar21;
    piVar25 = (int *)(lVar26 + 0x50 + lVar15);
    *piVar25 = 0x28;
    iVar27 = 0x28;
  }
  uVar7 = *(ushort *)(unaff_RSI + 2);
  if ((short)uVar7 < 0) {
    uVar21 = uVar21 | 0x100000;
    *(ulonglong *)(pcVar3 + -0x335) = uVar21;
    local_50 = 4;
  }
  else {
    if ((uVar7 & 0x408) == 8) {
      pcVar3[-0x324] = '\0';
      uVar21 = uVar21 | 0x200000;
      *(ulonglong *)(pcVar3 + -0x335) = uVar21;
      if ((param_1 == 0) || (*(int *)(param_1 + 0x1c) == -1)) {
        if (*(char *)(unaff_RDI + 0x280) == '\0') goto LAB_0093b8c3;
      }
      else {
        *(uint *)(unaff_RDI + 0x200) = (uint)*(ushort *)(param_1 + 10);
        *(uint *)(unaff_RDI + 0x204) = (uint)*(ushort *)(param_1 + 8);
LAB_0093b8c3:
        *(int *)(unaff_RDI + 0x208) = (int)param_3;
      }
      *(undefined1 *)(unaff_RDI + 0x280) = 1;
      if (param_8 != '\0') {
        *piVar25 = 0x19;
        local_50 = 4;
        iVar27 = 0x19;
        goto LAB_0093b927;
      }
      *piVar25 = 0;
      local_50 = (ulonglong)!bVar11 * 3 + 1;
    }
    else {
      uVar21 = uVar21 | 0x100000;
      *(ulonglong *)(pcVar3 + -0x335) = uVar21;
      if (param_8 == '\0') {
        local_50 = 4;
        goto LAB_0093b927;
      }
      local_50 = 4;
      *piVar25 = 0;
    }
    iVar27 = 0;
    bVar11 = false;
  }
LAB_0093b927:
  uVar20 = (ulonglong)(*(int *)(unaff_RSI + 8) != 0x4801f777) * 0x10 + 0x10;
  if ((uVar7 & 0x1000) != 0) {
    uVar20 = 0x10;
  }
  uVar21 = (ulonglong)((short)uVar7 < 0) * 0x40 + 0x40 | uVar21;
  *(ulonglong *)(pcVar3 + -0x335) =
       (ulonglong)(uVar7 >> 9 & 1) * 0x100 + 0x500 + (ulonglong)((uVar7 >> 0xb & 1) == 0) * 0x400 |
       uVar21 | uVar20;
  *(undefined4 *)(lVar26 + 0x54 + lVar15) = 1;
  if (*unaff_RSI == 4) {
    *(undefined8 *)(lVar26 + 0x40 + lVar15) = 2;
    *piVar25 = 0;
    pcVar3[-0x324] = '\0';
    *(undefined2 *)(unaff_RDI + 0x20) = 0;
    *(undefined4 *)(unaff_RDI + 0x24) = 0;
  }
  else if (bVar11) {
    *(undefined8 *)(lVar26 + 0x40 + lVar15) = 1;
    if (((((short)uVar7 < 0) && (*(int *)(unaff_RSI + 8) != 0x4801f777)) ||
        ((cVar29 != '\0' && (*param_4 == '\0')))) && (iVar27 < *(int *)(unaff_RDI + 0x24))) {
      *(int *)(unaff_RDI + 0x24) = iVar27;
    }
  }
  else {
    plVar1 = (longlong *)(lVar26 + 0x40 + lVar15);
    if ((bVar12) && (cVar6 != '\0')) {
      *plVar1 = 8;
      *piVar25 = 1;
      pcVar3[-0x324] = '\0';
      iVar27 = 1;
    }
    else {
      *plVar1 = local_50;
      *piVar25 = 0;
      iVar27 = 0;
      bVar8 = false;
    }
    if (((short)uVar7 < 0) || ((cVar29 != '\0' && (*param_4 == '\0')))) {
      if (iVar27 < *(int *)(unaff_RDI + 0x24)) {
        *(int *)(unaff_RDI + 0x24) = iVar27;
      }
      *(undefined1 *)(unaff_RDI + 0x20) = 0;
      if (!bVar8) {
        *(undefined1 *)(unaff_RDI + 0x21) = 0;
      }
    }
  }
  if (*(longlong *)(lVar26 + 0x30 + lVar15) == 2) {
    if (((cVar29 != '\0') && (-1 < (char)uVar21)) && ((param_3 == 0 || (*param_4 != '\0'))))
    goto LAB_0093ba1e;
    *(undefined8 *)(lVar26 + 0x40 + lVar15) = 0x20;
    *piVar25 = 0;
    pcVar3[-0x324] = '\0';
    *(undefined2 *)(unaff_RDI + 0x20) = 0;
    *(undefined4 *)(unaff_RDI + 0x24) = 0;
  }
  if (cVar29 == '\0') {
    return;
  }
LAB_0093ba1e:
  *param_4 = '\x01';
  return;
LAB_0093b6e9:
  cVar29 = *pcVar2;
  goto LAB_0093b71a;
}


