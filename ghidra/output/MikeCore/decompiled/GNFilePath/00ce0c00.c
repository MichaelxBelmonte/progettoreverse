// Function: FUN_00ce0c00
// Address: 00ce0c00
// Size: 646 bytes
// Class: GNFilePath
// String references:
//   ".."


/* WARNING: Removing unreachable block (ram,0x00ce0e38) */
/* WARNING: Removing unreachable block (ram,0x00ce0e45) */

void FUN_00ce0c00(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_50;
  char local_48;
  
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_00cde020();
  lVar2 = _opendir_INODE64();
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    while (lVar2 = _readdir_INODE64(), lVar2 != 0) {
      iVar1 = FUN_00e7ddf0();
      if ((iVar1 != 0) && (iVar1 = FUN_00e7ddf0(), iVar1 != 0)) {
        (**(code **)(*unaff_RSI + 0x368))();
        FUN_00d93290();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_00d8ef00();
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        FUN_00cddf30();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (local_50 != 0) {
          local_48 = '\0';
          FUN_00d21140();
          FUN_00d50b20();
        }
      }
    }
    _closedir();
    *unaff_RDI = puVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}


