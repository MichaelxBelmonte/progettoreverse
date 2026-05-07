// Function: FUN_00f29ac8
// Address: 00f29ac8
// Size: 5682 bytes
// Class: Unknown

byte * FUN_00f29ac8(uint64_t *param_1,int64_t param_2,byte *param_3,int param_4)

{
  void*puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  void *pvVar9;
  sbyte sVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint64_t *puVar14;
  byte **ppbVar15;
  byte *pbVar16;
  int iVar17;
  byte *pbVar18;
  uint64_t uVar19;
  byte *pbVar20;
  uint64_t uVar21;
  byte *arg1;
  byte *pbVar22;
  void*this_ptr;
  size_t sVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint64_t uVar27;
  void*puVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  uint32_t uVar33;
  byte *local_e0;
  uint64_t local_d8;
  uint local_d0;
  uint64_t *local_c8;
  byte *local_b0;
  int64_t local_a8;
  byte *local_a0;
  int64_t local_98;
  int64_t local_90;
  int64_t local_88;
  byte *local_80 [4];
  uint64_t local_60;
  byte *local_58;
  int local_4c;
  byte *local_48;
  byte *local_40;
  
  pbVar18 = arg1 + param_2;
  local_80[3] = (byte *)this_ptr[0xeb5];
  local_e0 = (byte *)this_ptr[0xed3];
  pbVar29 = arg1;
  if (param_4 == 0) goto LAB_00f29bb9;
  pbVar22 = (byte *)this_ptr[0xe99];
  lVar13 = this_ptr[0xe9a];
  pvVar9 = (void *)this_ptr[0xe9b];
  *(void*)((int64_t)this_ptr + 0x7534) = 1;
  lVar12 = 0;
  do {
    local_80[lVar12] = (byte *)(uint64_t)*(uint *)((int64_t)this_ptr + lVar12 * 4 + 0x683c);
    lVar12 = lVar12 + 1;
  } while (lVar12 != 3);
  if (param_3 == (byte *)0x0) {
    return (byte *)0xffffffffffffffec;
  }
  puVar14 = param_1 + 1;
  if (param_3 < &MACH_HEADER.cpusubtype) {
    local_d8 = (uint64_t)(byte)*param_1;
    switch(param_3) {
    case (byte *)0x7:
      local_d8 = local_d8 | (uint64_t)*(byte *)((int64_t)param_1 + 6) << 0x30;
    case (byte *)0x6:
      local_d8 = local_d8 + ((uint64_t)*(byte *)((int64_t)param_1 + 5) << 0x28);
    case (byte *)0x5:
      local_d8 = local_d8 + ((uint64_t)*(byte *)((int64_t)param_1 + 4) << 0x20);
    case (byte *)0x4:
      local_d8 = local_d8 + (uint64_t)*(byte *)((int64_t)param_1 + 3) * 0x1000000;
    case (byte *)0x3:
      local_d8 = local_d8 + (uint64_t)*(byte *)((int64_t)param_1 + 2) * 0x10000;
    case (byte *)0x2:
      local_d8 = (uint64_t)*(byte *)((int64_t)param_1 + 1) * 0x100 + local_d8;
    }
    if ((param_3 + -1)[(int64_t)param_1] == 0) {
      return (byte *)0xffffffffffffffec;
    }
    local_d0 = LZCOUNT((uint)(param_3 + -1)[(int64_t)param_1]) + (int)param_3 * -8 + 0x29;
    local_c8 = param_1;
  }
  else {
    local_c8 = (uint64_t *)(param_3 + (int64_t)param_1 + -8);
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
  uVar33 = FUN_00f295dc(param_1,*this_ptr);
  uVar33 = FUN_00f295dc(uVar33,this_ptr[2]);
  FUN_00f295dc(uVar33,this_ptr[1]);
  pbVar18 = local_80[1];
  puVar28 = (void*)(uint64_t)*(uint *)(local_88 + 4 + local_90 * 8);
  uVar26 = *(uint *)(local_a8 + 4 + (int64_t)local_b0 * 8);
  uVar27 = (uint64_t)uVar26;
  uVar8 = *(uint *)(local_98 + 4 + (int64_t)local_a0 * 8);
  bVar2 = *(byte *)(local_a8 + 2 + (int64_t)local_b0 * 8);
  bVar3 = *(byte *)(local_88 + 2 + local_90 * 8);
  bVar4 = *(byte *)(local_98 + 2 + (int64_t)local_a0 * 8);
  bVar5 = *(byte *)(local_a8 + 3 + (int64_t)local_b0 * 8);
  bVar6 = *(byte *)(local_88 + 3 + local_90 * 8);
  bVar7 = *(byte *)(local_98 + 3 + (int64_t)local_a0 * 8);
  local_58 = (byte *)(uint64_t)bVar7;
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      param_3 = local_80[uVar26 == 0];
      local_80[1] = local_80[uVar26 != 0];
      goto LAB_00f29dc6;
    }
    uVar21 = (uint64_t)local_d0;
    local_d0 = local_d0 + 1;
    lVar12 = (uint64_t)(uVar8 + (uVar26 == 0)) - ((int64_t)(local_d8 << (uVar21 & 0x3f)) >> 0x3f);
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
    uVar21 = (uint64_t)local_d0;
    local_d0 = local_d0 + bVar4;
    param_3 = (byte *)(((local_d8 << (uVar21 & 0x3f)) >> ((uint64_t)(byte)-bVar4 & 0x3f)) +
                      (uint64_t)uVar8);
    local_80[1] = local_80[0];
    local_80[2] = pbVar18;
LAB_00f29dc6:
    local_80[0] = param_3;
  }
  if (bVar3 != 0) {
    uVar21 = (uint64_t)local_d0;
    local_d0 = local_d0 + bVar3;
    puVar28 = puVar28 + ((local_d8 << (uVar21 & 0x3f)) >> ((uint64_t)(byte)-bVar3 & 0x3f));
  }
  uVar21 = (uint64_t)local_d0;
  iVar24 = (int)param_1;
  if ((0x1e < (byte)(bVar3 + bVar2 + bVar4)) && (local_d0 < 0x41)) {
    if (local_c8 < puVar14) {
      if (local_c8 == param_1) goto LAB_00f29e1a;
      uVar21 = (uint64_t)(uint)((int)local_c8 - iVar24);
      if (param_1 <= (uint64_t *)((int64_t)local_c8 - (uint64_t)(local_d0 >> 3))) {
        uVar21 = (uint64_t)(local_d0 >> 3);
      }
      local_d0 = local_d0 + (int)uVar21 * -8;
    }
    else {
      uVar21 = (uint64_t)(local_d0 >> 3);
      local_d0 = local_d0 & 7;
    }
    local_c8 = (uint64_t *)((int64_t)local_c8 - uVar21);
    uVar21 = (uint64_t)local_d0;
    local_d8 = *local_c8;
  }
