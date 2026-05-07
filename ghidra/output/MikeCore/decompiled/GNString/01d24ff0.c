// Function: FUN_01d24ff0
// Address: 01d24ff0
// Size: 1502 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01d255ad) */
/* WARNING: Removing unreachable block (ram,0x01d255b6) */

ulonglong FUN_01d24ff0(undefined8 param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  FUN_01cae990();
  plVar3 = local_40;
  lVar2 = DAT_027ef970;
  if (DAT_027ef970 != 0) {
    FUN_00d50b00();
  }
  uVar6 = (**(code **)(*plVar3 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar6 == '\0') {
    FUN_01cae990();
    plVar3 = local_40;
    lVar2 = DAT_027ef978;
    if (DAT_027ef978 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar3 + 0x50))();
    uVar9 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    if (cVar5 == '\0') {
      FUN_01cae990();
      lVar4 = DAT_02725a10;
      plVar3 = (longlong *)CONCAT71(uStack_4f,local_50);
      if (DAT_02725a10 != 0) {
        FUN_00d50b00();
      }
      uVar7 = (**(code **)(*plVar3 + 0x50))();
      uVar9 = (ulonglong)uVar7;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar9 == '\0') {
      FUN_01cae990();
      plVar3 = local_40;
      lVar2 = DAT_027ef980;
      if (DAT_027ef980 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*plVar3 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        FUN_01cae990();
        plVar3 = local_40;
        lVar2 = DAT_027ef988;
        if (DAT_027ef988 != 0) {
          FUN_00d50b00();
        }
        cVar5 = (**(code **)(*plVar3 + 0x50))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar5 == '\0') {
          uVar7 = FUN_01d827c0();
          uVar9 = (ulonglong)uVar7;
          goto LAB_01d25575;
        }
        if (*(char *)(unaff_RDI + 0x80) != '\0') {
          *(undefined1 *)(unaff_RDI + 0x80) = 0;
          FUN_01d2bdc0();
        }
        if (*(longlong *)(unaff_RDI + 0x18) != 0) {
          FUN_00d50b00();
          if (*(char *)(unaff_RDI + 0x80) != '\0') {
            *(undefined1 *)(unaff_RDI + 0x80) = 0;
            FUN_01d2bdc0();
          }
          lVar2 = *(longlong *)(unaff_RDI + 0x18);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          iVar1 = *(int *)(lVar2 + 0xc);
          FUN_00d50b20();
          FUN_00d50b20();
          if (iVar1 != 0) {
            if (*(char *)(unaff_RDI + 0x80) != '\0') {
              *(undefined1 *)(unaff_RDI + 0x80) = 0;
              FUN_01d2bdc0();
            }
            lVar2 = *(longlong *)(unaff_RDI + 0x18);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            FUN_00d23310();
            plVar3 = local_40;
            pcVar8 = &local_50;
            if (local_38[0] != '\0') {
              pcVar8 = local_38;
            }
            local_50 = local_38[0];
            *pcVar8 = '\0';
            if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d836c0();
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (plVar3 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            uVar9 = CONCAT71((int7)((ulonglong)local_40 >> 8),plVar3 != local_40);
            if ((plVar3 == local_40) || (param_2 == '\0')) goto LAB_01d25575;
            FUN_01d25e40();
            goto LAB_01d25573;
          }
        }
      }
      else {
        if (*(char *)(unaff_RDI + 0x80) != '\0') {
          *(undefined1 *)(unaff_RDI + 0x80) = 0;
          FUN_01d2bdc0();
        }
        if (*(longlong *)(unaff_RDI + 0x18) != 0) {
          FUN_00d50b00();
          if (*(char *)(unaff_RDI + 0x80) != '\0') {
            *(undefined1 *)(unaff_RDI + 0x80) = 0;
            FUN_01d2bdc0();
          }
          lVar2 = *(longlong *)(unaff_RDI + 0x18);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          iVar1 = *(int *)(lVar2 + 0xc);
          FUN_00d50b20();
          FUN_00d50b20();
          if (iVar1 != 0) {
            if (*(char *)(unaff_RDI + 0x80) != '\0') {
              *(undefined1 *)(unaff_RDI + 0x80) = 0;
              FUN_01d2bdc0();
            }
            lVar2 = *(longlong *)(unaff_RDI + 0x18);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            FUN_00d23340();
            plVar3 = local_40;
            pcVar8 = &local_50;
            if (local_38[0] != '\0') {
              pcVar8 = local_38;
            }
            local_50 = local_38[0];
            *pcVar8 = '\0';
            if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d836c0();
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (plVar3 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            uVar9 = CONCAT71((int7)((ulonglong)local_40 >> 8),plVar3 != local_40);
            if ((plVar3 == local_40) || (param_2 == '\0')) goto LAB_01d25575;
            FUN_01d25d00();
            goto LAB_01d25573;
          }
        }
      }
    }
    else if ((((*(int *)(*(longlong *)(unaff_RDI + 0x20) + 0xc) != 0) &&
              (*(char *)(unaff_RDI + 0x99) != '\0')) && (*(char *)(unaff_RDI + 0x9a) != '\0')) &&
            (cVar5 = FUN_01d25a00(), cVar5 != '\0')) {
      if (*(longlong **)(unaff_RDI + 0x88) == (longlong *)0x0) {
        uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
      }
      else {
        uVar7 = (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x528))();
        uVar9 = (ulonglong)uVar7;
        if ((char)uVar7 == '\0') goto LAB_01d25575;
      }
      if (param_2 == '\0') goto LAB_01d25575;
      FUN_01d25b00();
      goto LAB_01d25573;
    }
  }
  else if (*(char *)(unaff_RDI + 0x99) != '\0') {
    if (*(longlong **)(unaff_RDI + 0x88) == (longlong *)0x0) {
      uVar9 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
    }
    else {
      uVar7 = (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x528))();
      uVar9 = (ulonglong)uVar7;
      if ((char)uVar7 == '\0') goto LAB_01d25575;
    }
    if (param_2 == '\0') goto LAB_01d25575;
    FUN_01d25910();
LAB_01d25573:
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
    goto LAB_01d25575;
  }
  uVar9 = 0;
LAB_01d25575:
  return uVar9 & 0xffffffff;
}


