// Function: FUN_01f13fd0
// Address: 01f13fd0
// Size: 534 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x01f141af) */
/* WARNING: Removing unreachable block (ram,0x01f141b8) */
/* WARNING: Removing unreachable block (ram,0x01f14117) */
/* WARNING: Removing unreachable block (ram,0x01f14120) */
/* WARNING: Removing unreachable block (ram,0x01f14150) */
/* WARNING: Removing unreachable block (ram,0x01f1415d) */
/* WARNING: Removing unreachable block (ram,0x01f141c3) */
/* WARNING: Removing unreachable block (ram,0x01f141cc) */

void FUN_01f13fd0(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  int iVar4;
  longlong local_40;
  char local_38;
  
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00049200();
  (**(code **)(*plVar2 + 0x18))();
  FUN_00d11ab0();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        (**(code **)(*plVar2 + 0x5f0))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_00083b20();
  }
  if (*(int *)((longlong)puVar3 + 0xc) != 0) {
    FUN_01ca71c0();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