LAB_00f29e1a:
  iVar17 = (int)uVar21;
  if (bVar2 != 0) {
    iVar17 = iVar17 + (uint)bVar2;
    uVar27 = uVar27 + ((local_d8 << (uVar21 & 0x3f)) >> ((uint64_t)(byte)-bVar2 & 0x3f));
  }
  sVar10 = (bVar5 < 0x41) * ('@' - bVar5);
  local_b0 = (byte *)((((local_d8 >> ((uint64_t)(byte)-(char)(iVar17 + (uint)bVar5) & 0x3f)) <<
                       sVar10) >> sVar10) +
                     (uint64_t)*(ushort *)(local_a8 + (int64_t)local_b0 * 8));
  iVar17 = iVar17 + (uint)bVar5 + (uint)bVar6;
  sVar10 = (bVar6 < 0x41) * ('@' - bVar6);
  local_90 = (((local_d8 >> ((uint64_t)(byte)-(char)iVar17 & 0x3f)) << sVar10) >> sVar10) +
             (uint64_t)*(ushort *)(local_88 + local_90 * 8);
  local_d0 = iVar17 + (uint)bVar7;
  sVar10 = (bVar7 < 0x41) * ('@' - bVar7);
  local_a0 = (byte *)((((local_d8 >> ((uint64_t)(byte)-(char)local_d0 & 0x3f)) << sVar10) >> sVar10
                      ) + (uint64_t)*(ushort *)(local_98 + (int64_t)local_a0 * 8));
  pbVar18 = local_40 + uVar27;
  pbVar20 = (byte *)this_ptr[0xed3];
  pbVar31 = local_40;
  local_80[0] = param_3;
  if (pbVar18 <= pbVar20) {
    do {
      pbVar20 = local_80[0];
      if ((local_e0 < pbVar18) ||
         (pbVar30 = puVar28 + uVar27, pbVar18 + -0x20 < pbVar29 + (int64_t)pbVar30)) {
        param_3 = local_e0;
        pbVar30 = (byte *)FUN_00f299af(local_80 + 3,pbVar18 + -0x20,local_e0,pbVar22,pvVar9);
      }
      else {
        pbVar32 = pbVar29 + uVar27;
        uVar11 = *(void*)(pbVar31 + 8);
        *(void*)pbVar29 = *(void*)pbVar31;
        *(void*)(pbVar29 + 8) = uVar11;
        if (0x10 < uVar27) {
          uVar11 = *(void*)(pbVar31 + 0x18);
          *(void*)(pbVar29 + 0x10) = *(void*)(pbVar31 + 0x10);
          *(void*)(pbVar29 + 0x18) = uVar11;
          if (0x10 < (int64_t)(uVar27 - 0x10)) {
            lVar12 = 0;
            do {
              uVar11 = *(void*)(pbVar31 + lVar12 + 0x20 + 8);
              pbVar16 = pbVar29 + lVar12 + 0x20;
              *(void*)pbVar16 = *(void*)(pbVar31 + lVar12 + 0x20);
              *(void*)(pbVar16 + 8) = uVar11;
              uVar11 = *(void*)(pbVar31 + lVar12 + 0x30 + 8);
              *(void*)(pbVar16 + 0x10) = *(void*)(pbVar31 + lVar12 + 0x30);
              *(void*)(pbVar16 + 0x18) = uVar11;
              lVar12 = lVar12 + 0x20;
            } while (pbVar16 + 0x20 < pbVar32);
          }
        }
        pbVar31 = pbVar32 + -(int64_t)local_80[0];
        local_80[3] = pbVar18;
        if (pbVar32 + -(int64_t)pbVar22 < local_80[0]) {
          if (pbVar32 + -lVar13 < local_80[0]) {
            return (byte *)0xffffffffffffffec;
          }
          lVar12 = (int64_t)pbVar31 - (int64_t)pbVar22;
          local_58 = pbVar30;
          if ((void *)((int64_t)((int64_t)pvVar9 + lVar12) + (int64_t)puVar28) <= pvVar9) {
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
          if ((byte *)((int64_t)&MACH_HEADER.cputype + 3) < pbVar20) {
            *(void*)pbVar32 = *(void*)pbVar31;
          }
          else {
            iVar17 = *(int *)(&g_023e4ca0 + (int64_t)pbVar20 * 4);
            *pbVar32 = *pbVar31;
            pbVar32[1] = pbVar31[1];
            pbVar32[2] = pbVar31[2];
            pbVar32[3] = pbVar31[3];
            pbVar18 = pbVar31 + *(uint *)(&g_023e4c80 + (int64_t)pbVar20 * 4);
            pbVar31 = pbVar31 + ((uint64_t)*(uint *)(&g_023e4c80 + (int64_t)pbVar20 * 4) -
                                (int64_t)iVar17);
            *(void*)(pbVar32 + 4) = *(void*)pbVar18;
          }
          if (&MACH_HEADER.cpusubtype < puVar28) {
            pbVar18 = pbVar31 + 8;
            pbVar20 = pbVar32 + 8;
            if ((int64_t)pbVar20 - (int64_t)pbVar18 < 0x10) {
              do {
                *(void*)pbVar20 = *(void*)pbVar18;
                pbVar20 = pbVar20 + 8;
                pbVar18 = pbVar18 + 8;
              } while (pbVar20 < pbVar32 + (int64_t)puVar28);
            }
            else {
              uVar11 = *(void*)(pbVar31 + 0x10);
              *(void*)pbVar20 = *(void*)pbVar18;
              *(void*)(pbVar32 + 0x10) = uVar11;
              if (0x18 < (int64_t)puVar28) {
                lVar12 = 0;
                do {
                  uVar11 = *(void*)(pbVar31 + lVar12 + 0x18 + 8);
                  pbVar18 = pbVar32 + lVar12 + 0x18;
                  *(void*)pbVar18 = *(void*)(pbVar31 + lVar12 + 0x18);
                  *(void*)(pbVar18 + 8) = uVar11;
                  uVar11 = *(void*)(pbVar31 + lVar12 + 0x28 + 8);
                  *(void*)(pbVar18 + 0x10) = *(void*)(pbVar31 + lVar12 + 0x28);
                  *(void*)(pbVar18 + 0x18) = uVar11;
                  lVar12 = lVar12 + 0x20;
                } while (pbVar18 + 0x20 < pbVar32 + (int64_t)puVar28);
              }
            }
          }
        }
        else {
          uVar11 = *(void*)(pbVar31 + 8);
          *(void*)pbVar32 = *(void*)pbVar31;
          *(void*)(pbVar32 + 8) = uVar11;
          if (0x10 < (int64_t)puVar28) {
            lVar12 = 0x10;
            do {
              uVar11 = *(void*)(pbVar31 + lVar12 + 8);
              pbVar18 = pbVar32 + lVar12;
              *(void*)pbVar18 = *(void*)(pbVar31 + lVar12);
              *(void*)(pbVar18 + 8) = uVar11;
              uVar11 = *(void*)(pbVar31 + lVar12 + 0x10 + 8);
              *(void*)(pbVar18 + 0x10) = *(void*)(pbVar31 + lVar12 + 0x10);
              *(void*)(pbVar18 + 0x18) = uVar11;
              lVar12 = lVar12 + 0x20;
            } while (pbVar18 + 0x20 < puVar28 + (int64_t)pbVar32);
          }
        }
      }
LAB_00f2a07d:
      if ((byte *)0xffffffffffffff88 < pbVar30) {
        return pbVar30;
      }
      pbVar29 = pbVar29 + (int64_t)pbVar30;
      param_4 = param_4 + -1;
      pbVar18 = local_48;
      if (param_4 == 0) goto LAB_00f2adb7;
      uVar21 = (uint64_t)local_d0;
      local_40 = (byte *)CONCAT44(local_40._4_4_,param_4);
      if (uVar21 < 0x41) {
        if (local_c8 < puVar14) {
          if (local_c8 == param_1) goto LAB_00f2a109;
          uVar27 = (uint64_t)(uint)((int)local_c8 - iVar24);
          if (param_1 <= (uint64_t *)((int64_t)local_c8 - (uint64_t)(local_d0 >> 3))) {
            uVar27 = (uint64_t)(local_d0 >> 3);
          }
          local_d0 = local_d0 + (int)uVar27 * -8;
        }
        else {
          uVar27 = (uint64_t)(local_d0 >> 3);
          local_d0 = local_d0 & 7;
        }
        local_c8 = (uint64_t *)((int64_t)local_c8 - uVar27);
        uVar21 = (uint64_t)local_d0;
        local_d8 = *local_c8;
      }
LAB_00f2a109:
      puVar28 = (void*)(uint64_t)*(uint *)(local_88 + 4 + local_90 * 8);
      uVar26 = *(uint *)(local_a8 + 4 + (int64_t)local_b0 * 8);
      uVar27 = (uint64_t)uVar26;
      uVar8 = *(uint *)(local_98 + 4 + (int64_t)local_a0 * 8);
      bVar2 = *(byte *)(local_a8 + 2 + (int64_t)local_b0 * 8);
      param_3 = (byte *)(uint64_t)bVar2;
      bVar3 = *(byte *)(local_88 + 2 + local_90 * 8);
      bVar4 = *(byte *)(local_98 + 2 + (int64_t)local_a0 * 8);
      bVar5 = *(byte *)(local_a8 + 3 + (int64_t)local_b0 * 8);
      local_60 = (uint64_t)bVar5;
      bVar6 = *(byte *)(local_88 + 3 + local_90 * 8);
      local_58 = (byte *)(uint64_t)*(ushort *)(local_98 + (int64_t)local_a0 * 8);
      bVar7 = *(byte *)(local_98 + 3 + (int64_t)local_a0 * 8);
      if (bVar4 < 2) {
        if (bVar4 == 0) {
          local_80[0] = local_80[uVar26 == 0];
          ppbVar15 = local_80 + (uVar26 != 0);
        }
        else {
          uVar19 = uVar21 & 0x3f;
          uVar21 = (uint64_t)((int)uVar21 + 1);
          lVar12 = (uint64_t)(uVar8 + (uVar26 == 0)) - ((int64_t)(local_d8 << uVar19) >> 0x3f);
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
        uVar21 = (uint64_t)((int)uVar21 + (uint)bVar4);
        local_80[0] = (byte *)(((local_d8 << uVar19) >> ((uint64_t)(byte)-bVar4 & 0x3f)) +
                              (uint64_t)uVar8);
        local_80[2] = local_80[1];
        ppbVar15 = local_80;
      }
      local_80[1] = *ppbVar15;
      if (bVar3 != 0) {
        uVar19 = uVar21 & 0x3f;
        uVar21 = (uint64_t)((int)uVar21 + (uint)bVar3);
        puVar28 = puVar28 + ((local_d8 << uVar19) >> ((uint64_t)(byte)-bVar3 & 0x3f));
      }
      if ((0x1e < (byte)(bVar3 + bVar2 + bVar4)) && (uVar26 = (uint)uVar21, uVar26 < 0x41)) {
        if (local_c8 < puVar14) {
          if (local_c8 == param_1) goto LAB_00f2a222;
          uVar19 = (uint64_t)(uint)((int)local_c8 - iVar24);
          if (param_1 <= (uint64_t *)((int64_t)local_c8 - (uVar21 >> 3))) {
            uVar19 = uVar21 >> 3;
          }
          uVar26 = uVar26 + (int)uVar19 * -8;
        }
        else {
          uVar19 = uVar21 >> 3;
          uVar26 = uVar26 & 7;
        }
        local_c8 = (uint64_t *)((int64_t)local_c8 - uVar19);
        uVar21 = (uint64_t)uVar26;
        local_d8 = *local_c8;
      }
LAB_00f2a222:
      iVar17 = (int)uVar21;
      if (bVar2 != 0) {
        iVar17 = iVar17 + (uint)bVar2;
        uVar27 = uVar27 + ((local_d8 << (uVar21 & 0x3f)) >> ((uint64_t)(byte)-bVar2 & 0x3f));
      }
      sVar10 = (bVar5 < 0x41) * ('@' - bVar5);
      local_b0 = (byte *)((((local_d8 >> ((uint64_t)(byte)-(char)(iVar17 + (uint)bVar5) & 0x3f)) <<
                           sVar10) >> sVar10) +
                         (uint64_t)*(ushort *)(local_a8 + (int64_t)local_b0 * 8));
      iVar17 = iVar17 + (uint)bVar5 + (uint)bVar6;
      sVar10 = (bVar6 < 0x41) * ('@' - bVar6);
      local_90 = (((local_d8 >> ((uint64_t)(byte)-(char)iVar17 & 0x3f)) << sVar10) >> sVar10) +
                 (uint64_t)*(ushort *)(local_88 + local_90 * 8);
      local_d0 = iVar17 + (uint)bVar7;
      sVar10 = (bVar7 < 0x41) * ('@' - bVar7);
      local_a0 = local_58 +
                 (((local_d8 >> ((uint64_t)(byte)-(char)local_d0 & 0x3f)) << sVar10) >> sVar10);
      pbVar18 = local_80[3] + uVar27;
      pbVar20 = (byte *)this_ptr[0xed3];
      pbVar31 = local_80[3];
    } while (pbVar18 <= pbVar20);
  }
  if (param_4 < 1) {
    return (byte *)0xffffffffffffffec;
  }
  uVar21 = (int64_t)pbVar20 - (int64_t)pbVar31;
  pbVar20 = local_80[0];
  if (uVar21 != 0) {
    if ((uint64_t)((int64_t)local_48 - (int64_t)pbVar29) < uVar21) {
      return (byte *)0xffffffffffffffba;
    }
    local_40 = local_80[0];
    FUN_00f29676(this_ptr,uVar21);
    uVar27 = uVar27 - uVar21;
    pbVar29 = pbVar29 + uVar21;
    pbVar20 = local_40;
  }
  pbVar18 = local_48;
  local_40 = (byte *)CONCAT44(local_40._4_4_,param_4);
  local_80[3] = (byte *)((int64_t)this_ptr + 0x76a4);
  local_e0 = (byte *)((int64_t)this_ptr + 0x176a4);
  *(void*)(this_ptr + 0xed4) = 0;
  if (((int64_t)uVar27 < 0x10001) &&
     (pbVar31 = puVar28 + uVar27, pbVar29 + (int64_t)pbVar31 <= local_48 + -0x20)) {
    pbVar30 = pbVar29 + uVar27;
    uVar11 = *(void*)((int64_t)this_ptr + 0x76ac);
    *(void*)pbVar29 = *(void*)local_80[3];
    *(void*)(pbVar29 + 8) = uVar11;
    if (0x10 < uVar27) {
      uVar11 = *(void*)((int64_t)this_ptr + 0x76bc);
      *(void*)(pbVar29 + 0x10) = *(void*)((int64_t)this_ptr + 0x76b4);
      *(void*)(pbVar29 + 0x18) = uVar11;
      if (0x10 < (int64_t)(uVar27 - 0x10)) {
        lVar12 = 0;
        do {
          puVar1 = (void*)((int64_t)this_ptr + lVar12 + 0x76c4);
          uVar11 = puVar1[1];
          pbVar18 = pbVar29 + lVar12 + 0x20;
          *(void*)pbVar18 = *puVar1;
          *(void*)(pbVar18 + 8) = uVar11;
          puVar1 = (void*)((int64_t)this_ptr + lVar12 + 0x76d4);
          uVar11 = puVar1[1];
          *(void*)(pbVar18 + 0x10) = *puVar1;
          *(void*)(pbVar18 + 0x18) = uVar11;
          lVar12 = lVar12 + 0x20;
        } while (pbVar18 + 0x20 < pbVar30);
      }
    }
    local_80[3] = (byte *)((int64_t)this_ptr + uVar27 + 0x76a4);
    pbVar32 = pbVar30 + -(int64_t)pbVar20;
    if (pbVar30 + -(int64_t)pbVar22 < pbVar20) {
      if (pbVar30 + -lVar13 < pbVar20) {
        return (byte *)0xffffffffffffffec;
      }
      lVar12 = (int64_t)(pbVar30 + -(int64_t)pbVar20) - (int64_t)pbVar22;
      local_58 = pbVar31;
      if ((void *)((int64_t)((int64_t)pvVar9 + lVar12) + (int64_t)puVar28) <= pvVar9) {
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
      if ((byte *)((int64_t)&MACH_HEADER.cputype + 3) < pbVar20) {
        *(void*)pbVar30 = *(void*)pbVar32;
      }
      else {
        iVar17 = *(int *)(&g_023e4ca0 + (int64_t)pbVar20 * 4);
        *pbVar30 = *pbVar32;
        pbVar30[1] = pbVar32[1];
        pbVar30[2] = pbVar32[2];
        pbVar30[3] = pbVar32[3];
        pbVar16 = pbVar32 + *(uint *)(&g_023e4c80 + (int64_t)pbVar20 * 4);
        pbVar32 = pbVar32 + ((uint64_t)*(uint *)(&g_023e4c80 + (int64_t)pbVar20 * 4) -
                            (int64_t)iVar17);
        *(void*)(pbVar30 + 4) = *(void*)pbVar16;
      }
      if (&MACH_HEADER.cpusubtype < puVar28) {
        pbVar20 = pbVar32 + 8;
        pbVar16 = pbVar30 + 8;
        if ((int64_t)pbVar16 - (int64_t)pbVar20 < 0x10) {
          do {
            *(void*)pbVar16 = *(void*)pbVar20;
            pbVar16 = pbVar16 + 8;
            pbVar20 = pbVar20 + 8;
          } while (pbVar16 < pbVar30 + (int64_t)puVar28);
        }
        else {
          uVar11 = *(void*)(pbVar32 + 0x10);
          *(void*)pbVar16 = *(void*)pbVar20;
          *(void*)(pbVar30 + 0x10) = uVar11;
          if (0x18 < (int64_t)puVar28) {
            lVar12 = 0;
            do {
              uVar11 = *(void*)(pbVar32 + lVar12 + 0x18 + 8);
              pbVar20 = pbVar30 + lVar12 + 0x18;
              *(void*)pbVar20 = *(void*)(pbVar32 + lVar12 + 0x18);
              *(void*)(pbVar20 + 8) = uVar11;
              uVar11 = *(void*)(pbVar32 + lVar12 + 0x28 + 8);
              *(void*)(pbVar20 + 0x10) = *(void*)(pbVar32 + lVar12 + 0x28);
              *(void*)(pbVar20 + 0x18) = uVar11;
              lVar12 = lVar12 + 0x20;
            } while (pbVar20 + 0x20 < pbVar30 + (int64_t)puVar28);
          }
        }
      }
    }
    else {
      uVar11 = *(void*)(pbVar32 + 8);
      *(void*)pbVar30 = *(void*)pbVar32;
      *(void*)(pbVar30 + 8) = uVar11;
      if (0x10 < (int64_t)puVar28) {
        lVar12 = 0x10;
        do {
          uVar11 = *(void*)(pbVar32 + lVar12 + 8);
          pbVar20 = pbVar30 + lVar12;
          *(void*)pbVar20 = *(void*)(pbVar32 + lVar12);
          *(void*)(pbVar20 + 8) = uVar11;
          uVar11 = *(void*)(pbVar32 + lVar12 + 0x10 + 8);
          *(void*)(pbVar20 + 0x10) = *(void*)(pbVar32 + lVar12 + 0x10);
          *(void*)(pbVar20 + 0x18) = uVar11;
          lVar12 = lVar12 + 0x20;
        } while (pbVar20 + 0x20 < puVar28 + (int64_t)pbVar30);
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
  pbVar29 = pbVar29 + (int64_t)pbVar31;
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
      param_1 = (uint64_t *)(uint64_t)*(uint *)(local_80 + lVar13);
      *(uint *)((int64_t)this_ptr + lVar13 * 4 + 0x683c) = *(uint *)(local_80 + lVar13);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
LAB_00f29bb9:
    sVar23 = (size_t)param_3;
    pbVar22 = local_80[3];
    if (*(int *)(this_ptr + 0xed4) == 2) {
      param_1 = (uint64_t *)(local_e0 + -(int64_t)local_80[3]);
      if (pbVar18 + -(int64_t)pbVar29 < param_1) {
        return (byte *)0xffffffffffffffba;
      }
      if (pbVar29 == (byte *)0x0) {
        pbVar29 = (byte *)0x0;
      }
      else {
        puVar14 = param_1;
        _memmove(param_1,param_1,sVar23);
        pbVar29 = pbVar29 + (int64_t)param_1;
        param_1 = puVar14;
      }
      pbVar22 = (byte *)((int64_t)this_ptr + 0x76a4);
      *(void*)(this_ptr + 0xed4) = 0;
      local_e0 = (byte *)((int64_t)this_ptr + 0x176a4);
    }
    local_e0 = local_e0 + -(int64_t)pbVar22;
    if (local_e0 <= pbVar18 + -(int64_t)pbVar29) {
      if (pbVar29 == (byte *)0x0) {
        pbVar29 = (byte *)0x0;
      }
      else {
        _memcpy(param_1,local_e0,sVar23);
        pbVar29 = pbVar29 + (int64_t)local_e0;
      }
      return pbVar29 + -(int64_t)arg1;
    }
    return (byte *)0xffffffffffffffba;
  }
  uVar27 = (uint64_t)local_d0;
  pbVar20 = pbVar18;
  if (uVar27 < 0x41) {
    pbVar20 = local_48;
    if (local_c8 < puVar14) {
      if (local_c8 == param_1) goto LAB_00f2a793;
      uVar27 = (uint64_t)(uint)((int)local_c8 - iVar24);
      if (param_1 <= (uint64_t *)((int64_t)local_c8 - (uint64_t)(local_d0 >> 3))) {
        uVar27 = (uint64_t)(local_d0 >> 3);
      }
      local_d0 = local_d0 + (int)uVar27 * -8;
    }
    else {
      uVar27 = (uint64_t)(local_d0 >> 3);
      local_d0 = local_d0 & 7;
    }
    local_c8 = (uint64_t *)((int64_t)local_c8 - uVar27);
    uVar27 = (uint64_t)local_d0;
    local_d8 = *local_c8;
  }
LAB_00f2a793:
  if ((int)local_40 < 2) {
    return (byte *)0xffffffffffffffec;
  }
LAB_00f2a7e3:
  do {
    puVar28 = (void*)(uint64_t)*(uint *)(local_88 + 4 + local_90 * 8);
    uVar26 = *(uint *)(local_a8 + 4 + (int64_t)local_b0 * 8);
    pbVar18 = (byte *)(uint64_t)uVar26;
    local_40 = pbVar18;
    uVar8 = *(uint *)(local_98 + 4 + (int64_t)local_a0 * 8);
    bVar2 = *(byte *)(local_a8 + 2 + (int64_t)local_b0 * 8);
    bVar3 = *(byte *)(local_88 + 2 + local_90 * 8);
    bVar4 = *(byte *)(local_98 + 2 + (int64_t)local_a0 * 8);
    local_58 = (byte *)(uint64_t)*(ushort *)(local_a8 + (int64_t)local_b0 * 8);
    bVar5 = *(byte *)(local_a8 + 3 + (int64_t)local_b0 * 8);
    local_60 = (uint64_t)*(ushort *)(local_88 + local_90 * 8);
    bVar6 = *(byte *)(local_88 + 3 + local_90 * 8);
    bVar7 = *(byte *)(local_98 + 3 + (int64_t)local_a0 * 8);
    local_4c = iVar17;
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        uVar25 = (int)uVar27 + 1;
        lVar12 = (uint64_t)(uVar8 + (uVar26 == 0)) -
                 ((int64_t)(local_d8 << (uVar27 & 0x3f)) >> 0x3f);
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
      pbVar31 = (byte *)(((local_d8 << (uVar27 & 0x3f)) >> ((uint64_t)(byte)-bVar4 & 0x3f)) +
                        (uint64_t)uVar8);
      local_80[2] = local_80[1];
LAB_00f2a8a9:
      uVar27 = (uint64_t)uVar25;
      ppbVar15 = local_80;
    }
    local_80[1] = *ppbVar15;
    local_80[0] = pbVar31;
    if (bVar3 != 0) {
      uVar21 = uVar27 & 0x3f;
      uVar27 = (uint64_t)((int)uVar27 + (uint)bVar3);
      puVar28 = puVar28 + ((local_d8 << uVar21) >> ((uint64_t)(byte)-bVar3 & 0x3f));
    }
    if ((0x1e < (byte)(bVar3 + bVar2 + bVar4)) && (uVar26 = (uint)uVar27, uVar26 < 0x41)) {
      if (local_c8 < puVar14) {
        if (local_c8 == param_1) goto LAB_00f2a923;
        uVar21 = (uint64_t)(uint)((int)local_c8 - iVar24);
        if (param_1 <= (uint64_t *)((int64_t)local_c8 - (uVar27 >> 3))) {
          uVar21 = uVar27 >> 3;
        }
        uVar26 = uVar26 + (int)uVar21 * -8;
      }
      else {
        uVar21 = uVar27 >> 3;
        uVar26 = uVar26 & 7;
      }
      local_c8 = (uint64_t *)((int64_t)local_c8 - uVar21);
      uVar27 = (uint64_t)uVar26;
      local_d8 = *local_c8;
    }
LAB_00f2a923:
    iVar17 = (int)uVar27;
    if (bVar2 != 0) {
      iVar17 = iVar17 + (uint)bVar2;
      pbVar18 = pbVar18 + ((local_d8 << (uVar27 & 0x3f)) >> ((uint64_t)(byte)-bVar2 & 0x3f));
    }
    sVar10 = (bVar5 < 0x41) * ('@' - bVar5);
    local_b0 = local_58 +
               (((local_d8 >> ((uint64_t)(byte)-(char)(iVar17 + (uint)bVar5) & 0x3f)) << sVar10) >>
               sVar10);
    iVar17 = iVar17 + (uint)bVar5 + (uint)bVar6;
    sVar10 = (bVar6 < 0x41) * ('@' - bVar6);
    local_90 = (((local_d8 >> ((uint64_t)(byte)-(char)iVar17 & 0x3f)) << sVar10) >> sVar10) +
               local_60;
    local_d0 = iVar17 + (uint)bVar7;
    sVar10 = (bVar7 < 0x41) * ('@' - bVar7);
    local_a0 = (byte *)((((local_d8 >> ((uint64_t)(byte)-(char)local_d0 & 0x3f)) << sVar10) >>
                        sVar10) + (uint64_t)*(ushort *)(local_98 + (int64_t)local_a0 * 8));
    if ((local_e0 < local_80[3] + (int64_t)pbVar18) ||
       (pbVar30 = pbVar18 + (int64_t)puVar28,
       pbVar20 + 0xffffffffffffffe0 < pbVar29 + (int64_t)pbVar30)) {
      param_3 = pbVar22;
      pbVar30 = (byte *)FUN_00f2970d(local_e0,local_80 + 3,pbVar22,lVar13);
    }
    else {
      pbVar32 = pbVar29 + (int64_t)pbVar18;
      uVar11 = *(void*)(local_80[3] + 8);
      *(void*)pbVar29 = *(void*)local_80[3];
      *(void*)(pbVar29 + 8) = uVar11;
      if (&MACH_HEADER.ncmds < pbVar18) {
        uVar11 = *(void*)(local_80[3] + 0x18);
        *(void*)(pbVar29 + 0x10) = *(void*)(local_80[3] + 0x10);
        *(void*)(pbVar29 + 0x18) = uVar11;
        if (0x10 < (int64_t)(pbVar18 + -0x10)) {
          lVar12 = 0;
          do {
            uVar11 = *(void*)(local_80[3] + lVar12 + 0x20 + 8);
            pbVar16 = pbVar29 + lVar12 + 0x20;
            *(void*)pbVar16 = *(void*)(local_80[3] + lVar12 + 0x20);
            *(void*)(pbVar16 + 8) = uVar11;
            uVar11 = *(void*)(local_80[3] + lVar12 + 0x30 + 8);
            *(void*)(pbVar16 + 0x10) = *(void*)(local_80[3] + lVar12 + 0x30);
            *(void*)(pbVar16 + 0x18) = uVar11;
            lVar12 = lVar12 + 0x20;
          } while (pbVar16 + 0x20 < pbVar32);
        }
      }
      local_80[3] = local_80[3] + (int64_t)pbVar18;
      pbVar18 = pbVar32 + -(int64_t)pbVar31;
      param_3 = pbVar22;
      if (pbVar32 + -(int64_t)pbVar22 < pbVar31) {
        if (pbVar32 + -lVar13 < pbVar31) {
          return (byte *)0xffffffffffffffec;
        }
        lVar12 = (int64_t)(pbVar32 + -(int64_t)pbVar31) - (int64_t)pbVar22;
        if ((void *)((int64_t)((int64_t)pvVar9 + lVar12) + (int64_t)puVar28) <= pvVar9) {
          _memmove(pvVar9,puVar28,(size_t)pbVar22);
          goto LAB_00f2aad4;
        }
        _memmove(pvVar9,(void *)-lVar12,(size_t)pbVar22);
        pbVar32 = pbVar32 + -lVar12;
        puVar28 = puVar28 + lVar12;
        pbVar18 = pbVar22;
      }
      if ((byte *)((int64_t)&MACH_HEADER.filetype + 3) < pbVar31) {
        uVar11 = *(void*)(pbVar18 + 8);
        *(void*)pbVar32 = *(void*)pbVar18;
        *(void*)(pbVar32 + 8) = uVar11;
        if (0x10 < (int64_t)puVar28) {
          lVar12 = 0x10;
          do {
            uVar11 = *(void*)(pbVar18 + lVar12 + 8);
            pbVar31 = pbVar32 + lVar12;
            *(void*)pbVar31 = *(void*)(pbVar18 + lVar12);
            *(void*)(pbVar31 + 8) = uVar11;
            uVar11 = *(void*)(pbVar18 + lVar12 + 0x10 + 8);
            *(void*)(pbVar31 + 0x10) = *(void*)(pbVar18 + lVar12 + 0x10);
            *(void*)(pbVar31 + 0x18) = uVar11;
            lVar12 = lVar12 + 0x20;
          } while (pbVar31 + 0x20 < puVar28 + (int64_t)pbVar32);
        }
      }
      else {
        if ((byte *)((int64_t)&MACH_HEADER.cputype + 3) < pbVar31) {
          *(void*)pbVar32 = *(void*)pbVar18;
        }
        else {
          iVar17 = *(int *)(&g_023e4ca0 + (int64_t)pbVar31 * 4);
          *pbVar32 = *pbVar18;
          pbVar32[1] = pbVar18[1];
          pbVar32[2] = pbVar18[2];
          pbVar32[3] = pbVar18[3];
          pbVar16 = pbVar18 + *(uint *)(&g_023e4c80 + (int64_t)pbVar31 * 4);
          pbVar18 = pbVar18 + ((uint64_t)*(uint *)(&g_023e4c80 + (int64_t)pbVar31 * 4) -
                              (int64_t)iVar17);
          *(void*)(pbVar32 + 4) = *(void*)pbVar16;
        }
        if ((void*)((int64_t)&MACH_HEADER.cpusubtype + 1) <= puVar28) {
          pbVar31 = pbVar18 + 8;
          pbVar16 = pbVar32 + 8;
          if ((int64_t)pbVar16 - (int64_t)pbVar31 < 0x10) {
            do {
              *(void*)pbVar16 = *(void*)pbVar31;
              pbVar16 = pbVar16 + 8;
              pbVar31 = pbVar31 + 8;
            } while (pbVar16 < pbVar32 + (int64_t)puVar28);
          }
          else {
            uVar11 = *(void*)(pbVar18 + 0x10);
            *(void*)pbVar16 = *(void*)pbVar31;
            *(void*)(pbVar32 + 0x10) = uVar11;
            if (0x18 < (int64_t)puVar28) {
              lVar12 = 0;
              do {
                uVar11 = *(void*)(pbVar18 + lVar12 + 0x18 + 8);
                pbVar31 = pbVar32 + lVar12 + 0x18;
                *(void*)pbVar31 = *(void*)(pbVar18 + lVar12 + 0x18);
                *(void*)(pbVar31 + 8) = uVar11;
                uVar11 = *(void*)(pbVar18 + lVar12 + 0x28 + 8);
                *(void*)(pbVar31 + 0x10) = *(void*)(pbVar18 + lVar12 + 0x28);
                *(void*)(pbVar31 + 0x18) = uVar11;
                lVar12 = lVar12 + 0x20;
              } while (pbVar31 + 0x20 < pbVar32 + (int64_t)puVar28);
            }
          }
        }
      }
    }
LAB_00f2aad4:
    if ((byte *)0xffffffffffffff88 < pbVar30) {
      return pbVar30;
    }
    pbVar29 = pbVar29 + (int64_t)pbVar30;
    iVar17 = local_4c + -1;
    pbVar18 = local_48;
    if (iVar17 == 0) goto LAB_00f2adb7;
    uVar27 = (uint64_t)local_d0;
    if (uVar27 < 0x41) {
      if (local_c8 < puVar14) {
        if (local_c8 == param_1) goto LAB_00f2a7e3;
        uVar26 = (int)local_c8 - iVar24;
        if (param_1 <= (uint64_t *)((int64_t)local_c8 - (uint64_t)(local_d0 >> 3))) {
          uVar26 = local_d0 >> 3;
        }
        local_d0 = local_d0 + uVar26 * -8;
      }
      else {
        uVar26 = local_d0 >> 3;
        local_d0 = local_d0 & 7;
      }
      local_c8 = (uint64_t *)((int64_t)local_c8 - (uint64_t)uVar26);
      uVar27 = (uint64_t)local_d0;
      local_d8 = *local_c8;
    }
  } while( true );
}

