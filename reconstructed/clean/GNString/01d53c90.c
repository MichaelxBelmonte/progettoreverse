// Function: FUN_01d53c90
// Address: 01d53c90
// Size: 3177 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d53c90(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int64_t lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint64_t uVar10;
  int64_t lVar11;
  uint uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  ushort uVar15;
  ushort uVar16;
  uint uVar17;
  byte bVar18;
  int64_t this_ptr;
  int iVar19;
  uint uVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_64;
  uint local_5c;
  uint64_t local_58;
  float local_4c;
  uint local_48;
  uint local_44;
  float local_40;
  uint local_3c;
  ushort local_38;
  ushort local_36;
  ushort local_34;
  ushort local_32;
  uint uVar9;
  
  uVar14 = *(uint64_t *)(this_ptr + 0x30);
  local_5c = 0;
  uVar10 = 0;
  if (uVar14 != 0) {
    uVar10 = (uint64_t)*(uint *)(uVar14 + 0xc);
  }
  if (*(int64_t *)(this_ptr + 0x20) != 0) {
    local_5c = *(uint *)(*(int64_t *)(this_ptr + 0x20) + 0xc);
  }
  if (*(int64_t *)(this_ptr + 0x28) == 0) {
    local_3c = 0;
  }
  else {
    local_3c = *(uint *)(*(int64_t *)(this_ptr + 0x28) + 0xc);
  }
  lVar11 = *(int64_t *)(this_ptr + 0x10);
  fVar25 = *(float *)(lVar11 + 0x1c) * *(float *)(lVar11 + 0x48);
  fVar22 = *(float *)(lVar11 + 0x48) * *(float *)(lVar11 + 0x20);
  uVar15 = (ushort)uVar10;
  local_58 = uVar10;
  local_36 = uVar15;
  local_34 = uVar15;
  local_32 = uVar15;
  if ((uVar14 != 0) &&
     (local_36 = (ushort)uVar14, local_58 = uVar14, local_34 = local_36, local_32 = local_36,
     0.0 < fVar22)) {
    local_4c = 0.0;
    iVar19 = 0;
    local_58 = uVar10;
    local_36 = uVar15;
    local_34 = uVar15;
    local_32 = uVar15;
    do {
      if (g_0239424c < fVar25) {
        iVar21 = 0;
        fVar26 = 0.0;
        do {
          lVar11 = *(int64_t *)(this_ptr + 0x10);
          fVar23 = *(float *)(lVar11 + 0x1c) * *(float *)(lVar11 + 0x48);
          if ((fVar26 < fVar23) &&
             (local_4c < *(float *)(lVar11 + 0x48) * *(float *)(lVar11 + 0x20))) {
            lVar4 = *(int64_t *)(*(int64_t *)(lVar11 + 0x50) + 8);
            lVar13 = (int64_t)((int)fVar23 * iVar19 + iVar21);
            bVar1 = *(byte *)(lVar4 + lVar13 * 4);
            local_36 = (ushort)bVar1;
            bVar18 = *(byte *)(lVar4 + 1 + lVar13 * 4);
            local_32 = (ushort)bVar18;
            bVar2 = *(byte *)(lVar4 + 2 + lVar13 * 4);
            local_34 = (ushort)bVar2;
            bVar3 = *(byte *)(lVar4 + 3 + lVar13 * 4);
            local_58 = (uint64_t)bVar3;
            if ((byte)(bVar3 + 1) < 2) {
              lVar11 = *(int64_t *)(lVar11 + 0x28);
            }
            else {
              local_34 = (ushort)(((uint)(ushort)bVar2 * 0x100 - (uint)(ushort)bVar2 & 0xffff) /
                                 (uint)(ushort)bVar3);
              local_32 = (ushort)(((uint)(ushort)bVar18 * 0x100 - (uint)(ushort)bVar18 & 0xffff) /
                                 (uint)(ushort)bVar3);
              local_36 = (ushort)(((uint)bVar1 * 0xff) / (uint)bVar3);
              lVar11 = *(int64_t *)(lVar11 + 0x28);
            }
            if (((lVar11 != 0) &&
                ((byte)local_34 ==
                 (char)(int)((double)(*(float *)(lVar11 + 0x18) * g_02394220) + g_023942d0))) &&
               ((byte)local_32 ==
                (char)(int)((double)(*(float *)(lVar11 + 0x14) * g_02394220) + g_023942d0))) {
              local_58 = 0;
              if ((byte)local_36 !=
                  (char)(int)((double)(*(float *)(lVar11 + 0x10) * g_02394220) + g_023942d0)) {
                local_58 = (uint64_t)bVar3;
              }
            }
          }
          lVar11 = *(int64_t *)(this_ptr + 0x18);
          iVar5 = FUN_00e7d780(*(float *)(lVar11 + 0x48) + *(float *)(lVar11 + 0x48));
          iVar5 = iVar5 + iVar19;
          if (-1 < iVar5) {
            fVar23 = *(float *)(lVar11 + 0x1c) * *(float *)(lVar11 + 0x48);
            if ((fVar26 < fVar23) &&
               ((float)iVar5 < *(float *)(lVar11 + 0x48) * *(float *)(lVar11 + 0x20))) {
              lVar4 = *(int64_t *)(*(int64_t *)(lVar11 + 0x50) + 8);
              lVar13 = (int64_t)((int)fVar23 * iVar5 + iVar21);
              *(char *)(lVar4 + lVar13 * 4) =
                   (char)((((uint)(uVar10 >> 0x10) & 0xff) * (uint)(byte)local_58) / 0xff);
              *(char *)(lVar4 + 1 + lVar13 * 4) =
                   (char)((((uint)(uVar10 >> 8) & 0xff) * (uint)(byte)local_58) / 0xff);
              *(char *)(lVar4 + 2 + lVar13 * 4) =
                   (char)((((uint)uVar10 & 0xff) * (uint)(byte)local_58) / 0xff);
              *(byte *)(lVar4 + 3 + lVar13 * 4) = (byte)local_58;
              if (**(int64_t **)(lVar11 + 0x50) != 0) {
                _CGImageRelease();
                **(void**)(lVar11 + 0x50) = 0;
              }
            }
          }
          iVar21 = iVar21 + 1;
          fVar26 = (float)iVar21;
        } while (fVar26 < fVar25);
      }
      iVar19 = iVar19 + 1;
      local_4c = (float)iVar19;
    } while (local_4c < fVar22);
  }
  if (0.0 < fVar22) {
    uVar6 = local_5c >> 0x10;
    uVar12 = local_5c >> 8;
    fVar23 = (float)(local_3c >> 0x10 & 0xff) / g_02394220;
    fVar27 = (float)(local_3c >> 8 & 0xff) / g_02394220;
    fVar30 = (float)(local_3c & 0xff) / g_02394220;
    uVar7 = local_5c & 0xff;
    local_64 = 0.0;
    iVar19 = 0;
    local_38 = (ushort)uVar7;
    local_48 = uVar7;
    local_44 = uVar7;
    local_3c = uVar7;
    fVar26 = g_02394220;
    do {
      if (g_0239424c < fVar25) {
        local_40 = 0.0;
        iVar21 = 0;
        uVar20 = 0;
        do {
          lVar11 = *(int64_t *)(this_ptr + 0x10);
          if (iVar19 == 0) {
            local_3c = 0;
            if ((local_40 < *(float *)(lVar11 + 0x1c) * *(float *)(lVar11 + 0x48)) &&
               (0.0 < *(float *)(lVar11 + 0x48) * *(float *)(lVar11 + 0x20))) {
              lVar4 = *(int64_t *)(*(int64_t *)(lVar11 + 0x50) + 8);
              uVar14 = (uint64_t)uVar20;
              local_36 = (ushort)*(byte *)(lVar4 + uVar14);
              bVar1 = *(byte *)(lVar4 + 1 + uVar14);
              local_32 = (ushort)bVar1;
              bVar18 = *(byte *)(lVar4 + 2 + uVar14);
              local_34 = (ushort)bVar18;
              bVar2 = *(byte *)(lVar4 + 3 + uVar14);
              local_58 = (uint64_t)bVar2;
              if ((byte)(bVar2 + 1) < 2) {
                lVar11 = *(int64_t *)(lVar11 + 0x28);
              }
              else {
                local_34 = (ushort)(((uint)(ushort)bVar18 * 0x100 - (uint)(ushort)bVar18 & 0xffff) /
                                   (uint)(ushort)bVar2);
                local_32 = (ushort)(((uint)(ushort)bVar1 * 0x100 - (uint)(ushort)bVar1 & 0xffff) /
                                   (uint)(ushort)bVar2);
                local_36 = (ushort)(((uint)*(byte *)(lVar4 + uVar14) * 0xff) / (uint)bVar2);
                lVar11 = *(int64_t *)(lVar11 + 0x28);
              }
              if ((lVar11 == 0) ||
                 ((byte)local_34 !=
                  (char)(int)((double)(*(float *)(lVar11 + 0x18) * fVar26) + g_023942d0))) {
                local_3c = 0;
              }
              else {
                local_3c = 0;
                if ((byte)local_32 ==
                    (char)(int)((double)(*(float *)(lVar11 + 0x14) * fVar26) + g_023942d0))
                goto LAB_01d544cd;
              }
            }
          }
          else {
            iVar5 = FUN_00e7d780(*(void*)(*(int64_t *)(this_ptr + 0x18) + 0x48));
            iVar5 = iVar19 - iVar5;
            if (-1 < iVar5) {
              fVar26 = *(float *)(lVar11 + 0x1c) * *(float *)(lVar11 + 0x48);
              if ((local_40 < fVar26) &&
                 ((float)iVar5 < *(float *)(lVar11 + 0x48) * *(float *)(lVar11 + 0x20))) {
                lVar4 = *(int64_t *)(*(int64_t *)(lVar11 + 0x50) + 8);
                lVar13 = (int64_t)(int)(uVar20 + (int)fVar26 * iVar5 * 4);
                local_36 = (ushort)*(byte *)(lVar4 + lVar13);
                bVar1 = *(byte *)(lVar4 + 1 + lVar13);
                local_32 = (ushort)bVar1;
                bVar18 = *(byte *)(lVar4 + 2 + lVar13);
                local_34 = (ushort)bVar18;
                bVar2 = *(byte *)(lVar4 + 3 + lVar13);
                local_3c = (uint)bVar2;
                if ((byte)(bVar2 + 1) < 2) {
                  lVar11 = *(int64_t *)(lVar11 + 0x28);
                }
                else {
                  local_34 = (ushort)(((uint)(ushort)bVar18 * 0x100 - (uint)(ushort)bVar18 & 0xffff)
                                     / (uint)(ushort)bVar2);
                  local_32 = (ushort)(((uint)(ushort)bVar1 * 0x100 - (uint)(ushort)bVar1 & 0xffff) /
                                     (uint)(ushort)bVar2);
                  local_36 = (ushort)(((uint)*(byte *)(lVar4 + lVar13) * 0xff) / (uint)bVar2);
                  lVar11 = *(int64_t *)(lVar11 + 0x28);
                }
                if ((((lVar11 != 0) &&
                     ((byte)local_34 ==
                      (char)(int)((double)(*(float *)(lVar11 + 0x18) * g_02394220) + g_023942d0)
                     )) && ((byte)local_32 ==
                            (char)(int)((double)(*(float *)(lVar11 + 0x14) * g_02394220) +
                                       g_023942d0))) &&
                   (local_3c = (uint)bVar2,
                   (byte)local_36 ==
                   (char)(int)((double)(*(float *)(lVar11 + 0x10) * g_02394220) + g_023942d0)))
                {
                  local_3c = 0;
                }
              }
            }
            lVar11 = *(int64_t *)(this_ptr + 0x10);
            fVar26 = *(float *)(lVar11 + 0x1c) * *(float *)(lVar11 + 0x48);
            if ((local_40 < fVar26) &&
               (local_64 < *(float *)(lVar11 + 0x48) * *(float *)(lVar11 + 0x20))) {
              lVar4 = *(int64_t *)(*(int64_t *)(lVar11 + 0x50) + 8);
              lVar13 = (int64_t)((int)fVar26 * iVar19 + iVar21);
              bVar1 = *(byte *)(lVar4 + lVar13 * 4);
              local_36 = (ushort)bVar1;
              bVar18 = *(byte *)(lVar4 + 1 + lVar13 * 4);
              local_32 = (ushort)bVar18;
              bVar2 = *(byte *)(lVar4 + 2 + lVar13 * 4);
              local_34 = (ushort)bVar2;
              bVar3 = *(byte *)(lVar4 + 3 + lVar13 * 4);
              local_58 = (uint64_t)bVar3;
              if ((byte)(bVar3 + 1) < 2) {
                lVar11 = *(int64_t *)(lVar11 + 0x28);
              }
              else {
                local_34 = (ushort)(((uint)(ushort)bVar2 * 0x100 - (uint)(ushort)bVar2 & 0xffff) /
                                   (uint)(ushort)bVar3);
                local_32 = (ushort)(((uint)(ushort)bVar18 * 0x100 - (uint)(ushort)bVar18 & 0xffff) /
                                   (uint)(ushort)bVar3);
                local_36 = (ushort)(((uint)bVar1 * 0xff) / (uint)bVar3);
                lVar11 = *(int64_t *)(lVar11 + 0x28);
              }
              if (((lVar11 != 0) &&
                  ((byte)local_34 ==
                   (char)(int)((double)(*(float *)(lVar11 + 0x18) * g_02394220) + g_023942d0)))
                 && (fVar26 = g_02394220,
                    (byte)local_32 ==
                    (char)(int)((double)(*(float *)(lVar11 + 0x14) * g_02394220) + g_023942d0)))
              {
LAB_01d544cd:
                if ((byte)local_36 ==
                    (char)(int)((double)(*(float *)(lVar11 + 0x10) * fVar26) + g_023942d0)) {
                  local_58 = 0;
                }
              }
            }
          }
          lVar11 = *(int64_t *)(this_ptr + 0x18);
          iVar5 = FUN_00e7d780(*(void*)(lVar11 + 0x48));
          iVar5 = iVar5 + iVar19;
          if (-1 < iVar5) {
            fVar26 = *(float *)(lVar11 + 0x1c) * *(float *)(lVar11 + 0x48);
            if ((local_40 < fVar26) &&
               ((float)iVar5 < *(float *)(lVar11 + 0x48) * *(float *)(lVar11 + 0x20))) {
              lVar4 = *(int64_t *)(*(int64_t *)(lVar11 + 0x50) + 8);
              lVar13 = (int64_t)((int)fVar26 * iVar5 + iVar21);
              bVar1 = *(byte *)(lVar4 + lVar13 * 4);
              local_38 = (ushort)bVar1;
              uVar15 = (ushort)*(byte *)(lVar4 + 1 + lVar13 * 4);
              local_44 = (uint)uVar15;
              uVar16 = (ushort)*(byte *)(lVar4 + 2 + lVar13 * 4);
              local_48 = (uint)uVar16;
              bVar18 = *(byte *)(lVar4 + 3 + lVar13 * 4);
              local_5c = (uint)bVar18;
              if ((byte)(bVar18 + 1) < 2) {
                lVar11 = *(int64_t *)(lVar11 + 0x28);
              }
              else {
                local_48 = ((uint)uVar16 * 0x100 - (uint)uVar16 & 0xffff) / (uint)(ushort)bVar18;
                local_44 = ((uint)uVar15 * 0x100 - (uint)uVar15 & 0xffff) / (uint)(ushort)bVar18;
                local_38 = (ushort)(((uint)bVar1 * 0xff) / (uint)bVar18);
                lVar11 = *(int64_t *)(lVar11 + 0x28);
              }
              if (((lVar11 != 0) &&
                  ((char)local_48 ==
                   (char)(int)((double)(*(float *)(lVar11 + 0x18) * g_02394220) + g_023942d0)))
                 && ((char)local_44 ==
                     (char)(int)((double)(*(float *)(lVar11 + 0x14) * g_02394220) + g_023942d0))
                 ) {
                if ((byte)local_38 ==
                    (char)(int)((double)(*(float *)(lVar11 + 0x10) * g_02394220) + g_023942d0))
                {
                  bVar18 = 0;
                }
                local_5c = (uint)bVar18;
              }
            }
          }
          fVar32 = (float)(byte)local_58 / g_02394220;
          fVar26 = g_02390124;
          if (*(int64_t *)(this_ptr + 0x28) != 0) {
            fVar26 = (float)local_3c / g_02394220;
          }
          fVar33 = (g_02390124 - fVar32) * ((float)(local_5c & 0xff) / g_02394220);
          fVar28 = fVar32 + fVar33;
          fVar24 = 0.0;
          fVar31 = 0.0;
          if ((fVar28 != 0.0) || (fVar29 = g_02390124, NAN(fVar28))) {
            fVar29 = g_02390124 - fVar26;
            uVar17 = uVar12 & 0xff;
            uVar8 = uVar7;
            uVar9 = uVar6 & 0xff;
            if (*(int64_t *)(this_ptr + 0x20) == 0) {
              uVar17 = (uint)(byte)local_32;
              uVar8 = (uint)(byte)local_34;
              uVar9 = (uint)(byte)local_36;
            }
            fVar24 = (((float)(byte)local_38 / g_02394220) * fVar33 +
                     (fVar29 * fVar23 + ((float)uVar9 / g_02394220) * fVar26) * fVar32) / fVar28;
            fVar31 = (((float)(local_44 & 0xff) / g_02394220) * fVar33 +
                     (fVar27 * fVar29 + ((float)uVar17 / g_02394220) * fVar26) * fVar32) / fVar28;
            fVar29 = (((float)(local_48 & 0xff) / g_02394220) * fVar33 +
                     (fVar30 * fVar29 + ((float)uVar8 / g_02394220) * fVar26) * fVar32) / fVar28;
          }
          fVar28 = fVar28 * g_02394220;
          lVar11 = *(int64_t *)(this_ptr + 0x18);
          iVar5 = FUN_00e7d780(*(void*)(lVar11 + 0x48));
          fVar26 = g_02394220;
          iVar5 = iVar5 + iVar19;
          if (-1 < iVar5) {
            fVar32 = *(float *)(lVar11 + 0x1c) * *(float *)(lVar11 + 0x48);
            if ((local_40 < fVar32) &&
               ((float)iVar5 < *(float *)(lVar11 + 0x48) * *(float *)(lVar11 + 0x20))) {
              fVar29 = fVar29 * g_02394220;
              fVar31 = fVar31 * g_02394220;
              lVar4 = *(int64_t *)(*(int64_t *)(lVar11 + 0x50) + 8);
              lVar13 = (int64_t)((int)fVar32 * iVar5 + iVar21);
              uVar17 = (int)fVar28 & 0xff;
              *(char *)(lVar4 + lVar13 * 4) =
                   (char)((((int)(fVar24 * g_02394220) & 0xffU) * uVar17) / 0xff);
              *(char *)(lVar4 + 1 + lVar13 * 4) = (char)((((int)fVar31 & 0xffU) * uVar17) / 0xff);
              *(char *)(lVar4 + 2 + lVar13 * 4) = (char)((((int)fVar29 & 0xffU) * uVar17) / 0xff);
              *(char *)(lVar4 + 3 + lVar13 * 4) = (char)(int)fVar28;
              if (**(int64_t **)(lVar11 + 0x50) != 0) {
                _CGImageRelease();
                fVar26 = g_02394220;
                **(void**)(lVar11 + 0x50) = 0;
              }
            }
          }
          iVar21 = iVar21 + 1;
          local_40 = (float)iVar21;
          uVar20 = uVar20 + 4;
        } while (local_40 < fVar25);
      }
      iVar19 = iVar19 + 1;
      local_64 = (float)iVar19;
    } while (local_64 < fVar22);
  }
  return;
}

