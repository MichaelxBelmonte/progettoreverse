// Function: FUN_00f36490
// Address: 00f36490
// Size: 715 bytes
// Class: Unknown


int FUN_00f36490(uint param_1,undefined8 param_2,int *param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *local_res8;
  int *local_res10;
  int local_34;
  
  iVar4 = FUN_00f425b0();
  FUN_00f42690();
  local_34 = 0;
  iVar5 = FUN_00f425c0();
  if (iVar5 == 0) {
    bVar3 = true;
    local_34 = 0;
    do {
      iVar5 = FUN_00f425b0();
      if (iVar5 <= iVar4) {
        iVar5 = 0;
        break;
      }
      iVar6 = FUN_00f42760();
      iVar10 = 0;
      iVar5 = iVar10;
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          local_res8 = (longlong *)FUN_00f42780();
        }
        goto LAB_00f36513;
      }
      puVar7 = (uint *)FUN_00f42780();
      uVar1 = *puVar7;
      if (3 < (ulonglong)uVar1) goto LAB_00f36513;
      switch(uVar1) {
      case 0:
        plVar2 = *(longlong **)(puVar7 + 2);
        iVar6 = (int)plVar2[2];
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        if ((lVar8 < 0) && (lVar8 != -4)) {
          if ((lVar8 == -3) && ((param_1 & 1) != 0)) {
            iVar6 = -1;
            lVar9 = 0xffffffff;
          }
          else if ((lVar8 == -3) && (((param_1 & 2) != 0 && (bVar3)))) {
            *(undefined4 *)(param_4 + (longlong)(int)lVar9 * 4) = 1;
            bVar3 = false;
          }
        }
        else {
          iVar6 = iVar6 + *param_3;
          local_34 = local_34 + 1;
        }
        lVar8 = FUN_00f33800(iVar6,lVar9);
        *local_res8 = lVar8;
        iVar5 = 0;
        if (lVar8 == 0) {
          iVar5 = 0xc;
        }
        if (*local_res10 < iVar6) {
          *local_res10 = iVar6;
        }
        break;
      case 1:
        lVar8 = FUN_00f339e0((longlong)&switchD_00f36571::switchdataD_00f36768 +
                             (longlong)(int)(&switchD_00f36571::switchdataD_00f36768)[uVar1],
                             *(undefined8 *)(*(longlong *)(puVar7 + 2) + 8));
        *local_res8 = lVar8;
        if (lVar8 != 0) {
          local_res8 = *(longlong **)(lVar8 + 8);
          *local_res8 = 0;
          local_res8[1] = 0;
          goto LAB_00f36668;
        }
LAB_00f36759:
        iVar5 = 0xc;
        goto LAB_00f364df;
      case 2:
        lVar8 = *(longlong *)(puVar7 + 2);
        iVar5 = FUN_00f42690();
        if ((iVar5 != 0) || (iVar5 = FUN_00f425c0(), iVar5 != 0)) goto LAB_00f364df;
        lVar8 = FUN_00f338a0(*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 8),
                             *(byte *)(lVar8 + 0x10) & 1);
        *local_res8 = lVar8;
        if (lVar8 == 0) goto LAB_00f36759;
        local_res8 = *(longlong **)(lVar8 + 8);
        iVar5 = iVar10;
        break;
      case 3:
        lVar8 = FUN_00f33950((longlong)&switchD_00f36571::switchdataD_00f36768 +
                             (longlong)(int)(&switchD_00f36571::switchdataD_00f36768)[uVar1],
                             *(undefined8 *)(*(longlong *)(puVar7 + 2) + 8));
        *local_res8 = lVar8;
        if (lVar8 == 0) goto LAB_00f36759;
        local_res8 = *(longlong **)(lVar8 + 8);
LAB_00f36668:
        iVar5 = FUN_00f42690();
        if ((((iVar5 != 0) || (iVar5 = FUN_00f425c0(), iVar5 != 0)) ||
            (iVar5 = FUN_00f42690(), iVar5 != 0)) ||
           ((iVar5 = FUN_00f425c0(), iVar5 != 0 || (iVar5 = FUN_00f42690(), iVar5 != 0))))
        goto LAB_00f364df;
        iVar5 = FUN_00f425c0();
      }
LAB_00f36513:
    } while (iVar5 == 0);
  }
LAB_00f364df:
  *param_3 = *param_3 + local_34;
  return iVar5;
}


