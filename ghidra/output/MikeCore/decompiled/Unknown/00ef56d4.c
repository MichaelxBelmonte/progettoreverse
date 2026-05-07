// Function: FUN_00ef56d4
// Address: 00ef56d4
// Size: 2769 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/SystemConfiguration.framework/Versions/A/SystemConfiguration"
//   "/usr/lib/libc++.1.dylib"
//   "/usr/lib/libSystem.B.dylib"


dword * FUN_00ef56d4(undefined1 *param_1,undefined1 *param_2,dword *param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  uint uVar13;
  dword *pdVar14;
  dword *pdVar15;
  longlong lVar16;
  byte bVar17;
  ushort uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  int iVar26;
  ushort *unaff_RSI;
  int *unaff_RDI;
  ushort *puVar27;
  undefined1 *puVar28;
  longlong lVar29;
  dword *pdVar30;
  undefined1 *puVar31;
  bool bVar32;
  undefined1 auVar33 [16];
  uint local_res8;
  undefined8 local_e0;
  undefined4 local_d8;
  ulonglong local_d0;
  undefined1 *local_c8;
  dword *local_c0;
  int *local_b8;
  undefined1 *local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined1 (*local_98) [16];
  ulonglong *local_90;
  int *local_88;
  dword *local_80;
  int *local_78;
  int *local_70;
  ulonglong local_68;
  ushort *local_48;
  
  if (*unaff_RDI == 0) {
    return (dword *)0xffffffffffffffc4;
  }
  local_c0 = (dword *)0x0;
  if ((param_4 != 0) && (*unaff_RDI == 1)) {
    local_80 = param_3;
    local_c0 = (dword *)FUN_00ef9d9c(*(longlong *)(unaff_RDI + 0xb8) + -1,unaff_RDI + 0x38,
                                     unaff_RDI[0xa0]);
    if ((dword *)0xffffffffffffff88 < local_c0) {
      return local_c0;
    }
    param_2 = param_2 + -(longlong)local_c0;
    unaff_RSI = (ushort *)((longlong)unaff_RSI + (longlong)local_c0);
    *unaff_RDI = 2;
    param_3 = local_80;
  }
  if (param_3 == (dword *)0x0) {
    return local_c0;
  }
  local_90 = (ulonglong *)(unaff_RDI + 0x31e);
  if ((*(undefined1 **)(unaff_RDI + 0x31e) == param_1) && (unaff_RDI[0x340] == 0)) {
    uVar25 = *(ulonglong *)(unaff_RDI + 0x322);
    uVar21 = (ulonglong)(uint)unaff_RDI[0x324];
    bVar32 = false;
    uVar20 = unaff_RDI[0x325];
  }
  else {
    uVar25 = *(ulonglong *)(unaff_RDI + 800);
    uVar21 = (longlong)*(undefined1 **)(unaff_RDI + 0x31e) - uVar25;
    uVar20 = unaff_RDI[0x324];
    unaff_RDI[0x325] = uVar20;
    uVar23 = (uint)uVar21;
    unaff_RDI[0x324] = uVar23;
    *(ulonglong *)(unaff_RDI + 0x322) = uVar25;
    *(ulonglong *)(unaff_RDI + 800) = (longlong)param_1 - uVar21;
    bVar32 = true;
    if (uVar23 - uVar20 < 8) {
      unaff_RDI[0x325] = uVar23;
      uVar20 = uVar23;
    }
  }
  puVar28 = (undefined1 *)((longlong)param_3 + (longlong)param_1);
  *local_90 = (ulonglong)puVar28;
  if (((undefined1 *)(uVar20 + uVar25) < puVar28) &&
     (param_1 < (undefined1 *)(uVar25 + (uVar21 & 0xffffffff)))) {
    iVar19 = (int)((longlong)puVar28 - uVar25);
    if ((longlong)(uVar21 & 0xffffffff) < (longlong)((longlong)puVar28 - uVar25)) {
      iVar19 = (int)uVar21;
    }
    unaff_RDI[0x325] = iVar19;
  }
  if (bVar32) {
    unaff_RDI[0x340] = 0;
    unaff_RDI[0x329] = (int)uVar21;
  }
  if (unaff_RDI[0x50] == 1) {
    if (*(undefined1 **)(unaff_RDI + 0xfc) == param_1) {
      lVar16 = *(longlong *)(unaff_RDI + 0x100);
      uVar20 = unaff_RDI[0x103];
      uVar21 = (ulonglong)(uint)unaff_RDI[0x102];
    }
    else {
      lVar16 = *(longlong *)(unaff_RDI + 0xfe);
      uVar21 = (longlong)*(undefined1 **)(unaff_RDI + 0xfc) - lVar16;
      uVar20 = unaff_RDI[0x102];
      unaff_RDI[0x103] = uVar20;
      uVar23 = (uint)uVar21;
      unaff_RDI[0x102] = uVar23;
      *(longlong *)(unaff_RDI + 0x100) = lVar16;
      *(ulonglong *)(unaff_RDI + 0xfe) = (longlong)param_1 - uVar21;
      if (uVar23 - uVar20 < 8) {
        unaff_RDI[0x103] = uVar23;
        uVar20 = uVar23;
      }
    }
    *(undefined1 **)(unaff_RDI + 0xfc) = puVar28;
    uVar25 = uVar21;
    if (((undefined1 *)((ulonglong)uVar20 + lVar16) < puVar28) &&
       (uVar25 = uVar21 & 0xffffffff, param_1 < (undefined1 *)(lVar16 + uVar25))) {
      iVar19 = (int)((longlong)puVar28 - lVar16);
      if ((longlong)uVar25 < (longlong)puVar28 - lVar16) {
        iVar19 = (int)uVar21;
      }
      unaff_RDI[0x103] = iVar19;
    }
  }
  if (param_4 == 0) {
    FUN_00efbaff(param_1,unaff_RDI + 0x38);
    pdVar30 = (dword *)FUN_00efbdfa(param_1,param_2,param_3,0);
  }
  else {
    local_d0 = (ulonglong)(uint)(1 << (*(byte *)(unaff_RDI + 0x39) & 0x1f));
    pdVar30 = *(dword **)(unaff_RDI + 0xb6);
    if (unaff_RDI[0x41] != 0) {
      _ZSTD_XXH64_update(CONCAT71((int7)(uVar25 >> 8),*(byte *)(unaff_RDI + 0x39)),param_3);
    }
    local_b8 = unaff_RDI + 0x402;
    local_98 = (undefined1 (*) [16])(unaff_RDI + 0x3ee);
    local_88 = unaff_RDI + 0x3da;
    local_78 = unaff_RDI + 0xe8;
    local_80 = param_3;
    local_48 = unaff_RSI;
    do {
      bVar32 = param_3 <= pdVar30;
      if (param_2 < (undefined1 *)((longlong)&MACH_HEADER.cputype + 2)) {
        return (dword *)0xffffffffffffffba;
      }
      if (param_3 < pdVar30) {
        pdVar30 = param_3;
      }
      puVar28 = param_1 + (longlong)pdVar30;
      FUN_00efbaff(param_1,unaff_RDI + 0x38,puVar28);
      iVar19 = unaff_RDI[0x328];
      iVar26 = (int)local_d0;
      if (((uint)(iVar26 + iVar19) < (uint)((int)puVar28 - (int)*(undefined8 *)(unaff_RDI + 800)))
         || (iVar19 != unaff_RDI[0x324])) {
        unaff_RDI[0x328] = 0;
        unaff_RDI[0x35c] = 0;
        unaff_RDI[0x35d] = 0;
        iVar19 = 0;
      }
      uVar23 = (size_t)param_1 - (int)*(undefined8 *)(unaff_RDI + 800);
      uVar20 = iVar19 + iVar26;
      if (uVar20 < uVar23) {
        uVar23 = uVar23 - iVar26;
        uVar13 = unaff_RDI[0x325];
        if ((uint)unaff_RDI[0x325] < uVar23) {
          unaff_RDI[0x325] = uVar23;
          uVar13 = uVar23;
        }
        if ((uint)unaff_RDI[0x324] < uVar13) {
          unaff_RDI[0x324] = uVar13;
        }
        unaff_RDI[0x328] = 0;
        unaff_RDI[0x35c] = 0;
        unaff_RDI[0x35d] = 0;
      }
      else {
        uVar13 = unaff_RDI[0x325];
      }
      if ((uint)unaff_RDI[0x329] < uVar13) {
        unaff_RDI[0x329] = uVar13;
      }
      uVar23 = bVar32 & local_res8;
      sVar3 = (short)uVar23;
      sVar4 = (short)pdVar30;
      if (*(longlong *)(unaff_RDI + 0x46) == 0) {
        if (unaff_RDI[0x5b] == 1) {
          pdVar15 = pdVar30;
          pdVar14 = (dword *)FUN_00efbf4f(uVar20,pdVar30);
          if ((dword *)0xffffffffffffff88 < pdVar14) {
            return pdVar14;
          }
          puVar31 = param_2;
          if (pdVar14 == (dword *)((longlong)&MACH_HEADER.magic + 1)) {
            if (*(int *)(&DAT_000015e4 + *(longlong *)(unaff_RDI + 0x31a)) == 2) {
              *(undefined4 *)(&DAT_000015e4 + *(longlong *)(unaff_RDI + 0x31a)) = 1;
            }
            pdVar14 = (dword *)((longlong)pdVar30 + 3);
            if (param_2 < pdVar14) {
              return (dword *)0xffffffffffffffba;
            }
            *local_48 = sVar3 + sVar4 * 8;
            *(char *)(local_48 + 1) = (char)((ulonglong)pdVar30 >> 0xd);
            _memcpy(local_48,pdVar30,(size_t)pdVar15);
          }
          else {
            uVar25 = (ulonglong)(*(longlong *)(unaff_RDI + 0xea) - *(longlong *)(unaff_RDI + 0xe8))
                     >> 3;
            local_70 = local_b8;
            local_68 = 0;
            uVar20 = (uint)uVar25;
            if (4 < uVar20) {
              FUN_00efc96f(unaff_RDI,uVar25 & 0xffffffff,local_78);
              local_70[local_68] = uVar20;
            }
            uVar25 = local_68;
            lVar16 = *(longlong *)(unaff_RDI + 0x31a);
            local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(&DAT_000015f8 + lVar16));
            local_70 = *(int **)(&DAT_000015f0 + lVar16);
            local_e0 = *(undefined8 *)(&DAT_000015f0 + lVar16);
            local_d8 = *(undefined4 *)(&DAT_000015f8 + lVar16);
            local_98[4] = (undefined1  [16])0x0;
            local_98[3] = (undefined1  [16])0x0;
            local_98[2] = (undefined1  [16])0x0;
            local_98[1] = (undefined1  [16])0x0;
            *local_98 = (undefined1  [16])0x0;
            if (uVar25 == 0) {
              pdVar14 = (dword *)FUN_00efc4dd(&local_e0,&local_70,local_48,param_2);
            }
            else {
              FUN_00efc845(*local_b8,0);
              uVar21 = 0;
              local_a0 = 0;
              pdVar15 = (dword *)0x0;
              puVar27 = local_48;
              local_c8 = puVar28;
              local_b0 = param_2;
              do {
                local_a8 = uVar21;
                lVar16 = FUN_00efc918();
                lVar24 = *(longlong *)(unaff_RDI + 0x3dc) - *(longlong *)(unaff_RDI + 0x3da);
                if (lVar24 == 0) {
                  lVar24 = 0;
                }
                else {
                  uVar21 = lVar24 >> 3;
                  if (uVar21 < 2) {
                    uVar21 = 1;
                  }
                  lVar24 = 0;
                  uVar22 = 0;
                  do {
                    lVar29 = lVar24 + (ulonglong)
                                      *(ushort *)(*(longlong *)(unaff_RDI + 0x3da) + 6 + uVar22 * 8)
                    ;
                    lVar24 = lVar29 + 3;
                    if (((uint)unaff_RDI[0x3ed] == uVar22) && (unaff_RDI[0x3ec] == 2)) {
                      lVar24 = lVar29 + 0x10003;
                    }
                    uVar22 = uVar22 + 1;
                  } while (uVar21 != uVar22);
                }
                local_a0 = local_a0 + lVar24 + lVar16;
                if (local_a8 != uVar25) {
                  FUN_00efc845(unaff_RDI[local_a8 + 0x403],unaff_RDI[local_a8 + 0x402]);
                }
                piVar12 = local_88;
                pdVar14 = (dword *)FUN_00efc4dd(&local_e0,&local_70,puVar27,param_2);
                puVar28 = local_c8;
                puVar31 = local_b0;
                if ((dword *)0xffffffffffffff88 < pdVar14) goto LAB_00ef60a8;
                puVar27 = (ushort *)((longlong)puVar27 + (longlong)pdVar14);
                param_2 = param_2 + -(longlong)pdVar14;
                pdVar14 = (dword *)((longlong)pdVar15 + (longlong)pdVar14);
                uVar5 = *(undefined8 *)(local_98[4] + 8);
                *(undefined8 *)(piVar12 + 0x10) = *(undefined8 *)local_98[4];
                *(undefined8 *)(piVar12 + 0x12) = uVar5;
                uVar5 = *(undefined8 *)*local_98;
                uVar6 = *(undefined8 *)(*local_98 + 8);
                uVar7 = *(undefined8 *)local_98[1];
                uVar8 = *(undefined8 *)(local_98[1] + 8);
                uVar9 = *(undefined8 *)local_98[2];
                uVar10 = *(undefined8 *)(local_98[2] + 8);
                uVar11 = *(undefined8 *)(local_98[3] + 8);
                *(undefined8 *)(piVar12 + 0xc) = *(undefined8 *)local_98[3];
                *(undefined8 *)(piVar12 + 0xe) = uVar11;
                *(undefined8 *)(piVar12 + 8) = uVar9;
                *(undefined8 *)(piVar12 + 10) = uVar10;
                *(undefined8 *)(piVar12 + 4) = uVar7;
                *(undefined8 *)(piVar12 + 6) = uVar8;
                *(undefined8 *)piVar12 = uVar5;
                *(undefined8 *)(piVar12 + 2) = uVar6;
                uVar21 = local_a8 + 1;
                pdVar15 = pdVar14;
              } while (uVar21 <= uVar25);
              lVar16 = *(longlong *)(unaff_RDI + 0x31a);
              *(undefined4 *)(&DAT_000015f8 + lVar16) = (undefined4)local_68;
              *(int **)(&DAT_000015f0 + lVar16) = local_70;
            }
          }
LAB_00ef60a8:
          param_2 = puVar31;
          if ((dword *)0xffffffffffffff88 < pdVar14) {
            return pdVar14;
          }
        }
        else {
          pdVar15 = pdVar30;
          pdVar14 = (dword *)FUN_00efbdfa(param_1,param_2 + -3,pdVar30,1);
          if ((dword *)0xffffffffffffff88 < pdVar14) {
            return pdVar14;
          }
          if (pdVar14 == (dword *)((longlong)&MACH_HEADER.magic + 1)) {
            uVar18 = 2;
            pdVar15 = pdVar30;
          }
          else {
            if (pdVar14 == (dword *)0x0) {
              pdVar14 = (dword *)((longlong)pdVar30 + 3);
              if (param_2 < pdVar14) {
                return (dword *)0xffffffffffffffba;
              }
              *local_48 = sVar3 + sVar4 * 8;
              *(char *)(local_48 + 1) = (char)((ulonglong)pdVar30 >> 0xd);
              _memcpy(local_48,pdVar30,(size_t)pdVar15);
              if ((dword *)0xffffffffffffff88 < pdVar14) {
                return pdVar14;
              }
              goto LAB_00ef60b1;
            }
            uVar18 = 4;
            pdVar15 = pdVar14;
          }
          *local_48 = sVar3 + (short)pdVar15 * 8 | uVar18;
          *(char *)(local_48 + 1) = (char)((ulonglong)pdVar15 >> 0xd);
          pdVar14 = (dword *)((longlong)pdVar14 + 3);
        }
      }
      else {
        pdVar14 = (dword *)FUN_00efbf4f(uVar20,pdVar30);
        if ((dword *)0xffffffffffffff88 < pdVar14) {
          return pdVar14;
        }
        if (pdVar14 == (dword *)0x0) {
          if ((((unaff_RDI[0xe6] != 0) ||
               (3 < (ulonglong)
                    (*(longlong *)(unaff_RDI + 0xea) - *(longlong *)(unaff_RDI + 0xe8) >> 3))) ||
              (9 < (ulonglong)(*(longlong *)(unaff_RDI + 0xee) - *(longlong *)(unaff_RDI + 0xec))))
             || (iVar19 = FUN_00efc3c1(), iVar19 == 0)) {
            pdVar14 = (dword *)_ZSTD_compressSuperBlock(param_1,param_2,pdVar30,uVar23);
            if (pdVar14 != (dword *)0xffffffffffffffba) {
              if ((dword *)0xffffffffffffff88 < pdVar14) {
                return pdVar14;
              }
              bVar17 = (char)unaff_RDI[0x3f] - 1;
              if ((uint)unaff_RDI[0x3f] < 8) {
                bVar17 = 6;
              }
              if ((pdVar14 != (dword *)0x0) &&
                 (pdVar14 < (undefined1 *)
                            ((longlong)pdVar30 + (1 - ((ulonglong)pdVar30 >> (bVar17 & 0x3f)))))) {
                auVar1 = *(undefined1 (*) [16])(unaff_RDI + 0x31a);
                auVar33._0_8_ = auVar1._8_8_;
                auVar33._8_4_ = auVar1._0_4_;
                auVar33._12_4_ = auVar1._4_4_;
                *(undefined1 (*) [16])(unaff_RDI + 0x31a) = auVar33;
                goto LAB_00ef5b55;
              }
            }
            goto LAB_00ef5b08;
          }
          uVar2 = *param_1;
          *local_48 = sVar3 + sVar4 * 8 + 2;
          *(char *)(local_48 + 1) = (char)((ulonglong)pdVar30 >> 0xd);
          *(undefined1 *)((longlong)local_48 + 3) = uVar2;
          pdVar14 = &MACH_HEADER.cputype;
        }
        else {
LAB_00ef5b08:
          pdVar14 = (dword *)((longlong)pdVar30 + 3);
          if (param_2 < pdVar14) {
            return (dword *)0xffffffffffffffba;
          }
          *local_48 = sVar3 + sVar4 * 8;
          *(char *)(local_48 + 1) = (char)((ulonglong)pdVar30 >> 0xd);
          _memcpy(local_48,pdVar30,(size_t)param_1);
          if ((dword *)0xffffffffffffff88 < pdVar14) {
            return pdVar14;
          }
        }
LAB_00ef5b55:
        if (*(int *)(&DAT_000015e4 + *(longlong *)(unaff_RDI + 0x31a)) == 2) {
          *(undefined4 *)(&DAT_000015e4 + *(longlong *)(unaff_RDI + 0x31a)) = 1;
        }
      }
LAB_00ef60b1:
      local_48 = (ushort *)((longlong)local_48 + (longlong)pdVar14);
      param_2 = param_2 + -(longlong)pdVar14;
      unaff_RDI[0xe6] = 0;
      param_3 = (dword *)((longlong)param_3 - (longlong)pdVar30);
      param_1 = puVar28;
    } while (param_3 != (dword *)0x0);
    if ((local_res8 != 0) && (unaff_RSI < local_48)) {
      *unaff_RDI = 3;
    }
    pdVar30 = (dword *)((longlong)local_48 - (longlong)unaff_RSI);
    param_3 = local_80;
  }
  if (pdVar30 < (dword *)0xffffffffffffff89) {
    lVar16 = *(longlong *)(unaff_RDI + 0xba);
    *(undefined1 **)(unaff_RDI + 0xba) = (undefined1 *)(lVar16 + (longlong)param_3);
    pdVar30 = (dword *)((longlong)pdVar30 + (longlong)local_c0);
    *(longlong *)(unaff_RDI + 0xbc) = *(longlong *)(unaff_RDI + 0xbc) + (longlong)pdVar30;
    pdVar14 = (dword *)0xffffffffffffffb8;
    if ((undefined1 *)((longlong)param_3 + lVar16 + 1) <= *(undefined1 **)(unaff_RDI + 0xb8)) {
      pdVar14 = pdVar30;
    }
    if (*(undefined1 **)(unaff_RDI + 0xb8) != (undefined1 *)0x0) {
      pdVar30 = pdVar14;
    }
  }
  return pdVar30;
}


