// Function: FUN_007f0cf0
// Address: 007f0cf0
// Size: 1080 bytes
// Class: GNOperationProgressObserver


void FUN_007f0cf0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 uVar3;
  char cVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 uVar5;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar5 = FUN_01f27fe0();
  local_b0 = *unaff_RSI;
  local_a8 = '\0';
  FUN_002a0320(uVar5,&local_b0);
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
    plVar1 = local_40;
    FUN_014ffc90();
    local_60 = local_50;
    local_58 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_58 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      local_90 = *unaff_RSI;
      local_88 = '\0';
      FUN_01500300();
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        uVar5 = FUN_01f27fe0();
        local_80 = plVar1;
        local_78 = '\0';
        FUN_002a0320(uVar5,&local_80);
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          local_70 = plVar1;
          local_68 = '\0';
          uVar3 = FUN_00742b20();
          FUN_01500530(0,uVar3);
          plVar1 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
               (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            if (param_2 != (undefined8 *)0x0) {
              uVar5 = FUN_00b7a6e0();
              *param_2 = uVar5;
            }
            *unaff_RDI = plVar1;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            FUN_00d50b20();
            FUN_00d50b20();
            return;
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    local_a0 = *unaff_RSI;
    local_98 = '\0';
    uVar3 = FUN_00742b20();
    FUN_01500530(0,uVar3);
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      if (param_2 != (undefined8 *)0x0) {
        uVar5 = FUN_00b7a6e0();
        *param_2 = uVar5;
      }
      *unaff_RDI = plVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    FUN_00d50b20();
  }
  return;
}


