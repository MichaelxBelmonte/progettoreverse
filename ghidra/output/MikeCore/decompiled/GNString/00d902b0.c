// Function: FUN_00d902b0
// Address: 00d902b0
// Size: 658 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d902b0(undefined8 param_1,int param_2)

{
  ushort *puVar1;
  short sVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  ulonglong uVar10;
  longlong unaff_RDI;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int local_38;
  int local_34;
  
  local_38 = 0;
  local_34 = -1;
  if (*(int *)(*unaff_RSI + 0x18) == 0) goto LAB_00d904d1;
  cVar4 = FUN_00da48b0(&local_38,&local_34);
  auVar14 = _DAT_023de250;
  uVar13 = extraout_XMM0_Qa;
  if (cVar4 == '\0') {
    if (param_2 != 5) {
      iVar7 = *(int *)(*unaff_RSI + 0x18);
      iVar5 = param_2;
LAB_00d90481:
      local_34 = iVar5;
      FUN_00d8dd20(local_34,iVar7);
      iVar7 = *(int *)(*unaff_RSI + 0x18);
      if (iVar7 == 0) goto LAB_00d904d1;
      iVar5 = *(int *)(unaff_RDI + 0x20);
      if (iVar5 == -1) {
        if (*(longlong *)(unaff_RDI + 0x10) != 0) {
          iVar5 = FUN_00e7dde0();
          goto joined_r0x00d904bb;
        }
      }
      else {
joined_r0x00d904bb:
        if (iVar5 != 0) goto LAB_00d904d1;
        iVar7 = *(int *)(*unaff_RSI + 0x18);
      }
      FUN_00d8dd20(0,iVar7);
      goto LAB_00d904d1;
    }
LAB_00d903e6:
    local_38 = 0;
    local_34 = 5;
  }
  else {
    if ((local_34 == -1) && (param_2 == 5)) goto LAB_00d903e6;
    if (local_34 != 5) {
      iVar7 = *(int *)(*unaff_RSI + 0x18);
      iVar5 = param_2;
      if ((local_34 == 6) && (cVar4 = FUN_00da4890(), iVar5 = local_34, cVar4 != '\0')) {
        iVar7 = iVar7 + -3;
      }
      goto LAB_00d90481;
    }
    if (local_38 != 0) {
      iVar7 = *(int *)(*unaff_RSI + 0x18);
      if (2 < iVar7 + 1U) {
        lVar6 = *(longlong *)(*unaff_RSI + 0x10);
        iVar7 = iVar7 / 2;
        if (0xe < iVar7 - 1U) {
          uVar8 = (ulonglong)(iVar7 - 1U) + 1;
          uVar12 = uVar8 & 0xfffffffffffffff0;
          uVar10 = (uVar12 - 0x10 >> 4) + 1;
          if (uVar12 - 0x10 == 0) {
            lVar9 = 0;
          }
          else {
            lVar11 = -(uVar10 & 0xfffffffffffffffe);
            lVar9 = 0;
            uVar13 = (undefined8)DAT_023de250;
            do {
              auVar15 = pshufb(*(undefined1 (*) [16])(lVar6 + lVar9 * 2),auVar14);
              auVar16 = pshufb(*(undefined1 (*) [16])(lVar6 + 0x10 + lVar9 * 2),auVar14);
              *(undefined1 (*) [16])(lVar6 + lVar9 * 2) = auVar15;
              *(undefined1 (*) [16])(lVar6 + 0x10 + lVar9 * 2) = auVar16;
              auVar15 = pshufb(*(undefined1 (*) [16])(lVar6 + 0x20 + lVar9 * 2),auVar14);
              auVar16 = pshufb(*(undefined1 (*) [16])(lVar6 + 0x30 + lVar9 * 2),auVar14);
              *(undefined1 (*) [16])(lVar6 + 0x20 + lVar9 * 2) = auVar15;
              *(undefined1 (*) [16])(lVar6 + 0x30 + lVar9 * 2) = auVar16;
              lVar9 = lVar9 + 0x20;
              lVar11 = lVar11 + 2;
            } while (lVar11 != 0);
          }
          if ((uVar10 & 1) != 0) {
            auVar14 = pshufb(*(undefined1 (*) [16])(lVar6 + lVar9 * 2),_DAT_023de250);
            uVar13 = auVar14._0_8_;
            auVar15 = pshufb(*(undefined1 (*) [16])(lVar6 + 0x10 + lVar9 * 2),_DAT_023de250);
            *(undefined1 (*) [16])(lVar6 + lVar9 * 2) = auVar14;
            *(undefined1 (*) [16])(lVar6 + 0x10 + lVar9 * 2) = auVar15;
          }
          if (uVar8 == uVar12) goto LAB_00d903f4;
          lVar6 = lVar6 + uVar12 * 2;
          iVar7 = iVar7 - (int)uVar12;
        }
        lVar9 = 0;
        do {
          puVar1 = (ushort *)(lVar6 + lVar9 * 2);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          lVar9 = lVar9 + 1;
        } while (iVar7 != (int)lVar9);
      }
    }
  }
LAB_00d903f4:
  uVar3 = *(uint *)(*unaff_RSI + 0x18);
  if (((int)uVar3 < 2) ||
     ((sVar2 = **(short **)(*unaff_RSI + 0x10), sVar2 != -2 && (sVar2 != -0x101)))) {
    FUN_00d8ea20(uVar13,(int)uVar3 / 2);
  }
  else {
    FUN_00d8ea20(uVar13,(uVar3 >> 1) - 1);
  }
LAB_00d904d1:
  *(byte *)(unaff_RDI + 0x24) = *(byte *)(unaff_RDI + 0x24) & 0xfe;
  return;
}


