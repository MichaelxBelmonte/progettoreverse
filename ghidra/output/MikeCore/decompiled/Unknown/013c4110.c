// Function: FUN_013c4110
// Address: 013c4110
// Size: 2025 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x013c48f1) */
/* WARNING: Removing unreachable block (ram,0x013c48fb) */
/* WARNING: Removing unreachable block (ram,0x013c447f) */
/* WARNING: Removing unreachable block (ram,0x013c448f) */
/* WARNING: Removing unreachable block (ram,0x013c48d5) */
/* WARNING: Removing unreachable block (ram,0x013c48df) */
/* WARNING: Removing unreachable block (ram,0x013c490d) */
/* WARNING: Removing unreachable block (ram,0x013c4917) */
/* WARNING: Removing unreachable block (ram,0x013c4896) */
/* WARNING: Removing unreachable block (ram,0x013c489d) */
/* WARNING: Removing unreachable block (ram,0x013c462e) */
/* WARNING: Removing unreachable block (ram,0x013c4637) */
/* WARNING: Removing unreachable block (ram,0x013c46ec) */
/* WARNING: Removing unreachable block (ram,0x013c46f1) */
/* WARNING: Removing unreachable block (ram,0x013c4418) */
/* WARNING: Removing unreachable block (ram,0x013c4424) */
/* WARNING: Removing unreachable block (ram,0x013c45cf) */
/* WARNING: Removing unreachable block (ram,0x013c45d4) */
/* WARNING: Removing unreachable block (ram,0x013c43a5) */
/* WARNING: Removing unreachable block (ram,0x013c487a) */
/* WARNING: Removing unreachable block (ram,0x013c4884) */
/* WARNING: Removing unreachable block (ram,0x013c48c2) */
/* WARNING: Removing unreachable block (ram,0x013c48c7) */
/* WARNING: Removing unreachable block (ram,0x013c4361) */
/* WARNING: Removing unreachable block (ram,0x013c436a) */
/* WARNING: Removing unreachable block (ram,0x013c4723) */
/* WARNING: Removing unreachable block (ram,0x013c4728) */
/* WARNING: Removing unreachable block (ram,0x013c48ac) */
/* WARNING: Removing unreachable block (ram,0x013c48b3) */

