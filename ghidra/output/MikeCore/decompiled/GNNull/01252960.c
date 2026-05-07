// Function: FUN_01252960
// Address: 01252960
// Size: 1389 bytes
// Class: GNNull


bool FUN_01252960(ulonglong param_1,ulonglong param_2,longlong *param_3,ulonglong *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  char unaff_SIL;
  longlong unaff_RDI;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  bool bVar19;
  ulonglong *local_res8;
  int *local_res10;
  ulonglong local_98;
  longlong local_90;
  char local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  char local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong *local_48;
  
  local_58 = param_2;
  local_80 = param_1;
  local_78 = param_1;
  iVar1 = *local_res10;
  if ((longlong)iVar1 == -2) goto LAB_01252e63;
  local_60 = '\0';
  local_68 = 0;
  plVar17 = &local_68;
  if (param_3 != (longlong *)0x0) {
    plVar17 = param_3;
  }
  local_48 = local_res8;
  if (local_res8 == (ulonglong *)0x0) {
    local_48 = &local_98;
  }
  if (iVar1 == -1) {
    if (param_2 >> 0x20 == 0) {
      *local_res10 = 0;
      if (unaff_SIL == '\0') {
        lVar6 = *(longlong *)(unaff_RDI + 0x48);
        uVar10 = *(uint *)(lVar6 + 0x18);
        uVar7 = 0;
        uVar15 = 0;
      }
      else {
        if (**(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10) == 0) {
          *local_res10 = 1;
        }
        lVar6 = *(longlong *)(unaff_RDI + 0x48);
        uVar10 = *(uint *)(lVar6 + 0x18);
        uVar7 = 0;
        if ((int)uVar10 < 8) {
          uVar15 = 0;
        }
        else {
          plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
          lVar3 = *plVar2;
          bVar19 = lVar3 == 0;
          uVar7 = (ulonglong)bVar19;
          uVar15 = (uint)bVar19;
          if ((uVar15 < uVar10 >> 3) && (uVar15 = (lVar3 == 0) + 1, plVar2[uVar15] != 0)) {
            uVar15 = (uint)bVar19;
          }
        }
      }
      if (param_4 != (ulonglong *)0x0) {
        uVar8 = FUN_00e7bdb0();
        *param_4 = uVar8;
        lVar6 = *(longlong *)(unaff_RDI + 0x48);
        uVar10 = *(uint *)(lVar6 + 0x18);
      }
      uVar13 = uVar10 + 7;
      if (-1 < (int)uVar10) {
        uVar13 = uVar10;
      }
      if ((int)uVar15 < (int)uVar13 >> 3) {
        uVar8 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)uVar15 * 8);
      }
      else {
        uVar8 = FUN_00e7bdb0();
      }
      *local_48 = uVar8;
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + uVar7 * 8);
      lVar3 = *plVar17;
      lVar4 = plVar17[1];
      if (lVar3 == lVar6) {
        if (((char)lVar4 != '\0') || (lVar6 == 0)) goto LAB_01252da5;
        FUN_00d50b00();
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        *plVar17 = lVar6;
        if (((char)lVar4 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_01252da0;
    }
    FUN_012521f0(param_2,unaff_SIL,param_4,local_48);
    lVar6 = *plVar17;
    if (lVar6 == local_90) {
      if (((char)plVar17[1] == '\0') && (local_90 != 0)) {
        if (local_88 == '\0') {
          FUN_00d50b00();
          local_50 = plVar17 + 1;
        }
        else {
          local_50 = plVar17 + 1;
        }
        goto LAB_01252e82;
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = lVar6;
      local_50 = plVar17 + 1;
      lVar3 = plVar17[1];
      if (local_88 == '\0') {
        if (local_90 != 0) {
          FUN_00d50b00();
        }
        *plVar17 = local_90;
        if (((char)lVar3 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *plVar17 = local_90;
        if (((char)lVar3 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_01252e82:
      *(undefined1 *)local_50 = 1;
    }
    if (((param_4 != (ulonglong *)0x0) && (unaff_SIL != '\0')) &&
       ((*(int *)((longlong)param_4 + 4) == 0 ||
        ((local_58._4_4_ != 0 && (cVar5 = FUN_00e7c020(), cVar5 != '\0')))))) {
      *param_4 = local_58;
    }
  }
  else {
    lVar6 = *(longlong *)(unaff_RDI + 0x48);
    iVar16 = *(int *)(lVar6 + 0x18);
    iVar9 = iVar16 + 7;
    if (-1 < iVar16) {
      iVar9 = iVar16;
    }
    iVar9 = iVar9 >> 3;
    iVar14 = iVar1;
    iVar18 = iVar1;
    iVar12 = iVar1;
    if ((unaff_SIL != '\0') && (7 < iVar16)) {
      plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
      if (plVar2[iVar1] == 0) {
        if (iVar1 != 0) {
          iVar14 = iVar1 + -1;
          goto LAB_01252a26;
        }
        iVar18 = 1;
        iVar16 = 0;
LAB_01252c91:
        iVar12 = 0;
        if (*plVar2 != 0) {
          iVar12 = iVar16;
        }
        iVar14 = 1;
        if (iVar9 < 2) goto LAB_01252a52;
      }
      else {
LAB_01252a26:
        iVar16 = 1;
        if (iVar14 == 1) goto LAB_01252c91;
        iVar12 = iVar14;
        if (iVar9 <= iVar14) goto LAB_01252a52;
      }
      if (plVar2[(longlong)iVar14 + 1] == 0) {
        iVar18 = iVar14 + 1;
      }
    }
LAB_01252a52:
    if (param_4 != (ulonglong *)0x0) {
      if (iVar12 < 1) {
        uVar7 = FUN_00e7bdb0();
      }
      else {
        uVar7 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(iVar12 - 1) * 8);
      }
      *param_4 = uVar7;
      lVar6 = *(longlong *)(unaff_RDI + 0x48);
      iVar16 = *(int *)(lVar6 + 0x18);
      iVar9 = iVar16 + 7;
      if (-1 < iVar16) {
        iVar9 = iVar16;
      }
      iVar9 = iVar9 >> 3;
    }
    if (iVar18 < iVar9) {
      uVar7 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar18 * 8);
    }
    else {
      uVar7 = FUN_00e7bdb0();
    }
    *local_48 = uVar7;
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)iVar14 * 8);
    lVar3 = *plVar17;
    lVar4 = plVar17[1];
    if (lVar3 == lVar6) {
      if (((char)lVar4 != '\0') || (lVar6 == 0)) goto LAB_01252da5;
      FUN_00d50b00();
    }
    else {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *plVar17 = lVar6;
      if (((char)lVar4 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_01252da0:
    *(undefined1 *)(plVar17 + 1) = 1;
  }
LAB_01252da5:
  local_80 = local_80 >> 0x20;
  if (local_80 == 0) {
LAB_01252ddf:
    iVar16 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
    iVar9 = iVar16 + 7;
    if (-1 < iVar16) {
      iVar9 = iVar16;
    }
    iVar16 = *local_res10;
    iVar14 = -2;
    if (iVar16 == iVar9 >> 3) goto LAB_01252e4d;
    *local_res10 = iVar16 + 1;
    if ((unaff_SIL != '\0') &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + 8 + (longlong)iVar16 * 8) == 0)) {
      iVar14 = -2;
      if (iVar16 + 1 != iVar9 >> 3) {
        iVar14 = iVar16 + 2;
      }
      goto LAB_01252e4d;
    }
  }
  else {
    if (*(int *)((longlong)local_48 + 4) != 0) {
      puVar11 = &local_98;
      if (local_res8 != (ulonglong *)0x0) {
        puVar11 = local_res8;
      }
      if ((*(int *)((longlong)puVar11 + 4) == 0) || (cVar5 = FUN_00e7c020(), cVar5 != '\0'))
      goto LAB_01252ddf;
    }
    iVar14 = -2;
    if (unaff_SIL != '\0') {
      *local_48 = local_78;
    }
LAB_01252e4d:
    *local_res10 = iVar14;
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
LAB_01252e63:
  return iVar1 != -2;
}


