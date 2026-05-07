// Function: FUN_015235b0
// Address: 015235b0
// Size: 1483 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01523acb) */
/* WARNING: Removing unreachable block (ram,0x01523ad7) */
/* WARNING: Removing unreachable block (ram,0x01523911) */
/* WARNING: Removing unreachable block (ram,0x0152391d) */
/* WARNING: Removing unreachable block (ram,0x01523635) */
/* WARNING: Removing unreachable block (ram,0x0152363e) */
/* WARNING: Removing unreachable block (ram,0x01523857) */
/* WARNING: Removing unreachable block (ram,0x01523863) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_015235b0(void)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  int extraout_var;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  byte bVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double local_78;
  longlong local_68;
  char local_60;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(int *)(unaff_RSI + 0x18) < 3) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  plVar4 = *(longlong **)(*(longlong *)(unaff_RSI + 0x10) + 0x10);
  puVar5 = *(undefined8 **)(*plVar4 + 0x10);
  uVar14 = *(int *)(unaff_RSI + 0x18) - 1;
  lVar6 = *(longlong *)(plVar4[uVar14 >> 10] + 0x10);
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
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
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
              lVar13 = *(longlong *)(lVar9 + 0x10);
              uVar22 = *(undefined8 *)(lVar13 + -0x10 + lVar19);
              uVar2 = *(undefined8 *)(lVar13 + -8 + lVar19);
              dVar21 = *(double *)(lVar13 + lVar19);
              dVar23 = dVar21;
              if (dVar21 <= local_48) {
                dVar23 = local_48;
              }
              dVar25 = dVar21;
              if (dVar24 <= dVar21) {
                dVar25 = dVar24;
              }
              if (dVar23 < dVar25 * _DAT_0240e9b0) {
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
            lVar19 = *(longlong *)(lVar9 + 0x10);
            lVar13 = (longlong)iVar18 * 0x20;
            uVar22 = *(undefined8 *)(lVar19 + 8 + lVar13);
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
                uVar22 = *(undefined8 *)(*(longlong *)(lVar9 + 0x10) + lVar19);
                lVar19 = lVar19 + 0x20;
              } while (iVar18 < iVar15 * 2);
            }
            else {
              uVar2 = *(undefined8 *)(lVar19 + lVar13);
              dVar25 = *(double *)(lVar19 + 0x10 + lVar13);
              dVar21 = dVar25;
              if (dVar25 <= local_48) {
                dVar21 = local_48;
              }
              dVar24 = dVar25;
              if (local_78 <= dVar25) {
                dVar24 = local_78;
              }
              if (((dVar24 * _DAT_0240e9b0 <= dVar21) || (bVar7 = 1, (bool)bVar17)) ||
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
      lVar9 = (ulonglong)(uVar14 & 0x3ff) * 0x20;
      FUN_01908480(local_40,local_38,*(undefined8 *)(lVar6 + 8 + lVar9),
                   *(undefined8 *)(lVar6 + lVar9));
      *unaff_RDI = local_68;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    bVar20 = 0x3e < uVar1;
    FUN_00d50b20();
    goto LAB_0152393f;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  bVar20 = false;
LAB_0152393f:
  if ((!bVar20) && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


