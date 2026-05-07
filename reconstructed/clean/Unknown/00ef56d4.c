// Function: FUN_00ef56d4
// Address: 00ef56d4
// Size: 2769 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/SystemConfiguration.framework/Versions/A/SystemConfiguration"
//   "/usr/lib/libc++.1.dylib"
//   "/usr/lib/libSystem.B.dylib"

dword * FUN_00ef56d4(void*param_1,void*param_2,dword *param_3,int param_4)

{
  uint8_t auVar1 [16];
  uint8_t uVar2;
  short sVar3;
  short sVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int *piVar12;
  uint uVar13;
  dword *pdVar14;
  dword *pdVar15;
  int64_t lVar16;
  byte bVar17;
  ushort uVar18;
  int iVar19;
  uint uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint uVar23;
  int64_t lVar24;
  uint64_t uVar25;
  int iVar26;
  ushort *arg1;
  int *this_ptr;
  ushort *puVar27;
  void*puVar28;
  int64_t lVar29;
  dword *pdVar30;
  void*puVar31;
  bool bVar32;
  uint8_t auVar33 [16];
  uint local_res8;
  uint64_t local_e0;
  uint32_t local_d8;
  uint64_t local_d0;
  void*local_c8;
  dword *local_c0;
  int *local_b8;
  void*local_b0;
  uint64_t local_a8;
  int64_t local_a0;
  uint8_t (*local_98) [16];
  uint64_t *local_90;
  int *local_88;
  dword *local_80;
  int *local_78;
  int *local_70;
  uint64_t local_68;
  ushort *local_48;
  
  if (*this_ptr == 0) {
    return (dword *)0xffffffffffffffc4;
  }
  local_c0 = (dword *)0x0;
  if ((param_4 != 0) && (*this_ptr == 1)) {
    local_80 = param_3;
    local_c0 = (dword *)FUN_00ef9d9c(*(int64_t *)(this_ptr + 0xb8) + -1,this_ptr + 0x38,
                                     this_ptr[0xa0]);
    if ((dword *)0xffffffffffffff88 < local_c0) {
      return local_c0;
    }
    param_2 = param_2 + -(int64_t)local_c0;
    arg1 = (ushort *)((int64_t)arg1 + (int64_t)local_c0);
    *this_ptr = 2;
    param_3 = local_80;
  }
  if (param_3 == (dword *)0x0) {
    return local_c0;
  }
  local_90 = (uint64_t *)(this_ptr + 0x31e);
  if ((*(void**)(this_ptr + 0x31e) == param_1) && (this_ptr[0x340] == 0)) {
    uVar25 = *(uint64_t *)(this_ptr + 0x322);
    uVar21 = (uint64_t)(uint)this_ptr[0x324];
    bVar32 = false;
    uVar20 = this_ptr[0x325];
  }
  else {
    uVar25 = *(uint64_t *)(this_ptr + 800);
    uVar21 = (int64_t)*(void**)(this_ptr + 0x31e) - uVar25;
    uVar20 = this_ptr[0x324];
    this_ptr[0x325] = uVar20;
    uVar23 = (uint)uVar21;
    this_ptr[0x324] = uVar23;
    *(uint64_t *)(this_ptr + 0x322) = uVar25;
    *(uint64_t *)(this_ptr + 800) = (int64_t)param_1 - uVar21;
    bVar32 = true;
    if (uVar23 - uVar20 < 8) {
      this_ptr[0x325] = uVar23;
      uVar20 = uVar23;
    }
  }
  puVar28 = (void*)((int64_t)param_3 + (int64_t)param_1);
  *local_90 = (uint64_t)puVar28;
  if (((void*)(uVar20 + uVar25) < puVar28) &&
     (param_1 < (void*)(uVar25 + (uVar21 & 0xffffffff)))) {
    iVar19 = (int)((int64_t)puVar28 - uVar25);
    if ((int64_t)(uVar21 & 0xffffffff) < (int64_t)((int64_t)puVar28 - uVar25)) {
      iVar19 = (int)uVar21;
    }
    this_ptr[0x325] = iVar19;
  }
  if (bVar32) {
    this_ptr[0x340] = 0;
    this_ptr[0x329] = (int)uVar21;
  }
  if (this_ptr[0x50] == 1) {
    if (*(void**)(this_ptr + 0xfc) == param_1) {
      lVar16 = *(int64_t *)(this_ptr + 0x100);
      uVar20 = this_ptr[0x103];
      uVar21 = (uint64_t)(uint)this_ptr[0x102];
    }
    else {
      lVar16 = *(int64_t *)(this_ptr + 0xfe);
      uVar21 = (int64_t)*(void**)(this_ptr + 0xfc) - lVar16;
      uVar20 = this_ptr[0x102];
      this_ptr[0x103] = uVar20;
      uVar23 = (uint)uVar21;
      this_ptr[0x102] = uVar23;
      *(int64_t *)(this_ptr + 0x100) = lVar16;
      *(uint64_t *)(this_ptr + 0xfe) = (int64_t)param_1 - uVar21;
      if (uVar23 - uVar20 < 8) {
        this_ptr[0x103] = uVar23;
        uVar20 = uVar23;
      }
    }
    *(void**)(this_ptr + 0xfc) = puVar28;
    uVar25 = uVar21;
    if (((void*)((uint64_t)uVar20 + lVar16) < puVar28) &&
       (uVar25 = uVar21 & 0xffffffff, param_1 < (void*)(lVar16 + uVar25))) {
      iVar19 = (int)((int64_t)puVar28 - lVar16);
      if ((int64_t)uVar25 < (int64_t)puVar28 - lVar16) {
        iVar19 = (int)uVar21;
      }
      this_ptr[0x103] = iVar19;
    }
  }
  if (param_4 == 0) {
    FUN_00efbaff(param_1,this_ptr + 0x38);
    pdVar30 = (dword *)FUN_00efbdfa(param_1,param_2,param_3,0);
  }
  else {
    local_d0 = (uint64_t)(uint)(1 << (*(byte *)(this_ptr + 0x39) & 0x1f));
    pdVar30 = *(dword **)(this_ptr + 0xb6);
    if (this_ptr[0x41] != 0) {
      _ZSTD_XXH64_update(CONCAT71((int7)(uVar25 >> 8),*(byte *)(this_ptr + 0x39)),param_3);
    }
    local_b8 = this_ptr + 0x402;
    local_98 = (uint8_t (*) [16])(this_ptr + 0x3ee);
    local_88 = this_ptr + 0x3da;
    local_78 = this_ptr + 0xe8;
    local_80 = param_3;
    local_48 = arg1;
    do {
      bVar32 = param_3 <= pdVar30;
      if (param_2 < (void*)((int64_t)&MACH_HEADER.cputype + 2)) {
        return (dword *)0xffffffffffffffba;
      }
      if (param_3 < pdVar30) {
        pdVar30 = param_3;
      }
      puVar28 = param_1 + (int64_t)pdVar30;
      FUN_00efbaff(param_1,this_ptr + 0x38,puVar28);
      iVar19 = this_ptr[0x328];
      iVar26 = (int)local_d0;
      if (((uint)(iVar26 + iVar19) < (uint)((int)puVar28 - (int)*(void*)(this_ptr + 800)))
         || (iVar19 != this_ptr[0x324])) {
        this_ptr[0x328] = 0;
        this_ptr[0x35c] = 0;
        this_ptr[0x35d] = 0;
        iVar19 = 0;
      }
      uVar23 = (size_t)param_1 - (int)*(void*)(this_ptr + 800);
      uVar20 = iVar19 + iVar26;
      if (uVar20 < uVar23) {
        uVar23 = uVar23 - iVar26;
        uVar13 = this_ptr[0x325];
        if ((uint)this_ptr[0x325] < uVar23) {
          this_ptr[0x325] = uVar23;
          uVar13 = uVar23;
        }
        if ((uint)this_ptr[0x324] < uVar13) {
          this_ptr[0x324] = uVar13;
        }
        this_ptr[0x328] = 0;
        this_ptr[0x35c] = 0;
        this_ptr[0x35d] = 0;
      }
      else {
        uVar13 = this_ptr[0x325];
      }
      if ((uint)this_ptr[0x329] < uVar13) {
        this_ptr[0x329] = uVar13;
      }
      uVar23 = bVar32 & local_res8;
      sVar3 = (short)uVar23;
      sVar4 = (short)pdVar30;
      if (*(int64_t *)(this_ptr + 0x46) == 0) {
        if (this_ptr[0x5b] == 1) {
          pdVar15 = pdVar30;
          pdVar14 = (dword *)FUN_00efbf4f(uVar20,pdVar30);
          if ((dword *)0xffffffffffffff88 < pdVar14) {
            return pdVar14;
          }
          puVar31 = param_2;
          if (pdVar14 == (dword *)((int64_t)&MACH_HEADER.magic + 1)) {
            if (*(int *)(&g_000015e4 + *(int64_t *)(this_ptr + 0x31a)) == 2) {
              *(void*)(&g_000015e4 + *(int64_t *)(this_ptr + 0x31a)) = 1;
            }
            pdVar14 = (dword *)((int64_t)pdVar30 + 3);
            if (param_2 < pdVar14) {
              return (dword *)0xffffffffffffffba;
            }
            *local_48 = sVar3 + sVar4 * 8;
            *(char *)(local_48 + 1) = (char)((uint64_t)pdVar30 >> 0xd);
            _memcpy(local_48,pdVar30,(size_t)pdVar15);
          }
          else {
            uVar25 = (uint64_t)(*(int64_t *)(this_ptr + 0xea) - *(int64_t *)(this_ptr + 0xe8))
                     >> 3;
            local_70 = local_b8;
            local_68 = 0;
            uVar20 = (uint)uVar25;
            if (4 < uVar20) {
              FUN_00efc96f(this_ptr,uVar25 & 0xffffffff,local_78);
              local_70[local_68] = uVar20;
            }
            uVar25 = local_68;
            lVar16 = *(int64_t *)(this_ptr + 0x31a);
            local_68 = CONCAT44(local_68._4_4_,*(void*)(&g_000015f8 + lVar16));
            local_70 = *(int **)(&g_000015f0 + lVar16);
            local_e0 = *(void*)(&g_000015f0 + lVar16);
            local_d8 = *(void*)(&g_000015f8 + lVar16);
            local_98[4] = (uint8_t  [16])0x0;
            local_98[3] = (uint8_t  [16])0x0;
            local_98[2] = (uint8_t  [16])0x0;
            local_98[1] = (uint8_t  [16])0x0;
            *local_98 = (uint8_t  [16])0x0;
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
                lVar24 = *(int64_t *)(this_ptr + 0x3dc) - *(int64_t *)(this_ptr + 0x3da);
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
                    lVar29 = lVar24 + (uint64_t)
                                      *(ushort *)(*(int64_t *)(this_ptr + 0x3da) + 6 + uVar22 * 8)
                    ;
                    lVar24 = lVar29 + 3;
                    if (((uint)this_ptr[0x3ed] == uVar22) && (this_ptr[0x3ec] == 2)) {
                      lVar24 = lVar29 + 0x10003;
                    }
                    uVar22 = uVar22 + 1;
                  } while (uVar21 != uVar22);
                }
                local_a0 = local_a0 + lVar24 + lVar16;
                if (local_a8 != uVar25) {
                  FUN_00efc845(this_ptr[local_a8 + 0x403],this_ptr[local_a8 + 0x402]);
                }
                piVar12 = local_88;
                pdVar14 = (dword *)FUN_00efc4dd(&local_e0,&local_70,puVar27,param_2);
                puVar28 = local_c8;
                puVar31 = local_b0;
                if ((dword *)0xffffffffffffff88 < pdVar14) goto LAB_00ef60a8;
                puVar27 = (ushort *)((int64_t)puVar27 + (int64_t)pdVar14);
                param_2 = param_2 + -(int64_t)pdVar14;
                pdVar14 = (dword *)((int64_t)pdVar15 + (int64_t)pdVar14);
                uVar5 = *(void*)(local_98[4] + 8);
                *(void*)(piVar12 + 0x10) = *(void*)local_98[4];
                *(void*)(piVar12 + 0x12) = uVar5;
                uVar5 = *(void*)*local_98;
                uVar6 = *(void*)(*local_98 + 8);
                uVar7 = *(void*)local_98[1];
                uVar8 = *(void*)(local_98[1] + 8);
                uVar9 = *(void*)local_98[2];
                uVar10 = *(void*)(local_98[2] + 8);
                uVar11 = *(void*)(local_98[3] + 8);
                *(void*)(piVar12 + 0xc) = *(void*)local_98[3];
                *(void*)(piVar12 + 0xe) = uVar11;
                *(void*)(piVar12 + 8) = uVar9;
                *(void*)(piVar12 + 10) = uVar10;
                *(void*)(piVar12 + 4) = uVar7;
                *(void*)(piVar12 + 6) = uVar8;
                *(void*)piVar12 = uVar5;
                *(void*)(piVar12 + 2) = uVar6;
                uVar21 = local_a8 + 1;
                pdVar15 = pdVar14;
              } while (uVar21 <= uVar25);
              lVar16 = *(int64_t *)(this_ptr + 0x31a);
              *(void*)(&g_000015f8 + lVar16) = (uint32_t)local_68;
              *(int **)(&g_000015f0 + lVar16) = local_70;
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
          if (pdVar14 == (dword *)((int64_t)&MACH_HEADER.magic + 1)) {
            uVar18 = 2;
            pdVar15 = pdVar30;
          }
          else {
            if (pdVar14 == (dword *)0x0) {
              pdVar14 = (dword *)((int64_t)pdVar30 + 3);
              if (param_2 < pdVar14) {
                return (dword *)0xffffffffffffffba;
              }
              *local_48 = sVar3 + sVar4 * 8;
              *(char *)(local_48 + 1) = (char)((uint64_t)pdVar30 >> 0xd);
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
          *(char *)(local_48 + 1) = (char)((uint64_t)pdVar15 >> 0xd);
          pdVar14 = (dword *)((int64_t)pdVar14 + 3);
        }
      }
      else {
        pdVar14 = (dword *)FUN_00efbf4f(uVar20,pdVar30);
        if ((dword *)0xffffffffffffff88 < pdVar14) {
          return pdVar14;
        }
        if (pdVar14 == (dword *)0x0) {
          if ((((this_ptr[0xe6] != 0) ||
               (3 < (uint64_t)
                    (*(int64_t *)(this_ptr + 0xea) - *(int64_t *)(this_ptr + 0xe8) >> 3))) ||
              (9 < (uint64_t)(*(int64_t *)(this_ptr + 0xee) - *(int64_t *)(this_ptr + 0xec))))
             || (iVar19 = FUN_00efc3c1(), iVar19 == 0)) {
            pdVar14 = (dword *)_ZSTD_compressSuperBlock(param_1,param_2,pdVar30,uVar23);
            if (pdVar14 != (dword *)0xffffffffffffffba) {
              if ((dword *)0xffffffffffffff88 < pdVar14) {
                return pdVar14;
              }
              bVar17 = (char)this_ptr[0x3f] - 1;
              if ((uint)this_ptr[0x3f] < 8) {
                bVar17 = 6;
              }
              if ((pdVar14 != (dword *)0x0) &&
                 (pdVar14 < (void*)
                            ((int64_t)pdVar30 + (1 - ((uint64_t)pdVar30 >> (bVar17 & 0x3f)))))) {
                auVar1 = *(uint8_t (*) [16])(this_ptr + 0x31a);
                auVar33._0_8_ = auVar1._8_8_;
                auVar33._8_4_ = auVar1._0_4_;
                auVar33._12_4_ = auVar1._4_4_;
                *(uint8_t (*) [16])(this_ptr + 0x31a) = auVar33;
                goto LAB_00ef5b55;
              }
            }
            goto LAB_00ef5b08;
          }
          uVar2 = *param_1;
          *local_48 = sVar3 + sVar4 * 8 + 2;
          *(char *)(local_48 + 1) = (char)((uint64_t)pdVar30 >> 0xd);
          *(void*)((int64_t)local_48 + 3) = uVar2;
          pdVar14 = &MACH_HEADER.cputype;
        }
        else {
LAB_00ef5b08:
          pdVar14 = (dword *)((int64_t)pdVar30 + 3);
          if (param_2 < pdVar14) {
            return (dword *)0xffffffffffffffba;
          }
          *local_48 = sVar3 + sVar4 * 8;
          *(char *)(local_48 + 1) = (char)((uint64_t)pdVar30 >> 0xd);
          _memcpy(local_48,pdVar30,(size_t)param_1);
          if ((dword *)0xffffffffffffff88 < pdVar14) {
            return pdVar14;
          }
        }
LAB_00ef5b55:
        if (*(int *)(&g_000015e4 + *(int64_t *)(this_ptr + 0x31a)) == 2) {
          *(void*)(&g_000015e4 + *(int64_t *)(this_ptr + 0x31a)) = 1;
        }
      }
LAB_00ef60b1:
      local_48 = (ushort *)((int64_t)local_48 + (int64_t)pdVar14);
      param_2 = param_2 + -(int64_t)pdVar14;
      this_ptr[0xe6] = 0;
      param_3 = (dword *)((int64_t)param_3 - (int64_t)pdVar30);
      param_1 = puVar28;
    } while (param_3 != (dword *)0x0);
    if ((local_res8 != 0) && (arg1 < local_48)) {
      *this_ptr = 3;
    }
    pdVar30 = (dword *)((int64_t)local_48 - (int64_t)arg1);
    param_3 = local_80;
  }
  if (pdVar30 < (dword *)0xffffffffffffff89) {
    lVar16 = *(int64_t *)(this_ptr + 0xba);
    *(void**)(this_ptr + 0xba) = (void*)(lVar16 + (int64_t)param_3);
    pdVar30 = (dword *)((int64_t)pdVar30 + (int64_t)local_c0);
    *(int64_t *)(this_ptr + 0xbc) = *(int64_t *)(this_ptr + 0xbc) + (int64_t)pdVar30;
    pdVar14 = (dword *)0xffffffffffffffb8;
    if ((void*)((int64_t)param_3 + lVar16 + 1) <= *(void**)(this_ptr + 0xb8)) {
      pdVar14 = pdVar30;
    }
    if (*(void**)(this_ptr + 0xb8) != (void*)0x0) {
      pdVar30 = pdVar14;
    }
  }
  return pdVar30;
}

