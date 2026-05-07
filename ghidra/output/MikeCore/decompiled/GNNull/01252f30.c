// Function: FUN_01252f30
// Address: 01252f30
// Size: 1595 bytes
// Class: GNNull


bool FUN_01252f30(longlong *param_1,double param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *in_RCX;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  longlong *in_RDX;
  int iVar13;
  uint uVar14;
  char unaff_SIL;
  longlong unaff_RDI;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  longlong *plVar18;
  bool bVar19;
  double dVar20;
  undefined8 local_a8;
  undefined8 *local_a0;
  double local_98;
  double local_90;
  longlong local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  undefined8 *local_58;
  int *local_50;
  longlong *local_48;
  char local_3c;
  
  local_48 = param_1;
  local_60 = param_1;
  local_90 = param_2;
  local_98 = param_2;
  local_50 = param_4;
  iVar1 = *param_4;
  if ((longlong)iVar1 == -2) goto LAB_012534d5;
  local_78 = '\0';
  local_80 = 0;
  plVar18 = &local_80;
  if (in_RDX != (longlong *)0x0) {
    plVar18 = in_RDX;
  }
  local_a0 = param_3;
  if (param_3 == (undefined8 *)0x0) {
    param_3 = &local_a8;
  }
  local_58 = param_3;
  local_3c = unaff_SIL;
  if (iVar1 == -1) {
    if (!NAN((double)param_1)) {
      local_70 = FUN_00e7bdb0();
      dVar20 = (double)FUN_00e7c860();
      if (dVar20 <= (double)local_48) {
        FUN_012523c0(local_60,local_3c,local_58,local_50);
        lVar3 = local_70;
        lVar6 = *plVar18;
        if (lVar6 == local_70) {
          if (((char)plVar18[1] == '\0') && (local_70 != 0)) {
            plVar2 = plVar18 + 1;
            if (local_68 == '\0') {
              FUN_00d50b00();
            }
            goto LAB_012534f4;
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_88 = lVar6;
          local_48 = plVar18 + 1;
          lVar4 = plVar18[1];
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
            *plVar18 = lVar3;
            plVar2 = local_48;
            if (((char)lVar4 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
              plVar2 = local_48;
            }
          }
          else {
            *plVar18 = local_70;
            plVar2 = local_48;
            if (((char)lVar4 != '\0') && (lVar6 != 0)) {
              FUN_00d50b20();
              plVar2 = local_48;
            }
          }
LAB_012534f4:
          local_48 = plVar2;
          *(undefined1 *)local_48 = 1;
        }
        if (((in_RCX != (undefined8 *)0x0) && (local_3c != '\0')) &&
           ((*(int *)((longlong)in_RCX + 4) == 0 ||
            ((!NAN((double)local_60) && (cVar5 = FUN_00e7c790(), cVar5 == '\0')))))) {
          local_48 = local_60;
          FUN_00e7bcc0();
          uVar7 = FUN_00e7cd00(local_48);
          *in_RCX = uVar7;
        }
        goto LAB_0125339f;
      }
    }
    *local_50 = 0;
    if (local_3c == '\0') {
      lVar6 = *(longlong *)(unaff_RDI + 0x48);
      uVar9 = *(uint *)(lVar6 + 0x18);
      uVar17 = 0;
      uVar14 = 0;
    }
    else {
      if (**(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10) == 0) {
        *local_50 = 1;
      }
      lVar6 = *(longlong *)(unaff_RDI + 0x48);
      uVar9 = *(uint *)(lVar6 + 0x18);
      uVar17 = 0;
      if ((int)uVar9 < 8) {
        uVar14 = 0;
      }
      else {
        plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
        lVar3 = *plVar2;
        bVar19 = lVar3 == 0;
        uVar17 = (ulonglong)bVar19;
        uVar14 = (uint)bVar19;
        if ((uVar14 < uVar9 >> 3) && (uVar14 = (lVar3 == 0) + 1, plVar2[uVar14] != 0)) {
          uVar14 = (uint)bVar19;
        }
      }
    }
    if (in_RCX != (undefined8 *)0x0) {
      uVar7 = FUN_00e7bdb0();
      *in_RCX = uVar7;
      lVar6 = *(longlong *)(unaff_RDI + 0x48);
      uVar9 = *(uint *)(lVar6 + 0x18);
    }
    uVar12 = uVar9 + 7;
    if (-1 < (int)uVar9) {
      uVar12 = uVar9;
    }
    if ((int)uVar14 < (int)uVar12 >> 3) {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)uVar14 * 8);
    }
    else {
      uVar7 = FUN_00e7bdb0();
    }
    *local_58 = uVar7;
    lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + uVar17 * 8);
    lVar3 = *plVar18;
    lVar4 = plVar18[1];
    if (lVar3 == lVar6) {
      if (((char)lVar4 != '\0') || (lVar6 == 0)) goto LAB_0125339f;
      FUN_00d50b00();
    }
    else {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *plVar18 = lVar6;
      if (((char)lVar4 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_0125339a:
    *(undefined1 *)(plVar18 + 1) = 1;
  }
  else {
    lVar6 = *(longlong *)(unaff_RDI + 0x48);
    iVar15 = *(int *)(lVar6 + 0x18);
    iVar8 = iVar15 + 7;
    if (-1 < iVar15) {
      iVar8 = iVar15;
    }
    iVar8 = iVar8 >> 3;
    iVar13 = iVar1;
    iVar16 = iVar1;
    iVar11 = iVar1;
    if ((unaff_SIL != '\0') && (7 < iVar15)) {
      plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
      if (plVar2[iVar1] == 0) {
        if (iVar1 != 0) {
          iVar13 = iVar1 + -1;
          goto LAB_01253009;
        }
        iVar16 = 1;
        iVar15 = 0;
LAB_0125328e:
        iVar11 = 0;
        if (*plVar2 != 0) {
          iVar11 = iVar15;
        }
        iVar13 = 1;
        if (iVar8 < 2) goto LAB_01253035;
      }
      else {
LAB_01253009:
        iVar15 = 1;
        if (iVar13 == 1) goto LAB_0125328e;
        iVar11 = iVar13;
        if (iVar8 <= iVar13) goto LAB_01253035;
      }
      if (plVar2[(longlong)iVar13 + 1] == 0) {
        iVar16 = iVar13 + 1;
      }
    }
LAB_01253035:
    if (in_RCX != (undefined8 *)0x0) {
      if (iVar11 < 1) {
        uVar7 = FUN_00e7bdb0();
      }
      else {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(iVar11 - 1) * 8);
      }
      *in_RCX = uVar7;
      lVar6 = *(longlong *)(unaff_RDI + 0x48);
      iVar15 = *(int *)(lVar6 + 0x18);
      iVar8 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar8 = iVar15;
      }
      iVar8 = iVar8 >> 3;
    }
    if (iVar16 < iVar8) {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar16 * 8);
    }
    else {
      uVar7 = FUN_00e7bdb0();
    }
    *local_58 = uVar7;
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)iVar13 * 8);
    lVar3 = *plVar18;
    lVar4 = plVar18[1];
    if (lVar3 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *plVar18 = lVar6;
      if (((char)lVar4 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0125339a;
    }
    if (((char)lVar4 == '\0') && (lVar6 != 0)) {
      FUN_00d50b00();
      goto LAB_0125339a;
    }
  }
LAB_0125339f:
  if (NAN(local_90)) {
LAB_012533d7:
    iVar15 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
    iVar8 = iVar15 + 7;
    if (-1 < iVar15) {
      iVar8 = iVar15;
    }
    iVar15 = *local_50;
    iVar13 = -2;
    if (iVar15 == iVar8 >> 3) goto LAB_012534bf;
    *local_50 = iVar15 + 1;
    if ((local_3c != '\0') &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + 8 + (longlong)iVar15 * 8) == 0)) {
      iVar13 = -2;
      if (iVar15 + 1 != iVar8 >> 3) {
        iVar13 = iVar15 + 2;
      }
      goto LAB_012534bf;
    }
  }
  else {
    local_70 = FUN_00e7bdb0();
    dVar20 = (double)FUN_00e7c860();
    if (dVar20 < local_90) goto LAB_012533d7;
    if (*(int *)((longlong)local_58 + 4) != 0) {
      puVar10 = &local_a8;
      if (local_a0 != (undefined8 *)0x0) {
        puVar10 = local_a0;
      }
      if ((*(int *)((longlong)puVar10 + 4) == 0) || (cVar5 = FUN_00e7c790(), cVar5 == '\0'))
      goto LAB_012533d7;
    }
    dVar20 = local_98;
    iVar13 = -2;
    if (local_3c != '\0') {
      FUN_00e7bcc0();
      uVar7 = FUN_00e7cd00(dVar20);
      *local_58 = uVar7;
    }
LAB_012534bf:
    *local_50 = iVar13;
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
LAB_012534d5:
  return iVar1 != -2;
}


