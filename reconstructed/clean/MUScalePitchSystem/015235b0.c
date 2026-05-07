// Function: FUN_015235b0
// Address: 015235b0
// Size: 1483 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


int64_t * FUN_015235b0(void)

{
  uint uVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t *plVar4;
  void*puVar5;
  int64_t lVar6;
  byte bVar7;
  char cVar8;
  int64_t lVar9;
  int extraout_var;
  uint64_t uVar10;
  int iVar11;
  uint uVar12;
  int64_t lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int64_t arg1;
  int64_t *this_ptr;
  byte bVar17;
  int iVar18;
  int64_t lVar19;
  bool bVar20;
  double dVar21;
  uint64_t uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double local_78;
  int64_t local_68;
  char local_60;
  double local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  if (*(int *)(arg1 + 0x18) < 3) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  plVar4 = *(int64_t **)(*(int64_t *)(arg1 + 0x10) + 0x10);
  puVar5 = *(void**)(*plVar4 + 0x10);
  uVar14 = *(int *)(arg1 + 0x18) - 1;
  lVar6 = *(int64_t *)(plVar4[uVar14 >> 10] + 0x10);
  FUN_01908400();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  local_38 = *puVar5;
  local_40 = puVar5[1];
  local_48 = (double)puVar5[2];
  lVar9 = FUN_01907d40();
  FUN_00e7bcc0();
  FUN_00e7bdc0();
  FUN_01523ca0();
  if (local_60 == '\0') {
    if (lVar9 != 0) {
      FUN_00d50b00();
      goto LAB_015236d7;
    }
  }
  else if (lVar9 != 0) {
LAB_015236d7:
    uVar16 = *(uint *)(lVar9 + 0x18);
    uVar1 = uVar16 + 0x1f;
    if (uVar1 < 0x3f) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      uVar12 = uVar16;
      if ((int)uVar16 < 0) {
        uVar12 = uVar1;
      }
      if (0x1f < (int)uVar16) {
        iVar11 = (int)uVar12 >> 5;
        iVar15 = (int)lVar9;
        if (iVar15 == 1) {
          iVar15 = 0;
          lVar19 = 0x10;
          bVar17 = 0;
          bVar20 = false;
          dVar24 = local_48;
          do {
            dVar25 = dVar24;
            bVar7 = bVar17;
            if (iVar15 != 0) {
              lVar13 = *(int64_t *)(lVar9 + 0x10);
              uVar22 = *(void*)(lVar13 + -0x10 + lVar19);
              uVar2 = *(void*)(lVar13 + -8 + lVar19);
              dVar21 = *(double *)(lVar13 + lVar19);
              dVar23 = dVar21;
              if (dVar21 <= local_48) {
                dVar23 = local_48;
              }
              dVar25 = dVar21;
              if (dVar24 <= dVar21) {
                dVar25 = dVar24;
              }
              if (dVar23 < dVar25 * g_0240e9b0) {
                bVar17 = 1;
                if ((!bVar20) && (local_48 = dVar23, bVar7 = 1, iVar15 + 1 < iVar11))
                goto LAB_0152376f;
              }
              FUN_01908480(local_40,local_38,uVar2,uVar22);
              bVar20 = (bool)(~bVar17 & 1);
              uVar16 = *(uint *)(lVar9 + 0x18);
              local_40 = uVar2;
              local_38 = uVar22;
              dVar25 = dVar21;
              local_48 = dVar21;
              bVar7 = 0;
            }
LAB_0152376f:
            bVar17 = bVar7;
            iVar15 = iVar15 + 1;
            uVar12 = uVar16 + 0x1f;
            if (-1 < (int)uVar16) {
              uVar12 = uVar16;
            }
            iVar11 = (int)uVar12 >> 5;
            lVar19 = lVar19 + 0x20;
            dVar24 = dVar25;
          } while (iVar15 < iVar11);
        }
        else {
          iVar18 = 0;
          bVar7 = 0;
          bVar17 = false;
          local_78 = local_48;
          do {
            lVar19 = *(int64_t *)(lVar9 + 0x10);
            lVar13 = (int64_t)iVar18 * 0x20;
            uVar22 = *(void*)(lVar19 + 8 + lVar13);
            dVar24 = local_78;
            if (iVar18 == 0) {
              iVar18 = 0;
              lVar19 = 0x28;
              do {
                FUN_00e7cd00();
                uVar10 = FUN_00e7cd00(uVar22);
                if (((extraout_var != 0) && (uVar10 >> 0x20 != 0)) &&
                   (cVar8 = FUN_00e7c000(), cVar8 != '\0')) break;
                iVar18 = iVar18 + 1;
                uVar22 = *(void*)(*(int64_t *)(lVar9 + 0x10) + lVar19);
                lVar19 = lVar19 + 0x20;
              } while (iVar18 < iVar15 * 2);
            }
            else {
              uVar2 = *(void*)(lVar19 + lVar13);
              dVar25 = *(double *)(lVar19 + 0x10 + lVar13);
              dVar21 = dVar25;
              if (dVar25 <= local_48) {
                dVar21 = local_48;
              }
              dVar24 = dVar25;
              if (local_78 <= dVar25) {
                dVar24 = local_78;
              }
              if (((dVar24 * g_0240e9b0 <= dVar21) || (bVar7 = 1, (bool)bVar17)) ||
                 (local_48 = dVar21, iVar11 <= iVar15 + iVar18)) {
                FUN_01908480(local_40,local_38,uVar22,uVar2);
                bVar17 = ~bVar7;
                bVar7 = 0;
                local_40 = uVar22;
                local_38 = uVar2;
                dVar24 = dVar25;
                local_48 = dVar25;
              }
            }
            iVar18 = iVar18 + iVar15;
            iVar3 = *(int *)(lVar9 + 0x18);
            iVar11 = iVar3 + 0x1f;
            if (-1 < iVar3) {
              iVar11 = iVar3;
            }
            iVar11 = iVar11 >> 5;
            local_78 = dVar24;
          } while (iVar18 < iVar11);
        }
      }
      lVar9 = (uint64_t)(uVar14 & 0x3ff) * 0x20;
      FUN_01908480(local_40,local_38,*(void*)(lVar6 + 8 + lVar9),
                   *(void*)(lVar6 + lVar9));
      *this_ptr = local_68;
      *(void*)(this_ptr + 1) = 1;
    }
    bVar20 = 0x3e < uVar1;
    FUN_00d50b20();
    goto LAB_0152393f;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  bVar20 = false;
LAB_0152393f:
  if ((!bVar20) && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

