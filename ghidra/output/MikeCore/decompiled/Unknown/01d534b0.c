// Function: FUN_01d534b0
// Address: 01d534b0
// Size: 1210 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01d538b9) */
/* WARNING: Removing unreachable block (ram,0x01d538c2) */
/* WARNING: Removing unreachable block (ram,0x01d53932) */
/* WARNING: Removing unreachable block (ram,0x01d5393b) */

void FUN_01d534b0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_90;
  char in_stack_ffffffffffffff78;
  undefined1 uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong local_48;
  char local_40;
  
  FUN_01d4ed90(*(undefined8 *)(unaff_RSI + 0x1c),*(undefined4 *)(unaff_RSI + 0x48));
  lVar1 = *param_2;
  lVar3 = *(longlong *)(lVar1 + 0x10);
  if (lVar3 == local_90) {
    if ((in_stack_ffffffffffffff78 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((in_stack_ffffffffffffff78 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
      lVar3 = *(longlong *)(lVar1 + 0x10);
    }
    *(longlong *)(lVar1 + 0x10) = local_90;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  uVar8 = (**(code **)(*(longlong *)*param_2 + 0x368))(*(undefined8 *)(unaff_RSI + 0x1c));
  FUN_01d4ed90(uVar8,*(undefined4 *)(unaff_RSI + 0x48));
  lVar1 = *param_2;
  lVar3 = *(longlong *)(lVar1 + 0x18);
  if (lVar3 == local_90) {
    if ((in_stack_ffffffffffffff78 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((in_stack_ffffffffffffff78 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
      lVar3 = *(longlong *)(lVar1 + 0x18);
    }
    *(longlong *)(lVar1 + 0x18) = local_90;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(*param_2 + 0x10);
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    FUN_01d480c0();
    FUN_01d48370();
    (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x530))();
    lVar1 = *(longlong *)(*param_2 + 0x10);
  }
  lVar1 = *(longlong *)(lVar1 + 0x30);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d48ba0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar6 = *(longlong **)(*(longlong *)(*param_2 + 0x10) + 0x30);
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  (**(code **)(*plVar6 + 0x400))(0);
  if (unaff_RSI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  plVar6 = (longlong *)*param_2;
  if (*(longlong *)(plVar6[2] + 0x30) != 0) {
    FUN_01d48390();
    FUN_01d481c0();
    plVar6 = (longlong *)*param_2;
  }
  (**(code **)(*plVar6 + 0x370))();
  lVar1 = *(longlong *)(*param_2 + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  lVar3 = *(longlong *)(unaff_RSI + 0x40);
  if (lVar3 != 0) {
    uVar9 = 0;
    uVar12 = 0;
    uVar8 = 0;
    if (0 < *(int *)(lVar3 + 0xc)) {
      lVar7 = 0;
      lVar10 = lVar3;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar7 * 8);
        FUN_01d4ed90(*(undefined8 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x48),param_3,param_4,
                     uVar9,lVar10,uVar8,uVar12);
        uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
        lVar5 = *param_2;
        lVar4 = *(longlong *)(lVar5 + 0x10);
        if (lVar4 == local_48) {
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((local_40 == '\0') && (local_48 != 0)) {
            FUN_00d50b00();
            lVar4 = *(longlong *)(lVar5 + 0x10);
          }
          *(longlong *)(lVar5 + 0x10) = local_48;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        uVar8 = (**(code **)(*(longlong *)*param_2 + 0x368))(*(undefined8 *)(lVar2 + 0x1c));
        FUN_01d4ed90(uVar8,*(undefined4 *)(lVar2 + 0x48));
        lVar2 = *param_2;
        lVar5 = *(longlong *)(lVar2 + 0x18);
        if (lVar5 == local_48) {
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((local_40 == '\0') && (local_48 != 0)) {
            FUN_00d50b00();
            lVar5 = *(longlong *)(lVar2 + 0x18);
          }
          *(longlong *)(lVar2 + 0x18) = local_48;
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        lVar2 = *(longlong *)(*param_2 + 0x10);
        if (*(longlong *)(lVar2 + 0x30) != 0) {
          FUN_01d480c0();
          FUN_01d48370();
          (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x530))();
          lVar2 = *(longlong *)(*param_2 + 0x10);
        }
        lVar2 = *(longlong *)(lVar2 + 0x30);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_01d48ba0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        plVar6 = *(longlong **)(*(longlong *)(*param_2 + 0x10) + 0x30);
        if (plVar6 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar6 + 0x400))(0);
        FUN_00d50b20();
        plVar6 = (longlong *)*param_2;
        if (*(longlong *)(plVar6[2] + 0x30) != 0) {
          FUN_01d48390();
          FUN_01d481c0();
          plVar6 = (longlong *)*param_2;
        }
        (**(code **)(*plVar6 + 0x370))();
        local_48 = *(longlong *)(*param_2 + 0x18);
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        local_40 = '\0';
        FUN_00d21140();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
        uVar8 = CONCAT44(uVar11,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar3 + 0xc));
    }
    FUN_01d565a0();
  }
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


