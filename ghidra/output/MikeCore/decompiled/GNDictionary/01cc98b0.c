// Function: FUN_01cc98b0
// Address: 01cc98b0
// Size: 597 bytes
// Class: GNDictionary


/* WARNING: Removing unreachable block (ram,0x01cc9a81) */
/* WARNING: Removing unreachable block (ram,0x01cc9a8a) */

longlong * FUN_01cc98b0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  undefined8 local_40;
  char local_38 [8];
  
  lVar4 = *(longlong *)(unaff_RSI + 0x10);
  if ((*(int *)(lVar4 + 0xc) == 0) && (*(longlong *)(unaff_RSI + 0x38) != 0)) {
    FUN_00ca1380();
    pcVar6 = local_38;
    if (local_50[0] != '\0') {
      pcVar6 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar6 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_50[0] = '\0';
    FUN_00d243f0();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(longlong *)(unaff_RSI + 0x10);
  }
  if (*(int *)(lVar4 + 0xc) < 1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    lVar7 = 0;
    local_48 = 0;
    local_40 = 0;
    do {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      lVar1 = *(longlong *)(lVar4 + lVar7 * 8);
      if (local_48 == lVar1) {
        if (((char)local_40 == '\0') && (local_48 != 0)) {
          local_40 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          lVar4 = FUN_00d50b00();
        }
        if (((char)local_40 == '\0') || (local_48 == 0)) {
          local_40 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
          local_48 = lVar1;
        }
        else {
          local_48 = lVar1;
          uVar5 = FUN_00d50b20();
          local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        }
      }
      if (*(longlong *)(local_48 + 0x18) != 0) {
        FUN_00d50b00();
        plVar2 = *(longlong **)(local_48 + 0x18);
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar2 + 0x50))();
        FUN_00d50b20();
        FUN_00d50b20();
        lVar4 = local_48;
        if (cVar3 != '\0') {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if ((char)local_40 != '\0') {
            *unaff_RDI = local_48;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            return unaff_RDI;
          }
          FUN_00d50b00();
          *unaff_RDI = lVar4;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return unaff_RDI;
        }
      }
      lVar7 = lVar7 + 1;
      lVar4 = *(longlong *)(unaff_RSI + 0x10);
    } while (lVar7 < *(int *)(lVar4 + 0xc));
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    if ((char)local_40 != '\0') {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


