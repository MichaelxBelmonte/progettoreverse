// Function: FUN_00e36cf0
// Address: 00e36cf0
// Size: 738 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x00e36ee7) */
/* WARNING: Removing unreachable block (ram,0x00e36ef3) */
/* WARNING: Removing unreachable block (ram,0x00e36fb8) */
/* WARNING: Removing unreachable block (ram,0x00e36fc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e36cf0(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong unaff_RDI;
  longlong local_c8;
  char local_c0;
  longlong local_70;
  char local_68;
  undefined8 *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x368))();
  iVar2 = FUN_00e31390();
  iVar3 = *(int *)(unaff_RDI + 0x14);
  if ((*(int *)(*(longlong *)(unaff_RDI + 0x40) + 0xc) + iVar3 < iVar2) &&
     ((*(int *)(*(longlong *)(unaff_RDI + 0x20) + 0xc) + iVar3) -
      *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc) < *(int *)(unaff_RDI + 0x10))) {
    *(int *)(unaff_RDI + 0x14) = iVar3 + 1;
    (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x378))();
    iVar3 = FUN_00e31390();
    if (iVar3 == 0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02581c90;
      (*DAT_02581ca8)();
      local_40 = DAT_027e7c60;
      local_58 = '\x01';
      local_38 = 0;
      local_60 = puVar4;
      if (DAT_027e7c60 != 0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_027864f8;
      local_38 = '\x01';
      local_28 = 0;
      if (DAT_027864f8 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar1;
      local_28 = '\x01';
      FUN_00e37180(&local_60,&local_40,&local_30);
      FUN_000b4da0();
      lVar1 = local_50;
      if (local_48 == '\0') {
        if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_002d10d0();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_70 = lVar1;
      local_68 = '\0';
      FUN_00da62d0(_DAT_02391038,&local_70);
      if ((local_c0 == '\0') && (local_c8 != 0)) {
        FUN_00d50b00();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x368))();
      FUN_00d21140();
      *(int *)(unaff_RDI + 0x14) = *(int *)(unaff_RDI + 0x14) + -1;
      (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x378))();
      FUN_00dee620();
      if (local_c8 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e36f62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x378))();
  return;
}


