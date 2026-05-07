// Function: FUN_017a7800
// Address: 017a7800
// Size: 659 bytes
// Class: GNString


void FUN_017a7800(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar4 = *(longlong *)(unaff_RSI + 0x38);
  if (lVar4 == 0) {
    iVar1 = FUN_017a74e0();
    lVar4 = DAT_027d2050;
    if (0xd < iVar1) {
LAB_017a79ca:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
    if (*(longlong *)(unaff_RSI + 0x30) != 0) {
      if (DAT_027d2050 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar4;
      local_88 = '\x01';
      FUN_000175c0(param_1,&local_90);
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 == 0) goto LAB_017a79ca;
      plVar2 = (longlong *)FUN_00e8fc40();
      FUN_0002cb50();
      (**(code **)(*plVar2 + 0x18))();
      local_48 = 0;
      (**(code **)(*(longlong *)(unaff_RSI + 0x10) + 0x10))();
      FUN_00d50b00();
      local_48 = '\x01';
      local_50 = (longlong *)(unaff_RSI + 0x10);
      FUN_00e5b0b0();
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        (**(code **)(*local_50 + 0x10))();
        FUN_00d50b20();
      }
      local_80 = *(longlong **)(unaff_RSI + 0x20);
      local_78 = '\0';
      FUN_00e5b0c0();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        (**(code **)(*local_80 + 0x10))();
        FUN_00d50b20();
      }
      local_70 = *(longlong **)(unaff_RSI + 0x28);
      local_68 = '\0';
      FUN_00e5b0d0();
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        (**(code **)(*local_70 + 0x10))();
        FUN_00d50b20();
      }
      local_60 = lVar4;
      local_58 = '\0';
      FUN_00e549d0(param_1,&local_60);
      lVar4 = *(longlong *)(unaff_RSI + 0x38);
      if (lVar4 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = *(longlong *)(unaff_RSI + 0x38);
            lVar3 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar3 = local_40;
        }
        *(longlong *)(unaff_RSI + 0x38) = lVar3;
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar4 = *(longlong *)(unaff_RSI + 0x38);
    if (lVar4 == 0) goto LAB_017a782a;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_017a782a:
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