void FUN_013c4110(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                 uint param_5,uint param_6)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  int unaff_ESI;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  longlong *local_res8;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  longlong local_c8;
  char local_c0;
  float local_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  
  lVar13 = (longlong)unaff_ESI;
  uVar2 = *(uint *)(*(longlong *)(*param_2 + 0x10) + lVar13 * 4);
  iVar3 = *(int *)(*(longlong *)(*param_1 + 0x10) + lVar13 * 4);
  uVar16 = iVar3 - uVar2;
  if ((1 < (int)uVar16) &&
     (uVar4 = *(uint *)(*(longlong *)(*param_3 + 0x10) + lVar13 * 4), 0 < (int)uVar4)) {
    uVar18 = uVar2 + 1;
    fVar26 = DAT_02390124 / (float)(int)uVar16;
    lVar5 = *(longlong *)(*(longlong *)(*param_4 + 0x10) + lVar13 * 8);
    lVar6 = *(longlong *)(*(longlong *)(*local_res8 + 0x10) + lVar13 * 8);
    lVar13 = *(longlong *)(*(longlong *)(*local_res10 + 0x10) + lVar13 * 8);
    uVar22 = 0;
    lVar23 = 0;
    local_88 = 0;
    local_80 = 0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar22 * 8);
      lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + uVar22 * 8);
      lVar9 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + uVar22 * 8);
      if (0 < (int)param_5) {
        uVar21 = 0;
        do {
          lVar10 = *(longlong *)(*(longlong *)(*local_res20 + 0x10) + uVar21 * 8);
          if (local_88 != lVar10) {
            local_88 = lVar10;
          }
          uVar20 = (longlong)(int)uVar18;
          if ((int)uVar18 < iVar3) {
            do {
              if (*(longlong *)(*(longlong *)(local_88 + 0x10) + uVar20 * 8) == 0) {
                FUN_00c8e690();
                if ((local_c0 == '\0') && (local_c8 != 0)) {
                  FUN_00d50b00();
                }
                FUN_00c92170();
                FUN_00c92160();
                uVar25 = ___bzero();
                local_c0 = '\0';
                FUN_00d233f0(uVar25,uVar20 & 0xffffffff);
                FUN_00d50b20();
              }
              uVar20 = uVar20 + 1;
            } while (iVar3 != (int)uVar20);
          }
          plVar14 = *(longlong **)(lVar9 + 0x10);
          lVar10 = plVar14[uVar16];
          if ((((lVar10 == 0) || ((longlong)*(int *)(lVar10 + 0xc) <= (longlong)uVar21)) ||
              (uVar17 = iVar3 - *(int *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)uVar16 * 4),
              (int)uVar17 < 0)) ||
             (lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + uVar21 * 8),
             *(int *)(lVar10 + 0xc) <= (int)uVar17)) {
            local_90 = 0;
          }
          else {
            local_90 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)uVar17 * 8);
          }
          if (1 < (int)param_6) {
            uVar20 = 1;
            do {
              if (local_90 == 0) {
                fVar27 = 0.0;
              }
              else {
                fVar27 = *(float *)(*(longlong *)(local_90 + 0x10) + uVar20 * 4);
              }
              local_94 = *(float *)(*(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)(*(longlong *)(*plVar14 + 0x10) + uVar21 * 8)
                                         + 0x10) +
                                       ((longlong)(int)uVar2 - (longlong)**(int **)(lVar8 + 0x10)) *
                                       8) + 0x10) + uVar20 * 4);
              lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + 8);
              if (lVar23 != lVar10) {
                lVar23 = lVar10;
              }
              iVar19 = *(int *)(*(longlong *)(lVar8 + 0x10) + 4);
              lVar10 = *(longlong *)
                        (*(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 8) + 0x10) +
                        uVar21 * 8);
              if (local_80 != lVar10) {
                local_80 = lVar10;
              }
              if ((int)uVar18 < iVar3) {
                bVar11 = local_94 < fVar27;
                fVar27 = fVar27 - local_94;
                uVar24 = 0;
                do {
                  lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + 8 + uVar24 * 8);
                  if (lVar23 != lVar10) {
                    if (lVar10 == 0) break;
                    lVar23 = *(longlong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 8 + uVar24 * 8) + 0x10)
                              + uVar21 * 8);
                    if (local_80 != lVar23) {
                      local_80 = lVar23;
                    }
                    iVar19 = *(int *)(*(longlong *)(lVar8 + 0x10) + 4 + uVar24 * 4);
                    lVar23 = lVar10;
                  }
                  local_94 = local_94 + (float)((uint)(fVar27 * fVar26) & -(uint)bVar11);
                  if (local_80 != 0) {
                    uVar15 = (ulonglong)(uint)-iVar19 + uVar18 + uVar24;
                    iVar12 = (int)uVar15;
                    if (((-1 < iVar12) && (iVar12 < *(int *)(local_80 + 0xc))) &&
                       (lVar10 = *(longlong *)
                                  (*(longlong *)(local_80 + 0x10) + (uVar15 & 0xffffffff) * 8),
                       lVar10 != 0)) {
                      lVar10 = *(longlong *)(lVar10 + 0x10);
                      fVar1 = *(float *)(lVar10 + uVar20 * 4);
                      if (local_94 < fVar1) {
                        fVar28 = (fVar1 - local_94) *
                                 *(float *)(*(longlong *)(*local_res18 + 0x10) + uVar24 * 4);
                        *(float *)(lVar10 + uVar20 * 4) = fVar1 - fVar28;
                        lVar10 = *(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)(local_88 + 0x10) + (longlong)(int)uVar18 * 8 +
                                    uVar24 * 8) + 0x10);
                        *(float *)(lVar10 + uVar20 * 4) = fVar28 + *(float *)(lVar10 + uVar20 * 4);
                      }
                    }
                  }
                  uVar24 = uVar24 + 1;
                } while (~uVar2 + iVar3 != uVar24);
              }
              uVar20 = uVar20 + 1;
              if (uVar20 == param_6) break;
              plVar14 = *(longlong **)(lVar9 + 0x10);
            } while( true );
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != param_5);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar4);
  }
  return;
}


