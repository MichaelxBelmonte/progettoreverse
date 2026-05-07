// Function: FUN_002358e0
// Address: 002358e0
// Size: 694 bytes
// Class: MUTool


/* WARNING: Removing unreachable block (ram,0x00235a87) */
/* WARNING: Removing unreachable block (ram,0x00235a90) */

void FUN_002358e0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *local_38;
  char local_30;
  
  *(longlong *)(unaff_RDI + 0xd8) = *unaff_RSI;
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00235db0();
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_019f0f30();
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00236020();
    lVar1 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar2 = *(longlong **)(lVar1 + 0x408);
    if (plVar2 != local_38) {
      if (local_30 == '\0') {
        if (local_38 == (longlong *)0x0) {
          *(undefined8 *)(lVar1 + 0x408) = 0;
        }
        else {
          FUN_00d50b00();
          plVar2 = *(longlong **)(lVar1 + 0x408);
          *(longlong **)(lVar1 + 0x408) = local_38;
        }
      }
      else {
        local_30 = '\0';
        *(longlong **)(lVar1 + 0x408) = local_38;
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = *(longlong **)(unaff_RDI + 0x90);
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0x968))(0);
    FUN_00d50b20();
    lVar1 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_019f0ee0();
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_00234400();
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (*unaff_RSI != 0) {
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_38 + 0x450))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        lVar1 = *(longlong *)(unaff_RDI + 0x90);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_01e42250();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}


