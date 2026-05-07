// Function: FUN_00cd3610
// Address: 00cd3610
// Size: 771 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00cd37b4) */
/* WARNING: Removing unreachable block (ram,0x00cd37bd) */
/* WARNING: Removing unreachable block (ram,0x00cd3743) */
/* WARNING: Removing unreachable block (ram,0x00cd374c) */
/* WARNING: Removing unreachable block (ram,0x00cd38e4) */
/* WARNING: Removing unreachable block (ram,0x00cd38ed) */

void FUN_00cd3610(int *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_48;
  char local_40;
  
  if (*(longlong *)(unaff_RSI + 0x40) == 0) {
    FUN_00ccd040(param_1,param_2);
    return;
  }
  FUN_00cd4fc0();
  lVar2 = *(longlong *)(*(longlong *)(unaff_RSI + 0x38) + 0x40);
  iVar1 = *param_1;
  uVar3 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x10) + 8 +
           (ulonglong)(*(int *)(*(longlong *)(unaff_RSI + 0x38) + 0x48) - 1) * 0x23c);
  if (uVar3 < (ulonglong)((longlong)iVar1 + *(longlong *)(unaff_RSI + 0x48))) {
    *param_1 = (int)uVar3 - (int)*(longlong *)(unaff_RSI + 0x48);
  }
  lVar6 = local_48;
  if (*(char *)(unaff_RSI + 0x50) == '\0') {
    (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0x380))(param_1,param_2);
    if (local_48 != 0) {
      bVar4 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00cd380c;
    }
    bVar4 = false;
    iVar5 = *param_1;
    *(longlong *)(unaff_RSI + 0x48) = *(longlong *)(unaff_RSI + 0x48) + (longlong)iVar5;
LAB_00cd384b:
    if ((0 < iVar5) && (iVar5 == iVar1)) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      lVar6 = 0;
      goto LAB_00cd38b2;
    }
    if (iVar5 < 0) {
      *param_1 = 0;
    }
    lVar2 = DAT_027816e8;
    if (DAT_027816e8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc7970();
    if (local_48 == 0) {
      local_48 = 0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar4 = true;
    }
    else {
      bVar4 = true;
    }
    lVar6 = local_48;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x368))();
    (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0x390))();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0x3a0))();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0x380))(param_1,param_2);
    if (local_48 == 0) {
      bVar4 = false;
      lVar6 = 0;
    }
    else {
      bVar4 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0x3a0))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(unaff_RSI + 0x38) + 0x40) + 0x30) +
                0x378))();
LAB_00cd380c:
    iVar5 = *param_1;
    *(longlong *)(unaff_RSI + 0x48) = *(longlong *)(unaff_RSI + 0x48) + (longlong)iVar5;
    if (lVar6 == 0) goto LAB_00cd384b;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (!bVar4) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_00d50b00();
    }
  }
LAB_00cd38b2:
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


