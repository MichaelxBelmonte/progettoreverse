// Function: FUN_01e9de00
// Address: 01e9de00
// Size: 704 bytes
// Class: GNMultipleValue


void FUN_01e9de00(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar3;
  undefined4 uVar4;
  longlong local_90;
  char local_88;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RSI + 0x28) != 0) goto LAB_01e9dfbe;
  FUN_01cb4790();
  local_48 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01e9de3d;
    }
    if (*(longlong *)(unaff_RSI + 0x20) != 0) goto LAB_01e9dfbe;
LAB_01e9def8:
    lVar2 = *(longlong *)(unaff_RSI + 0x10);
    if (lVar2 == 0) {
      local_58 = 0;
    }
    else {
      FUN_00d50b00();
      local_58 = *(longlong *)(unaff_RSI + 0x20);
    }
    uVar1 = *(undefined4 *)(unaff_RSI + 0x1c);
    uVar4 = *(undefined4 *)(unaff_RSI + 0x18);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    FUN_01d43f00(uVar4,uVar1);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (plVar3 == (longlong *)0x0) {
      (**(code **)(*local_48 + 0x370))();
      FUN_01d44d80(*(undefined4 *)(unaff_RSI + 0x18));
      if (local_40 != (longlong *)0x0) {
        plVar3 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    *(longlong **)(unaff_RSI + 0x28) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_48 == (longlong *)0x0) goto LAB_01e9dfbe;
  }
  else {
LAB_01e9de3d:
    lVar2 = *(longlong *)(unaff_RSI + 0x20);
    if (lVar2 == 0) goto LAB_01e9def8;
    if (local_48 == (longlong *)0x0) goto LAB_01e9dfbe;
    local_60 = 0;
    uVar4 = FUN_00d50b00();
    local_60 = '\x01';
    local_68 = lVar2;
    (**(code **)(*local_48 + 0x388))(uVar4,&local_68);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    *(longlong **)(unaff_RSI + 0x28) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01e9dfbe:
  *unaff_RDI = *(undefined8 *)(unaff_RSI + 0x28);
  *(undefined1 *)(unaff_RDI + 1) = 0;
  return;
}


