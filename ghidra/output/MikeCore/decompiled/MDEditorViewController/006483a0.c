// Function: FUN_006483a0
// Address: 006483a0
// Size: 604 bytes
// Class: MDEditorViewController


void FUN_006483a0(void)

{
  longlong lVar1;
  char cVar2;
  longlong unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_30;
  char local_28;
  
  if (*(longlong *)(unaff_RDI + 0x160) != 0) {
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_30 + 0x450))();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      FUN_00d403d0();
      FUN_00d50b00();
      local_90 = DAT_0270b7f0;
      if (DAT_0270b7f0 != 0) {
        FUN_00d50b00();
      }
      local_88 = '\x01';
      local_80 = 0;
      local_78 = '\0';
      FUN_00d41040(&local_80,&local_90);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00637870();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_30 != (longlong *)0x0) {
      FUN_00637870();
      FUN_01bd0b60();
      lVar1 = local_60;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_006e3b90();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_68 = '\0';
    local_70 = 0;
    FUN_01bd5340();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x168) + 0x4d0))();
    FUN_00d50130();
    if (*(longlong *)(unaff_RDI + 0x168) != 0) {
      *(undefined8 *)(unaff_RDI + 0x168) = 0;
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x160) != 0) {
      *(undefined8 *)(unaff_RDI + 0x160) = 0;
      FUN_00d50b20();
    }
  }
  return;
}


