// Function: FUN_00e86820
// Address: 00e86820
// Size: 534 bytes
// Class: GNObject


void FUN_00e86820(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  iVar3 = FUN_00d8c7a0();
  if (0 < iVar3) {
    iVar5 = 0;
    do {
      cVar2 = FUN_00d99d20();
      iVar6 = iVar5;
      if (cVar2 == '\0') break;
      iVar5 = iVar5 + 1;
      iVar6 = iVar3;
    } while (iVar3 != iVar5);
    if (iVar6 == 1) {
      FUN_00d9a140();
      return;
    }
    if (iVar6 != 0) {
      if (iVar6 == iVar3) {
        FUN_00d99300();
        return;
      }
      FUN_00d99ce0();
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025795a8;
      (*DAT_025795c0)();
      FUN_00d97ce0();
      FUN_00d99300();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d8dbf0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d8f140();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d8dbf0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d8c7d0();
      *unaff_RDI = (longlong)puVar4;
      goto LAB_00e86a1f;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = *unaff_RSI;
  if ((char)unaff_RSI[1] != '\0') {
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(unaff_RSI + 1) = 0;
    return;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar1;
LAB_00e86a1f:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


